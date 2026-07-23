/*
 * XREFs of PiSwIrpStartCreate @ 0x140488374
 * Callers:
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 */

__int64 __fastcall PiSwIrpStartCreate(__int64 Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  PIRP v3; // rdi
  struct _IRP *v4; // rcx
  int Worker; // ebx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v2 = *(struct _IO_STACK_LOCATION **)(Irp + 184);
  v8 = 0LL;
  P = 0LL;
  v3 = (PIRP)Irp;
  v9 = Irp;
  v4 = *(struct _IRP **)(Irp + 24);
  if ( v4 )
  {
    if ( v2->Parameters.Read.Length < 0xC8 )
    {
      Worker = -1073741789;
    }
    else
    {
      Worker = MesDecodeBufferHandleCreate(v4, v2->Parameters.Create.Options, &v8);
      if ( Worker >= 0 )
      {
        NdrMesTypeDecode3(v8, "TP 3\a", &off_1406E9BE0, &off_1402F32B0, 0, &P);
        Worker = PiSwIrpStartCreateWorker((__int64)P, Irp);
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
