/*
 * XREFs of ExpCreateWorkerThread @ 0x1404D070C
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x1404D1234 (ExpCreateSystemThreadForNode.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 a1, __int64 a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // edi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  _m_prefetchw((const void *)(a2 + 704));
  v3 = *(_DWORD *)(a2 + 704);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 704), (v3 + 1) | 0x4000, v3);
  }
  while ( v4 != v3 );
  v5 = ExpCreateSystemThreadForNode(&Handle, a1, ExpWorkerThread, a2);
  if ( v5 < 0 )
  {
    _m_prefetchw((const void *)(a2 + 704));
    v7 = *(_DWORD *)(a2 + 704);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 704), (v7 & 0x3FFF) - 1, v7);
    }
    while ( v8 != v7 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8LL);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)v5;
}
