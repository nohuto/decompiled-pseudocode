/*
 * XREFs of _set_errno_from_matherr @ 0x140176530
 * Callers:
 *     _call_matherr @ 0x140175C44 (_call_matherr.c)
 *     _handle_error @ 0x140175D68 (_handle_error.c)
 *     _handle_errorf @ 0x140175E90 (_handle_errorf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall set_errno_from_matherr(int a1)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    gbl_errno = 33;
  }
  else
  {
    result = (unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
      gbl_errno = 34;
  }
  return result;
}
