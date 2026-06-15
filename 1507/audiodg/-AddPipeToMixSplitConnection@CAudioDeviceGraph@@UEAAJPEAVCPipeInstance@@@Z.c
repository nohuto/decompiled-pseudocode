/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F380
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E530 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140009B00 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F2B0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(CAudioDeviceGraph *, struct CPipeInstance *); // rbx
  int v10; // eax
  CConnectionInstance **Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  _QWORD *i; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 64LL);
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL);
  v8 = (_QWORD *)*((_QWORD *)a2 + 30);
  for ( i = v8; v8; v8 = i )
  {
    Next = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &i);
    v6 = CConnectionInstance::SetHandle(*Next, v7);
    if ( v6 < 0 )
      break;
  }
  if ( v6 >= 0 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
    if ( v9 == CAudioDeviceGraph::AddPipe )
      v10 = CAudioDeviceGraph::AddPipe(this, a2);
    else
      v10 = v9(this, a2);
    v6 = v10;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
