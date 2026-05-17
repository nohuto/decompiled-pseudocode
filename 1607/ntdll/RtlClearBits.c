/*
 * XREFs of RtlClearBits @ 0x180050B40
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x18004FE80 (RtlpSparseBitmapCtxUpdateBits.c)
 *     LdrpAcquireTlsIndex @ 0x1800500C0 (LdrpAcquireTlsIndex.c)
 *     RtlFlsFree @ 0x180050A10 (RtlFlsFree.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 *     RtlFindSetBitsAndClear @ 0x1800E4260 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall RtlClearBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = ~(byte_180119330[a3] << v4);
      goto LABEL_9;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
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
