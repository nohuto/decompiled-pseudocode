/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1403B5718
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  return ObfDereferenceObject(a2);
}
