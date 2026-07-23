/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1800535C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800536B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
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

  v2 = BaseAddress + 17;
  RtlAcquireReleaseSRWLockExclusive(BaseAddress + 17);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = BaseAddress[18].Value;
      if ( Value + a2 > BaseAddress[19].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&BaseAddress[18], Value + a2, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = BaseAddress[18].Value;
    v8 = BaseAddress[19].Value;
    if ( v7 + a2 > v8 )
      break;
LABEL_8:
    RtlReleaseSRWLockExclusive(v2);
  }
  BaseAddressa = BaseAddress[19].Ptr;
  RegionSize = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect) >= 0 )
  {
    BaseAddress[19].Value += RegionSize;
    goto LABEL_8;
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}
