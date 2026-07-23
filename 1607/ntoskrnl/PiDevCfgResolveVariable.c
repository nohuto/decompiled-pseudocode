/*
 * XREFs of PiDevCfgResolveVariable @ 0x14063E438
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FE10 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640CAC (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640E80 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpStringToDwordValue @ 0x1401CF320 (PnpStringToDwordValue.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E7E4 (PiDevCfgResolveVariableConstant.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, UNICODE_STRING **a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  __int64 (__fastcall *v6)(__int64, HANDLE, UNICODE_STRING *); // r12
  int v7; // r15d
  NTSTATUS v8; // eax
  ULONG v9; // ecx
  const UNICODE_STRING **v10; // r13
  const UNICODE_STRING *v11; // rsi
  UNICODE_STRING *v12; // rdi
  void *v13; // rax
  NTSTATUS v14; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t **v17; // r12
  const wchar_t *v18; // rax
  unsigned int v19; // edi
  const wchar_t **v20; // r15
  __int64 v21; // rdi
  wchar_t **v22; // rax
  UNICODE_STRING *PoolWithTag; // rax
  const UNICODE_STRING ***v24; // rax
  int v25; // eax
  _WORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // eax
  wchar_t *v29; // rax
  wchar_t *v30; // rax
  _QWORD *v31; // rcx
  PVOID *Buffer; // rax
  ULONG HashValue; // [rsp+28h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  void *Src; // [rsp+40h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  const wchar_t *v42; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a1;
  v4 = 0;
  KeyHandle = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v7 = 0;
  LODWORD(v42) = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  v9 = HashValue;
  if ( v8 < 0 )
    v9 = 0;
  v10 = (const UNICODE_STRING **)(*(_QWORD *)(v3 + 24) + 16LL * (v9 % 0x7F));
  v11 = *v10;
  if ( *v10 != (const UNICODE_STRING *)v10 )
  {
    do
    {
      v12 = (UNICODE_STRING *)v11;
      if ( RtlEqualUnicodeString(&DestinationString, v11 + 1, 1u) )
        break;
      v11 = *(const UNICODE_STRING **)&v11->Length;
      v12 = 0LL;
    }
    while ( v11 != (const UNICODE_STRING *)v10 );
    if ( v12 )
    {
      if ( *(_DWORD *)&v12[2].Length == -1 )
        return (unsigned int)-1073741823;
      goto LABEL_53;
    }
    v3 = a1;
  }
  v13 = *(void **)(v3 + 16);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = v13;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v14;
  if ( v14 >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_1406EEB64, 0, &P);
    v5 = (unsigned int *)P;
    v4 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( PnpValidateRegistryString(P) )
      {
        v17 = (const wchar_t **)&off_1406EB670;
        v18 = (const wchar_t *)((char *)v5 + v5[2]);
        v42 = v18;
        v19 = 0;
        while ( wcsicmp(*v17, v18) )
        {
          v18 = v42;
          ++v19;
          v17 += 2;
          if ( v19 >= 8 )
            goto LABEL_26;
        }
        v6 = (__int64 (__fastcall *)(__int64, HANDLE, UNICODE_STRING *))*(&funcs_14063E706 + 2 * v19);
        if ( v6 )
          goto LABEL_36;
LABEL_26:
        v4 = -1073741772;
      }
      else
      {
        v4 = -1073741823;
      }
    }
    goto LABEL_16;
  }
  if ( v14 == -1073741772 )
  {
    v4 = 0;
    v20 = (const wchar_t **)&off_1406EB100;
    v21 = 0LL;
    while ( wcsicmp(*v20, a2) )
    {
      v21 = (unsigned int)(v21 + 1);
      v20 += 3;
      if ( (unsigned int)v21 >= 4 )
        goto LABEL_31;
    }
    v22 = &(&off_1406EB100)[3 * v21];
    if ( v22 )
    {
      v7 = *((_DWORD *)v22 + 4);
      Src = v22[1];
      goto LABEL_36;
    }
LABEL_31:
    if ( !PnpStringToDwordValue((__int64)a2, (unsigned int *)&v42) )
    {
      v4 = -1073741772;
      goto LABEL_18;
    }
    v7 = (int)v42;
LABEL_36:
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
LABEL_16:
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      goto LABEL_18;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    v24 = (const UNICODE_STRING ***)v10[1];
    if ( *v24 != v10 )
      __fastfail(3u);
    *(_QWORD *)&v12->Length = v10;
    v12->Buffer = (wchar_t *)v24;
    *v24 = (const UNICODE_STRING **)v12;
    v10[1] = v12;
    if ( !RtlCreateUnicodeString(v12 + 1, a2) )
      goto LABEL_41;
    if ( v6 )
    {
      *(_DWORD *)&v12[2].Length = -1;
      v25 = v6(a1, KeyHandle, v12);
      v4 = v25;
      if ( v25 < 0 )
      {
        if ( v25 == -1073741772 )
          v4 = -1073741823;
        goto LABEL_54;
      }
      goto LABEL_53;
    }
    v26 = Src;
    if ( Src )
    {
      *(_DWORD *)&v12[2].Length = 1;
      v27 = -1LL;
      do
        ++v27;
      while ( v26[v27] );
      v28 = 2 * v27 + 2;
      *(_DWORD *)(&v12[2].MaximumLength + 1) = v28;
      v29 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
      v12[2].Buffer = v29;
      if ( v29 )
      {
        memmove(v29, v26, *(unsigned int *)(&v12[2].MaximumLength + 1));
LABEL_53:
        *a3 = v12;
        v12 = 0LL;
LABEL_54:
        if ( v12 )
        {
          v31 = *(_QWORD **)&v12->Length;
          Buffer = (PVOID *)v12->Buffer;
          if ( *(UNICODE_STRING **)(*(_QWORD *)&v12->Length + 8LL) != v12 || *Buffer != v12 )
            __fastfail(3u);
          *Buffer = v31;
          v31[1] = Buffer;
          ExFreePoolWithTag(v12, 0);
        }
        goto LABEL_16;
      }
    }
    else
    {
      *(_DWORD *)&v12[2].Length = 4;
      *(_DWORD *)(&v12[2].MaximumLength + 1) = 4;
      v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
      v12[2].Buffer = v30;
      if ( v30 )
      {
        *(_DWORD *)v30 = v7;
        goto LABEL_53;
      }
    }
LABEL_41:
    v4 = -1073741670;
    goto LABEL_54;
  }
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
