/*
 * XREFs of ?InInteractionMode@MPCProcessor@@UEBA_NXZ @ 0x1800483F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::InInteractionMode(MPCProcessor *this)
{
  return *((_QWORD *)this + 20) != 0LL;
}
