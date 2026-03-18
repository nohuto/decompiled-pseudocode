/*
 * XREFs of GetDesktopView @ 0x14005A3B0
 * Callers:
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14005A254 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x140203980 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     UserCommitDesktopMemory @ 0x1402068E0 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  W32GetUserGdiSessionState(a1);
  for ( result = *(_QWORD **)(a1 + 688); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
