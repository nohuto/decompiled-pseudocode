/*
 * XREFs of GetDesktopView @ 0x1C007F0F0
 * Callers:
 *     IsHotKey @ 0x1C0049900 (IsHotKey.c)
 *     NtUserDwmValidateWindow @ 0x1C007E960 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C007EC20 (_MapDesktopObject.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C007F140 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C0090EE0 (NtUserPostThreadMessage.c)
 *     UserCommitDesktopMemory @ 0x1C00F9CB0 (UserCommitDesktopMemory.c)
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
