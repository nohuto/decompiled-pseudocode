/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B7A4 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AC44 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rdx
  ULONG_PTR v4; // r14
  __int64 v5; // r12
  ULONG_PTR v6; // r15
  __int64 v7; // rbx
  int v8; // edi
  KIRQL v9; // dl
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  ULONG_PTR v13; // rdx
  signed __int32 v14; // ecx
  KIRQL v15; // bl
  __int64 v17; // rcx

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (unsigned int)(v2 + 1);
  *(_DWORD *)(a1 + 32) = 2 * v2 + 20;
  v6 = v4 + 8 * v5;
  if ( *(_QWORD *)(v6 + 400) || *(_QWORD *)(v4 + 8 * v5 + 352) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_12;
    dword_1C005A218 = 0;
    v17 = a1 + 80;
    byte_1C005A21C = 0;
LABEL_22:
    FreeDataBuffs(v17, 1LL);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(v4 + 704);
  v8 = *(_DWORD *)&aPs0Ps1Ps2[4 * v2];
  v9 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v10 = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
  v11 = v10;
  if ( v10 )
  {
    while ( v8 != *(_DWORD *)(v11 + 32) )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( v11 == v10 )
      {
        v11 = 0LL;
        break;
      }
      if ( !v11 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  if ( v11 )
    AMLIReferenceHandleEx(v11 + 112);
  else
    v12 = 0LL;
  *(_QWORD *)(v6 + 400) = v12;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_12;
    }
    v1 = ACPIBuildDevicePowerNodes(v4, v13);
    dword_1C005A218 = 0;
    v17 = a1 + 80;
    byte_1C005A21C = 0;
    goto LABEL_22;
  }
LABEL_12:
  v14 = *(_DWORD *)(a1 + 32);
  if ( v1 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v1 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v1;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v1, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v14, 1);
    v15 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v15);
  }
  return (unsigned int)v1;
}
