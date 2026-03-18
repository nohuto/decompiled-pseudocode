/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x14012C8F0
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x1404E0BF8 (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // eax
  bool v6; // cc
  _QWORD *v7; // rax
  __int64 result; // rax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v5 = *(_DWORD *)(a1 + 136) + 1;
  v6 = v5 <= IopMaxDeviceNodeLevel;
  *(_DWORD *)(a2 + 136) = v5;
  if ( !v6 )
    IopMaxDeviceNodeLevel = v5;
  *(_QWORD *)(a2 + 16) = a1;
  _InterlockedOr(v9, 0);
  v7 = *(_QWORD **)(a1 + 24);
  if ( v7 )
    *v7 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
