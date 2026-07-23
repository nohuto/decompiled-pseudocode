/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x1406373D4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D224 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  bool v8; // r12
  int v9; // eax
  wchar_t *v10; // r15
  int v11; // eax
  wchar_t *v12; // r13
  const wchar_t *v13; // rbx
  __int64 v14; // rax
  const wchar_t *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  wchar_t *v18; // r14
  int v19; // eax
  wchar_t *v20; // rsi
  const wchar_t **v21; // rax
  __int64 v22; // rcx
  char v23; // r15
  char v24; // r13
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rbx
  __int64 v27; // rax
  const wchar_t *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v32[8]; // [rsp+20h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  __int64 v35; // [rsp+38h] [rbp-41h] BYREF
  const wchar_t **v36; // [rsp+40h] [rbp-39h] BYREF
  int v37; // [rsp+48h] [rbp-31h] BYREF
  const wchar_t *v38; // [rsp+50h] [rbp-29h]
  wchar_t *v39; // [rsp+58h] [rbp-21h] BYREF
  wchar_t *v40; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  char v43; // [rsp+F8h] [rbp+7Fh]

  v37 = 8913030;
  Handle = 0LL;
  v38 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  v39 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_82;
    }
    v37 = 6422624;
    v38 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
    goto LABEL_5;
  v37 = 1703960;
  v38 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_5;
  v43 = 0;
  v8 = 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", v32) >= 0 && v32[0] )
    v8 = (*(_BYTE *)(a1 + 560) & 0x10) != 0;
  v9 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &v39);
  v10 = v39;
  if ( v9 < 0 )
    v10 = 0LL;
  v39 = v10;
  v11 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &v40);
  v12 = v40;
  if ( v11 < 0 )
    v12 = 0LL;
  v40 = v12;
  if ( a3 )
  {
    if ( v10 )
    {
      v13 = v10;
      if ( *v10 )
      {
        while ( wcsicmp(v13, a3) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          v13 += v14 + 1;
          if ( !*v13 )
            goto LABEL_25;
        }
        v43 = 1;
      }
      goto LABEL_25;
    }
    if ( v12 )
    {
LABEL_25:
      if ( v12 )
      {
        v15 = v12;
        if ( *v12 )
        {
          while ( wcsicmp(v15, a3) )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v15[v16] );
            v15 += v16 + 1;
            if ( !*v15 )
              goto LABEL_33;
          }
          v8 = 1;
        }
      }
    }
  }
LABEL_33:
  v17 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v35);
  v18 = (wchar_t *)v35;
  if ( v17 < 0 )
    v18 = 0LL;
  v19 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v36);
  v20 = (wchar_t *)v36;
  if ( v19 < 0 )
    v20 = 0LL;
  if ( v18 || v20 )
  {
    v21 = (const wchar_t **)(a2 + 32);
    v22 = 2LL;
    v36 = (const wchar_t **)(a2 + 32);
    v23 = 0;
    v35 = 2LL;
    v24 = 0;
    do
    {
      v25 = *v21;
      if ( *v21 && *v25 )
      {
        do
        {
          if ( v18 )
          {
            if ( !v24 )
            {
              v26 = v18;
              if ( *v18 )
              {
                while ( wcsicmp(v26, v25) )
                {
                  v27 = -1LL;
                  do
                    ++v27;
                  while ( v26[v27] );
                  v26 += v27 + 1;
                  if ( !*v26 )
                    goto LABEL_51;
                }
                v24 = 1;
                v43 = 1;
              }
            }
          }
LABEL_51:
          if ( v20 )
          {
            if ( !v23 )
            {
              v28 = v20;
              if ( *v20 )
              {
                while ( wcsicmp(v28, v25) )
                {
                  v29 = -1LL;
                  do
                    ++v29;
                  while ( v28[v29] );
                  v28 += v29 + 1;
                  if ( !*v28 )
                    goto LABEL_60;
                }
                v23 = 1;
                v8 = 1;
              }
            }
          }
LABEL_60:
          v30 = -1LL;
          do
            ++v30;
          while ( v25[v30] );
          v25 += v30 + 1;
        }
        while ( *v25 );
        v21 = v36;
        v22 = v35;
      }
      v21 += 2;
      --v22;
      v36 = v21;
      v35 = v22;
    }
    while ( v22 );
    v10 = v39;
    v12 = v40;
  }
  if ( v8 || !v43 && (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", v32) >= 0 && v32[0] && (a3 || !v10) )
    v7 = -1073740959;
  else
    v7 = 0;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
LABEL_82:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
