/*
 * XREFs of PfpOpenHandleClose @ 0x14042D5B8
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14042CE40 (PfpPrefetchEntireDirectory.c)
 *     PfSnCleanupPrefetchHeader @ 0x14042D1C0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14042D2D8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x14042DB04 (PfpReadSupportCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchDirectoryStream @ 0x1404561D8 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404572BC (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchVolumesCleanup @ 0x14045905C (PfpPrefetchVolumesCleanup.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_1403535E8 + 8))(v4);
  }
  result = 0x800000000LL;
  a1[3] |= 0x800000000uLL;
  return result;
}
