/*
 * XREFs of ?GetHostIdFromProcessHandle@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x1800540DC
 * Callers:
 *     Srv_ResourcePolicy_GetProcessAffinityMask @ 0x18004BFA0 (Srv_ResourcePolicy_GetProcessAffinityMask.c)
 *     Srv_ResourcePolicy_GetProcessGroupCount @ 0x18004C050 (Srv_ResourcePolicy_GetProcessGroupCount.c)
 *     Srv_ResourcePolicy_RevertProcessAffinityMask @ 0x18004C100 (Srv_ResourcePolicy_RevertProcessAffinityMask.c)
 *     Srv_ResourcePolicy_SetProcessAffinityMask @ 0x18004C1D0 (Srv_ResourcePolicy_SetProcessAffinityMask.c)
 * Callees:
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x180047E90 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ?GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z @ 0x180054140 (-GetHostIdFromProcessToken@Shared@DevPlat@@YAJPEAXPEA_K@Z.c)
 */

__int64 __fastcall DevPlat::Shared::GetHostIdFromProcessHandle(DevPlat::Shared *this, void *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // r8
  signed int LastError; // eax
  void *v6; // rdx
  unsigned int HostIdFromProcessToken; // ebx
  void *TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  if ( OpenProcessToken(this, 8u, &TokenHandle) )
  {
    HostIdFromProcessToken = DevPlat::Shared::GetHostIdFromProcessToken((DevPlat::Shared *)TokenHandle, a2, v4);
  }
  else
  {
    LastError = GetLastError();
    HostIdFromProcessToken = LastError;
    if ( LastError > 0 )
      HostIdFromProcessToken = (unsigned __int16)LastError | 0x80070000;
  }
  Common::CloseHandleHelper((Common *)TokenHandle, v6);
  return HostIdFromProcessToken;
}
