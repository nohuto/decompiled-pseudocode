/*
 * XREFs of CpcSetEnergyPerfPreference @ 0x1C00031C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetEnergyPerfPreference(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = a1[13];
  v3 = 255 * a2 / 0x64u;
  if ( *(_BYTE *)(*a1 + 66LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 68LL), v2 + 212, v3);
  else
    return WriteGenAddr(v2 + 212, v3);
}
