/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00D8AA0
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  __int64 v5; // rbx
  __int64 i; // r9
  __int64 v7; // rcx
  _DWORD *v8; // r9
  HRGN EmptyRgn; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL); i; i = *(_QWORD *)(i + 16) )
  {
    a3 = gpDispInfo;
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 112LL) = *(_OWORD *)(gpDispInfo + 104LL);
    a2 = gpDispInfo;
    a1 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(gpDispInfo + 104LL);
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3, i);
  CalcVisRgn(&EmptyRgn, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 16LL), 1u);
  GreLockVisRgn(*gpDispInfo);
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 24LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*gpDispInfo);
  zzzUpdateWindowsAfterModeChange(v4);
  v7 = *(_QWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v7 + 244) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(*(_QWORD *)(v7 + 16), 0, 0LL);
  zzzClipCursorEx(0LL, v3);
  v8 = *(_DWORD **)(gpDispInfo + 88LL);
  LODWORD(v11) = (v8[9] - v8[7]) / 2;
  HIDWORD(v11) = (v8[10] - v8[8]) / 2;
  *(_QWORD *)gptSSCursor = v11;
  return zzzInternalSetCursorPos((unsigned int)v11, HIDWORD(v11), 2LL);
}
