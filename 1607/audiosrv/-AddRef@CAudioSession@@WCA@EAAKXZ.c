/*
 * XREFs of ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180039090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 32));
}
