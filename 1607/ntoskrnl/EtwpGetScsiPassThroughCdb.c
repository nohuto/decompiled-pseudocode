/*
 * XREFs of EtwpGetScsiPassThroughCdb @ 0x1402264CC
 * Callers:
 *     EtwpTraceOpticalIo @ 0x1402271D0 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x140227424 (EtwpTraceOpticalIoInit.c)
 * Callees:
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
 */

ULONG_PTR *__fastcall EtwpGetScsiPassThroughCdb(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v2; // rbx
  ULONG LowPart; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  struct _IRP *MasterIrp; // rdi
  unsigned int Options; // esi
  bool v8; // bp

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v2 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 315396
    || (v4 = LowPart - 315412, (unsigned int)v4 <= 0x34) && (v5 = 0x11000000000001LL, _bittest64(&v5, v4)) )
  {
    MasterIrp = a1->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
      v8 = ((LowPart - 315460) & 0xFFFFFFFB) != 0;
      if ( IoIs32bitProcess(a1) )
      {
        if ( v8 )
        {
          if ( Options >= 0x2C )
            return (ULONG_PTR *)((char *)&MasterIrp->AssociatedIrp.SystemBuffer + 4);
        }
        else if ( Options >= 0x34 )
        {
          return (ULONG_PTR *)&MasterIrp->IoStatus;
        }
      }
      else if ( v8 )
      {
        if ( Options >= 0x38 )
          return (ULONG_PTR *)((char *)&MasterIrp->ThreadListEntry.Flink + 4);
      }
      else if ( Options >= 0x40 )
      {
        return &MasterIrp->IoStatus.Information;
      }
    }
  }
  return (ULONG_PTR *)v2;
}
