/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x14007967C
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // si
  __int64 CurrentThread; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  result = *(unsigned __int16 *)(a1 + 26);
  if ( (result & 8) == 0 && (result & 4) != 0 )
  {
    result = PsGetBaseIoPriorityThread(a2);
    if ( (int)result < 2 )
    {
      v5 = 0;
      ExpLockResource(a1, v10);
      CurrentThread = ExpFindCurrentThread(a1, a2, (unsigned int)v10, 0, 1);
      v9 = *(unsigned int *)(CurrentThread + 8);
      if ( (v9 & 1) == 0 )
      {
        PsBoostThreadIoEx(a2, 0, 0, 0LL);
        *(_DWORD *)(CurrentThread + 8) |= 1u;
        v5 = 1;
      }
      result = ExpUnlockResource(v9, (__int64)v10, v7, v8);
      if ( v5 )
        return IoBoostThreadIoPriority(a2, 2LL);
    }
  }
  return result;
}
