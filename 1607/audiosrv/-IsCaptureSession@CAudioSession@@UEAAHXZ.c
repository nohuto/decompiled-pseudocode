/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x1800160B0
 * Callers:
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180012DD8 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return ((unsigned __int8)~*((_BYTE *)this + 376) >> 3) & 1;
}
