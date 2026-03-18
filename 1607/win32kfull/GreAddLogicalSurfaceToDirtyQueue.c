/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0063AB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0051874 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(HLSURF a1, ULONG a2, UINT_PTR a3)
{
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v11; // [rsp+60h] [rbp-A0h] BYREF

  v11.Token.GdiSysMem.dwDirtyFlags = a2;
  v11.Token.Flip.FenceValue = (UINT64)a1;
  v11.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v11.Token.Flip.dxgContext = a3;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v8, (struct SfmState *)((char *)gpSfmState + 32));
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v9, a1);
  if ( v10 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, (struct _EX_PUSH_LOCK *)(v10 + 264));
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
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  }
  else
  {
    v5 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v9);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  return v5;
}
