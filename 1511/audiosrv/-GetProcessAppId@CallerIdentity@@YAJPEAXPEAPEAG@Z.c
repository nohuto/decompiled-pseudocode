/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180032164
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800304A8 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180001B8C (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180032290 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180039EAC (-Free@ARI@@YAXPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x180047E92 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  void *v5; // rdx
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v6; // r9
  signed int LastError; // edi
  bool v8; // cc
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  void *v13; // rbx
  int AppUserModelId; // eax
  void *v15; // rax
  bool *v16; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+28h]

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_3;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_3:
    LastError = 0;
    goto LABEL_4;
  }
  LastError = GetLastError();
LABEL_4:
  v8 = LastError <= 0;
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::Open(
                  TokenHandle,
                  P,
                  (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **)&P[1],
                  v6,
                  v16);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    v8 = LastError <= 0;
  }
  if ( !v8 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
  {
    if ( ARI::ProcessToken::SysAppId::GetAppUserModelId((ARI::ProcessToken::SysAppId *)P[1], 0LL, &TokenHandle, 0LL) == 122 )
    {
      pv = 0LL;
      CoTaskMemFree_0(0LL);
      v12 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, 0, (_DWORD)TokenHandle);
      v13 = pv;
      LastError = v12;
      if ( v12 >= 0 )
      {
        AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                           (ARI::ProcessToken::SysAppId *)P[1],
                           (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)TokenHandle,
                           &TokenHandle,
                           (unsigned int *)pv);
        LastError = AppUserModelId;
        if ( AppUserModelId > 0 )
          LastError = (unsigned __int16)AppUserModelId | 0x80070000;
        if ( LastError >= 0 )
        {
          v15 = v13;
          v13 = 0LL;
          *a2 = v15;
        }
      }
      CoTaskMemFree_0(v13);
    }
    else
    {
      LastError = -2147418113;
    }
  }
  if ( P[0] )
    ARI::Free(P[0], v5);
  return (unsigned int)LastError;
}
