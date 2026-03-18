/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C001CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C001B908 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(
        struct _VIDSCH_DEVICE *a1,
        __int64 a2,
        struct _D3DKMT_PRESENT_STATS_DWM *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  if ( a1 && a3 )
  {
    v7 = *((_QWORD *)a1 + 4);
    if ( (unsigned int)a2 < *(_DWORD *)(v7 + 40) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1872), &LockHandle);
      VidSchQueryLastCompletedPresentIdDWMInternal((KSPIN_LOCK *)v7, a1, v4, 0, a3);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v4;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v8);
  return 3221225485LL;
}
