/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000CFA8
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B8FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18000D09C (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000D858 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180088FE8 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180098054 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v2; // r15d
  __int64 i; // rbp
  __int64 v6; // rsi
  __int64 j; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  RECT v12; // xmm1
  HMONITOR v13; // rbx
  int v14; // eax
  CTransitionVisualController *v15; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v17; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 28); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 8 * i);
    if ( CTransitionVisualController::_CanMorph(this, (struct CAnimationComponent *)v6) )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 34); j = (unsigned int)(j + 1) )
      {
        v8 = *((_QWORD *)this + 14);
        v9 = *(_QWORD *)(v8 + 8 * j);
        if ( v6 != v9
          && CTransitionVisualController::_CanMorph(this, *(struct CAnimationComponent **)(v8 + 8 * j))
          && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 959LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 959LL)) )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( v11 )
          {
            if ( v11 == *(_QWORD *)(v6 + 16)
              && *(_QWORD *)(v9 + 128) != *(_QWORD *)(v6 + 128)
              && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
            {
              v12 = *(RECT *)(v6 + 88);
              v17 = *(RECT *)(v9 + 88);
              rc = v12;
              v13 = MonitorFromRect(&rc, 2u);
              if ( MonitorFromRect(&v17, 2u) == v13 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
              {
                v14 = CAnimatedTransitionVisual::CopyVisual(
                        *(CAnimatedTransitionVisual **)(v6 + 40),
                        *(struct CAnimatedTransitionVisual **)(v9 + 40));
                v2 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v14,
                    0x9CEu);
                  return v2;
                }
                CTransitionVisualController::_UpdateClipping(v15, (struct CAnimationComponent *)v6);
                CAnimationComponent::Morph((CAnimationComponent *)v9);
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
