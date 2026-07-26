/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00C4140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_q(0x8Du, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
  }
}
