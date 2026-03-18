/*
 * XREFs of PsBootPhaseComplete @ 0x14051ED68
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PspIsDfssEnabled @ 0x14051E420 (PspIsDfssEnabled.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14051F04C (RtlQueryImageFileExecutionOptions.c)
 */

int __fastcall PsBootPhaseComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // bl
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  unsigned int *v8; // rdi
  int v9; // edx
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  char IsDfssEnabled; // al
  int result; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v20; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING v21; // [rsp+A8h] [rbp-60h] BYREF
  int v22; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v23; // [rsp+C0h] [rbp-48h]
  int v24; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v25; // [rsp+D0h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v27; // [rsp+DCh] [rbp-2Ch]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  _DWORD v30[2]; // [rsp+E8h] [rbp-20h] BYREF
  const wchar_t *v31; // [rsp+F0h] [rbp-18h]
  _DWORD v32[4]; // [rsp+F8h] [rbp-10h] BYREF
  const wchar_t *v33; // [rsp+108h] [rbp+0h]
  int v34; // [rsp+110h] [rbp+8h]
  int v35; // [rsp+118h] [rbp+10h]
  const wchar_t *v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+128h] [rbp+20h]

  v24 = 8650882;
  v25 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  *(_DWORD *)&ValueName.Length = 1703960;
  ValueName.Buffer = L"UACInstalled";
  v22 = 9961622;
  v23 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  v30[0] = 1310738;
  v31 = L"EnableLUA";
  v33 = L"EnableVirtualization";
  v36 = L"EnableInstallerDetection";
  v32[0] = 1;
  v20 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\OneCore";
  v21.Buffer = L"OCFW_Enabled";
  v32[2] = 2752552;
  v34 = 2;
  v35 = 3276848;
  v37 = 3;
  v19 = 7733364;
  *(_DWORD *)&v21.Length = 1703960;
  if ( (int)RtlQueryImageFileExecutionOptions(a1, L"DevOverrideEnable", a3, &v16) >= 0 )
  {
    v3 = (PspGlobalFlags ^ (v16 != 0)) & 1;
    PspGlobalFlags ^= v3;
  }
  RtlQueryImageFileExecutionOptions(v3, L"MaxLoaderThreads", v4, &PsDefaultLoaderThreads);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && v27 == 4
      && v28 == 4 )
    {
      v5 = v29 != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v5 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v7 = KeyHandle;
      v8 = v32;
      v9 = v6;
      v10 = 0;
      if ( v6 < 0 )
        v7 = 0LL;
      KeyHandle = v7;
      do
      {
        if ( v7 )
        {
          v11 = ZwQueryValueKey(
                  v7,
                  (PUNICODE_STRING)&v30[6 * v10],
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &ResultLength);
          v7 = KeyHandle;
          v9 = v11;
        }
        if ( v9 < 0 || v29 || v27 != 4 || v28 != 4 )
        {
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, *v8);
          v7 = KeyHandle;
        }
        ++v10;
        v8 += 6;
      }
      while ( v10 < 3 );
      if ( v7 )
        ObCloseHandle(v7, 0);
    }
  }
  IsDfssEnabled = PspIsDfssEnabled();
  PspGlobalFlags &= ~4u;
  PsCpuFairShareEnabled = IsDfssEnabled;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &v21, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && v27 == 4
      && v28 == 4 )
    {
      if ( v29 )
        PspGlobalFlags |= 4u;
    }
    return ObCloseHandle(KeyHandle, 0);
  }
  return result;
}
