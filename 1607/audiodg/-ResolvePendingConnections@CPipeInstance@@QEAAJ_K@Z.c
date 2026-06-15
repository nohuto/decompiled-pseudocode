/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x140025050
 * Callers:
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002DE50 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002F170 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(CPipeInstance *this, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax
  _QWORD *Next; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 30);
  v6 = v2;
  while ( 1 )
  {
    result = 0LL;
    if ( !v2 )
      break;
    Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v6);
    this = (CPipeInstance *)*Next;
    if ( *(_QWORD *)(*Next + 8LL) != -1LL && a2 != -1 )
      return 2147942406LL;
    v2 = v6;
    *((_QWORD *)this + 1) = a2;
  }
  return result;
}
