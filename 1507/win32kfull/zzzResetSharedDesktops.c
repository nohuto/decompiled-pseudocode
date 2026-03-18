/*
 * XREFs of zzzResetSharedDesktops @ 0x1C003DE30
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, int a2, int a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  _DWORD *v8; // r9
  HRGN EmptyRgn; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h]

  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL); i; i = *(_QWORD *)(i + 16) )
  {
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 112LL) = *(_OWORD *)(gpDispInfo + 104LL);
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 128LL) = *(_OWORD *)(gpDispInfo + 104LL);
  }
  EmptyRgn = (HRGN)CreateEmptyRgn();
  CalcVisRgn(&EmptyRgn);
  GreLockVisRgn(*gpDispInfo);
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 24LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*gpDispInfo);
  zzzUpdateWindowsAfterModeChange(a2);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v7 + 260) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(*(_QWORD *)(v7 + 16), 0LL, 0LL);
  zzzClipCursorEx(0LL, a3);
  v8 = *(_DWORD **)(gpDispInfo + 88LL);
  LODWORD(v11) = (v8[9] - v8[7]) / 2;
  HIDWORD(v11) = (v8[10] - v8[8]) / 2;
  gptSSCursor = v11;
  return zzzInternalSetCursorPos((unsigned int)v11, HIDWORD(v11), 2LL);
}
