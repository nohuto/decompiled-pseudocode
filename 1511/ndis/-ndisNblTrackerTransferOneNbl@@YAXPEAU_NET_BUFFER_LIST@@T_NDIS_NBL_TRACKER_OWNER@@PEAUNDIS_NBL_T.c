/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C005FFF4
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006006C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax

  v7 = a1;
  if ( !a2 && !a1[15] )
  {
    v8 = ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL);
    v7[15] = v8;
  }
  if ( (a2 & 4) != 0 || (v9 = v7[15]) == 0 )
  {
    a4 |= 4uLL;
  }
  else
  {
    if ( v9 == a5 && !v7[3] )
    {
      v7[44] = 24LL;
      ++*a7;
      ++*a6;
      return;
    }
    ++*a6;
  }
  v7[44] = a4;
}
