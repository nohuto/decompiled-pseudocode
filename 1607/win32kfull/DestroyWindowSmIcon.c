/*
 * XREFs of DestroyWindowSmIcon @ 0x1C008E0D8
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0224590 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // rax
  struct tagCURSOR *v7; // rbx

  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  if ( !Prop )
    return 0LL;
  LOBYTE(v3) = 3;
  v6 = HMValidateHandleNoRip(Prop, v3, v4);
  v7 = (struct tagCURSOR *)v6;
  if ( !v6 || (*(_DWORD *)(v6 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0LL, a1, 1824LL, 1LL);
  InternalRemoveProp();
  DestroyCursor(v7);
  return 1LL;
}
