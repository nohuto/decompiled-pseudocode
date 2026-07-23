/*
 * XREFs of EtwpEnableAutoLoggerProviders @ 0x140563D20
 * Callers:
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpEnableTrace @ 0x14048E2B8 (EtwpEnableTrace.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404C3EE8 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14056413C (EtwpGetAutoLoggerProviderFilter.c)
 */

void __fastcall EtwpEnableAutoLoggerProviders(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // rbx
  NTSTATUS RegistryValues; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  UNICODE_STRING *v17; // rbx
  __int64 v18; // rdi
  PVOID *v19; // rbx
  __int64 v20; // rdi
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG ValueData; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  const void *v30[2]; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v31; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  GUID Guid; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING UnicodeString[3]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v36[134]; // [rsp+140h] [rbp+40h] BYREF

  v4 = -1LL;
  v5 = a2;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a4 + 2 * v7) );
  do
    ++v4;
  while ( a3[v4] );
  v21 = 0;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  v10 = 2 * (v4 + v7) + 106;
  v27 = 0LL;
  v29 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v36, 0, 0x428uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v30[0] = 0LL;
  v30[1] = 0LL;
  v11 = v10;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(
            PoolWithTag,
            v11,
            L"%ws%ws\\%ws",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\",
            a4,
            a3) )
    {
      RtlInitUnicodeString(&v31, v13);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v31;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        v36[0] = EtwpQueryRegistryCallback;
        v36[7] = EtwpQueryRegistryCallback;
        v36[3] = &v21;
        v36[14] = EtwpQueryRegistryCallback;
        v36[2] = L"Enabled";
        v36[21] = EtwpQueryRegistryCallback;
        v36[10] = &v23;
        v36[28] = EtwpQueryRegistryCallback;
        v36[9] = L"EnableProperty";
        LODWORD(v36[32]) = 11;
        v36[17] = &v24;
        v36[16] = L"EnableLevel";
        v36[24] = &v22;
        v36[23] = L"EnableFlags";
        v36[31] = &v27;
        v36[30] = L"MatchAnyKeyword";
        v36[38] = &v29;
        v36[35] = EtwpQueryRegistryCallback;
        LODWORD(v36[39]) = 11;
        v36[37] = L"MatchAllKeyword";
        LODWORD(v36[4]) = 4;
        LODWORD(v36[11]) = 4;
        LODWORD(v36[18]) = 4;
        LODWORD(v36[25]) = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v36, 0LL);
        if ( RegistryValues >= 0 )
        {
          if ( v21 )
          {
            v28 = 0LL;
            if ( (_DWORD)v5 )
              LOWORD(v28) = v5;
            else
              LOWORD(v28) = -1;
            EtwpGetAutoLoggerProviderFilter(v13, UnicodeString, v30);
            RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
            if ( RegistryValues < 0 )
              goto LABEL_28;
            if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL && *(_QWORD *)Guid.Data4 == 0x237F9BCF09AEC8AFLL
              || *(_QWORD *)&Guid.Data1 == s_ProviderThreatInt && *(_QWORD *)Guid.Data4 == 0x44D38D4D0F04D8F1LL )
            {
              if ( a1 != EtwpHostSiloState )
                goto LABEL_30;
              v15 = (unsigned int)v5 >= 0x40 ? 1LL : *(_QWORD *)(a1 + 8 * v5 + 912);
              if ( (v15 & 1) == 0 )
              {
                if ( *(_QWORD *)(v15 + 160) )
                  goto LABEL_30;
                _InterlockedOr((volatile signed __int32 *)(v15 + 816), 0x4000u);
              }
            }
            v16 = v27;
            if ( !v27 )
            {
              v16 = v22;
              v27 = v22;
            }
            RegistryValues = EtwpEnableTrace(
                               a1,
                               (__int128 *)&Guid,
                               0LL,
                               v28,
                               1,
                               v24,
                               v16,
                               v29,
                               v23,
                               (const void **)UnicodeString,
                               v30);
          }
          if ( RegistryValues >= 0 )
          {
LABEL_29:
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"Status", 4u, &ValueData, 4u);
            goto LABEL_30;
          }
        }
LABEL_28:
        ValueData = RtlNtStatusToDosError(RegistryValues);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v17 = UnicodeString;
  v18 = 3LL;
  do
  {
    RtlFreeAnsiString(v17++);
    --v18;
  }
  while ( v18 );
  v19 = (PVOID *)v30;
  v20 = 2LL;
  do
  {
    if ( *v19 )
      ExFreePoolWithTag(*v19, 0);
    ++v19;
    --v20;
  }
  while ( v20 );
}
