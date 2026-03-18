/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001F420
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckPep(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  signed __int32 v4; // ecx
  KIRQL v5; // bl
  int v6; // edx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)v3 & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 4;
    if ( (*(_DWORD *)(v3 + 904) & 0x2000000) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v3 + 904), 0x2000000uLL);
      v2 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 704), (__int64)ACPIBuildDiscoverDeviceCompletion, a1);
      if ( v2 == 259 )
        return (unsigned int)v2;
    }
  }
  v4 = *(_DWORD *)(a1 + 32);
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
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v4, 1);
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v6 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v6;
    if ( (v6 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v6 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  }
  return (unsigned int)v2;
}
