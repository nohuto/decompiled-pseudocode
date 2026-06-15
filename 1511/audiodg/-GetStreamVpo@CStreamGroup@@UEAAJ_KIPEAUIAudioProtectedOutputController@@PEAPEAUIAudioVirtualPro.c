/*
 * XREFs of ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400035A0
 * Callers:
 *     AudioDGGetVpoFromVpoContext @ 0x140001640 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140003178 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000383C (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CStreamGroup::GetStreamVpo(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2,
        int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  struct IAudioVirtualProtectedOutput **Stream; // rax
  unsigned int Ota; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, this + 4, a3);
  Stream = (struct IAudioVirtualProtectedOutput **)CStreamGroup::FindStream((CStreamGroup *)this, a2);
  if ( Stream )
    Ota = CStreamInstance::GetOta(Stream, a3, a4, a5);
  else
    Ota = -2005139430;
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return Ota;
}
