/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1405482D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MmMapIoSpace @ 0x1400BD418 (MmMapIoSpace.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14048434C (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v3; // r13
  PVOID v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  char *v7; // r14
  int SystemFirmwareTableInformation; // eax
  int v9; // edi
  unsigned int v11; // edi
  unsigned int *PoolWithTag; // rax
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  SIZE_T v16; // rdi
  unsigned __int16 v17; // ax
  PHYSICAL_ADDRESS v18; // rcx
  SIZE_T v19; // rdx
  __int64 v20; // rcx
  char v21; // [rsp+20h] [rbp-A8h]
  unsigned int Length; // [rsp+30h] [rbp-98h]
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-88h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+44h] [rbp-84h]
  SIZE_T v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  volatile void *Address; // [rsp+58h] [rbp-70h]
  volatile void *v29; // [rsp+68h] [rbp-60h]
  unsigned int Src[2]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v31; // [rsp+90h] [rbp-38h]

  v27 = a1;
  v3 = 0LL;
  v21 = 0;
  v4 = 0LL;
  v26 = 0LL;
  if ( a2 < 0x20 )
  {
    v9 = -1073741811;
    goto LABEL_16;
  }
  NumberOfBytes_4 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v29 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpPlatformBinaryLock, v6, (ULONG_PTR)&ExpPlatformBinaryLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v21 = 1;
  v7 = (char *)ExpPlatformBinaryTableInformation;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v9 = -1073741637;
LABEL_25:
    v4 = 0LL;
    goto LABEL_16;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v21 = 0;
    if ( Length || NumberOfBytes_4 )
    {
      v9 = -1073741811;
      goto LABEL_15;
    }
    Src[0] = 1094930505;
    Src[1] = 1;
    v31 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Src, 0, 0x14u, &NumberOfBytes);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v9 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v9 = -1073741701;
      goto LABEL_15;
    }
    v11 = NumberOfBytes;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54425057u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_15:
      v4 = 0LL;
      goto LABEL_16;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v11 - 16;
    v9 = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v11, &NumberOfBytes);
    if ( v9 < 0 )
      goto LABEL_15;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v14, (ULONG_PTR)&ExpPlatformBinaryLock);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v9 = -1073741637;
        goto LABEL_15;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v3;
      v3 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
    v21 = 1;
    v7 = (char *)ExpPlatformBinaryTableInformation;
  }
  v16 = NumberOfBytes_4;
  if ( (NumberOfBytes_4 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_25;
  }
  if ( v7[64] != 1
    || v7[65] != 1
    || (v17 = *((_WORD *)v7 + 33), (v17 & 1) != 0)
    || (v18 = *(PHYSICAL_ADDRESS *)(v7 + 56), !v18.QuadPart)
    || *((_DWORD *)v7 + 10) != 1 )
  {
    v9 = -1073741701;
    goto LABEL_15;
  }
  v19 = *((unsigned int *)v7 + 13);
  if ( (unsigned int)v19 > Length || v17 > NumberOfBytes_4 )
  {
    v9 = -1073741789;
    v20 = v27;
    *(_DWORD *)(v27 + 24) = v19;
    *(_DWORD *)(v20 + 28) = *((unsigned __int16 *)v7 + 33);
    goto LABEL_25;
  }
  v26 = *((unsigned int *)v7 + 13);
  v4 = MmMapIoSpace(v18, v19, MmCached);
  if ( v4 )
  {
    *(_QWORD *)v27 = *((_QWORD *)v7 + 7);
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v4, *((unsigned int *)v7 + 13));
    if ( *((_WORD *)v7 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v29, v16, 2u);
      memmove((void *)v29, v7 + 68, *((unsigned __int16 *)v7 + 33));
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_16:
  if ( v21 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v4 )
    MmUnmapIoSpace(v4, v26);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x54425057u);
  return (unsigned int)v9;
}
