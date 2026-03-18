/*
 * XREFs of EtwpStartAutoLogger @ 0x1404A887C
 * Callers:
 *     PerfDiagpRestartCKCL @ 0x140558A0C (PerfDiagpRestartCKCL.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400CF2BC (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcscmp @ 0x140173BB8 (wcscmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     EtwpParsePoolTagFilter @ 0x1406E9890 (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwpStartAutoLogger(wchar_t *SourceString, NTSTRSAFE_PCWSTR pszSrc, _DWORD *a3, __int64 a4)
{
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // rdi
  NTSTATUS RegistryValues; // edi
  char *v13; // rax
  _WORD *v14; // rsi
  _WORD *v15; // r15
  int v16; // r13d
  char *v17; // r14
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r12d
  unsigned __int16 v21; // si
  int v22; // eax
  GUID v23; // xmm0
  NTSTATUS started; // eax
  _WORD *v25; // rdx
  int v26; // eax
  const WCHAR *v27; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  _WORD *v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  char *v34; // r15
  __int64 v35; // r9
  char *v36; // r9
  ULONG v37; // eax
  _WORD v38[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v41; // [rsp+3Ch] [rbp-C4h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG ValueData; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  char *v53; // [rsp+A0h] [rbp-60h]
  unsigned int v54; // [rsp+A8h] [rbp-58h] BYREF
  char *v55; // [rsp+B0h] [rbp-50h]
  wchar_t *Str1; // [rsp+B8h] [rbp-48h]
  _DWORD *v57; // [rsp+C0h] [rbp-40h]
  unsigned int v58; // [rsp+C8h] [rbp-38h] BYREF
  char *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  GUID Guid; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v63[134]; // [rsp+120h] [rbp+20h] BYREF

  Str1 = SourceString;
  v60 = a4;
  v57 = a3;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v6 = 0LL;
  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  *(_QWORD *)&Guid.Data2 = 0LL;
  *(_DWORD *)&Guid.Data4[4] = 0;
  v7 = -1LL;
  v48 = 1;
  v8 = -1LL;
  DestinationString.Length = 0;
  KeyHandle = 0LL;
  ValueData = 0;
  v43 = 0;
  GuidString.Length = 0;
  UnicodeString.Length = 0;
  v39 = 0;
  v44 = 0;
  v40 = 0;
  v38[0] = 0;
  v49 = 0;
  v50 = 100;
  v41 = 0;
  Guid.Data1 = 0;
  *a3 = 0;
  do
    ++v8;
  while ( pszSrc[v8] );
  do
    ++v7;
  while ( aRegistryMachin_190[v7] );
  v9 = (unsigned int)(2 * (v7 + v8) + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_59;
  RtlStringCbCopyW(PoolWithTag, (unsigned int)v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
  RtlStringCbCatW(v11, (unsigned int)v9, pszSrc);
  RtlInitUnicodeString(&DestinationString, v11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues < 0 )
    goto LABEL_35;
  v13 = (char *)ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
  v6 = v13;
  if ( !v13 )
    goto LABEL_59;
  memset(v13, 0, 0x504uLL);
  *((_DWORD *)v6 + 11) = 0x20000;
  *((_DWORD *)v6 + 12) = 4;
  RtlInitUnicodeString((PUNICODE_STRING)v6 + 9, SourceString);
  *((_DWORD *)v6 + 18) = 0x80000000;
  *((_WORD *)v6 + 36) = 176;
  v14 = v6 + 180;
  v6[74] = -1;
  v15 = v6 + 224;
  *((_DWORD *)v6 + 44) = 1;
  v16 = 180;
  v17 = v6 + 1252;
  memset(v63, 0, 0x428uLL);
  LODWORD(v63[4]) = 4;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v63[0] = &EtwpQueryRegistryCallback;
  v63[3] = &v43;
  v63[2] = L"Start";
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v63, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_35;
  if ( !v43 )
    goto LABEL_35;
  v63[10] = v6 + 48;
  LODWORD(v63[4]) = 4;
  v63[0] = &EtwpQueryRegistryCallback;
  v63[3] = v6 + 76;
  v63[2] = L"FlushThreshold";
  v63[7] = &EtwpQueryRegistryCallback;
  v63[9] = L"BufferSize";
  LODWORD(v63[11]) = 4;
  v63[17] = v6 + 52;
  v63[16] = L"MinimumBuffers";
  v63[24] = v6 + 68;
  v63[23] = L"FlushTimer";
  v63[31] = v6 + 56;
  v63[30] = L"MaximumBuffers";
  v63[38] = v6 + 128;
  v63[37] = L"FileName";
  v63[40] = v38;
  v59 = v6 + 184;
  v63[45] = &v58;
  v63[44] = L"EnableKernelFlags";
  v55 = v6 + 228;
  v63[52] = &v54;
  v63[51] = L"StackWalkingFilter";
  v63[59] = v6 + 40;
  v63[58] = L"ClockType";
  v63[61] = &v48;
  v63[66] = v6 + 60;
  v63[65] = L"MaxFileSize";
  v63[68] = &v50;
  v63[73] = v6 + 64;
  v63[14] = &EtwpQueryRegistryCallback;
  LODWORD(v63[18]) = 4;
  v63[21] = &EtwpQueryRegistryCallback;
  LODWORD(v63[25]) = 4;
  v63[28] = &EtwpQueryRegistryCallback;
  LODWORD(v63[32]) = 4;
  v63[35] = &EtwpQueryRegistryCallback;
  LODWORD(v63[39]) = 1;
  v58 = 40;
  v63[42] = &EtwpQueryRegistryCallback;
  LODWORD(v63[46]) = 3;
  v54 = 1024;
  v63[49] = &EtwpQueryRegistryCallback;
  LODWORD(v63[53]) = 3;
  v63[56] = &EtwpQueryRegistryCallback;
  LODWORD(v63[60]) = 4;
  LODWORD(v63[62]) = 4;
  v63[63] = &EtwpQueryRegistryCallback;
  LODWORD(v63[67]) = 4;
  LODWORD(v63[69]) = 4;
  v63[70] = &EtwpQueryRegistryCallback;
  v63[72] = L"LogFileMode";
  v63[75] = &v49;
  v63[80] = &v44;
  v63[79] = L"DisableRealtimePersistence";
  v63[87] = &GuidString;
  v63[86] = L"Guid";
  v63[89] = v38;
  v63[94] = v6 + 96;
  v63[93] = L"FileCounter";
  v63[101] = &v39;
  v63[100] = L"FileMax";
  v63[108] = &UnicodeString;
  v63[107] = L"PoolTagFilter";
  v63[110] = v38;
  v53 = v6 + 1276;
  v63[115] = &v52;
  v63[114] = L"StackCaching";
  v63[122] = &v40;
  LODWORD(v63[74]) = 4;
  LODWORD(v63[76]) = 4;
  v63[77] = &EtwpQueryRegistryCallback;
  LODWORD(v63[81]) = 4;
  v63[84] = &EtwpQueryRegistryCallback;
  LODWORD(v63[88]) = 1;
  v63[91] = &EtwpQueryRegistryCallback;
  LODWORD(v63[95]) = 4;
  v63[98] = &EtwpQueryRegistryCallback;
  LODWORD(v63[102]) = 4;
  v63[105] = &EtwpQueryRegistryCallback;
  LODWORD(v63[109]) = 1;
  v63[112] = &EtwpQueryRegistryCallback;
  LODWORD(v63[116]) = 3;
  v63[119] = &EtwpQueryRegistryCallback;
  LODWORD(v63[123]) = 4;
  v63[121] = L"EnableSecurityProvider";
  v52 = 8;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v63, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_35;
  v18 = 1LL;
  v19 = *((_DWORD *)v6 + 28) | 2;
  *((_DWORD *)v6 + 28) = v19;
  if ( !v44 )
    *((_DWORD *)v6 + 28) = v19 | 1;
  v20 = v58 >> 2;
  if ( (unsigned __int16)(v58 >> 2) )
  {
    *((_WORD *)v6 + 91) = 1;
    *v14 = v20 + 1;
    ++*((_WORD *)v6 + 89);
    *((_WORD *)v6 + 88) += *v14;
    v16 = 4 * (unsigned __int16)*v14 + 180;
  }
  if ( v54 )
  {
    v33 = v54 >> 2;
    if ( (v54 & 3) != 0 )
      LOWORD(v33) = v33 + 1;
    *((_WORD *)v6 + 113) = 3;
    *v15 = v33 + 1;
    ++*((_WORD *)v6 + 89);
    *((_WORD *)v6 + 88) += *v15;
    v16 += 4 * (unsigned __int16)*v15;
    if ( (_WORD)v20 )
      v14 += 2 * (unsigned __int16)*v14;
    if ( v14 != v15 )
      memmove(v14, v6 + 224, 4LL * (unsigned __int16)v33 + 4);
  }
  if ( UnicodeString.Buffer )
  {
    v34 = &v6[4 * *((unsigned __int16 *)v6 + 88) + 176];
    v21 = EtwpParsePoolTagFilter(&UnicodeString, v6 + 1256, v18);
    if ( v21 )
    {
      *((_WORD *)v6 + 627) = 4;
      *(_WORD *)v17 = v21 + 1;
      ++*((_WORD *)v6 + 89);
      *((_WORD *)v6 + 88) += *(_WORD *)v17;
      v16 += 4 * *(unsigned __int16 *)v17;
      if ( v34 != v17 )
        memmove(v34, v6 + 1252, 4LL * v21 + 4);
    }
  }
  else
  {
    v21 = v41;
  }
  if ( v52 == 8 )
  {
    v35 = *((unsigned __int16 *)v6 + 88);
    *((_DWORD *)v6 + 318) = 327683;
    ++*((_WORD *)v6 + 89);
    *((_WORD *)v6 + 88) += *((_WORD *)v6 + 636);
    v36 = &v6[4 * v35 + 176];
    v16 += 4 * *((unsigned __int16 *)v6 + 636);
    if ( v36 != v6 + 1272 )
      memmove(v36, v6 + 1272, 0xCuLL);
  }
  if ( !(_WORD)v20 && !v54 && !v52 && !v21 )
    *((_DWORD *)v6 + 18) = 0;
  v22 = *((_DWORD *)v6 + 16);
  if ( ((v22 & 0x500) == 0 || (v22 & 0x200) != 0) && !*((_QWORD *)v6 + 17) )
  {
    if ( RtlCreateUnicodeString((PUNICODE_STRING)v6 + 8, L"%SystemRoot%") )
    {
      RegistryValues = 0;
      goto LABEL_25;
    }
LABEL_59:
    RegistryValues = -1073741801;
    goto LABEL_35;
  }
LABEL_25:
  if ( v40 )
  {
    v32 = *((_DWORD *)v6 + 16);
    if ( (v32 & 0x80u) == 0 || (v32 & 0x100) == 0 || *((_QWORD *)v6 + 17) )
      RegistryValues = -1073741790;
    else
      *((_DWORD *)v6 + 28) |= 0x8004000u;
  }
  if ( RegistryValues >= 0 )
  {
    if ( v39 )
    {
      v29 = *((_DWORD *)v6 + 24) + 1;
      *((_DWORD *)v6 + 24) = v29;
      if ( v29 > v39 || v29 > 0x10 )
        *((_DWORD *)v6 + 24) = 1;
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"FileCounter", 4u, v6 + 96, 4u);
    }
    if ( !wcscmp(Str1, L"GlobalLogger") )
      Guid = GlobalLoggerGuid;
    else
      RegistryValues = GuidString.Buffer ? RtlGUIDFromString(&GuidString, &Guid) : -1073741811;
    if ( RegistryValues >= 0 )
    {
      v23 = Guid;
      *(_DWORD *)v6 = v16;
      *(GUID *)(v6 + 24) = v23;
      started = EtwpStartLogger(v6);
      v25 = v57;
      RegistryValues = started;
      v26 = *((unsigned __int16 *)v6 + 4);
      *v57 = v26;
      if ( RegistryValues >= 0 && v26 && v40 )
      {
        v30 = 0;
        v31 = (_WORD *)(v60 + 408);
        while ( *v31 )
        {
          ++v30;
          ++v31;
          if ( v30 >= 8 )
            goto LABEL_35;
        }
        *(_WORD *)(v60 + 2LL * v30 + 408) = *v25;
      }
    }
  }
LABEL_35:
  v27 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v37 = RtlNtStatusToDosError(RegistryValues);
      v27 = (const WCHAR *)KeyHandle;
      ValueData = v37;
    }
    RtlWriteRegistryValue(0x40000000u, v27, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( v6 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)v6 + 8);
    ExFreePoolWithTag(v6, 0);
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
