/*
 * XREFs of GetpwndNotifypMenuState @ 0x140122DB8
 * Callers:
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     IsModelessMenuNotificationWindow @ 0x140122D88 (IsModelessMenuNotificationWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 640LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
