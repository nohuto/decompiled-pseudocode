/*
 * XREFs of VfBeforeCallDriver @ 0x1407410A4
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140735520 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfBugCheckNoStackUsage @ 0x14025AF78 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x140740D70 (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1407419E8 (ViIrpCheckKernelAddressForIrp.c)
 *     VfDeadlockBeforeCallDriver @ 0x14074F508 (VfDeadlockBeforeCallDriver.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v10; // al
  __int64 v11; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (MmVerifierData & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    v6 = a2;
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    ViIrpCheckKernelAddressForIrp(v6, v7);
  }
  if ( a3 )
  {
    if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      qword_140763040 = 0LL;
      BugCheckParameter4 = 0LL;
      *(_BYTE *)(a3 + 157) = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140763038 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    v10 = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = v10;
    *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v11 = *(_QWORD *)(a2 + 80);
      if ( v11 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v11 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    v8 = VfDeadlockBeforeCallDriver(a2);
    if ( !VfIoDisabled )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      IovpCallDriver1(a3);
    }
  }
  else
  {
    return (unsigned int)VfDeadlockBeforeCallDriver(a2);
  }
  return v8;
}
