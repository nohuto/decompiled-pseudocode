/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180069430
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800690E4 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180087CD4 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18008A714 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  __int64 v1; // rbx
  int v3; // edi
  CManipulationManager *v4; // rcx
  int v5; // ebx
  int updated; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edi

  v1 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( (unsigned int)CInputManager::UseDesktopInputStack(this) )
  {
    if ( !*(_BYTE *)(v1 + 48) && *(_QWORD *)(v1 + 40) )
    {
      SetEvent(*(HANDLE *)(v1 + 32));
      v5 = 0;
      goto LABEL_5;
    }
    v3 = -2147467260;
  }
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x537u);
LABEL_5:
  updated = CManipulationManager::UpdateMMCSSTask(v4);
  v7 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x539u);
  if ( !v3 )
    v5 = v7;
  v8 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 5));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x53Bu);
  if ( !v5 || v5 >= 0 && v9 < 0 )
    return (unsigned int)v9;
  return (unsigned int)v5;
}
