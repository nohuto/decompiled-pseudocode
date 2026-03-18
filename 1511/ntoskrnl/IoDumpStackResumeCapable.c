/*
 * XREFs of IoDumpStackResumeCapable @ 0x140119DE8
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140305E78 )
      return qword_140305E78();
  }
  return result;
}
