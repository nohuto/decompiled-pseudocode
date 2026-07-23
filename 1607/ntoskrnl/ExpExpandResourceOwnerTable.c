/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x1400969CC
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExpFindEmptyEntry @ 0x140096648 (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400968C0 (ExpFindCurrentThread.c)
 * Callees:
 *     ExpLockResource @ 0x14005D6E0 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpExpandResourceOwnerTable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_DWORD **)(a1 + 16);
  if ( v3 )
  {
    v6 = v3[2];
    v7 = v6 + 4;
    if ( v6 + 4 < v6 )
      return result;
    result = 0xFFFFFFFFLL;
    v8 = 16LL * v7;
    if ( v8 > 0xFFFFFFFF )
      return result;
  }
  else
  {
    v6 = 0;
    v7 = 3;
    LODWORD(v8) = 48;
  }
  ExpUnlockResource(a1, a2);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v8, 0x61546552u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v6], 0, 16LL * (v7 - v6));
    ExpLockResource(a1, a2);
    if ( v3 == *(_DWORD **)(a1 + 16) && (!v3 || v6 == v3[2]) )
    {
      memmove(v10, v3, 16LL * v6);
      v10[2] = v7;
      *(_QWORD *)(a1 + 16) = v10;
      ExpUnlockResource(v12, a2);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      if ( !v6 )
        LOBYTE(v6) = 1;
    }
    else
    {
      ExpUnlockResource(v11, a2);
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = v6;
  return ExpLockResource(a1, a2);
}
