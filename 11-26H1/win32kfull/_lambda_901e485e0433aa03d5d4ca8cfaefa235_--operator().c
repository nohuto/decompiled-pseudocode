/*
 * XREFs of _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x14025184C
 * Callers:
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::_lambda_invoker_cdecl_ @ 0x140251830 (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x140219320 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

bool __fastcall lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator()(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *ShellSpecialWindow; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) == *(_QWORD *)(a2[2] + 464LL) )
  {
    v5 = *(_DWORD *)(a2[5] + 236LL);
    if ( v5 != 2 && v5 != 16 )
    {
      if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(*(_QWORD *)(UserSessionState + 19176), 0);
      }
      else
      {
        ShellSpecialWindow = *(struct tagWND **)(a2[3] + 296LL);
      }
      if ( IsWindowActivateable(ShellSpecialWindow) )
      {
        *(_QWORD *)&v11 = ShellSpecialWindow;
        *((_QWORD *)&v11 + 1) = 5LL;
        *a3 = v11;
      }
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
