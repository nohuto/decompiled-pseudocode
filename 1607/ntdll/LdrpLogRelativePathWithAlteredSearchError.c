/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x180009290
 * Callers:
 *     LdrpGetDllPath @ 0x18000C808 (LdrpGetDllPath.c)
 * Callees:
 *     CentennialIssueTracker_EnsureRegistration @ 0x180009310 (CentennialIssueTracker_EnsureRegistration.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D1C68 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800D1CD0 (_TlgWrite.c)
 */

TLG_STATUS __fastcall LdrpLogRelativePathWithAlteredSearchError(LPCWSTR pwsz)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  TLG_STATUS result; // eax
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = (const WCHAR *)&unk_180113454;
  result = CentennialIssueTracker_EnsureRegistration();
  if ( result )
  {
    if ( hProvider > 5u )
    {
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v10, Buffer);
      return TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18011C3D4, v6, v7, 4u, &pData);
    }
  }
  return result;
}
