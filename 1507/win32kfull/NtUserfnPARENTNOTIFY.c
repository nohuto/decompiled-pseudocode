/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C0049A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(int a1, int a2, __int16 a3, int a4, __int64 a5, int a6)
{
  if ( a2 == 528 && a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, 582, a4, a5, a6);
  else
    return NtUserfnEMPTY(a1, a2, a3, a4, a5, a6);
}
