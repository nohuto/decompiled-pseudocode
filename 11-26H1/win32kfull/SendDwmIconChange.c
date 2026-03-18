/*
 * XREFs of SendDwmIconChange @ 0x14014DA14
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x140209D50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     DwmAsyncIconChange @ 0x14014D964 (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 */

__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  void *v7; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && GetWindowSmIcon(a1) )
    v4 = *(_QWORD *)GetWindowSmIcon(a1);
  else
    v4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL);
  if ( v9[0] )
    --*(_DWORD *)(v10 + 28);
  v6 = *(_QWORD *)a1;
  v7 = (void *)ReferenceDwmApiPort(v3, v2);
  return DwmAsyncIconChange(v7, v6, v4, v5);
}
