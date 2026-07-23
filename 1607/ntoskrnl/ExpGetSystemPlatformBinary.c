/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x14057C9E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404AA364 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v3; // r13
  void *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  unsigned int *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int SystemFirmwareTableInformation; // eax
  int v12; // edi
  unsigned int v14; // edi
  unsigned int *PoolWithTag; // rax
  struct _KTHREAD *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  SIZE_T v22; // rdi
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // [rsp+20h] [rbp-A8h]
  unsigned int Length; // [rsp+30h] [rbp-98h]
  unsigned int Length_4; // [rsp+34h] [rbp-94h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-90h]
  unsigned int *v35; // [rsp+40h] [rbp-88h]
  volatile void *Address; // [rsp+48h] [rbp-80h]
  volatile void *v37; // [rsp+50h] [rbp-78h]
  __int64 v38; // [rsp+58h] [rbp-70h]
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-68h]
  unsigned int Src[2]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v41; // [rsp+90h] [rbp-38h]

  v38 = a1;
  v3 = 0LL;
  v35 = 0LL;
  v30 = 0;
  v4 = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
    v12 = -1073741811;
    goto LABEL_16;
  }
  v34 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v37 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpPlatformBinaryLock, v6, (ULONG_PTR)&ExpPlatformBinaryLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v30 = 1;
  v7 = (unsigned int *)ExpPlatformBinaryTableInformation;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v12 = -1073741637;
LABEL_25:
    v4 = 0LL;
    goto LABEL_16;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    v30 = 0;
    if ( Length || v34 )
    {
      v12 = -1073741811;
      goto LABEL_15;
    }
    Src[0] = 1094930505;
    Src[1] = 1;
    v41 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Src, 0, 0x14u, &Length_4);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v12 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v12 = -1073741701;
      goto LABEL_15;
    }
    v14 = Length_4;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x54425057u);
    v3 = PoolWithTag;
    v35 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
LABEL_15:
      v4 = 0LL;
      goto LABEL_16;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v14 - 16;
    v12 = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v14, &Length_4);
    if ( v12 < 0 )
      goto LABEL_15;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpPlatformBinaryLock, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v17, (ULONG_PTR)&ExpPlatformBinaryLock);
    if ( v18 )
      v18[26] |= 1u;
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
        v12 = -1073741637;
        goto LABEL_15;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v3;
      v3 = 0LL;
      v35 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
    v30 = 1;
    v7 = (unsigned int *)ExpPlatformBinaryTableInformation;
  }
  v22 = v34;
  if ( (v34 & 1) != 0 )
  {
    v12 = -1073741811;
    goto LABEL_25;
  }
  if ( *((_BYTE *)v7 + 64) != 1
    || *((_BYTE *)v7 + 65) != 1
    || (v23 = *((_WORD *)v7 + 33), (v23 & 1) != 0)
    || (v24 = *((_QWORD *)v7 + 7)) == 0
    || v7[10] != 1 )
  {
    v12 = -1073741701;
    goto LABEL_15;
  }
  v25 = v7[13];
  if ( (unsigned int)v25 > Length || v23 > v34 )
  {
    v12 = -1073741789;
    v26 = v38;
    *(_DWORD *)(v38 + 24) = v25;
    *(_DWORD *)(v26 + 28) = *((unsigned __int16 *)v7 + 33);
    goto LABEL_25;
  }
  NumberOfBytes = v7[13];
  v4 = (void *)MmMapIoSpaceEx(v24, v25, 2u);
  if ( v4 )
  {
    *(_QWORD *)v38 = *((_QWORD *)v7 + 7);
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v4, v7[13]);
    if ( *((_WORD *)v7 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v37, v22, 2u);
      memmove((void *)v37, v7 + 17, *((unsigned __int16 *)v7 + 33));
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_16:
  if ( v30 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
  }
  if ( v4 )
    MmUnmapIoSpace(v4, NumberOfBytes);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x54425057u);
  return (unsigned int)v12;
}
