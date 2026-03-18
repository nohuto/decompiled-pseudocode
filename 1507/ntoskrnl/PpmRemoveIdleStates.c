/*
 * XREFs of PpmRemoveIdleStates @ 0x140235650
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[21]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v1 = *(void **)(a1 + 23808);
  if ( v1 )
  {
    memset(v7, 0, 0xA0uLL);
    v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6;
    v4 = (unsigned int)v3;
    v5 = v7[v3];
    _bittestandset64(&v5, KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F);
    v7[v4] = v5;
    off_140321868();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PpmIdleVetoLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdleVetoLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmIdleVetoLock);
    }
    *(_QWORD *)(a1 + 23808) = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
    else
      _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
    *(_QWORD *)(a1 + 23816) = 0LL;
    ExFreePoolWithTag(v1, 0x694D5050u);
  }
  return 0LL;
}
