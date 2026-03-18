/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C00014E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0001580 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMT_PRESENT_STATS_DWM *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  struct _VIDSCH_DEVICE *v9; // rdx
  __int64 v11; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = -1073741811LL;
LABEL_9:
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
  if ( a2 >= *((_DWORD *)a1 + 10) )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    goto LABEL_9;
  }
  _mm_lfence();
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &LockHandle);
  v9 = *(struct _VIDSCH_DEVICE **)(*((_QWORD *)a1 + v5 + 324) + 16LL);
  if ( v9 )
    VidSchQueryLastCompletedPresentIdDWMInternal(a1, v9, v5, a3, a4);
  else
    v4 = -1073741811;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
