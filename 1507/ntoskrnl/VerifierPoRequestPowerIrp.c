/*
 * XREFs of VerifierPoRequestPowerIrp @ 0x1407423F0
 * Callers:
 *     <none>
 * Callees:
 *     PoRequestPowerIrp @ 0x140136E4C (PoRequestPowerIrp.c)
 */

NTSTATUS __fastcall VerifierPoRequestPowerIrp(
        struct _DEVICE_OBJECT *a1,
        UCHAR a2,
        POWER_STATE a3,
        REQUEST_POWER_COMPLETE *a4,
        PVOID Context,
        PIRP *Irp)
{
  return pXdvPoRequestPowerIrp(a1, a2, a3, a4, Context, Irp);
}
