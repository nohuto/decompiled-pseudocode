/*
 * XREFs of NtUserIsTouchWindow @ 0x1C021D0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int *v6; // rdx
  __int64 v7; // rcx
  int Prop; // eax

  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1LL), (Prop & 0x10000) != 0) )
  {
    if ( a2 )
    {
      v6 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v6 = (unsigned int *)W32UserProbeAddress;
      *v6 = *v6;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
