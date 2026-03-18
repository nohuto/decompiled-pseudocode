/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edi
  signed __int32 v4; // ecx
  KIRQL v5; // bl
  int v6; // edx
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 904) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      AMLIDereferenceHandleEx(v8);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v9 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
    {
      v3 = AMLIAsyncEvalObject(v9, a1 + 88, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
      if ( v3 == 259 )
        return (unsigned int)v3;
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v4 = *(_DWORD *)(a1 + 32);
  if ( v3 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v3;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
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
  return (unsigned int)v3;
}
