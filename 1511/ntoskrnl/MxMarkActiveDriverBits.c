/*
 * XREFs of MxMarkActiveDriverBits @ 0x14074B858
 * Callers:
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x14074B858 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x140157440 (KeZeroSinglePage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MxMarkActiveDriverBits @ 0x14074B858 (MxMarkActiveDriverBits.c)
 */

void __fastcall MxMarkActiveDriverBits(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 *v6; // rbx
  int v7; // ebp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 i; // [rsp+60h] [rbp+18h]
  int v12; // [rsp+68h] [rbp+20h]

  v12 = a4;
  v5 = a5;
  v6 = a2;
  v7 = a4;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(__int64 **)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  for ( i = a3; (unsigned __int64)v6 <= i; ++v6 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v6) & 1) != 0 )
    {
      if ( v5 == 1 )
      {
        v9 = (unsigned __int64)(((__int64)((_QWORD)v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 21;
        v10 = *(_QWORD *)(a1 + 8)
            + ((unsigned __int64)(((__int64)((_QWORD)v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 24);
        if ( (*(_DWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
        {
          MiSplitBitmapPages(
            0xCu,
            *(_QWORD *)(a1 + 8)
          + ((unsigned __int64)(((__int64)((_QWORD)v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 24),
            (((unsigned __int64)(((__int64)((_QWORD)v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 21) & 7) + 1);
          KeZeroSinglePage((_QWORD *)(v10 & 0xFFFFFFFFFFFFF000uLL));
        }
        if ( *(_QWORD *)a1 <= v9 )
          *(_QWORD *)a1 = v9 + 1;
        v7 = v12;
        _bittestandset64(*(signed __int64 **)(a1 + 8), v9);
        v5 = a5;
      }
      else
      {
        MxMarkActiveDriverBits(
          a1,
          (__int64)((_QWORD)v6 << 25) >> 16,
          ((__int64)((_QWORD)v6 << 25) >> 16) + 4088,
          v7,
          v5 - 1);
      }
    }
  }
}
