/*
 * XREFs of MiFinishVadDeletion @ 0x1400D6450
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     MiClearVadBits @ 0x14006D200 (MiClearVadBits.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14041B250 (MiReturnVadQuota.c)
 */

void __fastcall MiFinishVadDeletion(
        _DWORD *P,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // rdi
  __int64 v12; // r8
  BOOL v13; // r15d
  __int64 v14; // rax
  _BOOL8 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  __int64 *VadWakeList; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v13 = MiVadDeleted((__int64)P);
  if ( (*(_BYTE *)(Process + 1499) & 2) == 0 )
  {
    MiClearVadBits(a4, a5, a2, v12);
    v14 = (unsigned int)P[13];
    LODWORD(v14) = v14 & 0x7FFFFFFF;
    if ( (v14 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) <= 0x7FFFFFFFELL )
      MiReturnPageTablePageCommitment(a4, a5, Process, a2, a3, (__int64)P, a6);
  }
  v15 = 0LL;
  if ( v13 && (P[12] & 0x8000) == 0 )
  {
    v19 = (unsigned int)P[13];
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v15 = (v19 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  if ( a5 <= *(_QWORD *)(Process + 1152) )
    *(_QWORD *)(Process + 824) += a4 - a5 - 1;
  v16 = P[12];
  if ( (v16 & 7) == 2 && (v16 & 0x10000) != 0 )
    --MEMORY[0xFFFFF580108042B8];
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)0xFFFFF58010804260LL, 1u);
    MiReturnVadQuota(P, Process, v15);
    MiRemoveVadCharges(P, Process);
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  VadWakeList = 0LL;
  if ( v13 )
  {
    VadWakeList = MiGetVadWakeList((__int64)P, 1, v17);
    *((_QWORD *)P + 2) = -1LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF58010804260LL, 0xFFFFFFFF) == 1 )
      KeSetEvent(MEMORY[0xFFFFF58010804270], 0, 0);
    if ( VadWakeList )
      --CurrentThread->KernelApcDisable;
  }
  MiUnlockAndDereferenceVad(P);
  if ( VadWakeList )
  {
    do
    {
      v20 = (__int64 *)*VadWakeList;
      KeSignalGate(VadWakeList + 2, 1LL);
      VadWakeList = v20;
    }
    while ( v20 );
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
}
