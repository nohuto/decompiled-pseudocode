/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x1404C8BFC
 * Callers:
 *     <none>
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x1404C8C18 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
