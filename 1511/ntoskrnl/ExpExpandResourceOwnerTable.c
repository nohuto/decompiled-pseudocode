/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x1400CF8AC
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpFindEmptyEntry @ 0x1400CF32C (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpExpandResourceOwnerTable(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v5; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = *(_DWORD **)(a1 + 16);
  if ( v5 )
  {
    v8 = v5[2];
    v9 = v8 + 4;
    if ( v8 + 4 < v8 )
      return result;
    result = 0xFFFFFFFFLL;
    v10 = 16LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return result;
  }
  else
  {
    v8 = 0;
    v9 = 3;
    LODWORD(v10) = 48;
  }
  ExpUnlockResource(a1, (__int64)a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v10, 0x61546552u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v8], 0, 16LL * (v9 - v8));
    ExpLockResource(a1, a2);
    if ( v5 == *(_DWORD **)(a1 + 16) && (!v5 || v8 == v5[2]) )
    {
      memmove(v12, v5, 16LL * v8);
      v12[2] = v9;
      *(_QWORD *)(a1 + 16) = v12;
      ExpUnlockResource(v16, (__int64)a2, v17, v18);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      if ( !v8 )
        LOBYTE(v8) = 1;
    }
    else
    {
      ExpUnlockResource(v13, (__int64)a2, v14, v15);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = v8;
  return ExpLockResource(a1, a2);
}
