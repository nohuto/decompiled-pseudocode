/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(Gre::Base *a1, ULONG a2, UINT_PTR a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r14
  struct W32_PUSH_LOCK *v7; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  struct W32_PUSH_LOCK *v12; // rbx
  unsigned int v13; // esi
  _OWORD v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h]
  int v17; // [rsp+48h] [rbp-B8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v18; // [rsp+50h] [rbp-B0h] BYREF

  v6 = Gre::Base::Globals(a1);
  memset_0(&v18, 0, sizeof(v18));
  v18.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v18.Token.GdiSysMem.dwDirtyFlags = a2;
  v18.Token.Flip.FenceValue = (UINT64)a1;
  v18.Token.Flip.dxgContext = a3;
  v7 = (struct W32_PUSH_LOCK *)*((_QWORD *)v6 + 543);
  if ( v7 )
    GreAcquirePushLockExclusive(*((struct W32_PUSH_LOCK **)v6 + 543));
  memset(v15, 0, sizeof(v15));
  PushThreadGuardedObject(
    v15,
    v15,
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  v16 = 0LL;
  v17 = 0;
  if ( a1 && (v9 = Gre::Base::Globals(v8), LOBYTE(v10) = 18, v11 = HmgLock(v9, a1, v10, 0LL), (v16 = v11) != 0) )
  {
    v12 = (struct W32_PUSH_LOCK *)(v11 + 256);
    if ( v11 != -256 )
    {
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 256));
      v11 = v16;
    }
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v11 + 244), 2),
      a2,
      v18.Token.Flip.FenceValue,
      v18.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v16 + 244), 2) )
    {
      v13 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(*((_QWORD *)v6 + 543) + 8LL), &v18);
      if ( !v13 )
        SfmSignalTokenEvent();
    }
    else
    {
      v13 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v16 + 216), &v18);
    }
    if ( v12 )
      GreReleasePushLockExclusive(v12);
  }
  else
  {
    v13 = -1073741816;
  }
  SFMLOGICALSURFACEREF_vDestructor((__int64)v15);
  PopThreadGuardedObject(v15);
  if ( v7 )
    GreReleasePushLockExclusive(v7);
  return v13;
}
