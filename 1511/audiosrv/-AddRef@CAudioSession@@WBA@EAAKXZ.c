/*
 * XREFs of ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180048DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 16));
}
