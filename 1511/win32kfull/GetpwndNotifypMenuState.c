/*
 * XREFs of GetpwndNotifypMenuState @ 0x1C00CAFB0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00CAF94 (IsModelessMenuNotificationWindow.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
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
