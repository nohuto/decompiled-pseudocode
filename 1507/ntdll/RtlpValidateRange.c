/*
 * XREFs of RtlpValidateRange @ 0x1800C43F8
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x1800C44D0 (RtlpValidateRemoteDebugInformation.c)
 * Callees:
 *     RtlSetBits @ 0x180056540 (RtlSetBits.c)
 */

char __fastcall RtlpValidateRange(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned int v7; // edi
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rbx
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
  if ( v7 >= *(_DWORD *)a5 )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    v9 = *(_QWORD *)(a5 + 8);
    v10 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v6 >> 5));
    v11 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v7 >> 5));
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
  else if ( (_DWORD)a4 != 1 || _bittest(*(const signed __int32 **)(a5 + 8), v6) )
  {
    return 0;
  }
  RtlSetBits(a5, v6, a4);
  return 1;
}
