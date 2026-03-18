/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x1406A85EC
 * Callers:
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1);
}
