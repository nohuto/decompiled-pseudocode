/*
 * XREFs of PfpOpenHandleClose @ 0x1404DA474
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x1404C245C (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchEntireDirectory @ 0x1404D8980 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x1404DA420 (PfpReadSupportCleanup.c)
 *     PfSnGetSectionObject @ 0x1404DAABC (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x1404DB060 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404DB164 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404DC1AC (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchDirectoryStream @ 0x1404DC6A4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a1[3] & 0x1000000000LL) == 0 )
  {
    v4[1] = *a1;
    v4[2] = a1[1];
    v4[3] = a1[2];
    v4[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140305878 + 8))(v4);
  }
  result = 0x800000000LL;
  a1[3] |= 0x800000000uLL;
  return result;
}
