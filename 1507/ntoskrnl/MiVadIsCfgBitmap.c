/*
 * XREFs of MiVadIsCfgBitmap @ 0x1404B1E5C
 * Callers:
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // edx
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)0xFFFFF58010804278LL; *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
