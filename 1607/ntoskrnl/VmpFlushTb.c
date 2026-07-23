/*
 * XREFs of VmpFlushTb @ 0x140223DB0
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x140224334 (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpFlushTb(PEX_SPIN_LOCK SpinLock, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+38h] [rbp-18h] BYREF

  v12[1] = 0LL;
  v3 = -1LL;
  v12[0] = 0LL;
  v4 = a3;
  v11 = -1LL;
  if ( a2 )
  {
    result = a2;
    v7 = (unsigned __int64)&a3[a2];
    if ( (unsigned __int64)a3 >= v7 )
      return result;
    do
    {
      v8 = *v4;
      result = 0x7FFFFFFEFFFFLL;
      if ( *v4 <= 0x7FFFFFFEFFFFLL )
      {
        v9 = (*v4 & 0x3FF) + 1;
        v10 = (v8 >> 10) & 3;
        if ( ((v8 >> 10) & 3) != 0 )
        {
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
        if ( v3 == -1 )
          v11 = VmpProcessContextLockExclusive(SpinLock);
        result = VmpFlushTbVaRange(SpinLock, (__int64)v12, (__int64)&v11);
        v3 = v11;
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v7 );
  }
  else
  {
    v11 = VmpProcessContextLockExclusive(SpinLock);
    result = VmpFlushTbVaRange(SpinLock, (__int64)v12, (__int64)&v11);
    v3 = v11;
  }
  if ( v3 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    result = (unsigned __int8)v3;
    __writecr8((unsigned __int8)v3);
  }
  return result;
}
