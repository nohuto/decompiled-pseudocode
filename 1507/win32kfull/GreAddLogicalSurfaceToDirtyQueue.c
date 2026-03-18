/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(UINT64 a1, ULONG a2, UINT_PTR a3)
{
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v11; // [rsp+60h] [rbp-A0h] BYREF

  v11.Token.GdiSysMem.dwDirtyFlags = a2;
  v11.Token.Flip.FenceValue = a1;
  v11.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v11.Token.Flip.dxgContext = a3;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, (struct SfmState *)((char *)gpSfmState + 32));
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v9, a1);
  if ( v10 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v8, (struct _EX_PUSH_LOCK *)(v10 + 264));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v10 + 248), 2),
      a2,
      v11.Token.Flip.FenceValue,
      v11.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v10 + 248), 2) )
    {
      v5 = SfmTokenArray::AddNotificationToken(gpSfmState, &v11);
      if ( !v5 )
        SfmSignalTokenEvent();
    }
    else
    {
      v5 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v10 + 224), &v11);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  }
  else
  {
    v5 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v9);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  return v5;
}
