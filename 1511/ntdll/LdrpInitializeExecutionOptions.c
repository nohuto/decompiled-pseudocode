/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800902B4
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DB80 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryIllegalCWDDevices @ 0x18007CDAC (LdrpQueryIllegalCWDDevices.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007CF18 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D13C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800860C8 (RtlpHpApplySegmentHeapConfigurations.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800CAA10 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CB178 (LdrpIsVerifierActivationFilterMatched.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800CE478 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800D463C (RtlOpenModernAppOptionsKey.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  int v6; // r15d
  HANDLE *v7; // r13
  __int16 v9; // di
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // al
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // edi
  __int64 i; // rdi
  wchar_t *v26; // rdx
  _BYTE *v27; // rax
  unsigned int v28; // ecx
  int v29; // r15d
  int v30; // eax
  int v31; // edi
  int v32; // r15d
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // eax
  int v36; // r15d
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+30h] [rbp-D0h]
  unsigned int v49; // [rsp+40h] [rbp-C0h] BYREF
  char v50; // [rsp+44h] [rbp-BCh]
  void *v51; // [rsp+48h] [rbp-B8h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+54h] [rbp-ACh] BYREF
  int v54; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v56; // [rsp+68h] [rbp-98h]
  void *v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+80h] [rbp-80h] BYREF
  char *v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  HANDLE *v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-40h]
  void *v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+D8h] [rbp-28h]
  char v70; // [rsp+E8h] [rbp-18h] BYREF
  WCHAR SourceString[200]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a4;
  v63 = a6;
  *a4 = 0LL;
  LOBYTE(v6) = 0;
  v51 = 0LL;
  v9 = 0;
  Handle = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  v61 = a3;
  v53 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v12 = *(_QWORD *)(a2 + 32);
  v62 = a4;
  v56 = a1;
  v54 = v6;
  v13 = (*(_DWORD *)(v12 + 8) & 0x4000) == 0;
  v50 = 1;
  if ( !v13 || (int)RtlpOpenImageFileOptionsKey(a1, a2, (__int64)&v51) < 0 )
    goto LABEL_40;
  *v7 = v51;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14 = RtlOpenModernAppOptionsKey(&DestinationString, v51, &v57);
    v10 = (__int64)v57;
    if ( v14 >= 0 )
      *a5 = v57;
  }
  RtlQueryApplicationKeyOption(
    v10,
    (__int64)v51,
    (__int64)L"DisableHeapLookaside",
    4u,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v41,
    0LL);
  RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v53, 4, v42, 0LL);
  RtlQueryApplicationKeyOption(
    v10,
    (__int64)v51,
    (__int64)L"ShutdownFlags",
    4u,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v43,
    0LL);
  v49 = 0;
  RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v49, 4, v44, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v49 )
    v15 = v49;
  RtlpUnloadEventTraceExNumber = v15;
  v49 = 0;
  RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v49, 4, v45, 0LL);
  if ( v49 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v49;
  v49 = 0;
  RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v49, 4, v46, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v49 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v49 = 0;
  RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"TracingFlags", 4u, (__int64)&v49, 4, v47, 0LL);
  if ( v49 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v49);
    v10 = (__int64)v57;
  }
  v49 = 0;
  if ( (int)RtlQueryImageFileKeyOption((__int64)v51, (__int64)L"CFGOptions", 4, (int *)&v49, 4u, 0LL) >= 0
    && (v49 & 1) != 0 )
  {
    LdrProtectMrdata(0, v17, v18, v19);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1, v20, v21, v22);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
  {
LABEL_22:
    RtlQueryImageFileKeyOption((__int64)v51, (__int64)L"MinimumStackCommitInBytes", 4, (int *)&v49, 4u, 0LL);
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v49 )
      *(_QWORD *)(a2 + 792) = v49;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v26 = (&off_1801115D0)[i];
      v49 = 0;
      RtlQueryImageFileKeyOption((__int64)v51, (__int64)v26, 4, (int *)&v49, 4u, 0LL);
      v27 = *(&off_1801115D0 + i + 1);
      if ( v49 )
        *v27 = 1;
      else
        *v27 = 0;
    }
    v49 = 0;
    RtlQueryImageFileKeyOption((__int64)v51, (__int64)L"MaxDeadActivationContexts", 4, (int *)&v49, 4u, 0LL);
    v28 = g_SxsMaxDeadActivationContexts;
    if ( v49 )
      v28 = v49;
    v13 = (*(_DWORD *)(a2 + 188) & 0x100) == 0;
    g_SxsMaxDeadActivationContexts = v28;
    v29 = (unsigned __int8)v54;
    if ( !v13 )
      v29 = 1;
    v54 = v29;
    v30 = RtlQueryApplicationKeyOption(v10, (__int64)v51, (__int64)L"GlobalFlag", 4u, (__int64)&v52, 4, v48, &v58);
    v7 = v62;
    if ( v30 >= 0 )
    {
      v31 = v52;
      if ( (v52 & 0x2000100) != 0 && !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v10, v51) )
      {
        v31 &= 0xFDFFFEFF;
        v52 = v31;
      }
      *(_DWORD *)(a2 + 188) = v31;
    }
    v9 = v53;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v50 = 0;
      v11 = v58;
    }
