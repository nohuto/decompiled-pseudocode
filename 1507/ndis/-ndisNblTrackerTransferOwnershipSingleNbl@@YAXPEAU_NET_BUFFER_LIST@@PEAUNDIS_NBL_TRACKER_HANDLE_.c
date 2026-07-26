/*
 * XREFs of ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006085C
 * Callers:
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D9C0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C005E750 (ndisMIndicatePacket.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000C614 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C00607E4 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipSingleNbl(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3)
{
  char v3; // si
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi
  _BYTE v10[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  char v13; // [rsp+88h] [rbp+38h] BYREF

  v3 = ndisNblTrackerEpoch;
  v10[0] = 1;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent((unsigned __int64)a1, 0LL, 0x86u, a3, 1u);
  v6 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  v7 = ndisSourceHandleFromOwner(v6);
  if ( (v6 & 1) != 0 )
    v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)(2 * v3)) & 2;
  ndisNblTrackerTransferOneNbl(a1, (__int64)a1->NetBufferListInfo[26], 0LL, v6, v7, &v12, &v11);
  v9 = v12;
  if ( (v8 & 1) != 0 )
    ndisNblTrackerUpdateOwnershipCount(v8, v12, v10, &v13);
  if ( (v6 & 1) != 0 )
    ndisNblTrackerUpdateOwnershipCount(v6, v9 - v11, v10, &v13);
}
