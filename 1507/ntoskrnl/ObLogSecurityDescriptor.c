/*
 * XREFs of ObLogSecurityDescriptor @ 0x140486480
 * Callers:
 *     ObAssignObjectSecurityDescriptor @ 0x140449D7C (ObAssignObjectSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     SeDefaultObjectMethod @ 0x140486370 (SeDefaultObjectMethod.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 *     EtwpAllocGuidEntry @ 0x1404D4290 (EtwpAllocGuidEntry.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     ObpHashBuffer @ 0x140521760 (ObpHashBuffer.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(void *a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rbp
  signed __int64 v8; // rbx
  unsigned __int64 v9; // kr00_8
  _QWORD *PoolWithTag; // r13
  volatile signed __int64 *v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // r9
  _QWORD *v15; // r12
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rdx
  signed __int64 v24; // rax
  volatile signed __int64 v25; // rtt
  __int16 v26; // ax
  _QWORD *v28; // rax
  __int16 v29; // ax
  ULONG Size; // [rsp+98h] [rbp+20h]

  Size = RtlLengthSecurityDescriptor(a1);
  v4 = Size;
  v5 = ObpHashBuffer(a1, Size);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  v8 = 0LL;
  v9 = v5;
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  v13 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v9 % 0x101),
      v13,
      (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101),
      v14);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v15 = v11 + 1;
  while ( 1 )
  {
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
      break;
LABEL_11:
    if ( PoolWithTag )
    {
      v28 = (_QWORD *)v16[1];
      *PoolWithTag = v16;
      PoolWithTag[1] = v28;
      if ( (_QWORD *)*v28 != v16 )
        __fastfail(3u);
      *v28 = PoolWithTag;
      v16[1] = PoolWithTag;
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v9 % 0x101));
      KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101));
      v29 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      *a2 = PoolWithTag + 4;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v9 % 0x101));
    KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101));
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v4 + 40 < v4 )
      return 3221225626LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 32, 0x6353624Fu);
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a3;
    PoolWithTag[3] = v7;
    memmove(PoolWithTag + 4, a1, v4);
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101), 0LL, 0LL, v19);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v9 % 0x101),
        v20,
        (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101),
        v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
  }
  while ( 1 )
  {
    v17 = v16[3];
    if ( v17 != v7 )
    {
      if ( v17 > v7 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( Size == RtlLengthSecurityDescriptor(v16 + 4) && !memcmp(a1, v16 + 4, Size) )
      break;
LABEL_9:
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
    {
LABEL_10:
      v4 = Size;
      goto LABEL_11;
    }
  }
  if ( _InterlockedExchangeAdd64(v16 + 2, a3) <= 0 )
    __fastfail(0xEu);
  _m_prefetchw((const void *)v11);
  v24 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v24 - 16;
  if ( (v24 & 2) != 0 || (v25 = *v11, v25 != _InterlockedCompareExchange64(v11, v8, v24)) )
    ExfReleasePushLock((_QWORD *)&ObsSecurityDescriptorCache + 3 * (v9 % 0x101), v23);
  KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101));
  v26 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *a2 = v16 + 4;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
