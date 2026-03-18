/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C00A72F8
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C000C690 (DWP_GetEnabledPopup.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C00A72B0 (NtUserGhostWindowFromHungWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     _VisrgnFromWindow @ 0x1C01DE630 (_VisrgnFromWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  unsigned __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v11; // rax

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
      Prop = GetProp(v9, *(unsigned __int16 *)(gpsi + 1362LL), v7);
    }
    if ( Prop )
    {
      LOBYTE(v6) = v7;
      v11 = HMValidateHandleNoSecure(Prop, v6, v7, v8);
      v2 = v11;
      if ( v11 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v11) )
          return 0LL;
      }
    }
  }
  return v2;
}
