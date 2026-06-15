/*
 * XREFs of ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x180079D50
 * Callers:
 *     s_mmeNotifyDeviceAdded @ 0x180079FF0 (s_mmeNotifyDeviceAdded.c)
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceAdded(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids, a1);
  }
  return 0LL;
}
