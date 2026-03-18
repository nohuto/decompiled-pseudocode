/*
 * XREFs of KiInitMachineDependent @ 0x1401336B4
 * Callers:
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140133974 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 *     KiInitializeCacheErrataSupport @ 0x1407849C4 (KiInitializeCacheErrataSupport.c)
 *     MmMapErrataPage @ 0x140784E48 (MmMapErrataPage.c)
 */

char __fastcall KiInitMachineDependent(__int64 a1, unsigned __int64 a2)
{
  int v2; // esi
  char v3; // di
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
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
  v2 = 0;
  PreviousAffinity.Group = 0;
  v3 = 0;
  PreviousAffinity.Mask = 0LL;
  v4 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      if ( v2 )
      {
        KiSetSystemAffinityThreadToProcessor(v4, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v4, &PreviousAffinity);
        v2 = 1;
      }
      if ( v4 == (_DWORD)KeNumberProcessors_0 - 1 )
        v3 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v5) = v3;
        if ( !(unsigned __int8)KiInitializeCacheErrataSupport(v5) )
          return 0;
      }
      LOBYTE(v5) = v3;
      KiInitializeMTRR(v5);
      if ( (KeFeatureBits & 0x400000) != 0 )
      {
        a1 = 416LL;
        v6 = __readmsr(0x1A0u) | 0x8000000;
        a2 = HIDWORD(v6);
        __writemsr(0x1A0u, v6);
      }
      if ( ++v4 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
    {
      a1 = 416LL;
      v7 = __readmsr(0x1A0u);
      a2 = (unsigned __int64)HIDWORD(v7) << 32;
      KiIa32MiscEnable = v7;
    }
    if ( v2 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KiUserCodePatchMutex.Event.Header.WaitListHead.Blink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Event.Header.WaitListHead.Flink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
    KiUserCodePatchMutex.Count = 1;
    KiUserCodePatchMutex.Owner = 0LL;
    KiUserCodePatchMutex.Contention = 0;
    LOWORD(KiUserCodePatchMutex.Event.Header.Lock) = 1;
    KiUserCodePatchMutex.Event.Header.Size = 6;
    KiUserCodePatchMutex.Event.Header.SignalState = 0;
    if ( KiFpuLeakage )
    {
      v8 = MmMapErrataPage(a1, a2);
      if ( !v8 )
        KeBugCheck(0x13Eu);
      KiSanitizeFpuProcedure = (__int64 (__fastcall *)())v8;
      qword_1402C7E60 = v8;
      qword_1402C7E68 = 4096 - (unsigned int)(v8 & 0xFFF);
    }
    qword_1402C7E58 = 8LL;
    qword_1402C7E50 = (__int64)&KiSanitizeFpuProcedure;
    return 1;
  }
}
