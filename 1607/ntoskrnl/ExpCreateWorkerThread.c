/*
 * XREFs of ExpCreateWorkerThread @ 0x1403E5BC4
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     KeBoostPriorityThread @ 0x1400049F8 (KeBoostPriorityThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExpCreateSystemThreadForNode @ 0x1403E5C70 (ExpCreateSystemThreadForNode.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 a1, __int64 a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v5; // edi
  __int64 v6; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
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
    v8 = *(_DWORD *)(a2 + 704);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 704), (v8 & 0x3FFF) - 1, v8);
    }
    while ( v9 != v8 );
  }
  else
  {
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8, v6);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)v5;
}
