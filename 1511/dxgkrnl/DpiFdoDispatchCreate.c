/*
 * XREFs of DpiFdoDispatchCreate @ 0x1C016BB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiFdoDispatchCreate(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx
  int v3; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 1095) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
  else
  {
    if ( a2->RequestorMode )
      v3 = -1073741790;
    a2->IoStatus.Status = v3;
    IofCompleteRequest(a2, 0);
    return v3;
  }
}
