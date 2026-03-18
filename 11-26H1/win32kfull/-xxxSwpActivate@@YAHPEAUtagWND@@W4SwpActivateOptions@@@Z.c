/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1401F8550
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1, char a2)
{
  struct tagTHREADINFO *v4; // rax
  struct tagTHREADINFO *v5; // rdi
  int v7; // edx
  unsigned __int8 v8; // si
  struct tagWND *v9; // rdx
  struct tagWND *v10; // rdx
  __int16 v11; // ax

  v4 = PtiCurrent((__int64)a1);
  v5 = v4;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 0x22u);
    return 0LL;
  }
  if ( *(struct tagWND **)(*((_QWORD *)v4 + 58) + 128LL) == a1 )
    return 0LL;
  v7 = a2 & 2;
  v8 = a2 & 1;
  if ( v8 || v7 )
  {
    v11 = (v8 << 8) | 2;
    if ( !v7 )
      v11 = v8 << 8;
    return (unsigned __int8)xxxActivateWindowWithOptions((__int64)a1, 0, 0, 1, v11);
  }
  else
  {
    if ( !xxxActivateWindowWithOptions((__int64)a1, 0, 0, 1, 0) )
      return 0LL;
    v9 = *(struct tagWND **)(*((_QWORD *)v5 + 58) + 128LL);
    if ( v9 )
      SetOrClrWF(1, v9, 0x101u, 1);
    v10 = *(struct tagWND **)(*((_QWORD *)v5 + 58) + 136LL);
    if ( v10 )
      SetOrClrWF(1, v10, 0x101u, 1);
    return 1LL;
  }
}
