/*
 * XREFs of ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180039070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 16));
}
