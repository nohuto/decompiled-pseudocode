/*
 * XREFs of IoDumpStackResumeCapable @ 0x14011388C
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140328A48 )
      return qword_140328A48();
  }
  return result;
}
