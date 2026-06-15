/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002625C
 * Callers:
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002F704 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140031150 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140010C50 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(CPipeInstance *this, __int64 a2)
{
  _QWORD *v2; // rax
  int v4; // r8d
  CConnectionInstance **Next; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 30);
  v7 = v2;
  v4 = 0;
  while ( v2 )
  {
    Next = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                     (__int64)this,
                                     &v7);
    v4 = CConnectionInstance::SetHandle(*Next, a2);
    if ( v4 < 0 )
      break;
    v2 = v7;
  }
  return (unsigned int)v4;
}
