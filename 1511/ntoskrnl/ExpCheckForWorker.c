/*
 * XREFs of ExpCheckForWorker @ 0x140214B20
 * Callers:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x140212DB8 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR i; // r8
  unsigned __int16 v5; // di
  ULONG_PTR *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  volatile signed __int32 **v10; // r14
  volatile signed __int32 *v11; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v13; // ecx

  i = (unsigned __int16)KeNumberNodes;
  v5 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v6 = (ULONG_PTR *)&KiNodeInit;
      v7 = KeNodeBlock[v5];
      result = (__int64)&KiNodeInit + 256 * (unsigned __int64)v5;
      if ( v7 != result && v7 )
      {
        result = *(unsigned int *)(v7 + 1308);
        if ( (result & 2) != 0 )
        {
          v9 = 0LL;
          v10 = (volatile signed __int32 **)(v7 + 256);
          do
          {
            v11 = *v10;
            if ( ((unsigned __int8)*v10 & 1) == 0 && v11 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              KiAcquireKobjectLockSafe(v11, (__int64)v6, i);
              v13 = 0;
              v6 = (ULONG_PTR *)(v11 + 6);
              do
              {
                for ( i = *v6; (volatile signed __int32 *)i != &v11[4 * v13 + 6]; i = *(_QWORD *)i )
                {
                  if ( i >= BugCheckParameter3 && i < BugCheckParameter3 + a2 )
                    KeBugCheckEx(0xE4u, 0LL, i, BugCheckParameter3, BugCheckParameter3 + a2);
                }
                ++v13;
                v6 += 2;
              }
              while ( v13 < 32 );
              _InterlockedAnd(v11, 0xFFFFFF7F);
              result = CurrentIrql;
              __writecr8(CurrentIrql);
            }
            ++v9;
            ++v10;
          }
          while ( v9 < 8 );
        }
        i = (unsigned __int16)KeNumberNodes;
      }
      ++v5;
    }
    while ( v5 < (unsigned __int16)i );
  }
  return result;
}
