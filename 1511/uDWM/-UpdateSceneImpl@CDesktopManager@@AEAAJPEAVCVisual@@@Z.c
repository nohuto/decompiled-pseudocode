/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800218A0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DAA0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180021D30 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  CDesktopManager *v2; // rbp
  int v3; // edi
  __int64 i; // rbx
  __int64 v7; // rbx
  char v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 0;
  if ( (*((_DWORD *)a2 + 20) & 0xFFFFFFFE) != 0
    && (v11 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 48LL))(a2), v3 = v11, v11 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x208u);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 80) & 1) != 0 )
    {
      LODWORD(v7) = -1;
      v8 = 0;
      while ( 1 )
      {
        if ( !v8 )
        {
          LODWORD(v7) = *((_DWORD *)a2 + 18);
          v8 = 1;
        }
        v7 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v7 == -1 )
          break;
        v9 = CVisual::RenderRecursive(*(CVisual **)(*((_QWORD *)a2 + 6) + 8 * v7));
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x21Bu);
          goto LABEL_4;
        }
      }
      *((_DWORD *)a2 + 20) &= ~1u;
    }
    if ( (*((_DWORD *)a2 + 20) & 0xFFFFFFFE) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 56LL))(a2);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x228u);
    }
  }
LABEL_4:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x454u);
  }
  else
  {
    for ( i = *((_QWORD *)v2 + 167);
          *(_DWORD *)(i + 272);
          CWindowList::ImmediateDestroySprite((CWindowList *)i, **(struct CWindowData ***)(i + 248)) )
    {
      ;
    }
    *(_DWORD *)(i + 272) = 0;
    DynArrayImpl<0>::ShrinkToSize(i + 248, 8LL);
    if ( !*((_BYTE *)v2 + 17) )
    {
      if ( *((_DWORD *)v2 + 362) )
      {
        if ( !*((_BYTE *)v2 + 18) )
        {
          *((_BYTE *)v2 + 18) = 1;
          v10 = CDesktopManager::SendRoundTripRequest(v2, 0LL);
          v3 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x465u);
        }
      }
    }
  }
  return (unsigned int)v3;
}
