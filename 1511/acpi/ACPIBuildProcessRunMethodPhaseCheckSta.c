/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001A6EC (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  __int64 v4; // rax
  signed __int32 v5; // ecx
  KIRQL v6; // bl
  int v7; // edx
  __int64 result; // rax
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  v4 = *(_QWORD *)(v1 + 904);
  if ( (v4 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 592) && (v4 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v9 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 704));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    v2 = v9;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v2 >= 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 8) == 0 )
  {
LABEL_4:
    if ( (*(_DWORD *)(a1 + 84) & 1) != 0 )
    {
      result = ACPIGet(
                 (_QWORD *)v1,
                 1096045407,
                 -1610348542,
                 0LL,
                 0,
                 (__int64)ACPIBuildCompleteMustSucceed,
                 a1,
                 a1 + 128,
                 0LL);
      v2 = result;
      if ( (_DWORD)result == 259 )
        return result;
    }
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(v1 + 904) & 0x2000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 904), 0xFFFFFFFFFFFFCFFFuLL);
    goto LABEL_4;
  }
  if ( !ACPIDeviceHasFirmwareDependencies(v1) )
    goto LABEL_4;
  *(_DWORD *)(a1 + 32) = 0;
  _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x1000uLL);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 32);
  if ( v2 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v2 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v2;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v2, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v5, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
  return (unsigned int)v2;
}
