/*
 * XREFs of NdisFreeBuffer @ 0x1C000FE80
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
