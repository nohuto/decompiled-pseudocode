/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140626748
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1);
}
