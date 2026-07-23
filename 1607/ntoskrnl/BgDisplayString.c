/*
 * XREFs of BgDisplayString @ 0x14072A240
 * Callers:
 *     BgkDrawText @ 0x14072A138 (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E860 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) == 0 || (dword_1402F9F90 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_1402FA030 && qword_1402FA048 )
  {
    v5 = BgpTxtDisplayString(qword_1402FA048, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
