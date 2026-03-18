/*
 * XREFs of GetpwndNotifypMenuState @ 0x1C00AD4E0
 * Callers:
 *     IsModelessMenuNotificationWindow @ 0x1C00AD4C4 (IsModelessMenuNotificationWindow.c)
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 528LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
