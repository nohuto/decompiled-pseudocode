/*
 * XREFs of CreateMiniNtBootKey @ 0x1407F7DAC
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v2; // rdi
  __int64 v3; // r9
  int *v4; // rax
  ULONG_PTR v5; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2[6]; // [rsp+80h] [rbp-9h] BYREF
  int v14; // [rsp+B0h] [rbp+27h]
  ULONG Disposition; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF

  v0 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x74696E49u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_19;
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
    goto LABEL_19;
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
LABEL_19:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(v4) = InitForceInline;
  if ( InitForceInline == 1 )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1LL, v3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
    {
      if ( v5 )
        *(_BYTE *)(v5 + 26) |= 1u;
      BugCheckParameter2[1] = (ULONG_PTR)KeGetCurrentThread();
      v14 = CurrentIrql;
    }
    else
    {
      __writecr8(CurrentIrql);
      if ( v5 )
        KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v5);
      _mm_pause();
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeGetCurrentThread();
    LOWORD(CurrentThread) = v9->SpecialApcDisable + 1;
    v9->SpecialApcDisable = (__int16)CurrentThread;
    if ( !(_WORD)CurrentThread && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
      KiCheckForKernelApcDelivery();
    __writecr8(2uLL);
    v4 = &PoolHitTag;
    VpPoolHitTag = (__int64)&PoolHitTag;
  }
  return (char)v4;
}
