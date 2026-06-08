/*
 * XREFs of CpcSetTimeWindow @ 0x1C00032A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetTimeWindow(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1[13];
  if ( *(_BYTE *)(*a1 + 66LL) )
    return WriteGenAddrHidden(*(unsigned int *)(*a1 + 68LL), v2 + 116, a2);
  else
    return WriteGenAddr(v2 + 116, a2);
}
