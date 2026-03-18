/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C00F41C4
 * Callers:
 *     GetMonitorMaxArea @ 0x1C00F40D4 (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C014D250 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rcx
  unsigned __int64 Prop; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // rax

  v1 = 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    if ( Prop || (Prop = GetProp(v6, *(unsigned __int16 *)(gpsi + 1362LL), v5)) != 0 )
    {
      v7 = HMValidateHandleNoSecure(Prop, v5);
      v1 = v7;
      if ( v7 && (unsigned int)IsWindowBeingDestroyed(v7) )
        return 0LL;
    }
  }
  return v1;
}
