/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x14059E96C
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ArbAddOrdering @ 0x14059EF44 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1405A0B44 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1405A0E88 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1405A0EC8 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405A0F28 (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int128 *, char *))
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  int RegistryValue; // eax
  _DWORD *v9; // rdi
  char *v10; // r15
  char *i; // r14
  int v12; // edx
  int v13; // eax
  char *v14; // r15
  char *j; // r14
  int v16; // edx
  struct _KEVENT *v17; // rcx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  void *v21; // rcx
  void *v22; // rcx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  int v28; // [rsp+58h] [rbp-71h] BYREF
  const wchar_t *v29; // [rsp+60h] [rbp-69h]
  __int64 v30; // [rsp+68h] [rbp-61h] BYREF
  __int64 v31; // [rsp+70h] [rbp-59h] BYREF
  char v32[8]; // [rsp+78h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v34; // [rsp+B0h] [rbp-19h]
  _DWORD *v35; // [rsp+B8h] [rbp-11h]
  __int128 v36; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v37; // [rsp+D0h] [rbp+7h]

  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v7 = ArbInitializeOrderingList(a1 + 56);
  if ( v7 < 0 )
    goto LABEL_52;
  v7 = ArbInitializeOrderingList(a1 + 72);
  if ( v7 < 0 )
    goto LABEL_52;
  v28 = 7733366;
  v29 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
    goto LABEL_52;
  v28 = 1966110;
  v29 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v7 < 0 )
  {
LABEL_52:
    v9 = P;
    goto LABEL_53;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v9 = P;
  v7 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_53;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
      goto LABEL_45;
    v7 = ArbpGetRegistryValue(Handle);
    if ( v7 < 0 )
      goto LABEL_53;
    ExFreePoolWithTag(v9, 0);
    v9 = v34;
  }
  ZwClose(Handle);
  Handle = 0LL;
  if ( v9[1] != 10 )
    goto LABEL_45;
  v10 = (char *)v9 + (unsigned int)v9[2] + 32;
  for ( i = v10 + 8; i < &v10[32 * *((unsigned int *)v10 + 1) + 8]; i += 32 )
  {
    if ( a4 )
    {
      v7 = a4(&v36, i);
      if ( v7 < 0 )
        goto LABEL_53;
    }
    else
    {
      v36 = *(_OWORD *)i;
      v37 = *((_OWORD *)i + 1);
    }
    v12 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v36) == v12 || BYTE1(v36) == 7 && v12 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v36,
             &v30,
             &v31,
             v32,
             v32);
      if ( v7 < 0 )
        goto LABEL_53;
      v7 = ArbAddOrdering(a1 + 56, v30, v31);
      if ( v7 < 0 )
        goto LABEL_53;
    }
  }
  ExFreePoolWithTag(v9, 0);
  v28 = 2228258;
  v29 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  P = 0LL;
  v9 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v7 < 0 || (v13 = ArbpGetRegistryValue(Handle), v9 = P, v7 = v13, v13 < 0) )
  {
LABEL_53:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    v21 = *(void **)(a1 + 64);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *(_WORD *)(a1 + 56) = 0;
      *(_WORD *)(a1 + 58) = 0;
    }
    v22 = *(void **)(a1 + 80);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)v7;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_21;
  if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
  {
LABEL_45:
    v7 = -1073741811;
    goto LABEL_53;
  }
  v7 = ArbpGetRegistryValue(Handle);
  if ( v7 < 0 )
    goto LABEL_53;
  ExFreePoolWithTag(v9, 0);
  v9 = v35;
LABEL_21:
  ZwClose(Handle);
  Handle = 0LL;
  v14 = (char *)v9 + (unsigned int)v9[2] + 32;
  for ( j = v14 + 8; j < &v14[32 * *((unsigned int *)v14 + 1) + 8]; j += 32 )
  {
    if ( a4 )
    {
      v7 = a4(&v36, j);
      if ( v7 < 0 )
        goto LABEL_53;
    }
    else
    {
      v36 = *(_OWORD *)j;
      v37 = *((_OWORD *)j + 1);
    }
    v16 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v36) == v16 || BYTE1(v36) == 7 && v16 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v36,
             &v30,
             &v31,
             v32,
             v32);
      if ( v7 < 0 )
        goto LABEL_53;
      v7 = ArbAddOrdering(a1 + 72, v30, v31);
      if ( v7 < 0 )
        goto LABEL_53;
      v7 = ArbPruneOrdering(a1 + 56, v30, v31);
      if ( v7 < 0 )
        goto LABEL_53;
    }
  }
  ExFreePoolWithTag(v9, 0);
  ZwClose(KeyHandle);
  v17 = *(struct _KEVENT **)(a1 + 8);
  KeyHandle = 0LL;
  KeSetEvent(v17, 0, 0);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
