/*
 * XREFs of EmpParseInfDatabase @ 0x14075F0F8
 * Callers:
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x14075F1EC (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14075F5EC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407600F4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140760308 (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x14076172C (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rbx
  __int64 v7; // rax
  PVOID *v8; // rdi
  int v9; // ebx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = KeAbPreAcquire((ULONG_PTR)&EmpParseLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock, v4, (ULONG_PTR)&EmpParseLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v11 = 0;
  v7 = CmpParseInfBuffer(a1, a2, &v11);
  v8 = (PVOID *)v7;
  if ( v7 )
  {
    v9 = EmpParseEntryTypes(v7);
    if ( v9 >= 0 )
    {
      v9 = EmpParseCallbacks(v8);
      if ( v9 >= 0 )
      {
        v9 = EmpParseRules(v8);
        if ( v9 >= 0 )
        {
          v9 = EmpParseStrings(v8);
          if ( v9 >= 0 )
            v9 = EmpParseTargetRules(v8);
        }
      }
    }
    CmpFreeSectionList(*v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741816;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v9;
}
