/*
 * XREFs of VidSchiProcessPrimariesTerminationList @ 0x1C0019488
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C001640C (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C007AA48 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001028 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003AA4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiProcessPrimariesTerminationList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *v4; // r10
  _QWORD *v5; // rbx
  __int64 v6; // r10
  VIDMM_GLOBAL ***v7; // r11
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v3 = (_QWORD **)(a1 + 1936);
  v4 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v2, (__int64)(v4 - 25)) )
      {
        v8 = *(_QWORD **)(v6 + 8);
        if ( v5[1] != v6 || *v8 != v6 )
          __fastfail(3u);
        *v8 = v5;
        v5[1] = v8;
        VIDMM_GLOBAL::AddPendingTermination(*v7[1], (struct VIDMM_ALLOC *)v7);
      }
      v4 = v5;
    }
    while ( v5 != v3 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
