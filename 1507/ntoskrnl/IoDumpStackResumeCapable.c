/*
 * XREFs of IoDumpStackResumeCapable @ 0x14014ECE4
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140353BF8 )
      return qword_140353BF8();
  }
  return result;
}
