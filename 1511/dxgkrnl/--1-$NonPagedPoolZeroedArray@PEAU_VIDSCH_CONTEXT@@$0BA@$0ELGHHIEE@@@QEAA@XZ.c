/*
 * XREFs of ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$0BA@$0ELGHHIEE@@@QEAA@XZ @ 0x1C000102C
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>::~NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,16,1265072196>(
        PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
