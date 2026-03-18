/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C00873C0
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C0008050 (DWP_GetEnabledPopup.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C0086210 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C01E7970 (_VisrgnFromWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int16 v2; // dx
  unsigned __int64 Prop; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v8; // rax

  v1 = 0LL;
  v2 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != v2 )
  {
    Prop = GetProp(a1, v2, 1LL);
    if ( Prop )
    {
      if ( Prop == -1LL )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(v4, *(unsigned __int16 *)(v6 + 1362), v5);
    }
    if ( Prop )
    {
      v8 = HMValidateHandleNoSecure(Prop, v5);
      v1 = v8;
      if ( v8 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v8) )
          return 0LL;
      }
    }
  }
  return v1;
}
