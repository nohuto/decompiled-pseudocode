/*
 * XREFs of NdisNblTrackerRecordEvent @ 0x1C0064460
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

void __fastcall NdisNblTrackerRecordEvent(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, 0LL, a3, a2, a4);
}
