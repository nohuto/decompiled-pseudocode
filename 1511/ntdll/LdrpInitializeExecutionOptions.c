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
  void *v10; // rsi
  HANDLE v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  __int64 i; // rdi
  const WCHAR *v20; // rdx
  _BYTE *v21; // rax
  ULONG v22; // ecx
  int v23; // r15d
  int v24; // eax
  ULONG v25; // edi
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  unsigned __int16 *v30; // r15
  char v31; // al
  HANDLE v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  ULONG v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+44h] [rbp-BCh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v50; // [rsp+68h] [rbp-98h]
  void *v51; // [rsp+70h] [rbp-90h] BYREF
  void *v52; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING Value; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h]
  HANDLE *v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  char v59; // [rsp+E8h] [rbp-18h] BYREF
  WCHAR SourceString[200]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a4;
  v56 = a6;
  *a4 = 0LL;
  LOBYTE(v6) = 0;
  KeyHandle = 0LL;
  v9 = 0;
  Handle = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0LL;
  v54 = a3;
  v47 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v12 = *(_QWORD *)(a2 + 32);
  v55 = a4;
  v50 = a1;
  v48 = v6;
  v13 = (*(_DWORD *)(v12 + 8) & 0x4000) == 0;
  v44 = 1;
  if ( !v13 || RtlpOpenImageFileOptionsKey(a1, a2, &KeyHandle) < 0 )
    goto LABEL_40;
  *v7 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14 = RtlOpenModernAppOptionsKey(&DestinationString, KeyHandle, &v51);
    v10 = v51;
    if ( v14 >= 0 )
      *a5 = v51;
  }
  RtlQueryApplicationKeyOption(
    v10,
    KeyHandle,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v35,
    0LL);
  RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v47, 4, v36, 0LL);
  RtlQueryApplicationKeyOption(
    v10,
    KeyHandle,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v37,
    0LL);
  v43 = 0;
  RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&v43, 4, v38, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v43 )
    v15 = v43;
  RtlpUnloadEventTraceExNumber = v15;
  v43 = 0;
  RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&v43, 4, v39, 0LL);
  if ( v43 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v43;
  v43 = 0;
  RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&v43, 4, v40, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v43 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v43 = 0;
  RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"TracingFlags", 4LL, (__int64)&v43, 4, v41, 0LL);
  if ( v43 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v43);
    v10 = v51;
  }
  v43 = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CFGOptions", 4, &v43, 4u, 0LL) >= 0 && (v43 & 1) != 0 )
  {
    LdrProtectMrdata(0);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
  {
LABEL_22:
    RtlQueryImageFileKeyOption(KeyHandle, L"MinimumStackCommitInBytes", 4, &v43, 4u, 0LL);
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v43 )
      *(_QWORD *)(a2 + 792) = v43;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v20 = (&off_1801115D0)[i];
      v43 = 0;
      RtlQueryImageFileKeyOption(KeyHandle, v20, 4, &v43, 4u, 0LL);
      v21 = *(&off_1801115D0 + i + 1);
      if ( v43 )
        *v21 = 1;
      else
        *v21 = 0;
    }
    v43 = 0;
    RtlQueryImageFileKeyOption(KeyHandle, L"MaxDeadActivationContexts", 4, &v43, 4u, 0LL);
    v22 = g_SxsMaxDeadActivationContexts;
    if ( v43 )
      v22 = v43;
    v13 = (*(_DWORD *)(a2 + 188) & 0x100) == 0;
    g_SxsMaxDeadActivationContexts = v22;
    v23 = (unsigned __int8)v48;
    if ( !v13 )
      v23 = 1;
    v48 = v23;
    v24 = RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"GlobalFlag", 4LL, (__int64)&v46, 4, v42, &v52);
    v7 = v55;
    if ( v24 >= 0 )
    {
      v25 = v46;
      if ( (v46 & 0x2000100) != 0 && !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v10, KeyHandle) )
      {
        v25 &= 0xFDFFFEFF;
        v46 = v25;
      }
      *(_DWORD *)(a2 + 188) = v25;
    }
    v9 = v47;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v44 = 0;
      v11 = v52;
    }
LABEL_40:
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      v9 |= 1u;
    v26 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
    RtlpHpApplySegmentHeapConfigurations();
    v29 = RtlpLowFragHeapGlobalFlags;
    if ( (v9 & 8) != 0 )
    {
      v29 = RtlpLowFragHeapGlobalFlags | 0x10;
      RtlpLowFragHeapGlobalFlags |= 0x10u;
    }
    if ( (v9 & 4) != 0 )
    {
      v29 |= 8u;
      RtlpLowFragHeapGlobalFlags = v29;
    }
    if ( (v26 & 0x100000) != 0 || (v9 & 2) != 0 )
    {
      v29 |= 2u;
      RtlpLowFragHeapGlobalFlags = v29;
    }
    if ( (v9 & 1) != 0 || (v29 & 2) != 0 )
      RtlpLowFragHeapGlobalFlags = v29 | 4;
    if ( (v9 & 0xFF00) != 0 )
      RtlpHpLfhContentionLimit = HIBYTE(v9);
    v18 = 0;
    if ( !v44 || LdrpIsSecureProcess )
    {
      v30 = v50;
    }
    else
    {
      v30 = v50;
      if ( (MEMORY[0x7FFE03A0] & 1) != 0 )
      {
        if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v50, v27, &Handle) < 0 )
        {
          Handle = 0LL;
        }
        else if ( RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4, &v46, 4u, 0LL) >= 0 )
        {
          v11 = Handle;
          *(_DWORD *)(a2 + 188) |= v46 & 0x2000100;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      LOBYTE(v28) = v48;
      v18 = LdrpInitializeApplicationVerifierPackage(v30, a2, v28, v11, v54, v56);
      if ( v18 < 0 )
      {
        v31 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            7361,
            (unsigned int)"LdrpInitializeExecutionOptions",
            0,
            (__int64)"Initializing the application verifier package failed with status 0x%08lx\n");
          v31 = LdrpDebugFlags;
        }
        if ( (v31 & 0x10) != 0 )
          __debugbreak();
LABEL_75:
        if ( v18 < 0 )
          goto LABEL_76;
      }
    }
    else if ( !v10 )
    {
      v32 = KeyHandle;
      if ( KeyHandle || !*(_BYTE *)(a2 + 2) )
        goto LABEL_81;
      v33 = *(_QWORD *)(a2 + 32);
      Value.Buffer = (unsigned __int16 *)&v59;
      *(_DWORD *)&Value.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v33 + 128), (PUNICODE_STRING)&stru_180106060, &Value) < 0
        || (v18 = RtlUnicodeStringToInteger(&Value, 0, &v43), v18 < 0)
        || !v43 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
      goto LABEL_75;
    }
    v32 = KeyHandle;
LABEL_81:
    LdrpQueryIllegalCWDDevices(v32);
    goto LABEL_82;
  }
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180106080;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
  v18 = v17;
  if ( v17 == -1073741772 )
  {
    LdrpLargePageDllKeyHandle = 0LL;
    goto LABEL_22;
  }
  if ( v17 >= 0 )
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
  return (unsigned int)v18;
}
