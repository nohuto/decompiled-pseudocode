/*
 * XREFs of EtwStartAutoLogger @ 0x1404C3638
 * Callers:
 *     PerfDiagpRestartCKCL @ 0x1404C346C (PerfDiagpRestartCKCL.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C2858 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404C3EE8 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     EtwpParsePoolTagFilter @ 0x1406A835C (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, NTSTRSAFE_PCWSTR pszSrc, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // rdi
  NTSTATUS RegistryValues; // edi
  PVOID v13; // rax
  _WORD *v14; // rsi
  _WORD *v15; // r15
  int v16; // r13d
  _WORD *v17; // r14
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r12d
  unsigned __int16 v21; // si
  int v22; // eax
  GUID v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // rcx
  NTSTATUS started; // eax
  _WORD *v27; // rdx
  int v28; // eax
  const WCHAR *v29; // rdx
  unsigned int v31; // eax
  unsigned int v32; // eax
  _WORD *v33; // rcx
  int v34; // eax
  unsigned int v35; // ecx
  _WORD *v36; // r15
  __int64 v37; // r9
  void *v38; // r9
  ULONG v39; // eax
  _WORD v40[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v41; // [rsp+34h] [rbp-CCh]
  unsigned int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG ValueData; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+7Ch] [rbp-84h] BYREF
  int v52; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  wchar_t *Str1; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _DWORD *v60; // [rsp+C8h] [rbp-38h]
  unsigned int v61; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-28h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  GUID Guid; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[134]; // [rsp+120h] [rbp+20h] BYREF

  Str1 = SourceString;
  v60 = a3;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v50 = 1;
  v5 = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  KeyHandle = 0LL;
  ValueData = 0;
  v45 = 0;
  GuidString.Length = 0;
  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v42 = 0;
  v46 = 0;
  v43 = 0;
  v40[0] = 0;
  v52 = 0;
  v51 = 100;
  v41 = 0;
  Guid.Data1 = 0;
  *(_QWORD *)&Guid.Data2 = 0LL;
  *(_DWORD *)&Guid.Data4[4] = 0;
  *a3 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  v8 = -1LL;
  v59 = v7;
  do
    ++v8;
  while ( *(_WORD *)(v6 + 2 * v8) );
  v9 = (unsigned int)(2 * v8 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_58;
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
    goto LABEL_34;
  v13 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
  v5 = (__int64)v13;
  if ( !v13 )
    goto LABEL_58;
  memset(v13, 0, 0x504uLL);
  *(_DWORD *)(v5 + 44) = 0x20000;
  *(_DWORD *)(v5 + 48) = 4;
  RtlInitUnicodeString((PUNICODE_STRING)(v5 + 144), SourceString);
  *(_DWORD *)(v5 + 72) = 0x80000000;
  *(_WORD *)(v5 + 72) = 176;
  v14 = (_WORD *)(v5 + 180);
  *(_BYTE *)(v5 + 74) = -1;
  v15 = (_WORD *)(v5 + 224);
  *(_DWORD *)(v5 + 176) = 1;
  v16 = 180;
  v17 = (_WORD *)(v5 + 1252);
  memset(v65, 0, 0x428uLL);
  LODWORD(v65[4]) = 4;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v65[0] = &EtwpQueryRegistryCallback;
  v65[3] = &v45;
  v65[2] = L"Start";
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v65);
  if ( RegistryValues < 0 )
    goto LABEL_34;
  if ( !v45 )
    goto LABEL_34;
  v65[10] = v5 + 48;
  LODWORD(v65[4]) = 4;
  v65[0] = &EtwpQueryRegistryCallback;
  v65[3] = v5 + 76;
  v65[2] = L"FlushThreshold";
  v65[7] = &EtwpQueryRegistryCallback;
  v65[9] = L"BufferSize";
  LODWORD(v65[11]) = 4;
  v65[17] = v5 + 52;
  v65[16] = L"MinimumBuffers";
  v65[24] = v5 + 68;
  v65[23] = L"FlushTimer";
  v65[31] = v5 + 56;
  v65[30] = L"MaximumBuffers";
  v65[38] = v5 + 128;
  v65[37] = L"FileName";
  v65[40] = v40;
  v62 = v5 + 184;
  v65[45] = &v61;
  v65[44] = L"EnableKernelFlags";
  v55 = v5 + 228;
  v65[52] = &v54;
  v65[51] = L"StackWalkingFilter";
  v65[59] = v5 + 40;
  v65[58] = L"ClockType";
  v65[61] = &v50;
  v65[66] = v5 + 60;
  v65[65] = L"MaxFileSize";
  v65[68] = &v51;
  v65[73] = v5 + 64;
  v65[14] = &EtwpQueryRegistryCallback;
  LODWORD(v65[18]) = 4;
  v65[21] = &EtwpQueryRegistryCallback;
  LODWORD(v65[25]) = 4;
  v65[28] = &EtwpQueryRegistryCallback;
  LODWORD(v65[32]) = 4;
  v65[35] = &EtwpQueryRegistryCallback;
  LODWORD(v65[39]) = 1;
  v61 = 40;
  v65[42] = &EtwpQueryRegistryCallback;
  LODWORD(v65[46]) = 3;
  v54 = 1024;
  v65[49] = &EtwpQueryRegistryCallback;
  LODWORD(v65[53]) = 3;
  v65[56] = &EtwpQueryRegistryCallback;
  LODWORD(v65[60]) = 4;
  LODWORD(v65[62]) = 4;
  v65[63] = &EtwpQueryRegistryCallback;
  LODWORD(v65[67]) = 4;
  LODWORD(v65[69]) = 4;
  v65[70] = &EtwpQueryRegistryCallback;
  v65[72] = L"LogFileMode";
  v65[75] = &v52;
  v65[80] = &v46;
  v65[79] = L"DisableRealtimePersistence";
  v65[87] = &GuidString;
  v65[86] = L"Guid";
  v65[89] = v40;
  v65[94] = v5 + 96;
  v65[93] = L"FileCounter";
  v65[101] = &v42;
  v65[100] = L"FileMax";
  v65[108] = &UnicodeString;
  v65[107] = L"PoolTagFilter";
  v65[110] = v40;
  v57 = v5 + 1276;
  v65[115] = &v56;
  v65[114] = L"StackCaching";
  v65[122] = &v43;
  LODWORD(v65[74]) = 4;
  LODWORD(v65[76]) = 4;
  v65[77] = &EtwpQueryRegistryCallback;
  LODWORD(v65[81]) = 4;
  v65[84] = &EtwpQueryRegistryCallback;
  LODWORD(v65[88]) = 1;
  v65[91] = &EtwpQueryRegistryCallback;
  LODWORD(v65[95]) = 4;
  v65[98] = &EtwpQueryRegistryCallback;
  LODWORD(v65[102]) = 4;
  v65[105] = &EtwpQueryRegistryCallback;
  LODWORD(v65[109]) = 1;
  v65[112] = &EtwpQueryRegistryCallback;
  LODWORD(v65[116]) = 3;
  v65[119] = &EtwpQueryRegistryCallback;
  LODWORD(v65[123]) = 4;
  v65[121] = L"EnableSecurityProvider";
  v56 = 8;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, KeyHandle, v65);
  if ( RegistryValues < 0 )
    goto LABEL_34;
  v18 = 1LL;
  v19 = *(_DWORD *)(v5 + 112) | 2;
  *(_DWORD *)(v5 + 112) = v19;
  if ( !v46 )
    *(_DWORD *)(v5 + 112) = v19 | 1;
  v20 = v61 >> 2;
  if ( (unsigned __int16)(v61 >> 2) )
  {
    *(_WORD *)(v5 + 182) = 1;
    *v14 = v20 + 1;
    ++*(_WORD *)(v5 + 178);
    *(_WORD *)(v5 + 176) += *v14;
    v16 = 4 * (unsigned __int16)*v14 + 180;
  }
  if ( v54 )
  {
    v35 = v54 >> 2;
    if ( (v54 & 3) != 0 )
      LOWORD(v35) = v35 + 1;
    *(_WORD *)(v5 + 226) = 3;
    *v15 = v35 + 1;
    ++*(_WORD *)(v5 + 178);
    *(_WORD *)(v5 + 176) += *v15;
    v16 += 4 * (unsigned __int16)*v15;
    if ( (_WORD)v20 )
      v14 += 2 * (unsigned __int16)*v14;
    if ( v14 != v15 )
      memmove(v14, (const void *)(v5 + 224), 4LL * (unsigned __int16)v35 + 4);
  }
  if ( UnicodeString.Buffer )
  {
    v36 = (_WORD *)(v5 + 4 * (*(unsigned __int16 *)(v5 + 176) + 44LL));
    v21 = EtwpParsePoolTagFilter(&UnicodeString, v5 + 1256, v18);
    if ( v21 )
    {
      *(_WORD *)(v5 + 1254) = 4;
      *v17 = v21 + 1;
      ++*(_WORD *)(v5 + 178);
      *(_WORD *)(v5 + 176) += *v17;
      v16 += 4 * (unsigned __int16)*v17;
      if ( v36 != v17 )
        memmove(v36, (const void *)(v5 + 1252), 4LL * v21 + 4);
    }
  }
  else
  {
    v21 = v41;
  }
  if ( v56 == 8 )
  {
    v37 = *(unsigned __int16 *)(v5 + 176);
    *(_DWORD *)(v5 + 1272) = 327683;
    ++*(_WORD *)(v5 + 178);
    *(_WORD *)(v5 + 176) += *(_WORD *)(v5 + 1272);
    v38 = (void *)(v5 + 4 * (v37 + 44));
    v16 += 4 * *(unsigned __int16 *)(v5 + 1272);
    if ( v38 != (void *)(v5 + 1272) )
      memmove(v38, (const void *)(v5 + 1272), 0xCuLL);
  }
  if ( !(_WORD)v20 && !v54 && !v56 && !v21 )
    *(_DWORD *)(v5 + 72) = 0;
  v22 = *(_DWORD *)(v5 + 64);
  if ( ((v22 & 0x500) == 0 || (v22 & 0x200) != 0) && !*(_QWORD *)(v5 + 136) )
  {
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(v5 + 128), L"%SystemRoot%") )
    {
      RegistryValues = 0;
      goto LABEL_24;
    }
LABEL_58:
    RegistryValues = -1073741801;
    goto LABEL_34;
  }
LABEL_24:
  if ( v43 )
  {
    v34 = *(_DWORD *)(v5 + 64);
    if ( (v34 & 0x80u) == 0 || (v34 & 0x100) == 0 || *(_QWORD *)(v5 + 136) )
      RegistryValues = -1073741790;
    else
      *(_DWORD *)(v5 + 112) |= 0x8004000u;
  }
  if ( RegistryValues >= 0 )
  {
    if ( v42 )
    {
      v31 = *(_DWORD *)(v5 + 96) + 1;
      *(_DWORD *)(v5 + 96) = v31;
      if ( v31 > v42 || v31 > 0x10 )
        *(_DWORD *)(v5 + 96) = 1;
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"FileCounter", 4u, (PVOID)(v5 + 96), 4u);
    }
    if ( !wcscmp(Str1, L"GlobalLogger") )
      Guid = GlobalLoggerGuid;
    else
      RegistryValues = GuidString.Buffer ? RtlGUIDFromString(&GuidString, &Guid) : -1073741811;
    if ( RegistryValues >= 0 )
    {
      v23 = Guid;
      v24 = v59;
      v25 = v59;
      *(_DWORD *)v5 = v16;
      *(GUID *)(v5 + 24) = v23;
      started = EtwpStartLogger(v25, v5);
      v27 = v60;
      RegistryValues = started;
      v28 = *(unsigned __int16 *)(v5 + 8);
      *v60 = v28;
      if ( RegistryValues >= 0 && v28 && v43 )
      {
        v32 = 0;
        v33 = (_WORD *)(v24 + 5008);
        while ( *v33 )
        {
          ++v32;
          ++v33;
          if ( v32 >= 8 )
            goto LABEL_34;
        }
        *(_WORD *)(v24 + 2LL * v32 + 5008) = *v27;
      }
    }
  }
LABEL_34:
  v29 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v39 = RtlNtStatusToDosError(RegistryValues);
      v29 = (const WCHAR *)KeyHandle;
      ValueData = v39;
    }
    RtlWriteRegistryValue(0x40000000u, v29, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( v5 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v5 + 128));
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
