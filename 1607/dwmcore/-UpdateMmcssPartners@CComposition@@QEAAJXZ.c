/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18003C3A4
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18003BF30 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x1800A7BF4 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // edi
  int updated; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ebx

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 208LL);
  if ( !v3 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v3 + 24) && *(_QWORD *)(v3 + 8) )
  {
    SetEvent(*(HANDLE *)(v3 + 120));
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  v2 = -2147467260;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x156u);
  v4 = -2147467260;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x42Au);
LABEL_6:
  updated = CManipulationManager::UpdateMMCSSTask((CManipulationManager *)v3);
  v6 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x42Cu);
  if ( !v2 )
    v4 = v6;
  v7 = CSurfaceManager::ResetTokenThread(*((HANDLE **)this + 5));
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x42Eu);
  if ( !v4 || v4 >= 0 && v8 < 0 )
    return (unsigned int)v8;
  return (unsigned int)v4;
}
