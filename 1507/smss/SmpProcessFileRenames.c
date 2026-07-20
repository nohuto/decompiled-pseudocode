/*
 * XREFs of SmpProcessFileRenames @ 0x140002964
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWrite @ 0x140005B68 (SmpEventWrite.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000A848 (SmpFreeSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     RtlStringCbPrintfExW @ 0x1400115D8 (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x140011AEC (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140012010 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140012100 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x140012274 (SmpGetTime.c)
 *     SmpLogPFROError @ 0x140012508 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x140012730 (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x1400127C8 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpRenameTargetFile @ 0x140012994 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140012D04 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012E78 (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r13
  bool v2; // r15
  NTSTATUS v3; // eax
  unsigned __int8 v4; // cl
  __int64 *v5; // rax
  int v6; // r14d
  size_t v7; // rbx
  _WORD *v8; // rsi
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  _WORD *v12; // rax
  int v13; // edi
  __int64 v14; // r9
  USHORT Length; // cx
  PWSTR Buffer; // rax
  unsigned int v17; // r14d
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  unsigned __int8 OldValue[4]; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+7Ch] [rbp-8Ch]
  int ValueData; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  int v29; // [rsp+A0h] [rbp-68h]
  size_t pcbRemaining; // [rsp+A8h] [rbp-60h] BYREF
  int v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  size_t v33; // [rsp+C0h] [rbp-48h]
  int v34; // [rsp+C8h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-38h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F0h] [rbp-18h] BYREF
  wchar_t pszDest[256]; // [rsp+108h] [rbp+0h] BYREF

  v29 = a1;
  v1 = 0;
  v2 = 1;
  OldValue[0] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v3 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v4 = OldValue[0];
    if ( v3 < 0 )
      v4 = 1;
    OldValue[0] = v4;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v5 = (__int64 *)SmpFileRenameList;
  v6 = 0;
  v7 = SmpFileRenameList;
  v25 = 0;
  ValueData = 0;
  while ( v5 != &SmpFileRenameList )
  {
    pcbRemaining = v7;
    v8 = (_WORD *)(v7 + 16);
    Handle = 0LL;
    OldValue[1] = 0;
    SmpEventWriteString2(&SmpFileRenameList, v7 + 16, v7 + 32);
    v9 = *(_WORD *)(v7 + 16);
    v10 = 4LL;
    if ( v9 >= 4u )
    {
      v11 = *(_WORD **)(v7 + 24);
      if ( *v11 == 42 )
      {
        v2 = v11[1] != 48;
        OldValue[1] = 1;
        *v8 = v9 - 4;
        *(_WORD *)(v7 + 18) -= 4;
        *(_QWORD *)(v7 + 24) = v11 + 2;
      }
    }
    if ( !*(_WORD *)(v7 + 32) )
    {
      v12 = *(_WORD **)(v7 + 24);
      if ( *v12 == 64 )
      {
        *(_QWORD *)(v7 + 24) = v12 + 1;
        *v8 -= 2;
      }
      LOBYTE(v10) = v2;
      v13 = SmpForceDeleteTargetFile(v7 + 16, v10, 48LL);
      goto LABEL_35;
    }
    v31 = 48;
    v32 = 0LL;
    v34 = 64;
    v33 = v7 + 16;
    v35 = 0LL;
    v13 = SmpOpenTargetFile(&Handle, 3u);
    if ( v13 < 0 )
      goto LABEL_35;
    if ( v2 && !(unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(Handle) )
    {
      v13 = -1073740533;
LABEL_35:
      v2 = 1;
      goto LABEL_36;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 + 40));
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
    {
      DestinationString.MaximumLength -= 4;
      Length = DestinationString.Length - 4;
      Buffer = DestinationString.Buffer + 2;
      DestinationString.Length -= 4;
      DestinationString.Buffer += 2;
    }
    if ( *Buffer == 33 || *Buffer == 64 )
    {
      v17 = 1;
      DestinationString.Buffer = Buffer + 1;
      DestinationString.MaximumLength -= 2;
      DestinationString.Length = Length - 2;
    }
    else
    {
      v17 = 0;
    }
    LOBYTE(v14) = v2;
    v18 = SmpRenameTargetFile(&DestinationString, Handle, v17, v14);
    v13 = v18;
    if ( v18 >= 0
      || !v17
      || v18 != -1073741790
      || (LOBYTE(v19) = v2, v13 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v19), v13 >= 0) )
    {
      v6 = v25;
      goto LABEL_35;
    }
    LOBYTE(v20) = v2;
    v21 = SmpShuffleMove(&DestinationString, Handle, v20);
    v6 = v25;
    v13 = v21;
    v22 = ValueData;
    v2 = 1;
    if ( v13 >= 0 )
      v22 = 1;
    ValueData = v22;
LABEL_36:
    if ( Handle )
      NtClose(Handle);
    if ( v13 < 0 )
      v1 |= SmpLogPFROError(v7 + 16, v7 + 32, (unsigned int)v13);
    else
      v25 = ++v6;
    if ( OldValue[1] == 1 )
    {
      *v8 += 4;
      *(_WORD *)(v7 + 18) += 4;
      *(_QWORD *)(v7 + 24) -= 4LL;
    }
    v7 = *(_QWORD *)v7;
    SmpFreeSavedRegistryEntry(pcbRemaining);
    v5 = (__int64 *)SmpFileRenameList;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( v29 )
  {
    RtlDeleteRegistryValue(0, L"\\Registry\\Machine\\Xbox\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\Registry\\Machine\\Xbox\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  if ( SmpLogFileHandle )
  {
    if ( v1 )
    {
      SmpGetTime(&TimeFields);
      if ( RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             TimeFields.Month,
             TimeFields.Day,
             TimeFields.Year,
             TimeFields.Hour,
             TimeFields.Minute,
             TimeFields.Second,
             v6) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
