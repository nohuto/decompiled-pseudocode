/*
 * XREFs of VerifierIofCallDriver @ 0x14070C954
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierIofCallDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  if ( pXdvIofCallDriver )
    return pXdvIofCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1, a2, retaddr);
}
