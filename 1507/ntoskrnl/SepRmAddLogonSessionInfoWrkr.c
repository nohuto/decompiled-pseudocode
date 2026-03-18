/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x14053D650
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x14053D66C (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
