/*
 * XREFs of ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C005BE6C
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
