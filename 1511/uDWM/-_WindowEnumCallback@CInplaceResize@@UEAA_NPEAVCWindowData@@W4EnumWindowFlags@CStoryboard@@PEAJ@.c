/*
 * XREFs of ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800983C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093A30 (-GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180094AD4 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 */

char __fastcall CInplaceResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v7; // esi
  int v8; // edx
  char v9; // r14
  int v10; // ebx
  int PVLTarget; // eax
  int v12; // eax
  struct tagPOINT **v13; // rdi
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  LONG top; // ecx
  int v21; // eax
  struct tagPOINT *v22; // rcx
  struct tagRECT v24; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-10h] BYREF
  struct CAnimationComponent *v27; // [rsp+C8h] [rbp+48h] BYREF

  v27 = 0LL;
  v7 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_25;
  v8 = *(_DWORD *)(a2 + 576);
  v9 = (v8 & 0x20000000) != 0;
  v10 = v8 & 0xFFF;
  PVLTarget = CInplaceResize::GetPVLTarget((__int64)a1, v8);
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          v9,
          PVLTarget,
          0LL,
          0LL,
          -1,
          1,
          &v27);
  v13 = (struct tagPOINT **)v27;
  v7 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x6FAu);
    goto LABEL_23;
  }
  v24 = *(struct tagRECT *)((char *)v27 + 88);
  v26 = v24;
  if ( v9 )
  {
    CStoryboard::ResizeToSnapshot(*(HWND *)(a2 + 40), &v26, &v25);
    v24 = v25;
    v14 = v10 - 48;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            v17 = v25.right - v25.left;
            v24.right = v26.right;
            if ( v25.right - v25.left < 0 )
              v17 = 0;
            v24.left = v26.right - v17;
          }
        }
        else
        {
          v18 = v25.right - v25.left;
          v24.left = v26.left;
          if ( v25.right - v25.left < 0 )
            v18 = 0;
          v24.right = v26.left + v18;
        }
        goto LABEL_22;
      }
      v19 = v25.bottom - v25.top;
      v24.bottom = v26.bottom;
      if ( v25.bottom - v25.top < 0 )
        v19 = 0;
      top = v26.bottom - v19;
    }
    else
    {
      v21 = v25.bottom - v25.top;
      top = v26.top;
      if ( v25.bottom - v25.top < 0 )
        v21 = 0;
      v24.bottom = v26.top + v21;
    }
    v24.top = top;
  }
LABEL_22:
  CAnimatedTransitionVisual::SetBeginRect(v13[5], &v24);
  v22 = v13[5];
  *(struct tagRECT *)&v22[107].x = v24;
  CVisual::SetDirtyFlags((CVisual *)&v22[1], 4096);
LABEL_23:
  if ( v13 )
    CBaseObject::Release((CBaseObject *)v13);
LABEL_25:
  *a4 = v7;
  return 1;
}
