/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x1400E94FC
 * Callers:
 *     MiReturnImageBase @ 0x14041B3BC (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 */

unsigned __int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cc
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  if ( dword_1403810E4 )
  {
    v2 = *(_DWORD *)(a1 + 8) < 1;
    v3 = *(unsigned int *)(a1 + 4);
    v4 = qword_1402FE4C8;
    if ( !v2 )
      v4 = qword_1402FE4D8;
    return MiZeroCfgSystemWideBitmapWorker(v4 + 120, 2 * (a2 >> 4), 2 * ((v3 << 12) & 0xFFFFFFFFFFFFFFFLL));
  }
  return result;
}
