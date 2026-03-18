/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x140083854
 * Callers:
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x140053320 (CcFetchDataForRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14011D5E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x140086168 (MiPfCompletePrefetchIos.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_BYTE *P)
{
  unsigned int v1; // ebp
  int v2; // esi
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v7; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v8; // rcx

  v1 = 0;
  v2 = P[72] & 1;
  v3 = P;
  do
  {
    v4 = (_QWORD *)*v3;
    v5 = MiPfCompletePrefetchIos(v3 + 11, 0LL, 0LL);
    MiReleaseReadListResources(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v7;
    if ( !v7 )
    {
      v8 = &CurrentThread->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != v8 )
        KiCheckForKernelApcDelivery(v8);
    }
  }
  return v1;
}
