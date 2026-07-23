/*
 * XREFs of PsBootPhaseComplete @ 0x14055E510
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14055E7A0 (RtlQueryImageFileExecutionOptions.c)
 *     PspQueryForwardersEnabled @ 0x14055FBE8 (PspQueryForwardersEnabled.c)
 *     PspIsDfssEnabled @ 0x14055FC68 (PspIsDfssEnabled.c)
 */

__int64 __fastcall PsBootPhaseComplete(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v12; // rax
  _BYTE *ServerSiloGlobals; // rbx
  __int64 result; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v23; // [rsp+BCh] [rbp-4Ch]
  int v24; // [rsp+C0h] [rbp-48h]
  int v25; // [rsp+C4h] [rbp-44h]
  _DWORD v26[2]; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v27; // [rsp+D0h] [rbp-38h]
  _DWORD v28[4]; // [rsp+D8h] [rbp-30h] BYREF
  const wchar_t *v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+F0h] [rbp-18h]
  int v31; // [rsp+F8h] [rbp-10h]
  const wchar_t *v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+108h] [rbp+0h]

  LODWORD(v18[0]) = 8650882;
  v18[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\LsaInformation";
  *(_DWORD *)&ValueName.Length = 1703960;
  ValueName.Buffer = L"UACInstalled";
  LODWORD(v20[0]) = 9961622;
  v20[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
  v26[0] = 1310738;
  v27 = L"EnableLUA";
  v29 = L"EnableVirtualization";
  v32 = L"EnableInstallerDetection";
  v28[0] = 1;
  v28[2] = 2752552;
  v30 = 2;
  v31 = 3276848;
  v33 = 3;
  if ( (int)RtlQueryImageFileExecutionOptions(a1, L"DevOverrideEnable", a3, &v16) >= 0 )
  {
    v3 = (PspGlobalFlags ^ (v16 != 0)) & 1;
    PspGlobalFlags ^= v3;
  }
  RtlQueryImageFileExecutionOptions(v3, L"MaxLoaderThreads", v4, &PsDefaultLoaderThreads);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = 0;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && v23 == 4
      && v24 == 4 )
    {
      v5 = v25 != 0;
    }
    ObCloseHandle(KeyHandle, 0);
    KeyHandle = 0LL;
    if ( v5 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v7 = KeyHandle;
      v8 = v28;
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
                  (PUNICODE_STRING)&v26[6 * v10],
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &ResultLength);
          v7 = KeyHandle;
          v9 = v11;
        }
        if ( v9 < 0 || v25 || v23 != 4 || v24 != 4 )
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
  PsCpuFairShareEnabled = PspIsDfssEnabled();
  v12 = xHalTimerWatchdogStop();
  ServerSiloGlobals = PsGetServerSiloGlobals(v12);
  result = PspQueryForwardersEnabled();
  ServerSiloGlobals[960] = result;
  return result;
}
