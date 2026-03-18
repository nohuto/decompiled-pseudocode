/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1C008868C
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1C008E278 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ZwClose_0 @ 0x1C002BC68 (ZwClose_0.c)
 *     ZwCreateKey_0 @ 0x1C002BC86 (ZwCreateKey_0.c)
 *     ZwOpenKey_0 @ 0x1C002BC92 (ZwOpenKey_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ArbAddOrdering @ 0x1C00885B0 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1C0090760 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1C00909A8 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1C0090B0C (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1C00A2F54 (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rsi
  int v6; // edi
  int RegistryValue; // eax
  char *v8; // r13
  char *i; // r15
  int v10; // edx
  int v11; // eax
  char *v12; // r13
  char *j; // r15
  int v14; // edx
  void *v16; // rcx
  void *v17; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h]
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  int v21; // [rsp+58h] [rbp-61h] BYREF
  const wchar_t *v22; // [rsp+60h] [rbp-59h]
  unsigned __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-49h] BYREF
  char v25[8]; // [rsp+78h] [rbp-41h] BYREF
  _DWORD *v26; // [rsp+80h] [rbp-39h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-31h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v29; // [rsp+C8h] [rbp+Fh]

  v3 = 0;
  v26 = a3;
  KeyHandle = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  P = 0LL;
  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v6 = ArbInitializeOrderingList(a1 + 56);
  if ( v6 < 0 )
    goto LABEL_39;
  v6 = ArbInitializeOrderingList(a1 + 72);
  if ( v6 < 0 )
    goto LABEL_39;
  v21 = 7733366;
  v22 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_39;
  v21 = 1966110;
  v22 = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey_0(&Handle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_39;
  RegistryValue = ArbpGetRegistryValue(Handle);
  v4 = P;
  v6 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_39;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
      goto LABEL_32;
    v6 = ArbpGetRegistryValue(Handle);
    if ( v6 < 0 )
      goto LABEL_39;
    ExFreePoolWithTag(v4, 0);
    v4 = P;
  }
  ZwClose_0(Handle);
  Handle = 0LL;
  if ( v4[1] != 10 )
    goto LABEL_32;
  v8 = (char *)v4 + (unsigned int)v4[2] + 32;
  for ( i = v8 + 8; i < &v8[32 * *((unsigned int *)v8 + 1) + 8]; i += 32 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    v28 = *(_OWORD *)i;
    v29 = *((_OWORD *)i + 1);
    if ( BYTE1(v28) == v10 || BYTE1(v28) == 7 && v10 == 3 )
    {
      v6 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, char *, char *))(a1 + 120))(
             &v28,
             &v24,
             &v23,
             v25,
             v25);
      if ( v6 < 0 )
        goto LABEL_39;
      v6 = ArbAddOrdering((unsigned __int16 *)(a1 + 56), v24, v23);
      if ( v6 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v4, 0);
  v22 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  P = 0LL;
  v4 = 0LL;
  v21 = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateKey_0(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v6 < 0 || (v11 = ArbpGetRegistryValue(Handle), v4 = P, v6 = v11, v11 < 0) )
  {
LABEL_39:
    if ( KeyHandle )
      ZwClose_0(KeyHandle);
    if ( Handle )
      ZwClose_0(Handle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    v16 = *(void **)(a1 + 64);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_WORD *)(a1 + 56) = 0;
      *(_WORD *)(a1 + 58) = 0;
    }
    v17 = *(void **)(a1 + 80);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v3 = v6;
    goto LABEL_28;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_19;
  if ( *(_WORD *)((char *)P + 2 * ((unsigned __int64)*((unsigned int *)P + 3) >> 1) + *((unsigned int *)P + 2) - 2) )
  {
LABEL_32:
    v6 = -1073741811;
    goto LABEL_39;
  }
  v6 = ArbpGetRegistryValue(Handle);
  if ( v6 < 0 )
    goto LABEL_39;
  ExFreePoolWithTag(v4, 0);
  v4 = v26;
LABEL_19:
  ZwClose_0(Handle);
  Handle = 0LL;
  v12 = (char *)v4 + (unsigned int)v4[2] + 32;
  for ( j = v12 + 8; j < &v12[32 * *((unsigned int *)v12 + 1) + 8]; j += 32 )
  {
    v14 = *(_DWORD *)(a1 + 32);
    v28 = *(_OWORD *)j;
    v29 = *((_OWORD *)j + 1);
    if ( BYTE1(v28) == v14 || BYTE1(v28) == 7 && v14 == 3 )
    {
      v6 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, char *, char *))(a1 + 120))(
             &v28,
             &v24,
             &v23,
             v25,
             v25);
      if ( v6 < 0 )
        goto LABEL_39;
      v6 = ArbAddOrdering((unsigned __int16 *)(a1 + 72), v24, v23);
      if ( v6 < 0 )
        goto LABEL_39;
      v6 = ArbPruneOrdering(a1 + 56, v24, v23);
      if ( v6 < 0 )
        goto LABEL_39;
    }
  }
  ExFreePoolWithTag(v4, 0);
  ZwClose_0(KeyHandle);
  KeyHandle = 0LL;
LABEL_28:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v3;
}
