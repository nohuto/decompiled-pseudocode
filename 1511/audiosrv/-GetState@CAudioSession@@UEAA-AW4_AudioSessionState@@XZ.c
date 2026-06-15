/*
 * XREFs of ?GetState@CAudioSession@@UEAA?AW4_AudioSessionState@@XZ @ 0x180028B60
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(CAudioSession *this)
{
  return *((unsigned int *)this + 118);
}
