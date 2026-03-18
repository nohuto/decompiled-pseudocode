/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x140125DB4
 * Callers:
 *     MiReturnImageBase @ 0x1404B7DB8 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  bool v2; // cc
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

  if ( dword_1403D00D4 )
  {
    v2 = *(_DWORD *)(a1 + 8) < 1;
    v3 = *(unsigned int *)(a1 + 4);
    v4 = qword_14034E990;
    if ( !v2 )
      v4 = qword_14034E9A0;
    return MiZeroCfgSystemWideBitmapWorker(v4 + 120, 2 * (a2 >> 4), 2 * ((v3 << 12) & 0xFFFFFFFFFFFFFFFLL));
  }
  return result;
}
