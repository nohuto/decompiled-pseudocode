/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x14041EF90
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     ObpAdjustCreatorAccessState @ 0x140402F10 (ObpAdjustCreatorAccessState.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404030FC (ObQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x140405D70 (ObpReferenceSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeDefaultObjectMethod @ 0x14041EAA0 (SeDefaultObjectMethod.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140490CE4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140490D1C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1404AE36C (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x1404C281C (EtwpFreeGuidEntry.c)
 *     ObDeassignSecurity @ 0x1404C54D8 (ObDeassignSecurity.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x14051D648 (ObSetSecurityDescriptorInfo.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A8284 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
