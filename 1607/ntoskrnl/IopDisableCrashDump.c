/*
 * XREFs of IopDisableCrashDump @ 0x140143124
 * Callers:
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_1403289E8 && CrashdmpInitialized )
  {
    result = qword_1403289E8();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
