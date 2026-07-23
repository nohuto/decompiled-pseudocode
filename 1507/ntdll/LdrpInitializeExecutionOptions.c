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
  void *v11; // rsi
  HANDLE v12; // r14
  __int64 v13; // rax
  int v14; // eax
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS v17; // eax
  int v18; // edi
  __int64 i; // rdi
  const WCHAR *v20; // rdx
  _BYTE *v21; // rax
  ULONG v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  ULONG v26; // edi
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  ULONG v39; // [rsp+40h] [rbp-C0h] BYREF
  char v40; // [rsp+44h] [rbp-BCh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  void *v46; // [rsp+68h] [rbp-98h] BYREF
  void *v47; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING Value; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  HANDLE *v52; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  char v55; // [rsp+E8h] [rbp-18h] BYREF
  WCHAR SourceString[200]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a5;
  v8 = a4;
  v51 = a6;
  v52 = a4;
  *a4 = 0LL;
  v10 = 0;
  KeyHandle = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  *a5 = 0LL;
  LOBYTE(v44) = 0;
  v43 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v50 = a3;
  v49 = a5;
  v40 = 1;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 || RtlpOpenImageFileOptionsKey(a1, 1LL, &KeyHandle) < 0 )
    goto LABEL_40;
  *v8 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14 = RtlOpenModernAppOptionsKey(&DestinationString, KeyHandle, &v46);
    v11 = v46;
    if ( v14 >= 0 )
      *a5 = v46;
  }
  RtlQueryApplicationKeyOption(
    v11,
    KeyHandle,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v31,
    0LL);
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v43, 4, v32, 0LL);
  RtlQueryApplicationKeyOption(
    v11,
    KeyHandle,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v33,
    0LL);
  v39 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&v39, 4, v34, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v39 )
    v15 = v39;
  RtlpUnloadEventTraceExNumber = v15;
  v39 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&v39, 4, v35, 0LL);
  if ( v39 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v39;
  v39 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&v39, 4, v36, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v39 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v39 = 0;
  RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"TracingFlags", 4LL, (__int64)&v39, 4, v37, 0LL);
  if ( v39 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v39);
    v11 = v46;
  }
  v39 = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CFGOptions", 4, &v39, 4u, 0LL) >= 0 && (v39 & 1) != 0 )
  {
    LdrProtectMrdata(0);
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
  {
LABEL_22:
    RtlQueryImageFileKeyOption(KeyHandle, L"MinimumStackCommitInBytes", 4, &v39, 4u, 0LL);
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v39 )
      *(_QWORD *)(a2 + 792) = v39;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v20 = (&off_18010CD30)[i];
      v39 = 0;
      RtlQueryImageFileKeyOption(KeyHandle, v20, 4, &v39, 4u, 0LL);
      v21 = *(&off_18010CD30 + i + 1);
      if ( v39 )
        *v21 = 1;
      else
        *v21 = 0;
    }
    v39 = 0;
    RtlQueryImageFileKeyOption(KeyHandle, L"MaxDeadActivationContexts", 4, &v39, 4u, 0LL);
    v22 = g_SxsMaxDeadActivationContexts;
    if ( v39 )
      v22 = v39;
    v23 = *(_DWORD *)(a2 + 188);
    g_SxsMaxDeadActivationContexts = v22;
    v24 = (unsigned __int8)v44;
    if ( (v23 & 0x100) != 0 )
      v24 = 1;
    v44 = v24;
    v25 = RtlQueryApplicationKeyOption(v11, KeyHandle, (__int64)L"GlobalFlag", 4LL, (__int64)&v42, 4, v38, &v47);
    v7 = v49;
    v8 = v52;
    if ( v25 >= 0 )
    {
      v26 = v42;
      if ( (v42 & 0x2000100) != 0 && !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v11, KeyHandle) )
      {
        v26 &= 0xFDFFFEFF;
        v42 = v26;
      }
      *(_DWORD *)(a2 + 188) = v26;
    }
    v10 = v43;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v40 = 0;
      v12 = v47;
    }
LABEL_40:
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      v10 |= 1u;
    RtlSetLowFragHeapGlobalFlags(v10, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
    v18 = 0;
    if ( v40 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(a1, v27, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else if ( RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4, &v42, 4u, 0LL) >= 0 )
      {
        v12 = Handle;
        *(_DWORD *)(a2 + 188) |= v42 & 0x2000100;
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v18 = LdrpInitializeApplicationVerifierPackage(a1, a2, v44, v12, v50, v51);
      if ( v18 >= 0 )
        goto LABEL_67;
      v28 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          7373,
          "LdrpInitializeExecutionOptions",
          0,
          "Initializing the application verifier package failed with status 0x%08lx\n",
          v18);
        v28 = LdrpDebugFlags;
      }
      if ( (v28 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      if ( v11 || KeyHandle || !*(_BYTE *)(a2 + 2) )
        goto LABEL_67;
      v29 = *(_QWORD *)(a2 + 32);
      Value.Buffer = (unsigned __int16 *)&v55;
      *(_DWORD *)&Value.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v29 + 128), (PUNICODE_STRING)&stru_18010CD08, &Value) < 0
        || (v18 = RtlUnicodeStringToInteger(&Value, 0, &v39), v18 < 0)
        || !v39 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
    if ( v18 < 0 )
      goto LABEL_63;
LABEL_67:
    LdrpQueryIllegalCWDDevices();
    goto LABEL_68;
  }
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18010CD60;
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
  return (unsigned int)v18;
}
