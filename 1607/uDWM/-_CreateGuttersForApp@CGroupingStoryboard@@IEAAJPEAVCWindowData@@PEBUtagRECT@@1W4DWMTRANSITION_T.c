/*
 * XREFs of ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800939B4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093160 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094920 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x180093814 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 */

__int64 __fastcall CGroupingStoryboard::_CreateGuttersForApp(
        CStoryboard *a1,
        __int64 a2,
        struct tagRECT *a3,
        int *a4,
        unsigned int a5,
        CBaseObject *a6,
        CBaseObject **a7)
{
  CBaseObject *v8; // r13
  int v12; // r10d
  __int64 v13; // rdx
  struct CAnimationComponent *v14; // rdi
  struct CAnimationComponent *v15; // rbx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  CBaseObject *v19; // rcx
  struct tagRECT v20; // xmm0
  CBaseObject *v21; // rbx
  struct tagRECT v22; // xmm0
  CBaseObject **v23; // rax
  struct tagRECT v25; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v26; // [rsp+80h] [rbp+30h] BYREF

  v8 = a6;
  a6 = 0LL;
  v26 = 0LL;
  *a7 = 0LL;
  v12 = *(_DWORD *)(a2 + 584);
  v13 = a5;
  *(_QWORD *)v8 = 0LL;
  v14 = (struct CAnimationComponent *)((unsigned __int64)&v26 & -(__int64)((v12 & 0x8000) != 0));
  v15 = (struct CAnimationComponent *)((unsigned __int64)&a6 & -(__int64)((v12 & 0x10000) != 0));
  v16 = (*(__int64 (__fastcall **)(CStoryboard *, __int64))(*(_QWORD *)a1 + 88LL))(a1, v13);
  v17 = CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
          a1,
          *(_QWORD *)(a2 + 40),
          a5,
          v16,
          &a3->left,
          a4,
          v15,
          v14);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x856u);
LABEL_7:
    v21 = v26;
    v19 = a6;
    goto LABEL_8;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl(a3, &v25);
  v19 = a6;
  if ( a6 )
  {
    v20 = v25;
    *((_DWORD *)a6 + 17) = 2;
    *(_QWORD *)v8 = v19;
    *(struct tagRECT *)((char *)v19 + 104) = v20;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    v19 = a6;
  }
  v21 = v26;
  if ( v26 )
  {
    v22 = v25;
    *((_DWORD *)v26 + 17) = 2;
    v23 = a7;
    *(struct tagRECT *)((char *)v21 + 104) = v22;
    *v23 = v21;
    _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
    goto LABEL_7;
  }
LABEL_8:
  if ( v19 )
    CBaseObject::Release(v19);
  if ( v21 )
    CBaseObject::Release(v21);
  return v18;
}
