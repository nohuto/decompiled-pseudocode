/*
 * XREFs of ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098D70
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180006D04 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180095708 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 */

char __fastcall CVirtualDesktopSwitch::_WindowEnumCallback(__int64 a1, struct CWindowData *a2, char a3, int *a4)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // r14d
  __int64 v11; // r13
  __m128i v12; // xmm6
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct CAnimationComponent *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  struct CAnimationComponent *v23; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v26; // [rsp+68h] [rbp-9h] BYREF

  v23 = 0LL;
  v7 = 0;
  if ( (a3 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 176);
    if ( v8 == *(_DWORD *)(a1 + 144) )
    {
      v9 = *((_DWORD *)a2 + 144) & 0xFFF;
      if ( (unsigned int)(v9 - 75) <= 1 )
      {
        v10 = 0;
        if ( v8 )
        {
          v11 = v9;
          while ( 1 )
          {
            v24 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v10);
            v12 = (__m128i)v24;
            v13 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - _mm_cvtsi128_si32(v12);
            if ( v13 < 0 )
              v13 = 0;
            if ( v11 == 75 )
              v13 = -v13;
            rc = v24;
            OffsetRect(&rc, v13, 0);
            v26 = (struct tagRECT)v12;
            OffsetRect(&v26, -v13, 0);
            v14 = CStoryboard::_AddAnimationComponent(
                    (CStoryboard *)a1,
                    *(struct CAnimationComponent **)(*(_QWORD *)(a1 + 120) + 8LL * v10));
            v7 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x146Cu);
              goto LABEL_21;
            }
            CAnimatedTransitionVisual::SetBeginRect(
              *(struct tagPOINT **)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v10) + 40LL),
              &v24);
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v10) + 40LL);
            *(struct tagRECT *)(v15 + 856) = rc;
            CVisual::SetDirtyFlags((CVisual *)(v15 + 8), 4096);
            v16 = *(_QWORD *)(a1 + 120);
            v24 = (struct tagRECT)v12;
            v17 = *(_QWORD *)(v16 + 8LL * v10);
            *(__m128i *)(v17 + 104) = v12;
            *(_DWORD *)(v17 + 68) = 2;
            v18 = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v24, 0, &v23);
            v19 = v23;
            v7 = v18;
            if ( v18 < 0 )
              break;
            v20 = CStoryboard::_AddAnimationComponent((CStoryboard *)a1, v23);
            v7 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x1473u);
              goto LABEL_18;
            }
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v19 + 5), &v26);
            v21 = *((_QWORD *)v19 + 5);
            *(__m128i *)(v21 + 856) = v12;
            CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
            *((_DWORD *)v19 + 17) = 2;
            *(__m128i *)((char *)v19 + 104) = v12;
            CBaseObject::Release(v19);
            ++v10;
            v23 = 0LL;
            if ( v10 >= *(_DWORD *)(a1 + 176) )
              goto LABEL_21;
          }
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x1472u);
LABEL_18:
          if ( v19 )
            CBaseObject::Release(v19);
        }
      }
    }
    else
    {
      v7 = -2147019873;
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147019873, 0x1453u);
    }
  }
LABEL_21:
  *a4 = v7;
  return 1;
}
