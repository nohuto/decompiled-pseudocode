/*
 * XREFs of ?InitializeWnfStateName@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180006CD4
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180006E38 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 * Callees:
 *     ?RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z @ 0x180006F64 (-RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::InitializeWnfStateName(struct _WNF_STATE_NAME *this)
{
  HANDLE CurrentProcess; // rax
  NTSTATUS WnfStateNameForIpc; // ebx
  DWORD cbSid; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  PSID TokenInformation[12]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE pSid[80]; // [rsp+F0h] [rbp-10h] BYREF

  TokenHandle = 0LL;
  cbSid = 68;
  if ( CreateWellKnownSid(WinLocalSystemSid, 0LL, pSid, &cbSid) )
  {
    CurrentProcess = GetCurrentProcess();
    WnfStateNameForIpc = NtOpenProcessToken(CurrentProcess, 8u, &TokenHandle);
    if ( WnfStateNameForIpc >= 0 )
    {
      WnfStateNameForIpc = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &cbSid);
      if ( WnfStateNameForIpc >= 0 )
      {
        RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
        WnfStateNameForIpc = RmpCreateWnfStateNameForIpc(pSid, DestinationSid, this + 6);
      }
    }
  }
  else
  {
    WnfStateNameForIpc = -1073741823;
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)WnfStateNameForIpc;
}
