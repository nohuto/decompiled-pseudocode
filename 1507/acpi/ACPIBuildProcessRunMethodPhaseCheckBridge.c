/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C001E670
 * Callers:
 *     <none>
 * Callees:
 *     IsPciBusAsync @ 0x1C0008EF4 (IsPciBusAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B7A4 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  __int64 v1; // r10
  int v3; // ecx
  int v4; // edi
  signed __int32 v5; // ecx
  KIRQL v6; // bl
  int v7; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (*(_BYTE *)v1 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 7;
    if ( (v3 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 128) = 0;
      result = IsPciBusAsync(*(_QWORD *)(v1 + 704), (__int64)ACPIBuildCompleteMustSucceed, a1, (_BYTE *)(a1 + 128));
      v4 = result;
      if ( (_DWORD)result == 259 )
        return result;
    }
  }
  v5 = *(_DWORD *)(a1 + 32);
  if ( v4 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v4 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v4;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
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
  return (unsigned int)v4;
}
