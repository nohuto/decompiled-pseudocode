/*
 * XREFs of xxxKELocaleProcs @ 0x1C004A420
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C022A244 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C022A2C4 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 */

__int64 __fastcall xxxKELocaleProcs(struct tagKE *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = gpKbdTbl;
  if ( (*(_DWORD *)(gpKbdTbl + 80LL) & 1) != 0 || gbAltGrDown )
  {
    xxxAltGr(a1);
    v1 = gpKbdTbl;
  }
  if ( (gdwKeyboardAttributes & 2) == 0 && (*(_DWORD *)(*(_QWORD *)v1 + 80LL) & 2) == 0 )
    return 1LL;
  result = xxxShiftLock(a1);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
