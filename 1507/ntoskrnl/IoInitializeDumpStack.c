/*
 * XREFs of IoInitializeDumpStack @ 0x14014ECB8
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x1403F4F20 (PopRestoreHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140353BC8 )
      return qword_140353BC8(a1, 0LL);
  }
  return result;
}
