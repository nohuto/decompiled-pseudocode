/*
 * XREFs of RtlpValidateRange @ 0x1800C43F8
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x1800C44D0 (RtlpValidateRemoteDebugInformation.c)
 * Callees:
 *     RtlSetBits @ 0x180056540 (RtlSetBits.c)
 */

char __fastcall RtlpValidateRange(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned int v7; // edi
  unsigned int *Buffer; // rcx
  unsigned int *v10; // rdx
  unsigned int *v11; // rbx
  unsigned int v12; // r8d
  bool i; // zf

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = a3 - a1 + a4 - 1;
  if ( v7 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    Buffer = BitMapHeader->Buffer;
    v10 = &Buffer[(unsigned __int64)v6 >> 5];
    v11 = &Buffer[(unsigned __int64)v7 >> 5];
    if ( v10 != v11 )
    {
      for ( i = ((-1 << v6) & *v10) == 0; i; i = *v10 == 0 )
      {
        if ( ++v10 == v11 )
        {
          v12 = 0xFFFFFFFF >> (-1 - v7);
          goto LABEL_13;
        }
      }
      return 0;
    }
    v12 = 0xFFFFFFFF >> (32 - a4) << v6;
LABEL_13:
    if ( (v12 & *v10) != 0 )
      return 0;
  }
  else if ( (_DWORD)a4 != 1 || _bittest((const signed __int32 *)BitMapHeader->Buffer, v6) )
  {
    return 0;
  }
  RtlSetBits(BitMapHeader, v6, a4);
  return 1;
}
