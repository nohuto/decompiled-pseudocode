/*
 * XREFs of RtlClearBits @ 0x180050B30
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE70 (RtlpSparseBitmapCtxUpdateBits.c)
 *     LdrpAcquireTlsIndex @ 0x1800500B0 (LdrpAcquireTlsIndex.c)
 *     RtlFlsFree @ 0x180050A00 (RtlFlsFree.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     RtlFindSetBitsAndClear @ 0x1800E4320 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __cdecl RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_180119330[NumberToClear] << v4);
      goto LABEL_9;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_180119330[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180119330[v6 + 16];
LABEL_9:
      *v5 &= v7;
    }
  }
}
