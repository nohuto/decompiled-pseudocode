/*
 * XREFs of zzzResetSharedDesktops @ 0x1C009A600
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 i; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // r9
  HRGN EmptyRgn; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h]

  v4 = a2;
  v5 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL); i; i = *(_QWORD *)(i + 16) )
  {
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 112LL) = *(_OWORD *)(gpDispInfo + 104LL);
    a2 = gpDispInfo;
    a1 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(gpDispInfo + 104LL);
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2);
  CalcVisRgn(&EmptyRgn, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 16LL), 1u);
  GreLockVisRgn(*gpDispInfo);
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 24LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*gpDispInfo);
  zzzUpdateWindowsAfterModeChange(v4, a3);
  v9 = *(_QWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v9 + 244) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(*(_QWORD *)(v9 + 16), 0, 0LL);
  zzzClipCursorEx(0LL, a3, v7, v8);
  v10 = *(_DWORD **)(gpDispInfo + 88LL);
  LODWORD(v13) = (v10[9] - v10[7]) / 2;
  HIDWORD(v13) = (v10[10] - v10[8]) / 2;
  *(_QWORD *)gptSSCursor = v13;
  return zzzInternalSetCursorPos((unsigned int)v13, HIDWORD(v13), 2LL);
}
