/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x1800025A4
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  bool v7; // zf
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  *a4 = 50000LL;
  v9 = (char *)this + 872;
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v9);
  *a3 = *((float *)this + 228);
  v7 = v10 == 0;
  *a2 = *((_DWORD *)this + 229) != 0;
  if ( !v7 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v9);
  return 0LL;
}
