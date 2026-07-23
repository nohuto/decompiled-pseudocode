/*
 * XREFs of ObpReferenceObjectByHandle @ 0x140445F10
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140445D20 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     ExSlowReplenishHandleTableEntry @ 0x140090450 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400A3908 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400AB7B4 (ExFastReplenishHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

unsigned __int64 *__fastcall ObpReferenceObjectByHandle(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a3,
        volatile signed __int64 **a4)
{
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  int v14; // eax
  __int64 v15; // rcx
  volatile signed __int64 *v16; // rcx
  int v17; // ecx

  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v8 = (unsigned __int64 *)ExpLookupHandleTableEntry(BugCheckParameter2, BugCheckParameter1), (v9 = v8) == 0LL) )
  {
LABEL_11:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    return 0LL;
  }
  _m_prefetchw(v8);
  *a3 = *v8;
  a3[1] = v8[1];
  if ( (*(_DWORD *)a3 & 0x1FFFE) == 0 )
  {
LABEL_9:
    if ( ExLockHandleTableEntry(BugCheckParameter2, v9) )
    {
      *a4 = (volatile signed __int64 *)(((__int64)*v9 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      *(_OWORD *)a3 = *(_OWORD *)v9;
      v14 = ExSlowReplenishHandleTableEntry(v9);
      ObpIncrPointerCountEx(*a4, v14 + 1);
      ExUnlockHandleTableEntry(BugCheckParameter2, v9);
      return v9;
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( (*a3 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(BugCheckParameter2, v9, *a3);
      _m_prefetchw(v9);
      *a3 = *v9;
      a3[1] = v9[1];
      goto LABEL_14;
    }
    v11 = *(_OWORD *)a3;
    v12 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)v9,
            *((signed __int64 *)&v11 + 1),
            *a3 - 2,
            (signed __int64 *)&v11);
    v10 = v11;
    *(_OWORD *)a3 = v11;
    if ( v12 )
      break;
LABEL_14:
    if ( (*(_DWORD *)a3 & 0x1FFFE) == 0 )
      goto LABEL_9;
  }
  if ( (unsigned __int16)((unsigned __int64)v10 >> 1) == 16 )
  {
    v15 = v10 ^ ((unsigned int)v10 ^ (2 * (unsigned int)((unsigned __int64)v10 >> 1) - 2)) & 0x1FFFE;
    *a3 = v15;
    v16 = (volatile signed __int64 *)((v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    *a4 = v16;
    ObpIncrPointerCountEx(v16, 32752);
    v17 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v9, a3, 32752);
    if ( v17 )
      _InterlockedExchangeAdd64(*a4, -v17);
  }
  else
  {
    *a4 = (volatile signed __int64 *)((v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v9;
}
