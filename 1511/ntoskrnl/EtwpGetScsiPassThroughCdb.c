/*
 * XREFs of EtwpGetScsiPassThroughCdb @ 0x14020E7EC
 * Callers:
 *     EtwpTraceOpticalIo @ 0x14020F4BC (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x14020F710 (EtwpTraceOpticalIoInit.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140090B20 (IoIs32bitProcess.c)
 */

IO_STATUS_BLOCK *__fastcall EtwpGetScsiPassThroughCdb(IRP *a1)
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
            return (IO_STATUS_BLOCK *)((char *)&MasterIrp->AssociatedIrp.SystemBuffer + 4);
        }
        else if ( Options >= 0x34 )
        {
          return &MasterIrp->IoStatus;
        }
      }
      else if ( v8 )
      {
        if ( Options >= 0x38 )
          return (IO_STATUS_BLOCK *)((char *)&MasterIrp->ThreadListEntry.Flink + 4);
      }
      else if ( Options >= 0x40 )
      {
        return (IO_STATUS_BLOCK *)&MasterIrp->IoStatus.Information;
      }
    }
  }
  return (IO_STATUS_BLOCK *)v2;
}
