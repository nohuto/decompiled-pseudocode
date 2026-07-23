/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x180077410
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180077500 (RtlAcquireReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(_RTL_SRWLOCK *BaseAddress, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  signed __int64 Value; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  ULONG Protect; // eax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+10h] BYREF

  v2 = BaseAddress + 18;
  RtlAcquireReleaseSRWLockExclusive(BaseAddress + 18);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = BaseAddress[19].Value;
      if ( Value + a2 > BaseAddress[20].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&BaseAddress[19], Value + a2, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = BaseAddress[19].Value;
    v8 = BaseAddress[20].Value;
    if ( v7 + a2 > v8 )
      break;
LABEL_8:
    RtlReleaseSRWLockExclusive(v2);
  }
  BaseAddressa = BaseAddress[20].Ptr;
  RegionSize = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect) >= 0 )
  {
    BaseAddress[20].Value += RegionSize;
    goto LABEL_8;
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
