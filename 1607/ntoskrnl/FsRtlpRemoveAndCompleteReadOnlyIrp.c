/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B3464 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401B944C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx

  v3 = a1 - 21;
  v5 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 48), 0x746C6644u);
  IoAcquireCancelSpinLock((PKIRQL)v3 + 69);
  _InterlockedExchange64(v3 + 13, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v3 + 69));
  v8 = *a1;
  v9 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v9 != a1 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( *(_DWORD *)(v5 + 24) == 590400 )
  {
    if ( *((_BYTE *)v3 + 68) )
    {
      if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
        a2 = -1073741536;
      v3[7] = 0LL;
    }
    else
    {
      v10 = v3[3];
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_DWORD *)v10 = 1572865;
      *(_DWORD *)(v10 + 4) = 1;
      *(_DWORD *)(v10 + 8) = (a3 >> 12) & 7;
      v3[7] = 24LL;
    }
  }
  else
  {
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails)
      && *((_BYTE *)v3 + 68) )
    {
      a2 = -1073741536;
    }
    v3[7] = 8LL;
  }
  if ( !(unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails)
    && *((_BYTE *)v3 + 68) )
  {
    a2 = -1073741536;
  }
  *((_DWORD *)v3 + 12) = a2;
  IofCompleteRequest((PIRP)v3, 1);
}
