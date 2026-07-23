/*
 * XREFs of MiTrimSection @ 0x14008EC74
 * Callers:
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008EBB0 (MmTrimSection.c)
 * Callees:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiViewMayContainPage @ 0x14008EEB4 (MiViewMayContainPage.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x14008F178 (MiUnlockControlAreaFileObjectShared.c)
 *     MiLockControlAreaFileObjectShared @ 0x14008F1C0 (MiLockControlAreaFileObjectShared.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiAcquireSpinLockExclusive @ 0x1401DE254 (MiAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiTrimSection(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  volatile LONG *v11; // r15
  KIRQL v12; // dl
  volatile LONG *v13; // rcx
  int v14; // r14d
  KIRQL v15; // bl
  _QWORD *v16; // rbx
  __int64 *MayContainPage; // rax
  KIRQL v18; // bl
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 *v21; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-58h]
  _BYTE *v23; // [rsp+38h] [rbp-50h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v23 = (_BYTE *)v4;
  v5 = a3;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = *(_QWORD *)v6;
  if ( (a3 & 0x40000) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v22 = MiStartingOffset(*(__int64 **)(v3 + 24), v4, 0xFFFFFFFF);
  v9 = 0LL;
  v10 = MiStartingOffset(*(__int64 **)(v3 + 32), *(_QWORD *)(v3 + 16), 0xFFFFFFFF) + 4096;
  MiLockControlAreaFileObjectShared(v7);
  v11 = (volatile LONG *)(v7 + 72);
  v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v13 = (volatile LONG *)(v7 + 72);
  if ( *(_QWORD *)(v7 + 40) )
  {
    ExReleaseSpinLockShared(v13, v12);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      while ( 1 )
      {
        v14 = 1;
        if ( v6 == *(_QWORD *)(v3 + 24)
          || v6 == *(_QWORD *)(v3 + 32)
          || ((v15 = MiAcquireSpinLockExclusive(v11), !*(_DWORD *)(v6 + 104)) || (int)MiReferenceSubsection(v6) <= 1
            ? (v14 = 0)
            : (v14 = 2),
              ExReleaseSpinLockExclusive(v11, v15),
              v14) )
        {
          v16 = *(_QWORD **)(v6 + 80);
          if ( v16 != (_QWORD *)(v6 + 80) )
          {
            do
            {
              MayContainPage = (__int64 *)MiViewMayContainPage(v7, v16, v22, v10);
              if ( MayContainPage )
              {
                *MayContainPage = v9;
                v9 = (__int64)MayContainPage;
              }
              v16 = (_QWORD *)*v16;
            }
            while ( v16 != (_QWORD *)(v6 + 80) );
            v3 = a1;
            v11 = (volatile LONG *)(v7 + 72);
          }
          if ( v14 == 2 )
          {
            v18 = MiAcquireSpinLockExclusive(v11);
            v19 = MiDecrementSubsections(v6, v6, 0);
            ExReleaseSpinLockExclusive(v11, v18);
            if ( v19 )
              MiReturnSubsectionCharges(v19);
          }
        }
        if ( v6 == *(_QWORD *)(v3 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 16);
      }
      v5 = a3;
    }
    v20 = *(_QWORD **)(v7 + 8);
    if ( v20 != (_QWORD *)(v7 + 8) )
    {
      do
      {
        v21 = (__int64 *)MiViewMayContainPage(v7, v20, v22, v10);
        if ( v21 )
        {
          *v21 = v9;
          v9 = (__int64)v21;
        }
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != (_QWORD *)(v7 + 8) );
      v5 = a3;
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews(v9, a2, v5, (unsigned __int64 *)v7, v23);
  }
  else
  {
    ExReleaseSpinLockShared(v13, v12);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
