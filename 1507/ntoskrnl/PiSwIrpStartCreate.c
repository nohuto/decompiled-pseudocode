/*
 * XREFs of PiSwIrpStartCreate @ 0x14045A93C
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 */

__int64 __fastcall PiSwIrpStartCreate(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v3; // rdi
  struct _IRP *MasterIrp; // rcx
  int Worker; // ebx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  PIRP v9; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = 0LL;
  P = 0LL;
  v3 = Irp;
  v9 = Irp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0xC8 )
    {
      Worker = -1073741789;
    }
    else
    {
      Worker = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v8);
      if ( Worker >= 0 )
      {
        NdrMesTypeDecode3(v8, "TP 3\a", &off_140721CA8, &off_14031E910, 0, &P);
        Worker = PiSwIrpStartCreateWorker(P, Irp);
        v3 = 0LL;
      }
    }
  }
  else
  {
    Worker = -1073741811;
  }
  if ( v3 )
  {
    v3->IoStatus.Status = Worker;
    v3->IoStatus.Information = 0LL;
    IofCompleteRequest(v3, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v8 )
    MesHandleFree();
  return (unsigned int)Worker;
}