LABEL_40:
    if ( qword_1801552F0 )
      v9 |= 1u;
    v32 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
    RtlpHpApplySegmentHeapConfigurations();
    v35 = RtlpLowFragHeapGlobalFlags;
    if ( (v9 & 8) != 0 )
    {
      v35 = RtlpLowFragHeapGlobalFlags | 0x10;
      RtlpLowFragHeapGlobalFlags |= 0x10u;
    }
    if ( (v9 & 4) != 0 )
    {
      v35 |= 8u;
      RtlpLowFragHeapGlobalFlags = v35;
    }
    if ( (v32 & 0x100000) != 0 || (v9 & 2) != 0 )
    {
      v35 |= 2u;
      RtlpLowFragHeapGlobalFlags = v35;
    }
    if ( (v9 & 1) != 0 || (v35 & 2) != 0 )
      RtlpLowFragHeapGlobalFlags = v35 | 4;
    if ( (v9 & 0xFF00) != 0 )
      RtlpHpLfhContentionLimit = HIBYTE(v9);
    v24 = 0;
    if ( !v50 || LdrpIsSecureProcess )
    {
      v36 = (int)v56;
    }
    else
    {
      v36 = (int)v56;
      if ( (MEMORY[0x7FFE03A0] & 1) != 0 )
      {
        if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v56, v33, &Handle) < 0 )
        {
          Handle = 0LL;
        }
        else if ( (int)RtlQueryImageFileKeyOption((__int64)Handle, (__int64)L"GlobalFlag", 4, &v52, 4u, 0LL) >= 0 )
        {
          v11 = (int)Handle;
          *(_DWORD *)(a2 + 188) |= v52 & 0x2000100;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      LOBYTE(v34) = v54;
      v24 = LdrpInitializeApplicationVerifierPackage(v36, a2, v34, v11, v61, v63);
      if ( v24 < 0 )
      {
        v37 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            7361,
            (unsigned int)"LdrpInitializeExecutionOptions",
            0,
            (__int64)"Initializing the application verifier package failed with status 0x%08lx\n");
          v37 = LdrpDebugFlags;
        }
        if ( (v37 & 0x10) != 0 )
          __debugbreak();
LABEL_75:
        if ( v24 < 0 )
          goto LABEL_76;
      }
    }
    else if ( !v10 )
    {
      v38 = (__int64)v51;
      if ( v51 || !*(_BYTE *)(a2 + 2) )
        goto LABEL_81;
      v39 = *(_QWORD *)(a2 + 32);
      v60 = &v70;
      v59 = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v39 + 128), &qword_180106060, (__int64)&v59) < 0
        || (v24 = RtlUnicodeStringToInteger((unsigned __int16 *)&v59, 0, (int *)&v49), v24 < 0)
        || !v49 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
      goto LABEL_75;
    }
    v38 = (__int64)v51;
LABEL_81:
    LdrpQueryIllegalCWDDevices(v38);
    goto LABEL_82;
  }
  v66 = (__int64)v51;
  v65 = 48;
  v67 = &unk_180106080;
  v68 = 64;
  v69 = 0LL;
  v23 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1LL, &v65);
  v24 = v23;
  if ( v23 == -1073741772 )
  {
    LdrpLargePageDllKeyHandle = 0LL;
    goto LABEL_22;
  }
  if ( v23 >= 0 )
    goto LABEL_22;
LABEL_76:
  if ( *v7 )
  {
    NtClose(*v7);
    *v7 = 0LL;
  }
  if ( *a5 )
  {
    NtClose(*a5);
    *a5 = 0LL;
  }
LABEL_82:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v24;
}
