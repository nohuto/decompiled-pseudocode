/*
 * XREFs of KdDeregisterPowerHandler @ 0x1401C1D68
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 *a1)
{
  KIRQL CurrentIrql; // bp
  __int64 *v3; // rax
  __int64 *v4; // rbx
  char v5; // di
  __int64 v7; // rdx
  __int64 **v8; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v3 = (__int64 *)KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  while ( v3 != &KdpPowerListHead )
  {
    v4 = v3;
    if ( a1 == v3 )
    {
      v7 = *v3;
      v8 = (__int64 **)v3[1];
      if ( *(__int64 **)(*v3 + 8) != v3 || *v8 != v3 )
        __fastfail(3u);
      *v8 = (__int64 *)v7;
      v5 = 1;
      *(_QWORD *)(v7 + 8) = v8;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
