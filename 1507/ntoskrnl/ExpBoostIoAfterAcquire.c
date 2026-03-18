/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x1400D6454
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1400D6794 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edi
  int v5; // r8d
  char v6; // si
  __int64 CurrentThread; // rdi
  __int64 v8; // rcx
  volatile signed __int64 *v9[5]; // [rsp+30h] [rbp-28h] BYREF

  result = *(unsigned __int16 *)(a1 + 26);
  v4 = a1;
  if ( (result & 8) == 0 && (result & 4) != 0 )
  {
    result = *(_QWORD *)(a2 + 544);
    v5 = (*(_DWORD *)(a2 + 1724) >> 9) & 7;
    if ( (*(_DWORD *)(result + 772) & 0x100000) != 0 )
      v5 = 0;
    if ( v5 < 2 )
    {
      v6 = 0;
      ExpLockResource(a1, v9);
      CurrentThread = ExpFindCurrentThread(v4, a2, (unsigned int)v9, 0, 1);
      v8 = *(unsigned int *)(CurrentThread + 8);
      if ( (v8 & 1) == 0 )
      {
        PsBoostThreadIoEx(a2, 0, 0, 0LL);
        *(_DWORD *)(CurrentThread + 8) |= 1u;
        v6 = 1;
      }
      result = ExpUnlockResource(v8, v9);
      if ( v6 )
        return IoBoostThreadIoPriority(a2, 2LL, 0LL);
    }
  }
  return result;
}
