/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E160 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E350 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18002E500 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z @ 0x18002E8C8 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180048290 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004A0F0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18004A3A0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x180096DC0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z @ 0x180096E50 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x1800977E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x180097AB0 (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x180098478 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800987E8 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCGestureHandler::DownLevelTo2D(MPCGestureHandler *this, struct InputInfo *a2)
{
  LONG v4; // r14d
  LONG v5; // r15d
  ManipulationInjector *v6; // rcx
  ManipulationInjector *v7; // rsi
  __int64 v8; // rdx
  ManipulationInjector *v9; // rcx
  int v10; // eax
  ManipulationInjector *v11; // rsi
  ManipulationInjector *v12; // rsi
  ManipulationInjector *v13; // rsi
  ManipulationInjector *v14; // rcx
  struct tagPOINT v15; // [rsp+50h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = (int)*((float *)a2 + 316);
  v15.x = v4;
  v5 = (int)*((float *)a2 + 317);
  v15.y = v5;
  *((_DWORD *)this + 228) = *((_DWORD *)a2 + 322);
  if ( *((_DWORD *)a2 + 312) != 1 )
  {
    if ( *((_DWORD *)a2 + 312) == 2 )
    {
      if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) != 0 && *((_DWORD *)this + 40) == 64 )
      {
        v15 = (struct tagPOINT)*((_QWORD *)this + 27);
        ManipulationInjector::InjectDrag((MPCGestureHandler *)((char *)this + 72), &v15);
      }
      v14 = (MPCGestureHandler *)((char *)this + 72);
    }
    else
    {
      if ( *((_DWORD *)a2 + 312) != 3 )
      {
        switch ( *((_DWORD *)a2 + 312) )
        {
          case 4:
            v12 = (MPCGestureHandler *)((char *)this + 72);
            if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) != 0 || *((_BYTE *)a2 + 1292) )
              goto LABEL_37;
            ManipulationInjector::SetInjectionRect(
              (MPCGestureHandler *)((char *)this + 72),
              (const struct tagRECT *)((char *)a2 + 1272));
            if ( *((_BYTE *)v12 + 13) )
              DbgPrint("Hover pt: %d,%d\n", v4, v5);
            v8 = 128LL;
            v9 = v12;
            if ( *((_DWORD *)v12 + 22) == 128 )
            {
              ManipulationInjector::UpdateContact(v12, v15, 1);
              ManipulationInjector::InjectAndScrub(v12);
              goto LABEL_37;
            }
            break;
          case 5:
            v11 = (MPCGestureHandler *)((char *)this + 72);
            if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) != 0 )
            {
              if ( *((_DWORD *)this + 40) == 1 )
                ManipulationInjector::InjectPan(
                  (MPCGestureHandler *)((char *)this + 72),
                  *((float *)a2 + 313),
                  *((float *)a2 + 314));
            }
            else
            {
              ManipulationInjector::SetInjectionRect(
                (MPCGestureHandler *)((char *)this + 72),
                (const struct tagRECT *)((char *)a2 + 1272));
              ManipulationInjector::StartPan(v11, &v15);
            }
            goto LABEL_37;
          case 6:
            v7 = (MPCGestureHandler *)((char *)this + 72);
            if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) != 0 )
            {
              v10 = *((_DWORD *)this + 40);
              if ( v10 == 16 || v10 == 32 )
                ManipulationInjector::InjectZoom((MPCGestureHandler *)((char *)this + 72), *((float *)a2 + 315));
              goto LABEL_37;
            }
            ManipulationInjector::SetInjectionRect(
              (MPCGestureHandler *)((char *)this + 72),
              (const struct tagRECT *)((char *)a2 + 1272));
            if ( *((_DWORD *)v7 + 22) == 64 )
              ManipulationInjector::EndManipulationInternal(v7, 1);
            v8 = 16LL;
            v9 = v7;
            break;
          case 7:
            v6 = (MPCGestureHandler *)((char *)this + 72);
LABEL_36:
            ManipulationInjector::InjectDrag(v6, &v15);
            goto LABEL_37;
          default:
            goto LABEL_37;
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))ManipulationInjector::StartManipulation)(v9, v8, v15);
        goto LABEL_37;
      }
      v13 = (MPCGestureHandler *)((char *)this + 72);
      if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) != 0 )
        goto LABEL_37;
      ManipulationInjector::SetInjectionRect(
        (MPCGestureHandler *)((char *)this + 72),
        (const struct tagRECT *)((char *)a2 + 1272));
      ManipulationInjector::InjectDrag(v13, &v15);
      v14 = v13;
    }
    ManipulationInjector::EndManipulationInternal(v14, 0);
    goto LABEL_37;
  }
  if ( (*((_DWORD *)this + 40) & 0xFFFFFF7F) == 0 )
  {
    ManipulationInjector::SetInjectionRect(
      (MPCGestureHandler *)((char *)this + 72),
      (const struct tagRECT *)((char *)a2 + 1272));
    v6 = (MPCGestureHandler *)((char *)this + 72);
    goto LABEL_36;
  }
LABEL_37:
  MPCSpatialGestureRecognizerHandler::FeedRecognizer(*((MPCSpatialGestureRecognizerHandler **)this + 113), a2);
}
