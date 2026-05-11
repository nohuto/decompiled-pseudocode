/*
 * XREFs of PropertyGetTopologyNodeEnable @ 0x1C0019AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetTopologyNodeEnable(IRP *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  PKSFILTER FilterFromIrp; // rcx

  v6 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v6 = 0;
    *a3 = *((_BYTE *)&FilterFromIrp->Descriptor->NodeDescriptors[3].AutomationTable
          + 152 * *(unsigned int *)(a2 + 24)
          + 1);
    a1->IoStatus.Information = 1LL;
  }
  return v6;
}
