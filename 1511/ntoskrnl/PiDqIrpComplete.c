/*
 * XREFs of PiDqIrpComplete @ 0x14045F208
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14045DAA4 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14045DEAC (PiDqIrpQueryCreate.c)
 *     PiDqQueryCompletePendedIrp @ 0x140460A98 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 */

void __fastcall PiDqIrpComplete(IRP *a1, int a2, unsigned int a3, _OWORD *a4)
{
  _OWORD *UserBuffer; // rax

  if ( a2 < 0 )
  {
    a1->IoStatus.Information = 0LL;
  }
  else
  {
    if ( a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      UserBuffer = a1->UserBuffer;
    else
      UserBuffer = &a1->AssociatedIrp.MasterIrp->Type;
    *UserBuffer = *a4;
    a1->IoStatus.Information = a3;
  }
  a1->IoStatus.Status = a2;
  IofCompleteRequest(a1, 0);
}
