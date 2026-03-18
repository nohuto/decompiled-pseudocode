/*
 * XREFs of EtwpStartAutoLogger @ 0x14050889C
 * Callers:
 *     PerfDiagpRestartCKCL @ 0x1405086B0 (PerfDiagpRestartCKCL.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlStringCbCatW @ 0x14001B0D8 (RtlStringCbCatW.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcscmp @ 0x140145B88 (wcscmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpParsePoolTagFilter @ 0x1406666A8 (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwpStartAutoLogger(wchar_t *SourceString, NTSTRSAFE_PCWSTR pszSrc, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rbx
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
  unsigned int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v43; // [rsp+3Ch] [rbp-C4h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG ValueData; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+7Ch] [rbp-84h] BYREF
  int v52; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  unsigned int v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  wchar_t *Str1; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  unsigned int v60; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-30h]
  _DWORD *v62; // [rsp+D8h] [rbp-28h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  GUID Guid; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[134]; // [rsp+120h] [rbp+20h] BYREF

  Str1 = SourceString;
  v59 = a4;
  v62 = a3;
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
  v50 = 1;
  v8 = -1LL;
  DestinationString.Length = 0;
  KeyHandle = 0LL;
  ValueData = 0;
  v45 = 0;
  GuidString.Length = 0;
  UnicodeString.Length = 0;
  v41 = 0;
  v46 = 0;
  v42 = 0;
  v40[0] = 0;
  v51 = 0;
  v52 = 100;
  v43 = 0;
  Guid.Data1 = 0;
  *a3 = 0;
  do
    ++v8;
  while ( pszSrc[v8] );
  do
    ++v7;
  while ( aRegistryMachin_189[v7] );
  v9 = (unsigned int)(2 * (v7 + v8) + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_60;
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
  v13 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
  v6 = (__int64)v13;
  if ( !v13 )
    goto LABEL_60;
  memset(v13, 0, 0x504uLL);
  *(_DWORD *)(v6 + 44) = 0x20000;
  *(_DWORD *)(v6 + 48) = 4;
  RtlInitUnicodeString((PUNICODE_STRING)(v6 + 144), SourceString);
  *(_DWORD *)(v6 + 72) = 0x80000000;
  *(_WORD *)(v6 + 72) = 176;
  v14 = (_WORD *)(v6 + 180);
  *(_BYTE *)(v6 + 74) = -1;
  v15 = (_WORD *)(v6 + 224);
  *(_DWORD *)(v6 + 176) = 1;
  v16 = 180;
  v17 = (_WORD *)(v6 + 1252);
  memset(v65, 0, 0x428uLL);
  LODWORD(v65[4]) = 4;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v65[0] = EtwpQueryRegistryCallback;
  v65[3] = &v45;
  v65[2] = L"Start";
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v65, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_35;
  if ( !v45 )
    goto LABEL_35;
  v65[10] = v6 + 48;
  LODWORD(v65[4]) = 4;
  v65[0] = EtwpQueryRegistryCallback;
  v65[3] = v6 + 76;
  v65[2] = L"FlushThreshold";
  v65[7] = EtwpQueryRegistryCallback;
  v65[9] = L"BufferSize";
  LODWORD(v65[11]) = 4;
  v65[17] = v6 + 52;
  v65[16] = L"MinimumBuffers";
  v65[24] = v6 + 68;
  v65[23] = L"FlushTimer";
  v65[31] = v6 + 56;
  v65[30] = L"MaximumBuffers";
  v65[38] = v6 + 128;
  v65[37] = L"FileName";
  v65[40] = v40;
  v61 = v6 + 184;
  v65[45] = &v60;
  v65[44] = L"EnableKernelFlags";
  v57 = v6 + 228;
  v65[52] = &v56;
  v65[51] = L"StackWalkingFilter";
  v65[59] = v6 + 40;
  v65[58] = L"ClockType";
  v65[61] = &v50;
  v65[66] = v6 + 60;
  v65[65] = L"MaxFileSize";
  v65[68] = &v52;
  v65[73] = v6 + 64;
  v65[14] = EtwpQueryRegistryCallback;
  LODWORD(v65[18]) = 4;
  v65[21] = EtwpQueryRegistryCallback;
  LODWORD(v65[25]) = 4;
  v65[28] = EtwpQueryRegistryCallback;
  LODWORD(v65[32]) = 4;
  v65[35] = EtwpQueryRegistryCallback;
  LODWORD(v65[39]) = 1;
  v60 = 40;
  v65[42] = EtwpQueryRegistryCallback;
  LODWORD(v65[46]) = 3;
  v56 = 1024;
  v65[49] = EtwpQueryRegistryCallback;
  LODWORD(v65[53]) = 3;
  v65[56] = EtwpQueryRegistryCallback;
  LODWORD(v65[60]) = 4;
  LODWORD(v65[62]) = 4;
  v65[63] = EtwpQueryRegistryCallback;
  LODWORD(v65[67]) = 4;
  LODWORD(v65[69]) = 4;
  v65[70] = EtwpQueryRegistryCallback;
  v65[72] = L"LogFileMode";
  v65[75] = &v51;
  v65[80] = &v46;
  v65[79] = L"DisableRealtimePersistence";
  v65[87] = &GuidString;
  v65[86] = L"Guid";
  v65[89] = v40;
  v65[94] = v6 + 96;
  v65[93] = L"FileCounter";
  v65[101] = &v41;
  v65[100] = L"FileMax";
  v65[108] = &UnicodeString;
  v65[107] = L"PoolTagFilter";
  v65[110] = v40;
  v55 = v6 + 1276;
  v65[115] = &v54;
  v65[114] = L"StackCaching";
  v65[122] = &v42;
  LODWORD(v65[74]) = 4;
  LODWORD(v65[76]) = 4;
  v65[77] = EtwpQueryRegistryCallback;
  LODWORD(v65[81]) = 4;
  v65[84] = EtwpQueryRegistryCallback;
  LODWORD(v65[88]) = 1;
  v65[91] = EtwpQueryRegistryCallback;
  LODWORD(v65[95]) = 4;
  v65[98] = EtwpQueryRegistryCallback;
  LODWORD(v65[102]) = 4;
  v65[105] = EtwpQueryRegistryCallback;
  LODWORD(v65[109]) = 1;
  v65[112] = EtwpQueryRegistryCallback;
  LODWORD(v65[116]) = 3;
  v65[119] = EtwpQueryRegistryCallback;
  LODWORD(v65[123]) = 4;
  v65[121] = L"EnableSecurityProvider";
  v54 = 8;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v65, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_35;
  v18 = 1LL;
  v19 = *(_DWORD *)(v6 + 112) | 2;
  *(_DWORD *)(v6 + 112) = v19;
  if ( !v46 )
    *(_DWORD *)(v6 + 112) = v19 | 1;
  v20 = v60 >> 2;
  if ( (unsigned __int16)(v60 >> 2) )
  {
    *(_WORD *)(v6 + 182) = 1;
    *v14 = v20 + 1;
    ++*(_WORD *)(v6 + 178);
    *(_WORD *)(v6 + 176) += *v14;
    v16 = 4 * (unsigned __int16)*v14 + 180;
  }
  if ( v56 )
  {
    v35 = v56 >> 2;
    if ( (v56 & 3) != 0 )
      LOWORD(v35) = v35 + 1;
    *(_WORD *)(v6 + 226) = 3;
    *v15 = v35 + 1;
    ++*(_WORD *)(v6 + 178);
    *(_WORD *)(v6 + 176) += *v15;
    v16 += 4 * (unsigned __int16)*v15;
    if ( (_WORD)v20 )
      v14 += 2 * (unsigned __int16)*v14;
    if ( v14 != v15 )
      memmove(v14, (const void *)(v6 + 224), 4LL * (unsigned __int16)v35 + 4);
  }
  if ( UnicodeString.Buffer )
  {
    v36 = (_WORD *)(v6 + 4 * (*(unsigned __int16 *)(v6 + 176) + 44LL));
    v21 = EtwpParsePoolTagFilter(&UnicodeString, v6 + 1256, v18);
    if ( v21 )
    {
      *(_WORD *)(v6 + 1254) = 4;
      *v17 = v21 + 1;
      ++*(_WORD *)(v6 + 178);
      *(_WORD *)(v6 + 176) += *v17;
      v16 += 4 * (unsigned __int16)*v17;
      if ( v36 != v17 )
        memmove(v36, (const void *)(v6 + 1252), 4LL * v21 + 4);
    }
  }
  else
  {
    v21 = v43;
  }
  if ( v54 == 8 )
  {
    v37 = *(unsigned __int16 *)(v6 + 176);
    *(_DWORD *)(v6 + 1272) = 327683;
    ++*(_WORD *)(v6 + 178);
    *(_WORD *)(v6 + 176) += *(_WORD *)(v6 + 1272);
    v38 = (void *)(v6 + 4 * (v37 + 44));
    v16 += 4 * *(unsigned __int16 *)(v6 + 1272);
    if ( v38 != (void *)(v6 + 1272) )
      memmove(v38, (const void *)(v6 + 1272), 0xCuLL);
  }
  if ( !(_WORD)v20 && !v56 && !v54 && !v21 )
    *(_DWORD *)(v6 + 72) = 0;
  v22 = *(_DWORD *)(v6 + 64);
  if ( ((v22 & 0x500) == 0 || (v22 & 0x200) != 0) && !*(_QWORD *)(v6 + 136) )
  {
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(v6 + 128), L"%SystemRoot%") )
    {
      RegistryValues = 0;
      goto LABEL_25;
    }
LABEL_60:
    RegistryValues = -1073741801;
    goto LABEL_35;
  }
LABEL_25:
  if ( v42 )
  {
    v34 = *(_DWORD *)(v6 + 64);
    if ( (v34 & 0x80u) == 0 || (v34 & 0x100) == 0 || *(_QWORD *)(v6 + 136) )
      RegistryValues = -1073741790;
    else
      *(_DWORD *)(v6 + 112) |= 0x8004000u;
  }
  if ( RegistryValues >= 0 )
  {
    if ( v41 )
    {
      v31 = *(_DWORD *)(v6 + 96) + 1;
      *(_DWORD *)(v6 + 96) = v31;
      if ( v31 > v41 || v31 > 0x10 )
        *(_DWORD *)(v6 + 96) = 1;
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"FileCounter", 4u, (PVOID)(v6 + 96), 4u);
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
      *(_DWORD *)v6 = v16;
      *(GUID *)(v6 + 24) = v23;
      started = EtwpStartLogger(v25, v6);
      v27 = v62;
      RegistryValues = started;
      v28 = *(unsigned __int16 *)(v6 + 8);
      *v62 = v28;
      if ( RegistryValues >= 0 && v28 && v42 )
      {
        v32 = 0;
        v33 = (_WORD *)(v24 + 5008);
        while ( *v33 )
        {
          ++v32;
          ++v33;
          if ( v32 >= 8 )
            goto LABEL_35;
        }
        *(_WORD *)(v24 + 2LL * v32 + 5008) = *v27;
      }
    }
  }
LABEL_35:
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
  if ( v6 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v6 + 128));
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
