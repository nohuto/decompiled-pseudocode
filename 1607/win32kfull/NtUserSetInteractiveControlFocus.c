/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C0219B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C023BE1C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct InteractiveControlManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    v9 = 0LL;
  }
  v14 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v14;
  v15 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v10, a1, a2, v9, v14, v15) >= 0;
  ThreadUnlock1(v12, v11);
LABEL_8:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
