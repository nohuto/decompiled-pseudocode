/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C0026E30
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0025EF8 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_PRESENT_STATS_DWM *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v9; // rax
  struct _VIDSCH_DEVICE *v11; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *((_DWORD *)a1 + 10) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = v5;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  _mm_lfence();
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
  v11 = *(struct _VIDSCH_DEVICE **)(*((_QWORD *)a1 + v5 + 371) + 16LL);
  if ( v11 )
    VidSchQueryLastCompletedPresentIdDWMInternal((KSPIN_LOCK *)a1, v11, v5, a3, a4);
  else
    v4 = -1073741811;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
