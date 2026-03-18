/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x1404200D0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     ObQuerySecurityDescriptorInfo @ 0x14040423C (ObQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x140406EB0 (ObpReferenceSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SeDefaultObjectMethod @ 0x14041FBE0 (SeDefaultObjectMethod.c)
 *     ObReleaseObjectSecurity @ 0x1404206A8 (ObReleaseObjectSecurity.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140490254 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14049028C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404A5248 (ObSetSecurityDescriptorInfo.c)
 *     ExpWnfDeleteNameInstance @ 0x1404C263C (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x1404DF218 (EtwpFreeGuidEntry.c)
 *     ObDeassignSecurity @ 0x1404E1ED4 (ObDeassignSecurity.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404E67CC (IopSetDeviceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A814C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // rbp
  __int64 v12; // rax
  volatile signed __int64 v13; // rcx
  void **v14; // rax

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 16));
  v4 = *(_QWORD *)(a1 - 32 + 16);
  v5 = a2;
  while ( v4 - a2 > 0 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 2, v4 - a2, v4);
    if ( v6 == v4 )
      return;
  }
  if ( v4 != a2 )
    __fastfail(0xEu);
  v7 = *((_QWORD *)v3 + 3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v7 % 0x101));
  v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
  if ( v11 )
    v11[26] |= 1u;
  v12 = _InterlockedExchangeAdd64(v3 + 2, -a2) - v5;
  if ( v12 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v12 )
      __fastfail(0xEu);
    v13 = *v3;
    v14 = (void **)*((_QWORD *)v3 + 1);
    if ( *(volatile signed __int64 **)(*v3 + 8) != v3 || *v14 != v3 )
      __fastfail(3u);
    *v14 = (void *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
