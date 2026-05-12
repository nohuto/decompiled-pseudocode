/*
 * XREFs of PortPassThroughExNormalize @ 0x1C003CE50
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C003CC94 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C003CEDC (PortPassThroughExValidate.c)
 * Callees:
 *     memmove @ 0x1C0015B80 (memmove.c)
 */

__int64 __fastcall PortPassThroughExNormalize(_OWORD *a1, PIRP Irp)
{
  _IRP *MasterIrp; // rsi
  _IRP *v5; // rbx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( IoIs32bitProcess(Irp) )
  {
    v5 = Irp->AssociatedIrp.MasterIrp;
    *a1 = *(_OWORD *)&v5->Type;
    a1[1] = *(_OWORD *)&v5->Flags;
    *((_QWORD *)a1 + 4) = v5->ThreadListEntry.Flink;
    memmove((char *)a1 + 56, &v5->IoStatus, LODWORD(v5->MdlAddress));
    *((_QWORD *)a1 + 5) = LODWORD(v5->ThreadListEntry.Blink);
    *((_QWORD *)a1 + 6) = HIDWORD(v5->ThreadListEntry.Blink);
  }
  else
  {
    memmove(a1, MasterIrp, (unsigned int)(LODWORD(Irp->AssociatedIrp.MasterIrp->MdlAddress) + 63));
  }
  return 0LL;
}
