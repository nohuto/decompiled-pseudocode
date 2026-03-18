/*
 * XREFs of MxMarkActiveDriverBits @ 0x1407CD2B4
 * Callers:
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1407CD2B4 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400688D0 (MiSplitBitmapPages.c)
 *     KeZeroSinglePage @ 0x140186BB0 (KeZeroSinglePage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MxMarkActiveDriverBits @ 0x1407CD2B4 (MxMarkActiveDriverBits.c)
 */

void __fastcall MxMarkActiveDriverBits(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // [rsp+60h] [rbp+18h]
  int v14; // [rsp+68h] [rbp+20h]

  v14 = a4;
  v6 = (unsigned __int64)a2;
  v7 = a5;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    a3 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  v13 = a3;
  while ( v6 <= a3 )
  {
    v8 = *(_QWORD *)v6;
    if ( v6 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow() && (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            LOBYTE(v8) = v8 | 0x20;
          if ( (v10 & 0x42) != 0 )
            LOBYTE(v8) = v8 | 0x42;
        }
      }
      a3 = v13;
      v7 = a5;
    }
    if ( (v8 & 1) != 0 )
    {
      if ( v7 == 1 )
      {
        v11 = (unsigned __int64)(((__int64)(v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 21;
        v12 = *(_QWORD *)(a1 + 8)
            + ((unsigned __int64)(((__int64)(v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 24);
        if ( (*(_DWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x800LL) == 0 )
        {
          MiSplitBitmapPages(
            0xCu,
            *(_QWORD *)(a1 + 8)
          + ((unsigned __int64)(((__int64)(v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 24),
            (((unsigned __int64)(((__int64)(v6 << 25) >> 16 << 25 >> 16) - *(_QWORD *)(a1 + 32)) >> 21) & 7) + 1);
          KeZeroSinglePage((_QWORD *)(v12 & 0xFFFFFFFFFFFFF000uLL));
        }
        if ( *(_QWORD *)a1 <= v11 )
          *(_QWORD *)a1 = v11 + 1;
        _bittestandset64(*(signed __int64 **)(a1 + 8), v11);
      }
      else
      {
        MxMarkActiveDriverBits(a1, (__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4088, a4, v7 - 1);
      }
      a3 = v13;
    }
    v7 = a5;
    v6 += 8LL;
    LODWORD(a4) = v14;
  }
}
