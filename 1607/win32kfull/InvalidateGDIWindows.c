/*
 * XREFs of InvalidateGDIWindows @ 0x1C01DEB20
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     InvalidateGDIWindows @ 0x1C01DEB20 (InvalidateGDIWindows.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x1C01DEB20 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C027A74C (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  int v3; // r8d
  struct EWNDOBJ *v4; // rdi
  int v5; // ecx
  unsigned int v6; // r9d
  __int64 i; // rbx
  HRGN v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp(a1, (unsigned __int16)atomWndObj, 1LL);
    v4 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v5 = *(_DWORD *)(Prop + 184);
      v8 = 0LL;
      if ( (v5 & 0x20) != 0 )
        v6 = v3 | (4 * (*(_BYTE *)(a1 + 55) & 4));
      else
        v6 = 24;
      CalcVisRgn(&v8, a1, (struct tagWND *)a1, v6);
      GreSetClientRgn(v4);
    }
    for ( i = *(_QWORD *)(a1 + 96); i; i = *(_QWORD *)(i + 72) )
      InvalidateGDIWindows(i);
  }
}
