/*
 * XREFs of ObReferenceSecurityDescriptor @ 0x1404C26DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObReferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), a2);
  if ( result <= 0 )
    __fastfail(0xEu);
  return result;
}
