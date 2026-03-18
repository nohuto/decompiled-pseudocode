/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxClientEndScroll @ 0x14025BB48 (xxxClientEndScroll.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rsi
  struct tagWND *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  Scrollbar::NonClient *v6; // rcx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rcx
  __int64 v9; // rax
  __int64 UserSessionState; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v3 = *(struct tagWND **)(*((_QWORD *)v2 + 58) + 112LL);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 640LL);
  if ( v4 && a1 == *(struct tagWND **)(*(_QWORD *)v4 + 8LL) && (*(_DWORD *)(v4 + 8) & 0x100) == 0 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      (struct tagTHREADINFO **)v4);
    xxxEndMenu(v4);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v11);
  }
  if ( v3 == a1 )
  {
    if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
      && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v6, v5) )
    {
      v8 = PtiCurrent(v7);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v8 + 130, 0, 0) & 1) == 0 )
        xxxClientEndScroll(*(_QWORD *)a1);
    }
    else
    {
      v8 = *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 2) + 744LL);
      if ( v8 && *((_QWORD *)v8 + 6) )
        xxxEndScroll(a1);
    }
    v9 = *((_QWORD *)v2 + 88);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 200) |= 8u;
      _InterlockedAnd((volatile signed __int32 *)v2 + 130, 0xFFFF7FFF);
      UserSessionState = W32GetUserSessionState(v8, v5);
      CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36272));
    }
    xxxReleaseCapture((__int64)v8);
  }
}
