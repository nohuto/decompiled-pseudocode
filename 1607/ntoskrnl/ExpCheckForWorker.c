/*
 * XREFs of ExpCheckForWorker @ 0x14022E6D0
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14022CEAC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 i; // di
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  volatile signed __int32 **v9; // r14
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v12; // ecx
  volatile signed __int32 **v13; // rdx
  volatile signed __int32 *j; // r8

  v2 = KeNumberNodes;
  for ( i = 0; i < v2; ++i )
  {
    v6 = KeNodeBlock[i];
    result = (__int64)&KiNodeInit;
    if ( (_UNKNOWN *)v6 != (_UNKNOWN *)((char *)&KiNodeInit + 320 * i) && v6 )
    {
      result = *(unsigned int *)(v6 + 2092);
      if ( (result & 2) != 0 )
      {
        v8 = 0LL;
        v9 = (volatile signed __int32 **)(v6 + 320);
        do
        {
          v10 = *v9;
          if ( ((unsigned __int8)*v9 & 1) == 0 && v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            KiAcquireKobjectLockSafe(v10);
            v12 = 0;
            v13 = (volatile signed __int32 **)(v10 + 6);
            do
            {
              for ( j = *v13; j != &v10[4 * v12 + 6]; j = *(volatile signed __int32 **)j )
              {
                if ( (unsigned __int64)j >= BugCheckParameter3 && (unsigned __int64)j < BugCheckParameter3 + a2 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)j, BugCheckParameter3, BugCheckParameter3 + a2);
              }
              ++v12;
              v13 += 2;
            }
            while ( v12 < 32 );
            _InterlockedAnd(v10, 0xFFFFFF7F);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
          ++v8;
          ++v9;
        }
        while ( v8 < 8 );
      }
      v2 = KeNumberNodes;
    }
  }
  return result;
}
