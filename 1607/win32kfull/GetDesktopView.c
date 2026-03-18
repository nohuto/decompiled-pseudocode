/*
 * XREFs of GetDesktopView @ 0x1C009A590
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0057130 (NtUserPostThreadMessage.c)
 *     NtUserDwmValidateWindow @ 0x1C0099A70 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C009A0C0 (_MapDesktopObject.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C009A5E4 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     IsHotKey @ 0x1C00A3B48 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0123A10 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 664); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
