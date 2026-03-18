/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C012D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C0028124 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0143D70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0143F80 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rdi
  void *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+31h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v5 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v4);
  while ( *(_QWORD *)(v1 + 128) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 128), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( *(_QWORD *)(v1 + 128) )
  {
    v3 = *(void **)(v1 + 176);
    if ( v3 )
      ObfReferenceObject(*(PVOID *)(v1 + 176));
    TdrCollectDbgInfoStage2(StartContext);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 128));
    if ( v3 )
    {
      if ( (*(_DWORD *)(v1 + 284) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v3);
      ObfDereferenceObject(v3);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v5 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v4);
}
