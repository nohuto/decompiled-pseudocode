/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180081608
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001E670 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180029F44 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003FBC0 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180044644 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  BOOL v6; // r8d
  __int64 v7; // xmm1_8
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  BOOL v11; // ebx
  _QWORD *v12; // rax
  _BOOL8 v13; // r15
  CWindowData *v14; // rsi
  CWindowData *i; // rbx
  CTopLevelWindow *v16; // rcx
  PVOID RestartKey; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+28h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h]

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  RestartKey = 0LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351) == 2;
    v7 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
    v20 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
    LODWORD(v20) = v5;
    DWORD1(v20) = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    v21 = v7;
    if ( v8 > 0x78 )
      v8 = 120;
    DWORD2(v20) = v8;
    v9 = *((_DWORD *)a2 + 4);
    if ( v9 > 0x78 )
      v9 = 120;
    HIDWORD(v20) = v9;
    v10 = *((_DWORD *)a2 + 5);
    if ( v10 > 0x78 )
      v10 = 120;
    LODWORD(v21) = v10;
    HIDWORD(v21) = *((_DWORD *)a2 + 6);
    v22 = *((_DWORD *)a2 + 7);
    v11 = (v22 == 2) != v6;
    CDesktopManager::ApplyColorizationParameters(
      CDesktopManager::s_pDesktopManagerInstance,
      (const struct CGlassColorizationParameters *)&v20);
    v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    v13 = v11;
    while ( v12 )
    {
      v14 = (CWindowData *)(v12 + 8);
      for ( i = (CWindowData *)v12[8]; i != v14; i = *(CWindowData **)i )
      {
        CWindowData::OnColorizationUpdated(i);
        v16 = (CTopLevelWindow *)*((_QWORD *)i + 48);
        if ( v16 && v13 )
          CTopLevelWindow::OnBlurBehindUpdated(v16);
      }
      v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v4;
}
