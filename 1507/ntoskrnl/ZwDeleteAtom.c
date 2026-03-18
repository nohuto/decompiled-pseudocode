/*
 * XREFs of ZwDeleteAtom @ 0x140180810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDeleteAtom(RTL_ATOM Atom)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Atom, v1, v2);
}
