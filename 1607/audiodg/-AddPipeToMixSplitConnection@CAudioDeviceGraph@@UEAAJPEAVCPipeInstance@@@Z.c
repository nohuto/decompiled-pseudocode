/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006760
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400057C0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400066A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rax
  int v8; // ebx
  __int64 (__fastcall *v9)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  int v10; // eax
  __int64 *Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 64LL);
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL);
  v7 = (_QWORD *)*((_QWORD *)a2 + 30);
  v15 = v7;
  while ( 1 )
  {
    v8 = 0;
    if ( !v7 )
      break;
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v15);
    v4 = *Next;
    if ( *(_QWORD *)(*Next + 8) != -1LL && v6 != -1 )
    {
      v8 = -2147024890;
      break;
    }
    v7 = v15;
    *(_QWORD *)(v4 + 8) = v6;
  }
  if ( v8 >= 0 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL);
    if ( v9 == CAudioDeviceGraph::AddPipe )
      v10 = CAudioDeviceGraph::AddPipe(this, a2);
    else
      v10 = v9(this, a2);
    v8 = v10;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
