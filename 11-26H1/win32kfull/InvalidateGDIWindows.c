/*
 * XREFs of InvalidateGDIWindows @ 0x140296394
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x140296394 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x14031A314 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  struct EWNDOBJ *v5; // rdi
  int v6; // ecx
  int v7; // r9d
  __int64 i; // rbx
  HRGN v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41382), 1u);
    v5 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v6 = *(_DWORD *)(Prop + 184);
      v9 = 0LL;
      if ( (v6 & 0x20) != 0 )
        v7 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 1;
      else
        v7 = 24;
      CalcVisRgn(&v9, a1, a1, v7);
      GreSetClientRgn(v5);
    }
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
