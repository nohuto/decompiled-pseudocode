/*
 * XREFs of CreateMiniNtBootKey @ 0x140781A50
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExTryToAcquireFastMutex @ 0x1400DFFC4 (ExTryToAcquireFastMutex.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v2; // rdi
  int *v3; // rax
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  struct _FAST_MUTEX FastMutex; // [rsp+80h] [rbp+7h] BYREF
  ULONG Disposition; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF

  v0 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x74696E49u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  swprintf_s(PoolWithTag, 0x100uLL, L"%s\\Control", CmRegistryMachineSystemCurrentControlSet.Buffer);
  v2[255] = 0;
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 < 0 )
    goto LABEL_9;
  RtlInitUnicodeString(&DestinationString, L"MiniNT");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  if ( v0 >= 0 )
    ZwClose(Handle);
  ZwClose(KeyHandle);
  if ( v0 < 0 )
LABEL_9:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(v3) = InitForceInline;
  if ( InitForceInline == 1 )
  {
    ExTryToAcquireFastMutex(&FastMutex);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    __writecr8(2uLL);
    v3 = &PoolHitTag;
    VpPoolHitTag = (__int64)&PoolHitTag;
  }
  return (char)v3;
}
