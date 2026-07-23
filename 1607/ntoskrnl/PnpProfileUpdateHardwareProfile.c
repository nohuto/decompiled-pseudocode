/*
 * XREFs of PnpProfileUpdateHardwareProfile @ 0x1406421A4
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x140642430 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CEC0 (IopExecuteHardwareProfileChange.c)
 */

__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1)
{
  int v2; // eax
  char *PoolWithTag; // rax
  char *v4; // rdi
  char *v5; // rbx
  __int64 *i; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = 0LL;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  *(_DWORD *)&ValueName.Length = 8126586;
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    Handle = 0LL;
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_DWORD *)&ValueName.Length = 2097182;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(Handle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
  }
  v2 = PiProfileDeviceCount;
  if ( !PiProfileDeviceCount )
    v2 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v2 + 8), 0x20207050u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = PoolWithTag;
    for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
    {
      v7 = i[2];
      if ( v7 )
      {
        *(_QWORD *)v5 = v7;
        v5 += 8;
      }
    }
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    if ( v5 == v4 )
    {
      *(_QWORD *)v5 = 0LL;
      v5 += 8;
    }
    *(_QWORD *)v5 = 0LL;
    v9 = IopExecuteHardwareProfileChange(v8, (_DWORD)v4, (v5 - v4) >> 3, (unsigned int)&v15, a1);
    if ( v15 )
      ZwClose(v15);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v9;
}
