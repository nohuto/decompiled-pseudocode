/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F230
 * Callers:
 *     ?RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E4A0 (-RemovePipe@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2, bool a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 216),
    a3);
  CPipeInstance::DeactivateAPOsAndRemoveConnections((struct IAudioProcessor **)a2);
  v5 = (_QWORD *)*((_QWORD *)a2 + 30);
  v9 = v5;
  while ( v5 )
  {
    v4 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v9);
    v5 = v9;
    *(_QWORD *)(v4 + 8) = -1LL;
  }
  if ( *((_QWORD *)a2 + 18) )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 18, 0LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
