/*
 * XREFs of KeRemoveUmsThreadCidOwnership @ 0x1406506B4
 * Callers:
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveUmsThreadCidOwnership(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r9
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  CurrentThread = KeGetCurrentThread();
  _m_prefetchw((const void *)(a1 + 1272));
  v3 = *(_QWORD *)(a1 + 1272);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1272), v3 & 3, v3);
  }
  while ( v4 != v3 );
  if ( !a2 || (void *)(v3 & 0xFFFFFFFFFFFFFFFCuLL) == CurrentThread[1].KernelStack )
    return 0LL;
  else
    return 3221227292LL;
}
