/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180168A70
 * Callers:
 *     ??$RunForAllAxes@V_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@CChainingHelper@@AEAAXAEBV_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@Z @ 0x18016867C (--$RunForAllAxes@V_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 *     ??$RunForAllAxes@V_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@CChainingHelper@@AEAAXAEBV_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@Z @ 0x180168704 (--$RunForAllAxes@V_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 *     ??$RunForAllAxes@V_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@CChainingHelper@@AEAAXAEBV_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@Z @ 0x180168790 (--$RunForAllAxes@V_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigurationAxis(int a1)
{
  int v1; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 1LL;
    if ( v1 == 1 )
      return 2LL;
  }
  return 0LL;
}
