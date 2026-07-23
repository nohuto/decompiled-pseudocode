/*
 * XREFs of PoFxActivateComponent @ 0x1400BEF70
 * Callers:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  int v3; // edi
  __int64 v4; // rsi
  char *v5; // r9
  int v6; // eax
  KIRQL v7; // al
  char v8; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3 & 1;
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8LL * (unsigned int)BugCheckParameter3);
  if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) == 0 )
  {
    v5 = &v8;
    if ( (a3 & 2) != 0 )
      v5 = 0LL;
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
    if ( v6 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
      PopFxActivateComponentWorker(BugCheckParameter2, v4, 0LL, v5);
    }
    else
    {
      if ( v6 < 0 )
        return;
      if ( (v6 & 0x40000000) != 0 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v7);
      }
    }
    if ( v3 )
      KeWaitForSingleObject((PVOID)(v4 + 104), Executive, 0, 0, 0LL);
  }
}
