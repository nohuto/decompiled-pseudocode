/*
 * XREFs of IoCsqRemoveIrp @ 0x140132F9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIRP __stdcall IoCsqRemoveIrp(PIO_CSQ Csq, PIO_CSQ_IRP_CONTEXT Context)
{
  IRP *v3; // rbx
  __int64 v5; // rdx
  PIRP Irp; // rsi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, char *))Csq->CsqAcquireLock)(Csq, &v8);
  Irp = Context->Irp;
  if ( Irp && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqRemoveIrp)(Csq, Irp);
    Context->Irp = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    v3 = Irp;
  }
  LOBYTE(v5) = v8;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v5);
  return v3;
}
