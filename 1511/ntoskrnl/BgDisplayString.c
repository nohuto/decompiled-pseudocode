/*
 * XREFs of BgDisplayString @ 0x1406DE244
 * Callers:
 *     BgkDrawText @ 0x1406DE14C (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402D4BB0 & 1) == 0 || (dword_1402D4BB0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_1402D4C30 && qword_1402D4C48 )
  {
    v5 = BgpTxtDisplayString(qword_1402D4C48, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
