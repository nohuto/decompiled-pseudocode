/*
 * XREFs of EtwpEnableAutoLoggerProviders @ 0x140527308
 * Callers:
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     EtwpEnableTrace @ 0x140506134 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140527730 (EtwpGetAutoLoggerProviderFilter.c)
 */

void __fastcall EtwpEnableAutoLoggerProviders(unsigned int a1, const WCHAR *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  wchar_t *PoolWithTag; // rax
  WCHAR *v16; // rbx
  NTSTATUS RegistryValues; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  UNICODE_STRING *v20; // rbx
  __int64 v21; // rdi
  PVOID *v22; // rbx
  __int64 v23; // rdi
  __int64 SiloDriverState; // rax
  __int64 v25; // rdx
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v28; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ValueData; // [rsp+5Ch] [rbp-A4h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  const void *v35[2]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v36; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  GUID Guid; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v41[134]; // [rsp+130h] [rbp+30h] BYREF

  v4 = a1;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(a3 + 2 * v6) );
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = v7 + v6;
  v9 = -1LL;
  do
    ++v9;
  while ( asc_14054FAF0[v9] );
  v10 = v9 + v8;
  v11 = -1LL;
  do
    ++v11;
  while ( aRegistryMachin_189[v11] );
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v12 = 0LL;
  v13 = 2 * (v11 + v10) + 2;
  v33 = 0LL;
  v34 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  memset(v41, 0, 0x428uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v35[0] = 0LL;
  v35[1] = 0LL;
  v14 = v13;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(
            PoolWithTag,
            v14,
            L"%ws%ws\\%ws",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\",
            a3,
            a2) )
    {
      RtlInitUnicodeString(&v36, v16);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v36;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        v41[0] = EtwpQueryRegistryCallback;
        v41[7] = EtwpQueryRegistryCallback;
        v41[3] = &v30;
        v41[14] = EtwpQueryRegistryCallback;
        v41[2] = L"Enabled";
        v41[21] = EtwpQueryRegistryCallback;
        v41[10] = &v26;
        v41[28] = EtwpQueryRegistryCallback;
        v41[9] = L"EnableProperty";
        LODWORD(v41[32]) = 11;
        v41[17] = &v27;
        v41[16] = L"EnableLevel";
        v41[24] = &v28;
        v41[23] = L"EnableFlags";
        v41[31] = &v33;
        v41[30] = L"MatchAnyKeyword";
        v41[38] = &v34;
        v41[35] = EtwpQueryRegistryCallback;
        LODWORD(v41[39]) = 11;
        v41[37] = L"MatchAllKeyword";
        LODWORD(v41[4]) = 4;
        LODWORD(v41[11]) = 4;
        LODWORD(v41[18]) = 4;
        LODWORD(v41[25]) = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v41, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_37;
        if ( !v30 )
        {
LABEL_23:
          if ( RegistryValues >= 0 )
          {
LABEL_24:
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"Status", 4u, &ValueData, 4u);
            goto LABEL_25;
          }
LABEL_37:
          ValueData = RtlNtStatusToDosError(RegistryValues);
          goto LABEL_24;
        }
        v32 = 0LL;
        if ( (_DWORD)v4 )
          LOWORD(v32) = v4;
        else
          LOWORD(v32) = -1;
        EtwpGetAutoLoggerProviderFilter(v16, UnicodeString, v35);
        RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
        if ( RegistryValues < 0 )
          goto LABEL_37;
        v18 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
        if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
          v18 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
        if ( v18
          || ((SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL),
               v12 = SiloDriverState,
               (unsigned int)v4 >= 0x40)
            ? (v25 = 1LL)
            : (v25 = *(_QWORD *)(SiloDriverState + 8 * v4 + 912)),
              (v25 & 1) != 0) )
        {
LABEL_20:
          v19 = v33;
          if ( !v33 )
          {
            v19 = v28;
            v33 = v28;
          }
          RegistryValues = EtwpEnableTrace(
                             (__int128 *)&Guid,
                             0LL,
                             v32,
                             1,
                             v27,
                             v19,
                             v34,
                             v26,
                             (const void **)UnicodeString,
                             v35);
          goto LABEL_23;
        }
        if ( !*(_QWORD *)(v25 + 176) )
        {
          _InterlockedOr((volatile signed __int32 *)(v25 + 832), 0x4000u);
          goto LABEL_20;
        }
      }
    }
  }
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v20 = UnicodeString;
  v21 = 3LL;
  do
  {
    RtlFreeAnsiString(v20++);
    --v21;
  }
  while ( v21 );
  v22 = (PVOID *)v35;
  v23 = 2LL;
  do
  {
    if ( *v22 )
      ExFreePoolWithTag(*v22, 0);
    ++v22;
    --v23;
  }
  while ( v23 );
  if ( v12 )
    PsDereferenceMonitorContextServerSilo(v12);
}
