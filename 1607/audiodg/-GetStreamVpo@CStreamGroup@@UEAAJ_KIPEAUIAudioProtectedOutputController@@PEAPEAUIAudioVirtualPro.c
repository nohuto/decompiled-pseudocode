/*
 * XREFs of ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140031890
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140001FB4 (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400316F4 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 */

__int64 __fastcall CStreamGroup::GetStreamVpo(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  CStreamInstance *Stream; // rax
  unsigned int Ota; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection, this + 4);
  Stream = CStreamGroup::FindStream((CStreamGroup *)this, a2);
  if ( Stream )
    Ota = CStreamInstance::GetOta(Stream, a3, a4, a5);
  else
    Ota = -2005139430;
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return Ota;
}
