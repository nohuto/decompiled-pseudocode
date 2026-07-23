/*
 * XREFs of PspEnableProcessWakeCounters @ 0x1404D3410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessWakeCounters(__int64 a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(v1 + 1304) & 0x1000) == 0 )
  {
    _m_prefetchw((const void *)(a1 + 1824));
    *(_QWORD *)(v1 + 896) += (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 1824), 0x80000000);
  }
  return 0LL;
}
