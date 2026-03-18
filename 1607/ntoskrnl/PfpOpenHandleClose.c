/*
 * XREFs of PfpOpenHandleClose @ 0x14050A308
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchDirectoryStream @ 0x1403ED670 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x1403ED8D0 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x1403EDC6C (PfpPrefetchVolumesCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404F54AC (PfSnQueryVolumeInfo.c)
 *     PfpPrefetchEntireDirectory @ 0x140508800 (PfpPrefetchEntireDirectory.c)
 *     PfpReadSupportCleanup @ 0x14050921C (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140509310 (PfpFileBuildReadSupport.c)
 *     PfSnCleanupPrefetchHeader @ 0x14050A4E0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14050A5E4 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfSnGetSectionObject @ 0x14050ACA0 (PfSnGetSectionObject.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a1[3] & 0x1000000000LL) == 0 )
  {
    memset(v5, 0, 0x20uLL);
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140328678 + 8))(v5);
  }
  result = 0x800000000LL;
  a1[3] |= 0x800000000uLL;
  return result;
}
