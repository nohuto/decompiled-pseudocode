/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C0085B70
 * Callers:
 *     GetMonitorMaxArea @ 0x1C0085A80 (GetMonitorMaxArea.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C01234B0 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rcx
  unsigned __int64 Prop; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rax

  v1 = 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    if ( Prop || (Prop = GetProp(v5, *(unsigned __int16 *)(v7 + 1362), v6)) != 0 )
    {
      v8 = HMValidateHandleNoSecure(Prop, v6);
      v1 = v8;
      if ( v8 && (unsigned int)IsWindowBeingDestroyed(v8) )
        return 0LL;
    }
  }
  return v1;
}
