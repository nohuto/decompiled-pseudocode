/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800C7AE0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x18004C420 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A8D10 (RtlCaptureContext.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800C7CF0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800C7D78 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800C7E70 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800C7FD0 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int PackageIdentity; // ebx
  _WORD *v3; // rdi
  __int64 v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+40h] [rbp-C0h]
  const wchar_t *v9; // [rsp+48h] [rbp-B8h]
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v11; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v14[20]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v15[256]; // [rsp+630h] [rbp+530h] BYREF

  v10 = 256LL;
  v8 = 1441812;
  v9 = L"BinaryHash";
  PackageIdentity = RtlQueryPackageIdentity(-4, (int)v15, (int)&v10, 0, 0LL, 0LL);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetRemediationRegistryKey(a1, v15, &Handle);
  if ( PackageIdentity < 0 )
    goto LABEL_14;
  PackageIdentity = LdrpAppxGetBinaryNameKeyInformation(Handle, &v11, &v7);
  if ( PackageIdentity >= 0 )
  {
    v3 = v11;
    LODWORD(v4) = 0;
    if ( *v11 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( v11[v4] );
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
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
    RtlReportException(v12, &ContextRecord, 2LL);
    ZwTerminateProcess();
  }
  return 3221225781LL;
}
