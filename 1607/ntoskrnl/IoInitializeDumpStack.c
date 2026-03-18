/*
 * XREFs of IoInitializeDumpStack @ 0x140113340
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_1403289D8 )
      return qword_1403289D8(a1, 0LL);
  }
  return result;
}
