/*
 * XREFs of ?ResetVolumeRampDelays@CAudioStream@@MEAAXXZ @ 0x180044E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::ResetVolumeRampDelays(CAudioStream *this)
{
  *((_QWORD *)this + 12) = 0LL;
}
