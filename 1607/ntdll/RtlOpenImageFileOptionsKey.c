/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x180090F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKey(a1, 9u, a3);
}
