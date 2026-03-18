/*
 * XREFs of SbGetProcessSwitchContext @ 0x1401BD330
 * Callers:
 *     SetManifestWinVer @ 0x1401BD1E0 (SetManifestWinVer.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

_DWORD *__fastcall SbGetProcessSwitchContext(_DWORD *a1)
{
  _DWORD *v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    ProbeForRead(a1, 0x11D8uLL, 4u);
    v1 = a1 + 504;
    if ( a1 == (_DWORD *)-2016LL )
      return 0LL;
    if ( !((unsigned __int8)MmIsUserAddress(a1 + 504) ? RtlReadULongFromUser(a1 + 516) : a1[516]) )
      return 0LL;
  }
  return v1;
}
