/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagMENUSTATE *v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 528LL);
  if ( v6 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v6 + 8LL) && (*(_DWORD *)(v6 + 8) & 0x100) == 0 )
    {
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        (MenuStateOwnerLockxxxUnlock *)&v10,
        (struct tagMENUSTATE *)v6);
      xxxEndMenu(v7);
      if ( v10 )
        xxxUnlockMenuStateInternal(v10, 0);
    }
  }
  if ( v5 == a1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
    if ( v8 && *(_QWORD *)(v8 + 48) )
      xxxEndScroll(a1);
    v9 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 180) |= 8u;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000u;
      zzzClipCursorEx(0LL, 0LL, a3, a4);
    }
    xxxReleaseCapture();
  }
}
