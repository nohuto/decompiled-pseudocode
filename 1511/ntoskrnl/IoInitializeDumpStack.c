/*
 * XREFs of IoInitializeDumpStack @ 0x140119DBC
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x1403A2150 (PopRestoreHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140305E48 )
      return qword_140305E48(a1, 0LL);
  }
  return result;
}
