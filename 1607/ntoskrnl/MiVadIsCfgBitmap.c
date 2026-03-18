/*
 * XREFs of MiVadIsCfgBitmap @ 0x1404F3B20
 * Callers:
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // edx
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(qword_140327F90 + 276840680); *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
