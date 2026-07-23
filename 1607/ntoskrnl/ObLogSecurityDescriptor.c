/*
 * XREFs of ObLogSecurityDescriptor @ 0x14041EBB0
 * Callers:
 *     SeDefaultObjectMethod @ 0x14041EAA0 (SeDefaultObjectMethod.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     EtwpAllocGuidEntry @ 0x14048E200 (EtwpAllocGuidEntry.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1404C5464 (ObAssignObjectSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x14051D648 (ObSetSecurityDescriptorInfo.c)
 *     ObpInitObjectTypeSD @ 0x140552BD4 (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406A8284 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x14041EEA0 (RtlLengthSecurityDescriptor.c)
 *     ObpHashBuffer @ 0x1404A5270 (ObpHashBuffer.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(void *a1, _QWORD *a2, unsigned int a3)
{
  size_t v4; // r13
  unsigned __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v7; // rbp
  signed __int64 v8; // rbx
  _QWORD *PoolWithTag; // r12
  unsigned __int64 v10; // kr00_8
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // r15
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // rdi
  signed __int64 v18; // rax
  volatile signed __int64 v19; // rtt
  _QWORD *v21; // rax
  __int64 v25; // [rsp+98h] [rbp+20h]

  v4 = RtlLengthSecurityDescriptor(a1);
  v5 = ObpHashBuffer(a1, v4);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  v8 = 0LL;
  v25 = (__int64)CurrentThread;
  PoolWithTag = 0LL;
  v10 = v5;
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v10 % 0x101),
      v12,
      (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101));
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = v11 + 1;
  while ( 1 )
  {
    v14 = (_QWORD *)*v13;
    if ( (_QWORD *)*v13 != v13 )
      break;
LABEL_11:
    if ( PoolWithTag )
    {
      v21 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v21 != v14 )
        __fastfail(3u);
      PoolWithTag[1] = v21;
      *PoolWithTag = v14;
      *v21 = PoolWithTag;
      v14[1] = PoolWithTag;
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v10 % 0x101));
      KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = PoolWithTag + 4;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v10 % 0x101));
    KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (int)v4 + 40 < (unsigned int)v4 )
      return 3221225626LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v4 + 32), 0x6353624Fu);
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a3;
    PoolWithTag[3] = v7;
    memmove(PoolWithTag + 4, a1, v4);
    --CurrentThread->KernelApcDisable;
    v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101), 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v10 % 0x101),
        v16,
        (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101));
    if ( v17 )
      v17[26] |= 1u;
  }
  while ( 1 )
  {
    v15 = v14[3];
    if ( v15 != v7 )
    {
      if ( v15 > v7 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( (_DWORD)v4 == RtlLengthSecurityDescriptor(v14 + 4) && !memcmp(a1, v14 + 4, v4) )
      break;
LABEL_9:
    v14 = (_QWORD *)*v14;
    if ( v14 == v13 )
    {
LABEL_10:
      CurrentThread = (struct _KTHREAD *)v25;
      goto LABEL_11;
    }
  }
  if ( _InterlockedExchangeAdd64(v14 + 2, a3) <= 0 )
    __fastfail(0xEu);
  _m_prefetchw((const void *)v11);
  v18 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v18 - 16;
  if ( (v18 & 2) != 0 || (v19 = *v11, v19 != _InterlockedCompareExchange64(v11, v8, v18)) )
    ExfReleasePushLock((_QWORD *)&ObsSecurityDescriptorCache + 3 * (v10 % 0x101));
  KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v10 % 0x101));
  KeLeaveCriticalRegionThread(v25);
  *a2 = v14 + 4;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
