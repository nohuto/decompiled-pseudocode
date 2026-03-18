/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C0193BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  PIRP v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 1143) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
  else
  {
    while ( 1 )
    {
      v5 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4840), 0LL);
      if ( !v5 )
        break;
      if ( v5 == *(PIRP *)(v2 + 4944) )
      {
        *(_QWORD *)(v2 + 4944) = 0LL;
      }
      else if ( v5 == *(PIRP *)(v2 + 4936) )
      {
        *(_QWORD *)(v2 + 4936) = 0LL;
      }
      else if ( v5 == *(PIRP *)(v2 + 4928) )
      {
        *(_QWORD *)(v2 + 4928) = 0LL;
      }
      v5->IoStatus.Information = 0LL;
      v5->IoStatus.Status = -1073741536;
      IofCompleteRequest(v5, 0);
    }
    *(_BYTE *)(v2 + 4952) = 0;
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    return 0;
  }
}
