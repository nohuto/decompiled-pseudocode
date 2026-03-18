/*
 * XREFs of MiVadIsCfgBitmap @ 0x1403E8974
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // edx
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)0xFFFFF580108042D0LL; *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
