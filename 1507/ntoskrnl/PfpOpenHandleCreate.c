/*
 * XREFs of PfpOpenHandleCreate @ 0x14042D8E8
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14042CE40 (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchDirectoryStream @ 0x1404561D8 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404572BC (PfSnQueryVolumeInfo.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PfpOpenHandleCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v8; // esi
  int v9; // eax
  __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  int v15; // r13d
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ecx
  _OWORD v21[10]; // [rsp+28h] [rbp-69h] BYREF
  LARGE_INTEGER Interval; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v23; // [rsp+E8h] [rbp+57h]
  __int64 v24; // [rsp+F0h] [rbp+5Fh]

  v24 = a4;
  v23 = a3;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 68);
  Interval.QuadPart = -10000LL * *(unsigned int *)(a2 + 56);
  if ( (v9 & 4) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else
  {
    v12 = a8;
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( 1 )
    {
      v16 = *(_QWORD **)(a2 + 24);
      if ( v16 )
      {
        v17 = *(_QWORD *)(*v16 + 72LL);
        if ( v17 )
        {
          if ( *(_DWORD *)(v17 + 4) )
            return (unsigned int)-1073741248;
        }
        if ( (*(_DWORD *)(*v16 + 80LL) & 4) != 0 )
        {
          v18 = v16[5];
          if ( *(_DWORD *)(v18 + 72) || (*(_DWORD *)(v18 + 68) & 4) != 0 )
            return (unsigned int)-1073741248;
        }
      }
      memset(v21, 0, 0x70uLL);
      LODWORD(v21[1]) = 48;
      *(_QWORD *)&v21[0] = a2 + 40;
      *((_QWORD *)&v21[1] + 1) = v24;
      *(_QWORD *)&v21[2] = v23;
      DWORD2(v21[2]) = 576;
      v21[3] = 0LL;
      LODWORD(v21[4]) = v15;
      *(_QWORD *)((char *)&v21[4] + 4) = __PAIR64__(v14, v13);
      if ( v12 )
        *((_QWORD *)&v21[0] + 1) = *(_QWORD *)(v12 + 8);
      v19 = (*(__int64 (__fastcall **)(_OWORD *))qword_1403535E8)(v21);
      if ( (v19 & 0x80000000) == 0 )
      {
        *(_OWORD *)a1 = v21[5];
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v21[6];
        *(_DWORD *)(a1 + 24) = HIDWORD(v21[6]);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
        *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
        return 0;
      }
      ++*(_DWORD *)(a2 + 80);
      if ( DWORD2(v21[6]) == 2 )
        break;
      if ( DWORD2(v21[6]) == 5 )
      {
        *(_DWORD *)(a2 + 72) = 1;
        return v19;
      }
      if ( SDWORD2(v21[6]) <= 10
        || SDWORD2(v21[6]) > 13 && DWORD2(v21[6]) != 16
        || DWORD2(v21[6]) == 16 && v8 > 1
        || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
      {
        return v19;
      }
      KeDelayExecutionThread(0, 0, &Interval);
      ++v8;
      *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
      if ( (*(_DWORD *)(a2 + 68) & 4) != 0 )
        return (unsigned int)-1073741431;
    }
    if ( v19 != -1073741790 )
      *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  }
  return v19;
}
