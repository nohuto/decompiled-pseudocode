/*
 * XREFs of EmpParseInfDatabase @ 0x1407CD974
 * Callers:
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x1407CDA68 (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407CE96C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407CEB80 (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x1407D9018 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 v10; // rax
  PVOID *v11; // rdi
  int v12; // ebx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v6 = KeAbPreAcquire((ULONG_PTR)&EmpParseLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock, v6, (ULONG_PTR)&EmpParseLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v14 = 0;
  v10 = CmpParseInfBuffer(a1, a2, &v14);
  v11 = (PVOID *)v10;
  if ( v10 )
  {
    v12 = EmpParseEntryTypes(v10);
    if ( v12 >= 0 )
    {
      v12 = EmpParseCallbacks(v11);
      if ( v12 >= 0 )
      {
        v12 = EmpParseRules(v11);
        if ( v12 >= 0 )
        {
          v12 = EmpParseStrings(v11);
          if ( v12 >= 0 )
            v12 = EmpParseTargetRules(v11);
        }
      }
    }
    CmpFreeSectionList(*v11);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v12 = -1073741816;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v12;
}
