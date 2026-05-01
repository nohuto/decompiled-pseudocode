/*
 * XREFs of RmpPolicyFilterActivityHostWithFlags @ 0x180002E80
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostIsRevocable @ 0x180014E34 (RmpActivityHostIsRevocable.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(__int64 a1, char a2)
{
  char v2; // r11

  v2 = a2;
  return ((a2 & 1) == 0 || (unsigned int)RmpActivityHostIsRevocable())
      && ((a2 & 2) == 0 || *(_DWORD *)(a1 + 656))
      && ((a2 & 4) == 0 || !(unsigned __int8)RmpActivityHostHasPpleResourceSet())
      && ((v2 & 8) == 0 || (unsigned __int8)RmpPolicyActivityHostIsValidEmptyTarget(a1));
}
