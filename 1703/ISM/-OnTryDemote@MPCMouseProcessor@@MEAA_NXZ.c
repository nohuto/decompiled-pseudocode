/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1800426E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  return GetTickCount() - *((_DWORD *)this + 80) > *((_DWORD *)this + 81);
}
