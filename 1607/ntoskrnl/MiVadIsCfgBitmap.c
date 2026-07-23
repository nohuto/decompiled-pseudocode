/*
 * XREFs of MiVadIsCfgBitmap @ 0x1404D6AAC
 * Callers:
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // edx
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(qword_140327FD0 + 276840680); *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
