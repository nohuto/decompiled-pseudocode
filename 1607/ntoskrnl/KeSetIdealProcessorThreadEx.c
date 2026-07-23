/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1400C8244
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140070694 (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int64 *v17; // [rsp+70h] [rbp+18h] BYREF

  v6 = -1073741823;
  v7 = KiProcessorBlock[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 588);
    if ( !(unsigned int)KiPrcbInGroupAffinity(v7, a1 + 576) )
      goto LABEL_12;
    KiAcquireThreadStateLock(a1, &v15, &v17);
    v12 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 588) = a2;
    if ( (v12 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = a2;
    KiUpdateSharedReadyQueueAffinityThread(v7, a1, v10, v11);
    if ( v15 )
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
    if ( v17 )
      _InterlockedAnd64(v17, 0LL);
    goto LABEL_11;
  }
  v9 = *(_DWORD *)(a1 + 196);
  if ( (unsigned int)KiPrcbInGroupAffinity(v7, a1 + 552) )
  {
    *(_DWORD *)(a1 + 196) = a2;
LABEL_11:
    v6 = 0;
  }
LABEL_12:
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = v9;
  return v6;
}
