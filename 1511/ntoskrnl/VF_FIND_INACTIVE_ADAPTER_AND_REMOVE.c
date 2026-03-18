/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1406BA064
 * Callers:
 *     VfGetDmaAdapter @ 0x1406BB3B4 (VfGetDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

ULONG_PTR *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(__int64 a1)
{
  ULONG_PTR *v2; // rbx
  KIRQL v3; // r8
  ULONG_PTR *i; // rax
  ULONG_PTR v6; // rdx
  ULONG_PTR **v7; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = (ULONG_PTR *)ViAdapterList; &ViAdapterList != i; i = (ULONG_PTR *)*i )
  {
    if ( i[3] == a1 && (*((int *)i + 9) <= 0 || *((_BYTE *)i + 32) == 1) )
    {
      v6 = *i;
      v2 = i;
      v7 = (ULONG_PTR **)i[1];
      if ( *(ULONG_PTR **)(*i + 8) != i || *v7 != i )
        __fastfail(3u);
      *v7 = (ULONG_PTR *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
  }
  KeReleaseSpinLock(&Lock, v3);
  return v2;
}
