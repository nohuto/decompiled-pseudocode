/*
 * XREFs of EmpParseInfDatabase @ 0x1407A7384
 * Callers:
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x1407A7478 (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407A83F0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407A8604 (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x1407AEC04 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rbx
  __int64 v7; // rax
  PVOID *v8; // rdi
  int v9; // ebx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpParseLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock, v4, (ULONG_PTR)&EmpParseLock);
  if ( v6 )
    v6[26] |= 1u;
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
