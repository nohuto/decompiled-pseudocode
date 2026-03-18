/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C0028DE4
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0028DA8 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, int a2)
{
  __int64 v2; // rax

  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v2 = WdLogNewEntry5_WdAssertion(this);
  *(_QWORD *)(v2 + 24) = 54LL;
  WdLogEvent5_WdAssertion(v2);
  return 0LL;
}
