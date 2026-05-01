/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800080B8
 * Callers:
 *     ?GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007C04 (-GetStoreGameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180007F54 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180007F78 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     CoTaskMemFree_0 @ 0x180024A02 (CoTaskMemFree_0.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004D4E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18004DD64 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  void *v5; // rdx
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v6; // r9
  signed int LastError; // edi
  bool v8; // cc
  unsigned __int64 v10; // rsi
  unsigned int *v11; // rbx
  unsigned __int64 v12; // r14
  wchar_t *v13; // rax
  const unsigned __int16 *v14; // r8
  int AppUserModelId; // eax
  unsigned int *v16; // rax
  unsigned __int16 *v17; // [rsp+20h] [rbp-30h]
  unsigned __int16 **v18; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-28h]
  unsigned int v20; // [rsp+30h] [rbp-20h]
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp+20h] BYREF

  *a2 = 0LL;
  *(_OWORD *)v21 = 0LL;
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
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, v21, (const UNICODE_STRING **)&v21[1], v6);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
    v8 = LastError <= 0;
  }
  if ( !v8 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
  {
    if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(v21[1], 0LL, (unsigned int)&TokenHandle, 0LL, v17) != 122 )
    {
      LastError = -2147418113;
      goto LABEL_11;
    }
    CoTaskMemFree_0(0LL);
    v10 = (unsigned int)TokenHandle;
    v11 = 0LL;
    v12 = (unsigned int)TokenHandle + 1LL;
    if ( v12 < (unsigned int)TokenHandle )
    {
      LastError = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v12, 2uLL) )
      {
        LastError = -2147024362;
        goto LABEL_21;
      }
      v13 = (wchar_t *)CoTaskMemAlloc(2 * v12);
      v11 = (unsigned int *)v13;
      if ( v13 )
      {
        LastError = 0;
        StringCchCopyNExW(v13, v12, v14, v10, v18, v19, v20);
LABEL_21:
        if ( LastError >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             v21[1],
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)TokenHandle,
                             (unsigned int)&TokenHandle,
                             v11,
                             (unsigned __int16 *)v18);
          LastError = AppUserModelId;
          if ( AppUserModelId > 0 )
            LastError = (unsigned __int16)AppUserModelId | 0x80070000;
          if ( LastError >= 0 )
          {
            v16 = v11;
            v11 = 0LL;
            *a2 = v16;
          }
        }
        goto LABEL_28;
      }
      LastError = -2147024882;
    }
LABEL_28:
    CoTaskMemFree_0(v11);
  }
LABEL_11:
  ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)v21, v5);
  return (unsigned int)LastError;
}
