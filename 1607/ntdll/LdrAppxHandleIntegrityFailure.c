/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800CEEC0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x18005E010 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800AA150 (RtlCaptureContext.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CF250 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CF3B0 (LdrpAppxGetRemediationRegistryKey.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int PackageIdentity; // ebx
  _WORD *v3; // rdi
  __int64 v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v8; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+58h] [rbp-A8h]
  const wchar_t *v11; // [rsp+60h] [rbp-A0h]
  _QWORD v12[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v14[20]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v15[256]; // [rsp+630h] [rbp+530h] BYREF

  v7 = 256LL;
  v10 = 1441812;
  v11 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentity(-4, (int)v15, (int)&v7, 0, 0LL, 0LL);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(a1, v15, &Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(Handle, &v8, &v9);
  if ( PackageIdentity >= 0 )
  {
    v3 = v8;
    LODWORD(v4) = 0;
    if ( *v8 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( v8[v4] );
    }
    memset(v14, 0, sizeof(v14));
    PackageIdentity = NtQueryValueKey();
    if ( PackageIdentity >= 0 )
    {
      if ( v14[1] != 3 || !v14[2] )
        PackageIdentity = -1073739509;
      if ( PackageIdentity >= 0 )
        LdrpAppxEtwIntegrityFailure(a1, v15, v3);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  NtClose(Handle);
  if ( PackageIdentity < 0 )
LABEL_14:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)PackageIdentity);
  if ( a1 != -1073740673 )
  {
    memset(v12, 0, 0x98uLL);
    v12[0] = 0x1060C201ELL;
    v12[2] = LdrAppxHandleIntegrityFailure;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException((__int64)v12, (__int64)&ContextRecord, 2u);
    ZwTerminateProcess();
  }
  return 3221225781LL;
}
