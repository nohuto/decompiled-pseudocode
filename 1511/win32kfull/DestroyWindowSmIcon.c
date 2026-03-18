/*
 * XREFs of DestroyWindowSmIcon @ 0x1C00F9404
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyWindowSmIcon(_DWORD *a1)
{
  __int64 Prop; // rax
  __int64 v4; // rax
  __int64 v5; // rbx

  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  if ( !Prop )
    return 0LL;
  v4 = HMValidateHandleNoRip(Prop, 3);
  v5 = v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  InternalRemoveProp((__int64)a1, *(_WORD *)(gpsi + 1356LL), 1);
  DestroyCursor(v5, 0LL);
  return 1LL;
}
