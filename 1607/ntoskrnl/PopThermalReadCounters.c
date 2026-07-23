/*
 * XREFs of PopThermalReadCounters @ 0x140670530
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1406702D8 (PoThermalCounterSetCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalReadCounters(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v3; // esi
  signed __int64 *v6; // rdi
  IRP *v7; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_5;
  if ( *(_BYTE *)(a1 + 360) )
    goto LABEL_5;
  v6 = (signed __int64 *)(a1 + 416);
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 416));
  KeResetEvent((PRKEVENT)(a1 + 456));
  v7 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 240) = 0;
  IoCancelIrp(v7);
  PopReleaseRwLock(v6);
  Object[1] = (PVOID)(a1 + 432);
  Object[0] = (PVOID)(a1 + 456);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_5:
    PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 416));
    *a3 = *(_DWORD *)(a1 + 256) / 0xAu;
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 344);
    PopReleaseRwLock((signed __int64 *)(a1 + 416));
  }
  return v3;
}
