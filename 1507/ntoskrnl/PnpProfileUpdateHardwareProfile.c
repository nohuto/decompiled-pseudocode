/*
 * XREFs of PnpProfileUpdateHardwareProfile @ 0x14068D6F0
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14068DAC4 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14068DC08 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopExecuteHardwareProfileChange @ 0x1406962B0 (IopExecuteHardwareProfileChange.c)
 */

__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  int v9; // eax
  char *PoolWithTag; // rax
  char *v11; // rdi
  char *v12; // rbx
  __int64 *i; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // si
  signed __int32 v16; // eax
  int v17; // ecx
  unsigned int v18; // ebx
  unsigned __int8 v19; // bl
  signed __int32 v20; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v27 = 0LL;
  v5 = KeAbPreAcquire((ULONG_PTR)&PiProfileDeviceListLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiProfileDeviceListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiProfileDeviceListLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  qword_1403493C8 = (__int64)KeGetCurrentThread();
  dword_1403493F0 = CurrentIrql;
  *(_DWORD *)&ValueName.Length = 8126586;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Handle = 0LL;
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    v24.RootDirectory = KeyHandle;
    *(_DWORD *)&ValueName.Length = 2097182;
    v24.ObjectName = &ValueName;
    v24.Length = 48;
    v24.Attributes = 576;
    *(_OWORD *)&v24.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x2001Fu, &v24) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
  }
  v9 = PiProfileDeviceCount;
  if ( !PiProfileDeviceCount )
    v9 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v9 + 8), 0x20207050u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = PoolWithTag;
    for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
    {
      v14 = i[2];
      if ( v14 )
      {
        *(_QWORD *)v12 = v14;
        v12 += 8;
      }
    }
    qword_1403493C8 = 0LL;
    v15 = dword_1403493F0;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v16);
    __writecr8(v15);
    KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
    if ( v12 == v11 )
    {
      *(_QWORD *)v12 = 0LL;
      v12 += 8;
    }
    *(_QWORD *)v12 = 0LL;
    v18 = IopExecuteHardwareProfileChange(v17, (_DWORD)v11, (v12 - v11) >> 3, (unsigned int)&v27, a1);
    if ( v27 )
      ZwClose(v27);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    qword_1403493C8 = 0LL;
    v19 = dword_1403493F0;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v20);
    __writecr8(v19);
    KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v18;
}
