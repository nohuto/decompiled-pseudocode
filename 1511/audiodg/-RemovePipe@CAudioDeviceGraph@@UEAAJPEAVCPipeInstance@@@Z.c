/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006F20
 * Callers:
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005B60 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D620 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CPipeInstance::DeactivateAPOsAndRemoveConnections(a2);
  v4 = (_QWORD *)*((_QWORD *)a2 + 30);
  v9 = v4;
  while ( v4 )
  {
    v3 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v9);
    v4 = v9;
    *(_QWORD *)(v3 + 8) = -1LL;
  }
  v5 = *((_QWORD *)a2 + 18);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)a2 + 18) = 0LL;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
