/*
 * XREFs of PpmRegisterSpmSettings @ 0x140675F94
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x140577C68 (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x140675A88 (PpmAllocateQueryTable.c)
 *     PpmProcessSettingsFromQueryTable @ 0x140675D80 (PpmProcessSettingsFromQueryTable.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  char *QueryTable; // rdi
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  const WCHAR *v5; // rax
  __int64 v6; // rcx
  int RegistryValues; // ebx
  unsigned __int8 v8; // si
  const wchar_t *v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  NTSTATUS v15; // ebx
  char v16; // bl
  char v17; // r15
  __int64 v18; // rdx
  __int64 v20; // [rsp+38h] [rbp-99h] BYREF
  const wchar_t *v21; // [rsp+40h] [rbp-91h]
  __int64 v22; // [rsp+48h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-81h] BYREF
  int v24; // [rsp+58h] [rbp-79h] BYREF
  const wchar_t *v25; // [rsp+60h] [rbp-71h]
  int v26; // [rsp+68h] [rbp-69h] BYREF
  const WCHAR *v27; // [rsp+70h] [rbp-61h]
  HANDLE Handle; // [rsp+78h] [rbp-59h] BYREF
  HANDLE v29; // [rsp+80h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES v31; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v32; // [rsp+E8h] [rbp+17h] BYREF

  LODWORD(v22) = -1;
  KeyHandle = 0LL;
  QueryTable = 0LL;
  v24 = 0;
  v25 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"v1";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( v3 )
  {
    v25 = L"v1";
    LOWORD(v24) = 2 * (0x7FFF - v3);
    HIWORD(v24) = v24 + 2;
  }
  v26 = 0;
  v5 = L"Default";
  v27 = 0LL;
  v6 = 0x7FFFLL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v6 )
  {
    v27 = L"Default";
    LOWORD(v26) = 2 * (0x7FFF - v6);
    HIWORD(v26) = v26 + 2;
  }
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    QueryTable = PpmAllocateQueryTable((__int64)&v22);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_37;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v8 = 0;
    if ( PpmProfileCount )
    {
      v9 = L"VideoBatching";
      while ( 1 )
      {
        v10 = (_QWORD *)(PpmProfiles + 2864LL * v8);
        v11 = *(_QWORD *)((char *)v10 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
        v32 = *(_OWORD *)((char *)v10 + 12);
        if ( !v11 )
          v11 = *((_QWORD *)&v32 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
        if ( !v11 )
          break;
        v9 = (const wchar_t *)*v10;
        LODWORD(v20) = 0;
        v21 = 0LL;
        if ( v9 )
        {
          v12 = 0x7FFFLL;
          v13 = v9;
          do
          {
            if ( !*v13 )
              break;
            ++v13;
            --v12;
          }
          while ( v12 );
          goto LABEL_27;
        }
LABEL_29:
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 8u, &ObjectAttributes) >= 0 )
        {
          v31.RootDirectory = Handle;
          v31.Length = 48;
          v31.ObjectName = (PUNICODE_STRING)&v26;
          v31.Attributes = 576;
          *(_OWORD *)&v31.SecurityDescriptor = 0LL;
          v15 = ZwOpenKey(&v29, 8u, &v31);
          ZwClose(Handle);
          if ( v15 >= 0 )
          {
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v29, (__int64)QueryTable, 0LL);
            ZwClose(v29);
            if ( RegistryValues < 0 )
              goto LABEL_37;
            PpmReleaseLock(&PpmPerfPolicyLock);
            v16 = PpmProcessSettingsFromQueryTable(&v32, 0, (__int64)QueryTable);
            v17 = PpmProcessSettingsFromQueryTable(&v32, 1, (__int64)QueryTable);
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            if ( v16 || v17 )
              PpmEnableProfile((__int64)v10, v18);
          }
        }
        ++v8;
        v9 = L"VideoBatching";
        if ( v8 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_36;
      }
      LODWORD(v20) = 0;
      v12 = 0x7FFFLL;
      v21 = 0LL;
      v14 = L"VideoBatching";
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v12;
      }
      while ( v12 );
LABEL_27:
      if ( v12 )
      {
        v21 = v9;
        LOWORD(v20) = 2 * (0x7FFF - v12);
        WORD1(v20) = v20 + 2;
      }
      goto LABEL_29;
    }
LABEL_36:
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_37:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
