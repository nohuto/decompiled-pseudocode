/*
 * XREFs of TtmpDeleteQueue @ 0x14067A3B0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14067907C (TtmpDereferenceSessionMaybeLast.c)
 */

__int64 __fastcall TtmpDeleteQueue(__int64 *a1)
{
  __int64 *v2; // rdx
  volatile signed __int32 *v3; // rdi
  __int64 **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax

  TtmpAcquireSessionLock();
  v2 = (__int64 *)*a1;
  v3 = (volatile signed __int32 *)a1[2];
  v4 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = v2;
  v2[1] = (__int64)v4;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  TtmpDereferenceSessionMaybeLast(v3);
  ExDeleteResourceLite((PERESOURCE)(a1 + 3));
  v8 = (__int64 **)(a1 + 19);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    ExFreePoolWithTag(v9, 0x716D7454u);
  }
  return TtmiLogQueueDestroyed(a1);
}
