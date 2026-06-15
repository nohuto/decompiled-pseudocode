/*
 * XREFs of ?GetState@CAudioSession@@UEAA?AW4_AudioSessionState@@XZ @ 0x180010D50
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180011344 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(CAudioSession *this)
{
  return *((unsigned int *)this + 81);
}
