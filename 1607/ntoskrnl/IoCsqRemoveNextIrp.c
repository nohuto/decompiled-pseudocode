/*
 * XREFs of IoCsqRemoveNextIrp @ 0x14009CC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  IRP *v7; // rbx
  _QWORD *v8; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, char *))Csq->CsqAcquireLock)(Csq, &v10);
  v4 = 0LL;
  do
  {
    v5 = ((__int64 (__fastcall *)(PIO_CSQ, __int64, PVOID))Csq->CsqPeekNextIrp)(Csq, v4, PeekContext);
    v7 = (IRP *)v5;
    if ( !v5 )
    {
      v7 = 0LL;
      goto LABEL_7;
    }
    v4 = v5;
  }
  while ( !_InterlockedExchange64((volatile __int64 *)(v5 + 104), 0LL) );
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqRemoveIrp)(Csq, v5);
  v8 = v7->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v8 == 1 )
    v8[1] = 0LL;
  v7->Tail.Overlay.DriverContext[3] = 0LL;
LABEL_7:
  LOBYTE(v6) = v10;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v6);
  return v7;
}
