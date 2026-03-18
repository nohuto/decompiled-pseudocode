/*
 * XREFs of MiReduceWs @ 0x1400F12BC
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 */

void __fastcall MiReduceWs(ULONG_PTR a1, KIRQL a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int i; // ebx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 120);
  for ( i = 7; v3 > a3; --i )
  {
    v8 = v3 - a3;
    if ( i )
    {
      v9 = v8;
      v8 = *(_QWORD *)(a1 + 8LL * (i - 1) + 40);
      if ( v8 > v9 )
        v8 = v9;
    }
    if ( v8 )
    {
      MiTrimWorkingSet(v8, a1, a2, i, 0);
      if ( !i )
        break;
    }
    v3 = *(_QWORD *)(a1 + 120);
  }
}
