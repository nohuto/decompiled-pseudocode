/*
 * XREFs of GetpwndNotifypMenuState @ 0x1C004ED7C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     IsModelessMenuNotificationWindow @ 0x1C004ED60 (IsModelessMenuNotificationWindow.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 536LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
