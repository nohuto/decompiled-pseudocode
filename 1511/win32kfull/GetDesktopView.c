/*
 * XREFs of GetDesktopView @ 0x1C00CF930
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C00657C0 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00842A4 (IsHotKey.c)
 *     NtUserDwmValidateWindow @ 0x1C00CED60 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C00CF460 (_MapDesktopObject.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00CF984 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     UserCommitDesktopMemory @ 0x1C0101EB0 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 672); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
