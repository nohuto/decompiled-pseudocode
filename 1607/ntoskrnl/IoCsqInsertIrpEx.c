/*
 * XREFs of IoCsqInsertIrpEx @ 0x14009C688
 * Callers:
 *     IoCsqInsertIrp @ 0x14009C680 (IoCsqInsertIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // ebp
  __int64 v9; // rdx
  PIO_CSQ v10; // rcx
  __int64 v12; // rdx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, char *))Csq->CsqAcquireLock)(Csq, &v13);
  if ( Csq->Type == 3 )
  {
    v4 = ((__int64 (__fastcall *)(PIO_CSQ, PIRP, PVOID))Csq->CsqInsertIrp)(Csq, Irp, InsertContext);
    if ( v4 < 0 )
    {
LABEL_6:
      v10 = Csq;
LABEL_7:
      LOBYTE(v9) = v13;
      ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(v10, v9);
      return v4;
    }
  }
  else
  {
    ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqInsertIrp)(Csq, Irp);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
    goto LABEL_6;
  v10 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqRemoveIrp)(Csq, Irp);
  if ( Context )
    Context->Irp = 0LL;
  LOBYTE(v12) = v13;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v12);
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqCompleteCanceledIrp)(Csq, Irp);
  return v4;
}
