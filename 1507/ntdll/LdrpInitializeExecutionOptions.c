/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800BE35C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180046AD0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x18006A7F0 (RtlUnicodeStringToInteger.c)
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryApplicationKeyOption @ 0x18007146C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800BDD70 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800BE14C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800C09AC (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800C0B90 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800C5148 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800CBDFC (RtlOpenModernAppOptionsKey.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800EA378 (RtlSetLowFragHeapGlobalFlags.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  HANDLE *v7; // r15
  HANDLE *v8; // r12
  unsigned int v10; // edi
  __int64 v11; // rsi
  HANDLE v12; // r14
  __int64 v13; // rax
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
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rcx
  int v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+40h] [rbp-C0h] BYREF
  char v46; // [rsp+44h] [rbp-BCh]
  void *v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  void *v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  char *v55; // [rsp+80h] [rbp-80h]
  HANDLE *v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  HANDLE *v59; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  void *v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+D8h] [rbp-28h]
  char v66; // [rsp+E8h] [rbp-18h] BYREF
  WCHAR SourceString[200]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a5;
  v8 = a4;
  v58 = a6;
  v59 = a4;
  *a4 = 0LL;
  v10 = 0;
  v47 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  *a5 = 0LL;
  LOBYTE(v50) = 0;
  v49 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v57 = a3;
  v56 = a5;
  v46 = 1;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 || (int)RtlpOpenImageFileOptionsKey(a1, 1LL, (__int64)&v47) < 0 )
    goto LABEL_40;
  *v8 = v47;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14 = RtlOpenModernAppOptionsKey(&DestinationString, v47, &v52);
    v11 = v52;
    if ( v14 >= 0 )
      *a5 = (HANDLE)v52;
  }
  RtlQueryApplicationKeyOption(
    v11,
    (__int64)v47,
    (__int64)L"DisableHeapLookaside",
    4u,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v37,
    0LL);
  RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v49, 4, v38, 0LL);
  RtlQueryApplicationKeyOption(
    v11,
    (__int64)v47,
    (__int64)L"ShutdownFlags",
    4u,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v39,
    0LL);
  v45 = 0;
  RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v45, 4, v40, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v45 )
    v15 = v45;
  RtlpUnloadEventTraceExNumber = v15;
  v45 = 0;
  RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v45, 4, v41, 0LL);
  if ( v45 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v45;
  v45 = 0;
  RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v45, 4, v42, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v45 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v45 = 0;
  RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"TracingFlags", 4u, (__int64)&v45, 4, v43, 0LL);
  if ( v45 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v45);
    v11 = v52;
  }
  v45 = 0;
  if ( (int)RtlQueryImageFileKeyOption((__int64)v47, (__int64)L"CFGOptions", 4, (int *)&v45, 4u, 0LL) >= 0
    && (v45 & 1) != 0 )
  {
    LdrProtectMrdata(0, v17, v18, v19);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1, v20, v21, v22);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
  {
LABEL_22:
    RtlQueryImageFileKeyOption((__int64)v47, (__int64)L"MinimumStackCommitInBytes", 4, (int *)&v45, 4u, 0LL);
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v45 )
      *(_QWORD *)(a2 + 792) = v45;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v26 = (&off_18010CD30)[i];
      v45 = 0;
      RtlQueryImageFileKeyOption((__int64)v47, (__int64)v26, 4, (int *)&v45, 4u, 0LL);
      v27 = *(&off_18010CD30 + i + 1);
      if ( v45 )
        *v27 = 1;
      else
        *v27 = 0;
    }
    v45 = 0;
    RtlQueryImageFileKeyOption((__int64)v47, (__int64)L"MaxDeadActivationContexts", 4, (int *)&v45, 4u, 0LL);
    v28 = g_SxsMaxDeadActivationContexts;
    if ( v45 )
      v28 = v45;
    v29 = *(_DWORD *)(a2 + 188);
    g_SxsMaxDeadActivationContexts = v28;
    v30 = (unsigned __int8)v50;
    if ( (v29 & 0x100) != 0 )
      v30 = 1;
    v50 = v30;
    v31 = RtlQueryApplicationKeyOption(v11, (__int64)v47, (__int64)L"GlobalFlag", 4u, (__int64)&v48, 4, v44, &v53);
    v7 = v56;
    v8 = v59;
    if ( v31 >= 0 )
    {
      v32 = v48;
      if ( (v48 & 0x2000100) != 0 && !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, v47) )
      {
        v32 &= 0xFDFFFEFF;
        v48 = v32;
      }
      *(_DWORD *)(a2 + 188) = v32;
    }
    v10 = v49;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v46 = 0;
      v12 = v53;
    }
LABEL_40:
    if ( qword_1801572F0 )
      v10 |= 1u;
    RtlSetLowFragHeapGlobalFlags(v10, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
    v24 = 0;
    if ( v46 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(a1, v33, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else if ( (int)RtlQueryImageFileKeyOption((__int64)Handle, (__int64)L"GlobalFlag", 4, &v48, 4u, 0LL) >= 0 )
      {
        v12 = Handle;
        *(_DWORD *)(a2 + 188) |= v48 & 0x2000100;
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v24 = LdrpInitializeApplicationVerifierPackage(a1, a2, v50, (__int64)v12, v57, v58);
      if ( v24 >= 0 )
        goto LABEL_67;
      v34 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7373,
          "LdrpInitializeExecutionOptions",
          0,
          "Initializing the application verifier package failed with status 0x%08lx\n",
          v24);
        v34 = LdrpDebugFlags;
      }
      if ( (v34 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      if ( v11 || v47 || !*(_BYTE *)(a2 + 2) )
        goto LABEL_67;
      v35 = *(_QWORD *)(a2 + 32);
      v55 = &v66;
      v54 = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v35 + 128), &qword_18010CD08, (__int64)&v54) < 0
        || (v24 = RtlUnicodeStringToInteger((unsigned __int16 *)&v54, 0, (int *)&v45), v24 < 0)
        || !v45 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
    if ( v24 < 0 )
      goto LABEL_63;
LABEL_67:
    LdrpQueryIllegalCWDDevices();
    goto LABEL_68;
  }
  v62 = (__int64)v47;
  v61 = 48;
  v63 = &unk_18010CD60;
  v64 = 64;
  v65 = 0LL;
  v23 = NtOpenKey();
  v24 = v23;
  if ( v23 == -1073741772 )
  {
    LdrpLargePageDllKeyHandle = 0LL;
    goto LABEL_22;
  }
  if ( v23 >= 0 )
    goto LABEL_22;
LABEL_63:
  if ( *v8 )
  {
    NtClose(*v8);
    *v8 = 0LL;
  }
  if ( *v7 )
  {
    NtClose(*v7);
    *v7 = 0LL;
  }
LABEL_68:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v24;
}
