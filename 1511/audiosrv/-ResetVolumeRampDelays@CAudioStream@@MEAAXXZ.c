/*
 * XREFs of ?ResetVolumeRampDelays@CAudioStream@@MEAAXXZ @ 0x1800490A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::ResetVolumeRampDelays(CAudioStream *this)
{
  *((_QWORD *)this + 11) = 0LL;
}
