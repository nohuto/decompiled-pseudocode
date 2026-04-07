/*
 * XREFs of ?_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800986A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180003BC4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetPVLTarget@CResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093B70 (-GetPVLTarget@CResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180096218 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180099188 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowBeginSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800991DC (-GetWindowBeginSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 */

char __fastcall CResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v5; // ebx
  struct CAnimationComponent *v6; // rsi
  CWindowPropertyTracker *v7; // r15
  int v8; // eax
  char v9; // r12
  LONG left; // r14d
  unsigned __int64 v11; // rdi
  CStoryboard *v12; // rcx
  int v13; // eax
  int PVLTarget; // eax
  int v15; // eax
  struct tagPOINT **v16; // r15
  int v17; // esi
  int v18; // r12d
  int v19; // eax
  int v20; // ecx
  struct tagPOINT *v21; // rcx
  int v22; // eax
  int v23; // r12d
  int v24; // eax
  __int64 v25; // rcx
  char result; // al
  char v27; // [rsp+50h] [rbp-49h]
  char v28; // [rsp+51h] [rbp-48h]
  struct tagRECT v29; // [rsp+58h] [rbp-41h] BYREF
  struct tagPOINT v30; // [rsp+68h] [rbp-31h] BYREF
  struct tagSIZE v31; // [rsp+70h] [rbp-29h] BYREF
  struct CAnimationComponent *v32; // [rsp+78h] [rbp-21h] BYREF
  struct CAnimationComponent *v33[2]; // [rsp+80h] [rbp-19h] BYREF
  CStoryboard *v34; // [rsp+90h] [rbp-9h]
  int *v35; // [rsp+98h] [rbp-1h]
  struct tagRECT rc; // [rsp+A0h] [rbp+7h] BYREF

  v35 = a4;
  v34 = a1;
  v33[0] = 0LL;
  v5 = 0;
  v32 = 0LL;
  v6 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    rc = 0LL;
    v7 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL);
    v8 = *(_DWORD *)(a2 + 576) & 0xFFF;
    v29 = 0LL;
    if ( v8 == 23 )
    {
      v28 = 0;
      v9 = 0;
      v27 = 0;
      if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(v7, *(HWND *)(a2 + 40), &v30) >= 0 )
        OffsetRect(&rc, v30.x, v30.y);
      if ( (int)CWindowPropertyTracker::GetWindowBeginSize(v7, *(HWND *)(a2 + 40), &v31) >= 0 )
      {
        rc.right = rc.left + v31.cx;
        rc.bottom = v31.cy + rc.top;
      }
      if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v7, *(HWND *)(a2 + 40), &v30) < 0 )
      {
        LODWORD(v11) = v29.top;
        left = v29.left;
      }
      else
      {
        left = v30.x;
        v9 = 1;
        LODWORD(v11) = v30.y;
        v28 = 1;
        v29.left = v30.x;
        v29.top = v30.y;
      }
      if ( (int)CWindowPropertyTracker::GetWindowEndSize(v7, *(HWND *)(a2 + 40), &v31) >= 0 )
      {
        v27 = 1;
        v29.right = left + v31.cx;
        v12 = (CStoryboard *)(unsigned int)(v11 + v31.cy);
        v29.bottom = v11 + v31.cy;
      }
      v13 = CStoryboard::_StopTrackingWindow(v12, (struct CWindowData *)a2);
      v5 = v13;
      if ( v13 >= 0 )
      {
        PVLTarget = CResize::GetPVLTarget((__int64)v34, *(_DWORD *)(a2 + 576));
        v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                v34,
                (struct CWindowData *)a2,
                0,
                PVLTarget,
                0LL,
                0LL,
                -1,
                1,
                v33);
        v16 = (struct tagPOINT **)v33[0];
        v5 = v15;
        if ( v15 >= 0 )
        {
          *(_OWORD *)v33 = *(_OWORD *)((char *)v33[0] + 88);
          v17 = (int)v33[0];
          if ( !v9 )
          {
            *(struct CAnimationComponent **)&v29.left = v33[0];
            v11 = (unsigned __int64)v33[0] >> 32;
            left = (LONG)v33[0];
          }
          v18 = (int)v33[1];
          if ( !v27 )
          {
            v19 = LODWORD(v33[1]) - LODWORD(v33[0]);
            if ( LODWORD(v33[1]) - LODWORD(v33[0]) < 0 )
              v19 = 0;
            v29.right = left + v19;
            v20 = HIDWORD(v33[1]) - HIDWORD(v33[0]);
            if ( HIDWORD(v33[1]) - HIDWORD(v33[0]) < 0 )
              v20 = 0;
            v29.bottom = v20 + v11;
          }
          CAnimatedTransitionVisual::SetBeginRect(v16[5], &v29);
          v21 = v16[5];
          *(struct tagRECT *)&v21[107].x = v29;
          CVisual::SetDirtyFlags((CVisual *)&v21[1], 4096);
          v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  v34,
                  (struct CWindowData *)a2,
                  1,
                  1,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v32);
          v5 = v22;
          if ( v22 >= 0 )
          {
            if ( !v27 )
            {
              v23 = v18 - v17;
              if ( v23 < 0 )
                v23 = 0;
              rc.right = v23 + rc.left;
              v24 = HIDWORD(v33[1]) - HIDWORD(v33[0]);
              if ( HIDWORD(v33[1]) - HIDWORD(v33[0]) < 0 )
                v24 = 0;
              rc.bottom = rc.top + v24;
            }
            if ( !v28 )
              OffsetRect(&rc, v17 - rc.left, HIDWORD(v33[0]) - rc.top);
            v6 = v32;
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v32 + 5), &rc);
            v25 = *((_QWORD *)v6 + 5);
            *(struct tagRECT *)(v25 + 856) = rc;
            CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 4096);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0xD3Eu);
            v6 = v32;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0xD2Cu);
        }
        if ( v16 )
          CBaseObject::Release((CBaseObject *)v16);
        if ( v6 )
          CBaseObject::Release(v6);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0xD29u);
      }
    }
  }
  result = 1;
  *v35 = v5;
  return result;
}
