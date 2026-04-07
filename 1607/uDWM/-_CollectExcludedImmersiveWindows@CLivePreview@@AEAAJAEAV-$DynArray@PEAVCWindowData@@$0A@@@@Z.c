/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800739D8
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180073444 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800053D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007413C (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v8; // rdx
  int *v9; // rdi
  int v10; // ebp
  int v11; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // edi
  struct _LIST_ENTRY *v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF
  int v19; // [rsp+84h] [rbp+1Ch]
  struct _LIST_ENTRY **v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = 10;
  v3 = *(_QWORD *)(a1 + 272);
  v19 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return (unsigned int)v5;
  while ( 2 )
  {
    v8 = Flink;
    v9 = &v18;
    v17 = Flink;
    v10 = 0;
    v11 = (int)Flink[7].Flink;
    while ( 1 )
    {
      if ( v11 == *v9 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow((HWND)v8[2].Blink);
        v8 = v17;
        if ( ShouldCloneWindow )
        {
          if ( (BYTE4(v17[36].Flink) & 1) == 0 && ((__int64)v17[36].Flink & 1) != 0 )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( (unsigned __int64)v10 >= 2 )
        goto LABEL_17;
    }
    if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v17) )
    {
      v13 = *(_DWORD *)(a2 + 24);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v5 = -2147024362;
        goto LABEL_20;
      }
      v5 = 0;
      if ( v14 <= *(_DWORD *)(a2 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v17;
        *(_DWORD *)(a2 + 24) = v14;
        goto LABEL_17;
      }
      v20 = &v17;
      v5 = DynArrayImpl<0>::Grow(a2, 8u, 1, 0, (unsigned __int64 *)&v20);
      if ( v5 >= 0 )
        *(_QWORD *)(*(_QWORD *)a2 + (unsigned int)(8 * (*(_DWORD *)(a2 + 24))++)) = *v20;
      v15 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
LABEL_20:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x2C5u);
        return (unsigned int)v5;
      }
    }
LABEL_17:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return (unsigned int)v5;
  }
}
