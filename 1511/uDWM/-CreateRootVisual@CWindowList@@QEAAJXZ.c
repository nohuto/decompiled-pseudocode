/*
 * XREFs of ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x180046118
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CVisual **this)
{
  CVisual **v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx
  CVisual *v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x450u);
  }
  else
  {
    v4 = *v1;
    v9 = 0x7FFFFFFF;
    v10 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(CVisual *, int *))(*(_QWORD *)v4 + 80LL))(v4, &v9);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x456u);
    }
    else
    {
      v6 = CVisual::RenderRecursive(*v1);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x45Bu);
      }
      else
      {
        v7 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x45Du);
      }
    }
  }
  return v3;
}
