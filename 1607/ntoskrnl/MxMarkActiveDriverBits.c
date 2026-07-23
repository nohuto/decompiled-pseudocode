/*
 * XREFs of MxMarkActiveDriverBits @ 0x1407A6134
 * Callers:
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1407A6134 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x140162380 (KeZeroSinglePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MxMarkActiveDriverBits @ 0x1407A6134 (MxMarkActiveDriverBits.c)
 */

void __fastcall MxMarkActiveDriverBits(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbx
  int v7; // r9d
  __int64 v8; // r10
  int v9; // r11d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // [rsp+60h] [rbp+18h]

  v5 = a2;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v5 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  for ( i = a3; v5 <= i; v5 += 8LL )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) != 0 )
    {
      if ( v7 == 1 )
      {
        v10 = (unsigned __int64)(((((__int64)((v5 << 25) - (v8 << 25)) >> 16 << 25) - (v8 << 25)) >> 16)
                               - *(_QWORD *)(a1 + 32)) >> 21;
        v11 = *(_QWORD *)(a1 + 8)
            + ((unsigned __int64)(((((__int64)((v5 << 25) - (v8 << 25)) >> 16 << 25) - (v8 << 25)) >> 16)
                                - *(_QWORD *)(a1 + 32)) >> 24);
        if ( (*(_DWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) + v8) & 0x800LL) == 0 )
        {
          MiSplitBitmapPages(
            0xCu,
            *(_QWORD *)(a1 + 8)
          + ((unsigned __int64)(((((__int64)((v5 << 25) - (v8 << 25)) >> 16 << 25) - (v8 << 25)) >> 16)
                              - *(_QWORD *)(a1 + 32)) >> 24),
            (((unsigned __int64)(((((__int64)((v5 << 25) - (v8 << 25)) >> 16 << 25) - (v8 << 25)) >> 16)
                               - *(_QWORD *)(a1 + 32)) >> 21) & 7)
          + 1);
          KeZeroSinglePage((_QWORD *)(v11 & 0xFFFFFFFFFFFFF000uLL));
        }
        if ( *(_QWORD *)a1 <= v10 )
          *(_QWORD *)a1 = v10 + 1;
        _bittestandset64(*(signed __int64 **)(a1 + 8), v10);
      }
      else
      {
        MxMarkActiveDriverBits(
          a1,
          (__int64)((v5 << 25) - (v8 << 25)) >> 16,
          ((__int64)((v5 << 25) - (v8 << 25)) >> 16) + 4088,
          v9,
          v7 - 1);
      }
    }
  }
}
