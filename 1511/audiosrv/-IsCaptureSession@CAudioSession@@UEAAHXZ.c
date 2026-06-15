/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x180028B30
 * Callers:
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180025854 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return ((unsigned __int8)~*((_BYTE *)this + 376) >> 3) & 1;
}
