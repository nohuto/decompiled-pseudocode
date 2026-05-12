/*
 * XREFs of RaidAdapterEffectiveMaxOperationalPower @ 0x1C00306E4
 * Callers:
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidAdapterEffectiveMaxOperationalPower(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx
  __int64 v3; // r8

  result = -1LL;
  v2 = (unsigned __int64 *)(a1 + 48);
  v3 = 3LL;
  do
  {
    if ( *v2 < result )
      result = *v2;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
