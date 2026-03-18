/*
 * XREFs of PiDevCfgResolveVariable @ 0x140689AFC
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14068B800 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14068C788 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14068C9D8 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     wcstoul @ 0x1401740E0 (wcstoul.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140439AA0 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     PiDevCfgResolveVariableConstant @ 0x140689ED0 (PiDevCfgResolveVariableConstant.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, __int64 a2, UNICODE_STRING **a3)
{
  unsigned int v3; // edi
  __int64 v5; // r13
  unsigned int v6; // ebx
  PVOID v7; // rsi
  NTSTATUS v8; // eax
  unsigned int v9; // ecx
  UNICODE_STRING **v10; // r12
  UNICODE_STRING *v11; // r14
  UNICODE_STRING *v12; // rdi
  NTSTATUS v13; // eax
  NTSTATUS RegistryValue; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  const wchar_t **v18; // r13
  const wchar_t **v19; // r13
  const wchar_t *v20; // rcx
  int v21; // r8d
  wchar_t **v22; // rax
  unsigned int v23; // r13d
  UNICODE_STRING *PoolWithTag; // rax
  int v26; // eax
  _WORD *v27; // r14
  __int64 v28; // rax
  unsigned int v29; // eax
  wchar_t *v30; // rax
  wchar_t *v31; // rax
  UNICODE_STRING **v32; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-49h] BYREF
  PVOID P; // [rsp+28h] [rbp-41h] BYREF
  __int64 (__fastcall *v35)(__int64, HANDLE, UNICODE_STRING *); // [rsp+30h] [rbp-39h]
  void *Src; // [rsp+38h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t *HashValue; // [rsp+D8h] [rbp+6Fh] BYREF
  UNICODE_STRING **v41; // [rsp+E0h] [rbp+77h]

  v41 = a3;
  v3 = 0;
  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  v35 = 0LL;
  Src = 0LL;
  if ( !*(_WORD *)a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
  v9 = (unsigned int)HashValue;
  if ( v8 < 0 )
    v9 = 0;
  v10 = (UNICODE_STRING **)(*(_QWORD *)(v5 + 24) + 16LL * (v9 % 0x7F));
  v11 = *v10;
  if ( *v10 != (UNICODE_STRING *)v10 )
  {
    do
    {
      v12 = v11;
      if ( RtlEqualUnicodeString(&DestinationString, v11 + 1, 1u) )
        break;
      v11 = *(UNICODE_STRING **)&v11->Length;
      v12 = 0LL;
    }
    while ( v11 != (UNICODE_STRING *)v10 );
    v5 = a1;
    if ( v12 )
    {
LABEL_57:
      *v41 = v12;
      v12 = 0LL;
LABEL_58:
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      goto LABEL_60;
    }
    v3 = 0;
  }
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = *(HANDLE *)(v5 + 16);
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v13;
  if ( v13 >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140727324, 0, &P);
    v7 = P;
    v6 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_60;
    if ( *((_DWORD *)P + 1) != 1
      || (v15 = *((unsigned int *)P + 3), (unsigned int)v15 < 2)
      || (v16 = *((unsigned int *)P + 2), *(_WORD *)((char *)P + 2 * (v15 >> 1) + v16 - 2)) )
    {
      v6 = -1073741823;
      goto LABEL_60;
    }
    v17 = (const wchar_t *)((char *)P + v16);
    HashValue = (wchar_t *)((char *)P + v16);
    v18 = (const wchar_t **)&off_140723580;
    while ( wcsicmp(*v18, v17) )
    {
      v17 = HashValue;
      ++v3;
      v18 += 2;
      if ( v3 >= 8 )
        goto LABEL_20;
    }
    v35 = (__int64 (__fastcall *)(__int64, HANDLE, UNICODE_STRING *))*(&funcs_140689DE3 + 2 * v3);
    if ( !v35 )
    {
LABEL_20:
      v6 = -1073741772;
      goto LABEL_60;
    }
    v23 = 0;
LABEL_39:
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
LABEL_60:
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      goto LABEL_35;
    }
    if ( !RtlCreateUnicodeString(PoolWithTag + 1, (PCWSTR)a2) )
      goto LABEL_42;
    if ( v35 )
    {
      v26 = v35(a1, KeyHandle, v12);
      v6 = v26;
      if ( v26 < 0 )
      {
        if ( v26 == -1073741772 )
          v6 = -1073741823;
        goto LABEL_58;
      }
      goto LABEL_54;
    }
    v27 = Src;
    if ( Src )
    {
      *(_DWORD *)&v12[2].Length = 1;
      v28 = -1LL;
      do
        ++v28;
      while ( v27[v28] );
      v29 = 2 * v28 + 2;
      *(_DWORD *)(&v12[2].MaximumLength + 1) = v29;
      v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v29, 0x63647050u);
      v12[2].Buffer = v30;
      if ( v30 )
      {
        memmove(v30, v27, *(unsigned int *)(&v12[2].MaximumLength + 1));
LABEL_54:
        v32 = (UNICODE_STRING **)v10[1];
        *(_QWORD *)&v12->Length = v10;
        v12->Buffer = (wchar_t *)v32;
        if ( *v32 != (UNICODE_STRING *)v10 )
          __fastfail(3u);
        *v32 = v12;
        v10[1] = v12;
        goto LABEL_57;
      }
    }
    else
    {
      *(_DWORD *)&v12[2].Length = 4;
      *(_DWORD *)(&v12[2].MaximumLength + 1) = 4;
      v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
      v12[2].Buffer = v31;
      if ( v31 )
      {
        *(_DWORD *)v31 = v23;
        goto LABEL_54;
      }
    }
LABEL_42:
    v6 = -1073741670;
    goto LABEL_58;
  }
  if ( v13 == -1073741772 )
  {
    v6 = 0;
    v19 = (const wchar_t **)&off_1407230E0;
    while ( wcsicmp(*v19, (const wchar_t *)a2) )
    {
      ++v3;
      v19 += 3;
      if ( v3 >= 4 )
        goto LABEL_26;
    }
    v22 = &(&off_1407230E0)[3 * v3];
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 + 4);
      Src = v22[1];
      goto LABEL_39;
    }
LABEL_26:
    if ( *(_WORD *)a2 != 48 || ((*(_WORD *)(a2 + 2) - 88) & 0xFFDF) != 0 )
    {
      v21 = 10;
      v20 = (const wchar_t *)a2;
    }
    else
    {
      v20 = (const wchar_t *)(a2 + 4);
      v21 = 16;
    }
    v23 = wcstoul(v20, &HashValue, v21);
    if ( HashValue && !*HashValue )
      goto LABEL_39;
    v6 = -1073741772;
  }
LABEL_35:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
