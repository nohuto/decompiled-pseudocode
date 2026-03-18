/*
 * XREFs of ExUuidCreate_0 @ 0x1C000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ExUuidCreate_0(UUID *Uuid)
{
  return ExUuidCreate(Uuid);
}
