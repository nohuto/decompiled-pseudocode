/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140089350
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 Address; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&Process[1].Affinity.Bitmap[7], v8, &Process[1].Affinity.Bitmap[7]);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    *a2 = -1073741558;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16);
    Address = MiLocateAddress(v9);
    v11 = Address;
    if ( Address )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
      --CurrentThread->SpecialApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
      v12 = v9 >> 12;
      --CurrentThread->SpecialApcDisable;
      v14 = KeAbPreAcquire(v11 + 40, 0LL, 0LL, v13);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx(v11 + 40, v14, v11 + 40);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      BYTE4(CurrentThread[1].Queue) |= 0x80u;
      v17 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v15);
      }
      if ( *(int *)(v11 + 48) < 0 )
      {
        MiWaitForVadDeletion(v11);
      }
      else if ( v12 >= (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
             && v12 <= (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
      {
        return v11;
      }
      MiUnlockAndDereferenceVad((PVOID)v11);
    }
    else
    {
      UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    }
    *a2 = -1073741664;
  }
  return 0LL;
}
