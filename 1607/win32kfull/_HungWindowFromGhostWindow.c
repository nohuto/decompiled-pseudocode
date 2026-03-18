/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C01154F8
 * Callers:
 *     GetMonitorMaxArea @ 0x1C01153F0 (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C0152130 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rcx
  unsigned __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // rax

  v1 = 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    if ( Prop || (Prop = GetProp(v8, *(unsigned __int16 *)(gpsi + 1362LL), v6)) != 0 )
    {
      LOBYTE(v5) = v6;
      v9 = HMValidateHandleNoSecure(Prop, v5, v6, v7);
      v1 = v9;
      if ( v9 && (unsigned int)IsWindowBeingDestroyed(v9) )
        return 0LL;
    }
  }
  return v1;
}
