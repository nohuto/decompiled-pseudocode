/*
 * XREFs of KiInitMachineDependent @ 0x1401395EC
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140139854 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiInitializeMTRR @ 0x14079232C (KiInitializeMTRR.c)
 *     KiInitializeCacheErrataSupport @ 0x1407D0270 (KiInitializeCacheErrataSupport.c)
 */

char KiInitMachineDependent()
{
  int v0; // esi
  char v1; // di
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char result; // al
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  if ( (KiCacheErrataMonitor & 3) != 0 )
  {
    if ( (KiCacheErrataMonitor & 2) != 0 )
    {
      KiTLBCOverride = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      KiTLBCOverride = 1;
    }
    else
    {
      KiTLBCOverride &= 1u;
    }
  }
  else
  {
    KiTLBCOverride = 0;
  }
  v0 = 0;
  PreviousAffinity.Group = 0;
  v1 = 0;
  PreviousAffinity.Mask = 0LL;
  v2 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      if ( v0 )
      {
        KiSetSystemAffinityThreadToProcessor(v2, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v2, &PreviousAffinity);
        v0 = 1;
      }
      if ( v2 == (_DWORD)KeNumberProcessors_0 - 1 )
        v1 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v3) = v1;
        if ( !(unsigned __int8)KiInitializeCacheErrataSupport(v3) )
          return 0;
      }
      LOBYTE(v3) = v1;
      KiInitializeMTRR(v3);
      if ( (KeFeatureBits & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( ++v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      KiIa32MiscEnable = __readmsr(0x1A0u);
    if ( v0 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KiUserCodePatchMutex.Count = 1;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Blink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    result = 1;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Flink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Owner = 0LL;
    KiUserCodePatchMutex.Contention = 0;
    LOWORD(KiUserCodePatchMutex.Event.Header.Lock) = 1;
    KiUserCodePatchMutex.Event.Header.Size = 6;
    KiUserCodePatchMutex.Event.Header.SignalState = 0;
  }
  return result;
}
