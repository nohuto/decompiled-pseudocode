/*
 * XREFs of DestroyWindowSmIcon @ 0x140094E54
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x140209D50 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(a2) = 3;
  v4 = HMValidateHandleNoRip(v3, a2);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = 0LL;
  _DestroyCursor(v5, 0LL);
  return 1LL;
}
