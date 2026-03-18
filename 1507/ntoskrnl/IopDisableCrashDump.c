/*
 * XREFs of IopDisableCrashDump @ 0x14016C180
 * Callers:
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140353BD8 && CrashdmpInitialized )
  {
    result = qword_140353BD8();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
