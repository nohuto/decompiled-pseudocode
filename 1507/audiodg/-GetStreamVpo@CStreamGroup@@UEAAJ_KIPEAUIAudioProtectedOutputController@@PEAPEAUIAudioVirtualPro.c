/*
 * XREFs of ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400117A0
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x1400016E0 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstanceNew@@_K@Z @ 0x140012C8C (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstanceNew@@_K@Z.c)
 *     ?GetOta@CStreamInstanceNew@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14001403C (-GetOta@CStreamInstanceNew@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProte.c)
 */

__int64 __fastcall CStreamGroup::GetStreamVpo(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  CStreamInstanceNew *Stream; // rax
  unsigned int Ota; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, this + 4);
  Stream = CStreamGroup::FindStream((CStreamGroup *)this, a2);
  if ( Stream )
    Ota = CStreamInstanceNew::GetOta(Stream, a3, a4, a5);
  else
    Ota = -2005139430;
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return Ota;
}
