/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1400956F8
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140091D0C (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v6; // edi
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  int v9; // ebp
  int v10; // eax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int64 *v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v6 = -1073741823;
  v7 = KiProcessorBlock[(unsigned int)a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13, a2, (__int64)a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 588);
    if ( !KiPrcbInGroupAffinity(v7, a1 + 576) )
      goto LABEL_17;
    KiAcquireThreadStateLock(a1, &v12, (volatile signed __int32 **)&v14);
    v10 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 588) = v3;
    if ( (v10 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v3;
    KiUpdateSharedReadyQueueAffinityThread(v7, a1);
    if ( v12 )
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
    if ( v14 )
      _InterlockedAnd64(v14, 0LL);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 196);
    if ( !KiPrcbInGroupAffinity(v7, a1 + 552) )
      goto LABEL_17;
    *(_DWORD *)(a1 + 196) = v3;
  }
  v6 = 0;
LABEL_17:
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = v9;
  return v6;
}
