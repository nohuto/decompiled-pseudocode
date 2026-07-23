/*
 * XREFs of IopDisableCrashDump @ 0x140143694
 * Callers:
 *     IoConfigureCrashDump @ 0x140143410 (IoConfigureCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140328A28 && CrashdmpInitialized )
  {
    result = qword_140328A28();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
