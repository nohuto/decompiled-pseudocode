/*
 * XREFs of xxxDrawMenuBar @ 0x14023A2F8
 * Callers:
 *     NtUserDrawMenuBar @ 0x14023A250 (NtUserDrawMenuBar.c)
 * Callees:
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxDrawMenuBar(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
