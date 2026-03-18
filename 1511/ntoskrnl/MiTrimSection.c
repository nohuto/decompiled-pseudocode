/*
 * XREFs of MiTrimSection @ 0x1400083E8
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x1400E8FF0 (MmTrimSection.c)
 * Callees:
 *     MiViewMayContainPage @ 0x140008570 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x140009694 (MiUnlockControlAreaFileObjectShared.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLockControlAreaFileObjectShared @ 0x14000A440 (MiLockControlAreaFileObjectShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, int a2, int a3)
{
  __int64 *v3; // rdi
  int v4; // r12d
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  _QWORD *v9; // rbp
  KIRQL v10; // dl
  volatile LONG *v11; // rcx
  __int64 *i; // rsi
  _QWORD *MayContainPage; // rax
  _QWORD *j; // rdi
  _QWORD *v16; // rax
  __int64 v17; // [rsp+80h] [rbp+8h]

  v3 = (__int64 *)a1[3];
  v4 = a3;
  v5 = a1[1];
  v7 = *v3;
  if ( (a3 & 0x80000) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v17 = MiStartingOffset(v3, v5, 0xFFFFFFFFLL);
  v8 = MiStartingOffset(a1[4], a1[2], 0xFFFFFFFFLL);
  v9 = 0LL;
  MiLockControlAreaFileObjectShared(v7);
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v11 = (volatile LONG *)(v7 + 72);
  if ( *(_QWORD *)(v7 + 40) )
  {
    ExReleaseSpinLockShared(v11, v10);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)v3 + 34) & 8) == 0 )
        {
          for ( i = (__int64 *)v3[10]; i != v3 + 10; i = (__int64 *)*i )
          {
            MayContainPage = (_QWORD *)MiViewMayContainPage(v7, i, v17, v8 + 4096);
            if ( MayContainPage )
            {
              *MayContainPage = v9;
              v9 = MayContainPage;
            }
          }
        }
        if ( v3 == (__int64 *)a1[4] )
          break;
        v3 = (__int64 *)v3[2];
      }
      v4 = a3;
    }
    for ( j = *(_QWORD **)(v7 + 8); j != (_QWORD *)(v7 + 8); j = (_QWORD *)*j )
    {
      v16 = (_QWORD *)MiViewMayContainPage(v7, j, v17, v8 + 4096);
      if ( v16 )
      {
        *v16 = v9;
        v9 = v16;
      }
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews((_DWORD)v9, a2, v4, v7, v5);
  }
  else
  {
    ExReleaseSpinLockShared(v11, v10);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
