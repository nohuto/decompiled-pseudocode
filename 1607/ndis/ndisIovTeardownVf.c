/*
 * XREFs of ndisIovTeardownVf @ 0x1C00D958C
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovTeardownVf(__int64 a1)
{
  _IRP *v2; // rcx

  v2 = *(_IRP **)(a1 + 4696);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 4738) = 1;
    IoCancelIrp(v2);
    KeWaitForSingleObject((PVOID)(a1 + 4712), Executive, 0, 0, 0LL);
    IoFreeIrp(*(PIRP *)(a1 + 4696));
    *(_QWORD *)(a1 + 4696) = 0LL;
  }
}
