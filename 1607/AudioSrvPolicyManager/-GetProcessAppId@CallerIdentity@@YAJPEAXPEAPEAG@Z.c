/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180022928
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180011610 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x180022658 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x1800227B8 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // ebx
  signed int v7; // edi
  int AppUserModelId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rbx
  int v13; // eax
  void *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, P, (const UNICODE_STRING **)&P[1], v5);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  v7 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v7 = LastError;
  if ( v7 >= 0 )
  {
    AppUserModelId = ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                       (ARI::ProcessToken::AutoSysAppId *)P,
                       0,
                       &v18,
                       0LL);
    v7 = AppUserModelId != 122 ? 0x8000FFFF : 0;
    if ( AppUserModelId == 122 )
    {
      pv = 0LL;
      CoTaskMemFree(0LL);
      v11 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0LL, v18, v16, (unsigned __int16 **)&pv);
      v12 = pv;
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                (ARI::ProcessToken::AutoSysAppId *)P,
                v18,
                &v18,
                (unsigned __int16 *)pv);
        v7 = (unsigned __int16)v13 | 0x80070000;
        if ( v13 <= 0 )
          v7 = v13;
        if ( v7 >= 0 )
        {
          v14 = v12;
          v12 = 0LL;
          *a2 = v14;
        }
      }
      CoTaskMemFree(v12);
    }
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  return (unsigned int)v7;
}
