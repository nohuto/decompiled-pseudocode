/*
 * XREFs of ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CWindowClose::_WindowEnumCallback(CStoryboard *a1, unsigned int *a2, char a3, int *a4)
{
  int v4; // edi
  int v8; // eax
  int v9; // eax
  struct CAnimationComponent *v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v12; // xmm6
  CAnimatedTransitionVisual *v13; // rcx
  __int64 v14; // rcx
  char result; // al
  struct tagRECT v16; // [rsp+50h] [rbp-38h] BYREF
  struct CAnimationComponent *v17; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0LL;
  if ( (a3 & 1) != 0 && (a2[144] & 0xFFF) == 0x55 )
  {
    v8 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2[144]);
    v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
           a1,
           (struct CWindowData *)a2,
           1,
           v8,
           0LL,
           0LL,
           -1,
           1,
           &v17);
    v10 = v17;
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v9, 0x1507u);
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v17 + 5), 1.0);
      v11 = *((_QWORD *)v10 + 5);
      *(_DWORD *)(v11 + 916) = 0;
      CVisual::SetDirtyFlags((CVisual *)(v11 + 8), 0x1000u);
      v13 = (CAnimatedTransitionVisual *)*((_QWORD *)v10 + 5);
      v16 = *(struct tagRECT *)((char *)v10 + 88);
      v12 = v16;
      CAnimatedTransitionVisual::SetBeginRect(v13, &v16);
      v14 = *((_QWORD *)v10 + 5);
      *(struct tagRECT *)(v14 + 856) = v12;
      CVisual::SetDirtyFlags((CVisual *)(v14 + 8), 0x1000u);
      if ( *((_DWORD *)v10 + 17) != 2 )
        *((_DWORD *)v10 + 17) = 1;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  result = 1;
  *a4 = v4;
  return result;
}
