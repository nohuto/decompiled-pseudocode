/*
 * XREFs of EtwpEnableAutoLoggerProviders @ 0x1405941CC
 * Callers:
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     EtwpEnableTrace @ 0x1404D720C (EtwpEnableTrace.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405945D0 (EtwpGetAutoLoggerProviderFilter.c)
 */

void __fastcall EtwpEnableAutoLoggerProviders(unsigned int a1, const WCHAR *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  wchar_t *PoolWithTag; // rax
  WCHAR *v15; // rbx
  NTSTATUS RegistryValues; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rbx
  __int64 v20; // rdi
  PVOID *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ValueData; // [rsp+5Ch] [rbp-A4h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  const void *v33[2]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v34; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  GUID Guid; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v39[134]; // [rsp+130h] [rbp+30h] BYREF

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a3 + 2 * v5) );
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v9 = v8 + v5;
  v10 = -1LL;
  do
    ++v10;
  while ( asc_1405C78F0[v10] );
  v11 = v10 + v9;
  do
    ++v3;
  while ( aRegistryMachin_190[v3] );
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v24 = 0;
  v12 = 2 * (v3 + v11) + 2;
  v31 = 0LL;
  v32 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  memset(v39, 0, 0x428uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v33[0] = 0LL;
  v33[1] = 0LL;
  v13 = v12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x50777445u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(
            PoolWithTag,
            v13,
            L"%ws%ws\\%ws",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\",
            a3,
            a2) )
    {
      RtlInitUnicodeString(&v34, v15);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v34;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        v39[0] = EtwpQueryRegistryCallback;
        v39[7] = EtwpQueryRegistryCallback;
        v39[3] = &v28;
        v39[14] = EtwpQueryRegistryCallback;
        v39[2] = L"Enabled";
        v39[21] = EtwpQueryRegistryCallback;
        v39[10] = &v24;
        v39[28] = EtwpQueryRegistryCallback;
        v39[9] = L"EnableProperty";
        LODWORD(v39[32]) = 11;
        v39[17] = &v25;
        v39[16] = L"EnableLevel";
        v39[24] = &v26;
        v39[23] = L"EnableFlags";
        v39[31] = &v31;
        v39[30] = L"MatchAnyKeyword";
        v39[38] = &v32;
        v39[35] = EtwpQueryRegistryCallback;
        LODWORD(v39[39]) = 11;
        v39[37] = L"MatchAllKeyword";
        LODWORD(v39[4]) = 4;
        LODWORD(v39[11]) = 4;
        LODWORD(v39[18]) = 4;
        LODWORD(v39[25]) = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v39, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_36;
        if ( !v28 )
        {
LABEL_23:
          if ( RegistryValues >= 0 )
          {
LABEL_24:
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"Status", 4u, &ValueData, 4u);
            goto LABEL_25;
          }
LABEL_36:
          ValueData = RtlNtStatusToDosError(RegistryValues);
          goto LABEL_24;
        }
        v30 = 0LL;
        if ( (_DWORD)v4 )
          LOWORD(v30) = v4;
        else
          LOWORD(v30) = -1;
        EtwpGetAutoLoggerProviderFilter(v15, UnicodeString, v33);
        RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
        if ( RegistryValues < 0 )
          goto LABEL_36;
        v17 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
        if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
          v17 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
        if ( v17 || ((unsigned int)v4 >= 0x40 ? (v23 = 1LL) : (v23 = WmipLoggerContext[v4]), (v23 & 1) != 0) )
        {
LABEL_20:
          v18 = v31;
          if ( !v31 )
          {
            v18 = v26;
            v31 = v26;
          }
          RegistryValues = EtwpEnableTrace(
                             (__int128 *)&Guid,
                             0LL,
                             v30,
                             1,
                             v25,
                             v18,
                             v32,
                             v24,
                             (const void **)UnicodeString,
                             v33);
          goto LABEL_23;
        }
        if ( !*(_QWORD *)(v23 + 176) )
        {
          *(_DWORD *)(v23 + 832) |= 0x4000u;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v19 = UnicodeString;
  v20 = 3LL;
  do
  {
    RtlFreeAnsiString(v19++);
    --v20;
  }
  while ( v20 );
  v21 = (PVOID *)v33;
  v22 = 2LL;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag(*v21, 0);
    ++v21;
    --v22;
  }
  while ( v22 );
}
