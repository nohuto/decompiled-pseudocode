/*
 * XREFs of VerifierPoCallDriver @ 0x1406C0B18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierPoCallDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return pXdvPoCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1, a2, retaddr);
}
