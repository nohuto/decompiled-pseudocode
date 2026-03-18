/*
 * XREFs of ObpReferenceObjectByHandle @ 0x140436BA0
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1404369A0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     ExFastReferenceHandleTableEntry @ 0x14008E230 (ExFastReferenceHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400D0410 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400E39BC (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400ED618 (ExFastReplenishHandleTableEntry.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 */

volatile signed __int64 *__fastcall ObpReferenceObjectByHandle(
        unsigned int *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 *a3,
        volatile signed __int64 **a4)
{
  volatile signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rbx
  int v10; // eax
  int v11; // r15d
  int v13; // eax
  volatile signed __int64 *v14; // rcx
  int v15; // ecx

  if ( (BugCheckParameter1 & 0x3FC) != 0 )
  {
    v8 = (volatile signed __int64 *)ExpLookupHandleTableEntry(BugCheckParameter2, BugCheckParameter1);
    v9 = v8;
    if ( v8 )
    {
      v10 = ExFastReferenceHandleTableEntry((__int64)BugCheckParameter2, v8, a3);
      v11 = v10;
      if ( !v10 )
      {
        *a4 = (volatile signed __int64 *)((*a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        return v9;
      }
      if ( v10 > 0 )
      {
        v14 = (volatile signed __int64 *)((*a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        *a4 = v14;
        ObpIncrPointerCountEx(v14, v10);
        v15 = ExFastReplenishHandleTableEntry(v9, (unsigned __int64 *)a3, v11);
        if ( v15 )
          _InterlockedExchangeAdd64(*a4, -v15);
        return v9;
      }
      if ( ExLockHandleTableEntry((__int64)BugCheckParameter2, v9) )
      {
        *a4 = (volatile signed __int64 *)((*(__int64 *)v9 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_OWORD *)a3 = *(_OWORD *)v9;
        v13 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v9);
        ObpIncrPointerCountEx(*a4, v13 + 1);
        ExUnlockHandleTableEntry((__int64)BugCheckParameter2, v9);
        return v9;
      }
    }
  }
  if ( BugCheckParameter1 )
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
  return 0LL;
}
