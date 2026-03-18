/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0145CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CC84 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C002AB74 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166A50 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0166C60 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
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
  while ( *(_QWORD *)(v1 + 144) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 144), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( *(_QWORD *)(v1 + 144) )
  {
    v3 = *(void **)(v1 + 192);
    if ( v3 )
      ObfReferenceObject(*(PVOID *)(v1 + 192));
    TdrCollectDbgInfoStage2(StartContext);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 144));
    if ( v3 )
    {
      if ( (*(_DWORD *)(v1 + 300) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v3);
      ObfDereferenceObject(v3);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v5 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v4);
}
