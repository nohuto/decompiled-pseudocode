/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C00223E0
 * Callers:
 *     ?DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z @ 0x1C000F21C (-DiagonalDpi@DpiInternal@@YAIUtagSIZE@@0PEAI1@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00223A4 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
  *(_QWORD *)(v4 + 24) = 54LL;
  WdLogEvent5_WdAssertion(v4);
  return 0LL;
}
