/*
 * XREFs of VfBeforeCallDriver @ 0x14070BAD8
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407011F8 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14070126C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfBugCheckNoStackUsage @ 0x1402231C4 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x14070B894 (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x14070C27C (ViIrpCheckKernelAddressForIrp.c)
 *     VfDeadlockBeforeCallDriver @ 0x140713C50 (VfDeadlockBeforeCallDriver.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  KIRQL v9; // al
  unsigned __int8 CurrentIrql; // al
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
      v9 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_14072C040 = 0LL;
      BugCheckParameter4 = 0LL;
      *(_BYTE *)(a3 + 157) = v9;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_14072C038 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
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
