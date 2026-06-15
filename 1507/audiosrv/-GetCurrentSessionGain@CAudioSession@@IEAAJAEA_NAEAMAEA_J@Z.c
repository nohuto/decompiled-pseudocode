/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x180066A4C
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CAudioSession::GetCurrentSessionGain(
        struct _RTL_CRITICAL_SECTION *this,
        bool *a2,
        float *a3,
        __int64 *a4)
{
  bool v7; // zf
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  *a4 = 50000LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, this + 18);
  *a3 = *(float *)&this[19].DebugInfo;
  v7 = v10 == 0;
  *a2 = HIDWORD(this[19].DebugInfo) != 0;
  if ( !v7 )
    ATL::CCritSecLock::Unlock(&v9);
  return 0LL;
}
