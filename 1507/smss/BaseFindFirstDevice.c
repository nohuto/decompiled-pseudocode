/*
 * XREFs of BaseFindFirstDevice @ 0x1400150DC
 * Callers:
 *     FindFirstFileExW @ 0x1400152E0 (FindFirstFileExW.c)
 * Callees:
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

__int64 __fastcall BaseFindFirstDevice(const void **a1, _WORD *a2)
{
  size_t v4; // r8

  memset_0(a2, 0, 0x250uLL);
  v4 = 520LL;
  *(_DWORD *)a2 = 32;
  if ( *(_WORD *)a1 < 0x208u )
    v4 = *(unsigned __int16 *)a1;
  memmove(a2 + 22, a1[1], v4);
  a2[281] = 0;
  return 1LL;
}
