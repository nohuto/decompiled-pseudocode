/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C001F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C001FA44 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x200000uLL);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = *v3;
  v5 = (_QWORD *)v3[1];
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v3[1] = v3;
  *v3 = v3;
  v6 = (unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() != 0 ? 0x103 : 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  if ( v6 != 259 )
    ACPIBuildCompleteGeneric(*(_QWORD *)(a1 + 56), v6, 0LL, a1);
  return v6;
}
