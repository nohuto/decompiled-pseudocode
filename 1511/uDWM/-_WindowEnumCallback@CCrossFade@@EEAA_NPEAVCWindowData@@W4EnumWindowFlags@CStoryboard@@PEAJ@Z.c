/*
 * XREFs of ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180097E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180003868 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CCrossFade::_WindowEnumCallback(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // esi
  char v8; // bp
  int v9; // edi
  float v10; // xmm7_4
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  __int64 v13; // rcx
  char result; // al
  int v15; // eax
  char v16; // r8
  __int64 v17; // r8
  int v18; // eax
  struct tagRECT v19; // [rsp+30h] [rbp-58h] BYREF
  CBaseObject *v20; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_17;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 576) & 0xFFF;
  if ( v9 == 18 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0x13 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x3D )
  {
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0x3E )
      goto LABEL_21;
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x3F )
    {
      if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x40 )
      {
        if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x41 )
          goto LABEL_9;
        goto LABEL_22;
      }
LABEL_21:
      v8 = 1;
      v16 = 0;
LABEL_23:
      if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
             (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
             *(HWND *)(a2 + 40),
             v16) )
      {
        LOBYTE(v17) = v8;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 120LL))(
                a1,
                a2,
                v17,
                &v20);
        v4 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x681u);
          goto LABEL_15;
        }
      }
LABEL_9:
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == 77 )
      {
        if ( ((v9 - 62) & 0xFFFFFFFD) != 0 )
        {
LABEL_11:
          v10 = FLOAT_1_0;
LABEL_12:
          if ( !v20 )
            goto LABEL_17;
          v12 = (struct tagPOINT *)*((_QWORD *)v20 + 5);
          v19 = *(struct tagRECT *)((char *)v20 + 88);
          v11 = v19;
          CAnimatedTransitionVisual::SetBeginRect(v12, &v19);
          v13 = *((_QWORD *)v20 + 5);
          *(struct tagRECT *)(v13 + 856) = v11;
          CVisual::SetDirtyFlags((CVisual *)(v13 + 8), 4096);
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v20 + 5), v10);
          if ( *((_DWORD *)v20 + 17) != 2 )
            *((_DWORD *)v20 + 17) = 1;
          goto LABEL_15;
        }
      }
      else if ( !v8 )
      {
        goto LABEL_11;
      }
      v10 = 0.0;
      goto LABEL_12;
    }
LABEL_22:
    v16 = 1;
    goto LABEL_23;
  }
  LOBYTE(a3) = 1;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 120LL))(a1, a2, a3, &v20);
  v4 = v15;
  if ( v15 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x689u);
LABEL_15:
  if ( v20 )
    CBaseObject::Release(v20);
LABEL_17:
  result = 1;
  *a4 = v4;
  return result;
}
