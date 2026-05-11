/*
 * XREFs of _set_errno_from_matherr @ 0x1C0006F2C
 * Callers:
 *     _call_matherr @ 0x1C00068A0 (_call_matherr.c)
 *     _handle_error @ 0x1C00069C4 (_handle_error.c)
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
