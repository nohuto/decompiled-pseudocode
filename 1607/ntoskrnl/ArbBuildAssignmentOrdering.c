/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x140558F8C
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ArbAddOrdering @ 0x140559540 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x14055ABBC (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14055AF18 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x14055AF58 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x14055AFB8 (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int128 *, char *))
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // edi
  int RegistryValue; // eax
  _DWORD *v10; // rsi
  char *v11; // r13
  char *i; // r15
  int v13; // edx
  int v14; // eax
  char *v15; // r13
  char *j; // r15
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v22; // rcx
  void *v23; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  int v27; // [rsp+58h] [rbp-71h] BYREF
  const wchar_t *v28; // [rsp+60h] [rbp-69h]
  __int64 v29; // [rsp+68h] [rbp-61h] BYREF
  __int64 v30; // [rsp+70h] [rbp-59h] BYREF
  char v31[8]; // [rsp+78h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v33; // [rsp+B0h] [rbp-19h]
  _DWORD *v34; // [rsp+B8h] [rbp-11h]
  __int128 v35; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v36; // [rsp+D0h] [rbp+7h]

  v4 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v8 = ArbInitializeOrderingList(a1 + 56);
  if ( v8 < 0 )
    goto LABEL_49;
  v8 = ArbInitializeOrderingList(a1 + 72);
  if ( v8 < 0 )
    goto LABEL_49;
  v27 = 7733366;
  v28 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
    goto LABEL_49;
  v27 = 1966110;
  v28 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
  {
LABEL_49:
    v10 = P;
    goto LABEL_50;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v10 = P;
  v8 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_50;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
      goto LABEL_44;
    v8 = ArbpGetRegistryValue(Handle);
    if ( v8 < 0 )
      goto LABEL_50;
    ExFreePoolWithTag(v10, 0);
    v10 = v33;
  }
  ZwClose(Handle);
  Handle = 0LL;
  if ( v10[1] != 10 )
    goto LABEL_44;
  v11 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( i = v11 + 8; i < &v11[32 * *((unsigned int *)v11 + 1) + 8]; i += 32 )
  {
    if ( a4 )
    {
      v8 = a4(&v35, i);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v35 = *(_OWORD *)i;
      v36 = *((_OWORD *)i + 1);
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v35) == v13 || BYTE1(v35) == 7 && v13 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v35,
             &v30,
             &v29,
             v31,
             v31);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 56, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  v28 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
  P = 0LL;
  v10 = 0LL;
  v27 = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v8 < 0 || (v14 = ArbpGetRegistryValue(Handle), v10 = P, v8 = v14, v14 < 0) )
  {
LABEL_50:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v22 = *(void **)(a1 + 64);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *(_DWORD *)(a1 + 56) = 0;
    }
    v23 = *(void **)(a1 + 80);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v4 = v8;
    goto LABEL_40;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_21;
  if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
  {
LABEL_44:
    v8 = -1073741811;
    goto LABEL_50;
  }
  v8 = ArbpGetRegistryValue(Handle);
  if ( v8 < 0 )
    goto LABEL_50;
  ExFreePoolWithTag(v10, 0);
  v10 = v34;
LABEL_21:
  ZwClose(Handle);
  Handle = 0LL;
  v15 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( j = v15 + 8; j < &v15[32 * *((unsigned int *)v15 + 1) + 8]; j += 32 )
  {
    if ( a4 )
    {
      v8 = a4(&v35, j);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v35 = *(_OWORD *)j;
      v36 = *((_OWORD *)j + 1);
    }
    v17 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v35) == v17 || BYTE1(v35) == 7 && v17 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, char *, char *))(a1 + 120))(
             &v35,
             &v30,
             &v29,
             v31,
             v31);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 72, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbPruneOrdering(a1 + 56, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  ZwClose(KeyHandle);
  KeyHandle = 0LL;
LABEL_40:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  return v4;
}
