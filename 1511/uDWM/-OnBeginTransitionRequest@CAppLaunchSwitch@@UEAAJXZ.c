/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800943C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006604 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B8E4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  CBaseObject *v4; // rdi
  bool v5; // al
  CAnimationScheduler *v6; // rcx
  int v7; // eax
  int v8; // eax
  struct CImmersiveState *v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v11) )
  {
    v3 = CImmersiveState::Create(&v10, v11);
    v4 = v10;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v5 = *((_BYTE *)v10 + 56) == 0;
      *((_BYTE *)this + 120) = v5;
      v6 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      if ( v5 )
      {
        v7 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v6, 0x3Bu, 0LL, this, 0LL);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800AD120, 1LL, v7, 0xB59u);
      }
      else
      {
        v8 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v6, 0x3Au, 0LL, this, 0LL);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800AD120, 1LL, v8, 0xB5Du);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800AD120, 1LL, v3, 0xB55u);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_1800AD120, 1LL, -2147467259, 0xB53u);
  }
  return v2;
}
