/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0003260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetAutonomousMode(_QWORD *a1, int a2)
{
  __int64 v2; // rax

  v2 = a1[13];
  if ( *(_BYTE *)(*a1 + 66LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 68LL), v2 + 188, a2 != 0);
  else
    return WriteGenAddr(v2 + 188, a2 != 0);
}
