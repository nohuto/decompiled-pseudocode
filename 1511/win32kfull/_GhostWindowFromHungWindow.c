/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C008D268
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C0009690 (DWP_GetEnabledPopup.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C008D220 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C01E7DE0 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  unsigned __int64 Prop; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v9; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(v3 + 8) != v4 )
  {
    Prop = GetProp(a1, v4, 1LL);
    if ( Prop )
    {
      if ( Prop == -1LL )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(v7, *(unsigned __int16 *)(gpsi + 1362LL), v6);
    }
    if ( Prop )
    {
      v9 = HMValidateHandleNoSecure(Prop, v6);
      v2 = v9;
      if ( v9 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v9) )
          return 0LL;
      }
    }
  }
  return v2;
}
