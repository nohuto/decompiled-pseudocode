/*
 * XREFs of RtlSetBits @ 0x1800506B0
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE70 (RtlpSparseBitmapCtxUpdateBits.c)
 *     RtlFindClearBitsAndSet @ 0x180050370 (RtlFindClearBitsAndSet.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlpValidateRange @ 0x1800D59A8 (RtlpValidateRange.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __cdecl RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_180119330[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_180119330[v4 + 16];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180119330[v6];
      goto LABEL_4;
    }
  }
}
