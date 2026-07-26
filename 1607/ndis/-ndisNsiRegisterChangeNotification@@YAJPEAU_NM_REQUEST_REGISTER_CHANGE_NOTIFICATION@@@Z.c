/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00B04C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
  {
    WPP_SF_q(0x8Au, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_qD(0x8Bu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1, 0);
  }
  return 0LL;
}
