/*
 * XREFs of BgDisplayString @ 0x1407612C4
 * Callers:
 *     BgkDrawText @ 0x1407611CC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 1) == 0 || (dword_140323CF0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140323D70 && qword_140323D88 )
  {
    v5 = BgpTxtDisplayString(qword_140323D88, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
