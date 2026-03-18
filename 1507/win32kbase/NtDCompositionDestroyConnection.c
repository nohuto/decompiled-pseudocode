/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1C00D3D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtDCompositionDestroyConnection(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  return DirectComposition::CConnection::DestroyHandle(a1);
}
