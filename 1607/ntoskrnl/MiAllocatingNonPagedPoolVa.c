/*
 * XREFs of MiAllocatingNonPagedPoolVa @ 0x140017628
 * Callers:
 *     MiReplenishNonPagedSlists @ 0x140017040 (MiReplenishNonPagedSlists.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     <none>
 */

void __fastcall MiAllocatingNonPagedPoolVa(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 i; // r8
  _QWORD *v7; // rdx
  unsigned __int64 j; // rax

  v4 = a3 + a4;
  v5 = 2LL * a2;
  for ( i = a3 & 0xFFFFFFFFFFFFFE00uLL; i < v4; i += 512LL )
  {
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 384) + 8 * (i >> 6));
    for ( j = 0LL; j < 8; ++j )
    {
      if ( *v7 != -1LL )
        break;
      ++v7;
    }
    if ( j == 8 )
      _bittestandset64(*(signed __int64 **)(a1 + 8 * v5 + 352), i >> 9);
  }
}
