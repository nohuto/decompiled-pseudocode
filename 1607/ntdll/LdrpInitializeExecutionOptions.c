/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x180093C38
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005F1E0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEA0 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryIllegalCWDDevices @ 0x18007EF28 (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EF90 (RtlQueryApplicationKeyOption.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007F100 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x180089B74 (RtlSetLowFragHeapGlobalFlags.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D2080 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2458 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D28C8 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2AA0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D6488 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800DCAAC (RtlOpenModernAppOptionsKey.c)
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
  __int16 v10; // di
  void *v11; // rsi
  HANDLE v12; // r14
  __int64 v13; // rax
  int v14; // eax
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS v17; // eax
  NTSTATUS v18; // edi
  __int64 i; // rdi
  const WCHAR *v20; // rdx
  _BYTE *v21; // rax
  ULONG v22; // ecx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  HANDLE v27; // rcx
  char v29; // al
  ULONG v30; // edi
  __int64 v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  ULONG v40; // [rsp+40h] [rbp-C0h] BYREF
  char v41; // [rsp+44h] [rbp-BCh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  void *v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+70h] [rbp-90h] BYREF
  void *v49; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING Value; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v51; // [rsp+90h] [rbp-70h]
  HANDLE *v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  char v57; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[200]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a5;
  v8 = a4;
  v53 = a6;
  v52 = a4;
  *a4 = 0LL;
  v10 = 0;
  KeyHandle = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  *a5 = 0LL;
  LOBYTE(v45) = 0;
  v44 = 0;
  v47 = 0LL;
  v49 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v54 = a3;
  v51 = a5;
  v41 = 1;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 || RtlpOpenImageFileOptionsKey(a1, 9u, &KeyHandle) < 0 )
    goto LABEL_34;
  *v8 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14 = RtlOpenModernAppOptionsKey(&DestinationString, KeyHandle, &v47);
    v11 = v47;
    if ( v14 >= 0 )
      *a5 = v47;
  }
  RtlQueryApplicationKeyOption(
    v11,
    KeyHandle,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v32,
    0LL);
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v44, 4, v33, 0LL);
  RtlQueryApplicationKeyOption(
    v11,
    KeyHandle,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v34,
    0LL);
  v40 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&v40, 4, v35, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v40 )
    v15 = v40;
  RtlpUnloadEventTraceExNumber = v15;
  v40 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&v40, 4, v36, 0LL);
  if ( v40 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v40;
  v40 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&v40, 4, v37, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v40 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v40 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"TracingFlags", 4LL, (__int64)&v40, 4, v38, 0LL);
  if ( v40 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v40);
    v11 = v47;
  }
  v40 = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CFGOptions", 4, &v40, 4u, 0LL) >= 0 && (v40 & 1) != 0 )
  {
    LdrProtectMrdata(0);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
  {
LABEL_21:
    RtlQueryImageFileKeyOption(KeyHandle, L"MinimumStackCommitInBytes", 4, &v40, 4u, 0LL);
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v40 )
      *(_QWORD *)(a2 + 792) = v40;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v20 = (&off_1801092C0)[i];
      v40 = 0;
      RtlQueryImageFileKeyOption(KeyHandle, v20, 4, &v40, 4u, 0LL);
      v21 = *(&off_1801092C0 + i + 1);
      if ( v40 )
        *v21 = 1;
      else
        *v21 = 0;
    }
    v40 = 0;
    RtlQueryImageFileKeyOption(KeyHandle, L"MaxDeadActivationContexts", 4, &v40, 4u, 0LL);
    v22 = g_SxsMaxDeadActivationContexts;
    if ( v40 )
      v22 = v40;
    v23 = (unsigned __int8)v45;
    if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
      v23 = 1;
    g_SxsMaxDeadActivationContexts = v22;
    v45 = v23;
    v24 = RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"GlobalFlag", 4LL, (__int64)&v43, 4, v39, &v49);
    v7 = v51;
    v8 = v52;
    if ( v24 < 0 )
      goto LABEL_32;
    v30 = v43;
    if ( (v43 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, KeyHandle) )
      {
        v30 &= 0xFDFFFEFF;
        v43 = v30;
      }
      if ( (v30 & 0x2000100) != 0 )
      {
        if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(a1, &v48) < 0 )
          goto LABEL_32;
        if ( !v48 )
        {
          v30 &= 0xFDFFFEFF;
          v43 = v30;
        }
      }
    }
    *(_DWORD *)(a2 + 188) = v30;
LABEL_32:
    v10 = v44;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v41 = 0;
      v12 = v49;
    }
LABEL_34:
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      v10 |= 1u;
    RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
    v18 = 0;
    if ( !LdrpIsSecureProcess && v41 && (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(a1, v25, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else if ( RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4, &v43, 4u, 0LL) >= 0 )
      {
        v12 = Handle;
        *(_DWORD *)(a2 + 188) |= v43 & 0x2000100;
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      LOBYTE(v26) = v45;
      v18 = LdrpInitializeApplicationVerifierPackage(a1, a2, v26, v12, v54, v53);
      if ( v18 >= 0 )
        goto LABEL_76;
      v29 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7623,
          (unsigned int)"LdrpInitializeExecutionOptions",
          0,
          (__int64)"Initializing the application verifier package failed with status 0x%08lx\n",
          v18);
        v29 = LdrpDebugFlags;
      }
      if ( (v29 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      if ( v11 )
        goto LABEL_76;
      v27 = KeyHandle;
      if ( KeyHandle || !*(_BYTE *)(a2 + 2) )
        goto LABEL_46;
      v31 = *(_QWORD *)(a2 + 32);
      Value.Buffer = (wchar_t *)&v57;
      *(_DWORD *)&Value.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v31 + 128), (PUNICODE_STRING)&stru_1801088C0, &Value) < 0
        || (v18 = RtlUnicodeStringToInteger(&Value, 0, &v40), v18 < 0)
        || !v40 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
    if ( v18 < 0 )
      goto LABEL_48;
LABEL_76:
    v27 = KeyHandle;
LABEL_46:
    LdrpQueryIllegalCWDDevices(v27);
    goto LABEL_52;
  }
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801088D0;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
  v18 = v17;
  if ( v17 == -1073741772 )
  {
    LdrpLargePageDllKeyHandle = 0LL;
    goto LABEL_21;
  }
  if ( v17 >= 0 )
    goto LABEL_21;
LABEL_48:
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
LABEL_52:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v18;
}
