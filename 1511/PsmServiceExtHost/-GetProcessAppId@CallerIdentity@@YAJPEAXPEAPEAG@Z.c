/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001BCA0
 * Callers:
 *     ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C550 (-GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18001BE0C (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x18001BE3C (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18001DC50 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18001FD94 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     CoTaskMemFree_0 @ 0x18002B7A2 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // edi
  bool v7; // cc
  unsigned int v9; // esi
  unsigned int *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int16 *v12; // rax
  const unsigned __int16 *v13; // r8
  int AppUserModelId; // eax
  unsigned int *v15; // rax
  bool *v16; // [rsp+20h] [rbp-30h]
  unsigned __int16 *v17; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-28h]
  unsigned int v19; // [rsp+30h] [rbp-20h]
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp+20h] BYREF

  *a2 = 0LL;
  *(_OWORD *)v20 = 0LL;
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v20);
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
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, v20, &v20[1], v5, v16);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    v7 = LastError <= 0;
  }
  if ( !v7 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
  {
    if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                         v20[1],
                         0LL,
                         (unsigned int)&TokenHandle,
                         0LL,
                         (unsigned __int16 *)v16) != 122 )
    {
      LastError = -2147418113;
      goto LABEL_11;
    }
    CoTaskMemFree_0(0LL);
    v9 = (unsigned int)TokenHandle;
    v10 = 0LL;
    v11 = (unsigned int)TokenHandle + 1LL;
    if ( v11 < (unsigned int)TokenHandle )
    {
      LastError = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v11, 2uLL) )
      {
        LastError = -2147024362;
LABEL_17:
        if ( LastError >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             v20[1],
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)TokenHandle,
                             (unsigned int)&TokenHandle,
                             v10,
                             v17);
          LastError = AppUserModelId;
          if ( AppUserModelId > 0 )
            LastError = (unsigned __int16)AppUserModelId | 0x80070000;
          if ( LastError >= 0 )
          {
            v15 = v10;
            v10 = 0LL;
            *a2 = v15;
          }
        }
        goto LABEL_22;
      }
      v12 = (unsigned __int16 *)CoTaskMemAlloc(2 * v11);
      v10 = (unsigned int *)v12;
      if ( v12 )
      {
        LastError = 0;
        StringCchCopyNExW(v12, v11, v13, v9, (unsigned __int16 **)v17, v18, v19);
        goto LABEL_17;
      }
      LastError = -2147024882;
    }
LABEL_22:
    CoTaskMemFree_0(v10);
  }
LABEL_11:
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v20);
  return (unsigned int)LastError;
}
