/*
 * XREFs of _lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_ @ 0x1401DAC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

REGHANDLE *lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_()
{
  REGHANDLE *v0; // rbx
  REGHANDLE *result; // rax

  v0 = (REGHANDLE *)&off_1403AA868;
  do
  {
    ((void (*)(void))*v0)();
    result = &W32kControlGuid_Context;
    ++v0;
  }
  while ( v0 != &W32kControlGuid_Context );
  return result;
}
