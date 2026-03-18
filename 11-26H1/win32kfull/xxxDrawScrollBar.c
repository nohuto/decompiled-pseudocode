/*
 * XREFs of xxxDrawScrollBar @ 0x1401F0344
 * Callers:
 *     xxxEnableWndSBArrows @ 0x1401EFCBC (xxxEnableWndSBArrows.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // bp
  char v9; // si
  struct tagSBCALC *v10; // rbx
  unsigned int WndSBDisableFlags; // eax
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _BYTE v15[120]; // [rsp+50h] [rbp-78h] BYREF

  memset_0(v15, 0, 0x40uLL);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v13) = v9;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      5);
  }
  if ( v7 && a1 == *(struct tagWND **)(v7 + 8) && a3 == ((*(_DWORD *)v7 >> 1) & 1) )
    v10 = *(struct tagSBCALC **)(v7 + 96);
  else
    v10 = (struct tagSBCALC *)v15;
  CalcSBStuff(a1, (__int64)v10, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64 *)a1, a3);
  xxxDrawSB2(a1, v10, a2, a3, WndSBDisableFlags);
}
