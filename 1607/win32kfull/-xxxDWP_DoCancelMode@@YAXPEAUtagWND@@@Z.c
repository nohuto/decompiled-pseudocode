/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C012B8C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1)
{
  struct tagWND *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagMENUSTATE *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 528LL);
  if ( v3 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v3 + 8LL) && (*(_DWORD *)(v3 + 8) & 0x100) == 0 )
    {
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        (MenuStateOwnerLockxxxUnlock *)&v7,
        (struct tagMENUSTATE *)v3);
      xxxEndMenu(v4);
      if ( v7 )
        xxxUnlockMenuStateInternal(v7, 0);
    }
  }
  if ( v2 == a1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
    if ( v5 && *(_QWORD *)(v5 + 48) )
      xxxEndScroll(a1);
    v6 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 180) |= 8u;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000u;
      zzzClipCursorEx(0LL, 0);
    }
    xxxReleaseCapture();
  }
}
