/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1405BF130
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmMapIoSpace @ 0x140114D44 (MmMapIoSpace.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14052DF08 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v4; // r13
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  char *v9; // r14
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  int SystemFirmwareTableInformation; // eax
  int v13; // edi
  unsigned int v15; // edi
  unsigned int *PoolWithTag; // rax
  __int64 v17; // r9
  struct _KTHREAD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdi
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  SIZE_T v24; // rdi
  unsigned __int16 v25; // ax
  PHYSICAL_ADDRESS v26; // rcx
  SIZE_T v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  char v31; // [rsp+20h] [rbp-A8h]
  unsigned int Length; // [rsp+30h] [rbp-98h]
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-88h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+44h] [rbp-84h]
  SIZE_T v36; // [rsp+48h] [rbp-80h]
  __int64 v37; // [rsp+50h] [rbp-78h]
  volatile void *Address; // [rsp+58h] [rbp-70h]
  volatile void *v39; // [rsp+68h] [rbp-60h]
  unsigned int Src[2]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v41; // [rsp+90h] [rbp-38h]

  v37 = a1;
  v4 = 0LL;
  v31 = 0;
  v5 = 0LL;
  v36 = 0LL;
  if ( a2 < 0x20 )
  {
    v13 = -1073741811;
    goto LABEL_18;
  }
  NumberOfBytes_4 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v39 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpPlatformBinaryLock, v7, (ULONG_PTR)&ExpPlatformBinaryLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v31 = 1;
  v9 = (char *)ExpPlatformBinaryTableInformation;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v13 = -1073741637;
LABEL_27:
    v5 = 0LL;
    goto LABEL_18;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v31 = 0;
    if ( Length || NumberOfBytes_4 )
    {
      v13 = -1073741811;
      goto LABEL_17;
    }
    Src[0] = 1094930505;
    Src[1] = 1;
    v41 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Src, 0, 0x14u, &NumberOfBytes);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v13 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v13 = -1073741701;
      goto LABEL_17;
    }
    v15 = NumberOfBytes;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54425057u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = -1073741670;
LABEL_17:
      v5 = 0LL;
      goto LABEL_18;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v15 - 16;
    v13 = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v15, &NumberOfBytes);
    if ( v13 < 0 )
      goto LABEL_17;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL, v17);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v19, (ULONG_PTR)&ExpPlatformBinaryLock, v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        v22 = KeGetCurrentThread();
        v23 = v22->KernelApcDisable + 1;
        v22->KernelApcDisable = v23;
        if ( !v23
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
          && !v22->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v13 = -1073741637;
        goto LABEL_17;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
    v31 = 1;
    v9 = (char *)ExpPlatformBinaryTableInformation;
  }
  v24 = NumberOfBytes_4;
  if ( (NumberOfBytes_4 & 1) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_27;
  }
  if ( v9[64] != 1
    || v9[65] != 1
    || (v25 = *((_WORD *)v9 + 33), (v25 & 1) != 0)
    || (v26 = *(PHYSICAL_ADDRESS *)(v9 + 56), !v26.QuadPart)
    || *((_DWORD *)v9 + 10) != 1 )
  {
    v13 = -1073741701;
    goto LABEL_17;
  }
  v27 = *((unsigned int *)v9 + 13);
  if ( (unsigned int)v27 > Length || v25 > NumberOfBytes_4 )
  {
    v13 = -1073741789;
    v28 = v37;
    *(_DWORD *)(v37 + 24) = v27;
    *(_DWORD *)(v28 + 28) = *((unsigned __int16 *)v9 + 33);
    goto LABEL_27;
  }
  v36 = *((unsigned int *)v9 + 13);
  v5 = MmMapIoSpace(v26, v27, MmCached);
  if ( v5 )
  {
    *(_QWORD *)v37 = *((_QWORD *)v9 + 7);
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v5, *((unsigned int *)v9 + 13));
    if ( *((_WORD *)v9 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v39, v24, 2u);
      memmove((void *)v39, v9 + 68, *((unsigned __int16 *)v9 + 33));
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_18:
  if ( v31 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v5 )
    MmUnmapIoSpace(v5, v36);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v13;
}
