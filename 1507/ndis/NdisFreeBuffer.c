/*
 * XREFs of NdisFreeBuffer @ 0x1C0054F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisFreeBuffer(PMDL Mdl)
{
  IoFreeMdl(Mdl);
}
