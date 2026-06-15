/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002DAA8
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18002D8FC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180004754 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18002DBD0 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18002DC00 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     CoTaskMemFree_0 @ 0x180043F52 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // edi
  bool v7; // cc
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rbx
  int AppUserModelId; // eax
  void *v14; // rax
  bool *v15; // [rsp+20h] [rbp-20h]
  ARI::ProcessToken::SysAppId *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF

  *a2 = 0LL;
  *(_OWORD *)v16 = 0LL;
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v16);
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
  v7 = LastError <= 0;
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, v16, &v16[1], v5, v15);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    v7 = LastError <= 0;
  }
  if ( !v7 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
  {
    if ( ARI::ProcessToken::SysAppId::GetAppUserModelId(v16[1], 0LL, &TokenHandle, 0LL) == 122 )
    {
      pv = 0LL;
      CoTaskMemFree_0(0LL);
      v11 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0LL, (unsigned int)TokenHandle, (__int64)v15, (char **)&pv);
      v12 = pv;
      LastError = v11;
      if ( v11 >= 0 )
      {
        AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                           v16[1],
                           (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)TokenHandle,
                           &TokenHandle,
                           (unsigned int *)pv);
        LastError = AppUserModelId;
        if ( AppUserModelId > 0 )
          LastError = (unsigned __int16)AppUserModelId | 0x80070000;
        if ( LastError >= 0 )
        {
          v14 = v12;
          v12 = 0LL;
          *a2 = v14;
        }
      }
      CoTaskMemFree_0(v12);
    }
    else
    {
      LastError = -2147418113;
    }
  }
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v16);
  return (unsigned int)LastError;
}
