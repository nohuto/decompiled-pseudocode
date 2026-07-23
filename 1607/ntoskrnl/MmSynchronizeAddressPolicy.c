/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x14065BFFC
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140458558 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1);
}
