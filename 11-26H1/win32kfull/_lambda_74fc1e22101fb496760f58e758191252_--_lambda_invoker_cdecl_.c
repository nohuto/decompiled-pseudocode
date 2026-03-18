/*
 * XREFs of _lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_ @ 0x14029D3C0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

struct tagWND *__fastcall lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)ValidateHwnd(a1);
  if ( result )
    return (struct tagWND *)SetOrClrWF(0, result, 0x210u, 1);
  return result;
}
