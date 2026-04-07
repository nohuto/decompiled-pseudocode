/*
 * XREFs of ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800858EC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180085354 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVis.c)
 */

__int64 __fastcall CContactManager::EnsureTouchPressHoldForContact(
        CContactManager *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v6; // rdi
  unsigned __int64 *v8; // r14
  CContactManager *v9; // rcx
  unsigned __int64 *v10; // r14
  CContactManager *v11; // rcx
  unsigned __int64 *v12; // r14
  CContactManager *v13; // rcx
  unsigned __int64 *v14; // r14
  CContactManager *v15; // rcx
  unsigned __int64 *v16; // r14
  CContactManager *v17; // rcx
  int Touch; // eax
  CContactManager *v19; // rcx

  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  v6 = 112LL * a2;
  if ( !*(_QWORD *)(v3 + v6 + 64) )
  {
    v8 = *(unsigned __int64 **)(v3 + v6 + 48);
    if ( v8 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v8 + 184))(v8);
      CContactManager::RemoveFromTouchNode(v9, v8[34], (struct CVisual *)v8);
      CBaseObject::Release((CBaseObject *)v8);
    }
    v10 = *(unsigned __int64 **)(*((_QWORD *)this + 7) + v6 + 56);
    if ( v10 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v10 + 184))(v10);
      CContactManager::RemoveFromTouchNode(v11, v10[34], (struct CVisual *)v10);
      CBaseObject::Release((CBaseObject *)v10);
    }
    v12 = *(unsigned __int64 **)(*((_QWORD *)this + 7) + v6 + 88);
    if ( v12 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v12 + 184))(v12);
      CContactManager::RemoveFromTouchNode(v13, v12[34], (struct CVisual *)v12);
      CBaseObject::Release((CBaseObject *)v12);
    }
    v14 = *(unsigned __int64 **)(*((_QWORD *)this + 7) + v6 + 64);
    if ( v14 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v14 + 184))(v14);
      CContactManager::RemoveFromTouchNode(v15, v14[34], (struct CVisual *)v14);
      CBaseObject::Release((CBaseObject *)v14);
    }
    v16 = *(unsigned __int64 **)(*((_QWORD *)this + 7) + v6 + 96);
    if ( v16 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v16 + 184))(v16);
      CContactManager::RemoveFromTouchNode(v17, v16[34], (struct CVisual *)v16);
      CBaseObject::Release((CBaseObject *)v16);
    }
    *(_QWORD *)(*((_QWORD *)this + 7) + v6 + 48) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v6 + 56) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v6 + 88) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v6 + 64) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v6 + 96) = 0LL;
    *(_BYTE *)(*((_QWORD *)this + 7) + v6 + 104) = 0;
    Touch = CreateTouchVisual<CTouchPressHoldVisual>(
              *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
              a3,
              (CTouchPressHoldVisual **)(v6 + *((_QWORD *)this + 7) + 64LL));
    v4 = Touch;
    if ( Touch >= 0 )
      CContactManager::AddToTouchNode(v19, a3, *(struct CVisual **)(*((_QWORD *)this + 7) + v6 + 64));
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x86Bu);
  }
  return v4;
}
