/*
 * XREFs of DestroyWindowSmIcon @ 0x1C0086174
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0150050 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyWindowSmIcon(_DWORD *a1)
{
  __int64 Prop; // rax
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx

  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  if ( !Prop )
    return 0LL;
  v4 = HMValidateHandleNoRip(Prop, 3);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  DestroyCursor(v5);
  return 1LL;
}
