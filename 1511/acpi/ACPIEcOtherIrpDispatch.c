/*
 * XREFs of ACPIEcOtherIrpDispatch @ 0x1C0079E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcOtherIrpDispatch(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MajorFunction; // r8

  MajorFunction = a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction >= 3u )
  {
    if ( MajorFunction <= 4u )
      return ACPIEcReadWrite(a1);
    if ( MajorFunction == 15 )
      return ACPIEcInternalControl(a1, a2);
  }
  return ACPIDispatchForwardIrp(a1, a2);
}
