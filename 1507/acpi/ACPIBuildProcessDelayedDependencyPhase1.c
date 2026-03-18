/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C001F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase1(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  signed __int32 v4; // ebp
  __int64 **v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_DWORD *)(v3 + 28);
  if ( (*(_QWORD *)v1 & 0x80000000080LL) != 0 )
  {
    *(_DWORD *)(v3 + 48) = -1073741810;
    v4 = 2;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(v3 + 20) &= ~0x20u;
  _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 24), v4, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 904), 0xFFFFFFFFFFDFFFFFuLL);
  v5 = (__int64 **)qword_1C0059E58;
  *(_QWORD *)v3 = &AcpiBuildQueueList;
  *(_QWORD *)(v3 + 8) = v5;
  if ( *v5 != &AcpiBuildQueueList )
    __fastfail(3u);
  AcpiBuildDpcFlags |= 2u;
  *v5 = (__int64 *)v3;
  qword_1C0059E58 = v3;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v6 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 32) = 0;
  ACPIBuildCompleteGeneric(v6, 0LL, 0LL, a1);
  return 0LL;
}
