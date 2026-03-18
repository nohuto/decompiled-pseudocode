/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C022A2C4
 * Callers:
 *     xxxKELocaleProcs @ 0x1C004A420 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  signed __int16 v2; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 1LL;
  if ( (unsigned __int8)v2 == 20 )
  {
    if ( (gafAsyncKeyState[5] & 2) != 0 )
      return 0LL;
  }
  else if ( ((unsigned __int8)v2 == 16 || (unsigned __int16)((unsigned __int8)v2 - 160) <= 1u)
         && (gafAsyncKeyState[5] & 2) != 0 )
  {
    xxxKeyEvent(v2, *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    xxxKeyEvent(0x14u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    xxxKeyEvent(0x8014u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
    return 0LL;
  }
  return 1LL;
}
