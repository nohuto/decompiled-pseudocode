/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180071BE8
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180071684 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180072324 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // esi
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v8; // rdx
  int *v9; // rbx
  int v10; // ebp
  int v11; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ebx
  struct _LIST_ENTRY *v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+84h] [rbp+1Ch]

  v19 = 10;
  v3 = *(_QWORD *)(a1 + 272);
  v20 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return v5;
  while ( 2 )
  {
    v8 = Flink;
    v9 = &v19;
    v18 = Flink;
    v10 = 0;
    v11 = (int)Flink[7].Flink;
    while ( 1 )
    {
      if ( v11 == *v9 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow((HWND)v8[2].Blink);
        v8 = v18;
        if ( ShouldCloneWindow )
        {
          if ( (BYTE4(v18[35].Blink) & 1) == 0 && ((__int64)v18[35].Blink & 1) != 0 )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( (unsigned __int64)v10 >= 2 )
        goto LABEL_16;
    }
    if ( (unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v18) )
      goto LABEL_16;
    v13 = *(_DWORD *)(a2 + 24);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v5 = -2147024362;
      goto LABEL_19;
    }
    v5 = 0;
    if ( v14 <= *(_DWORD *)(a2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v18;
      *(_DWORD *)(a2 + 24) = v14;
      goto LABEL_16;
    }
    v15 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v18);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xC0u);
    v5 = v16;
    if ( v16 < 0 )
    {
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x2C5u);
      return v5;
    }
LABEL_16:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return v5;
  }
}
