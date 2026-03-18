/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     xxxCreateWindowSmIcon @ 0x1C007D400 (xxxCreateWindowSmIcon.c)
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  __int64 v6; // r10
  HICON Prop; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  HICON v10; // rdi
  int v11; // r8d
  HICON v12; // rbp
  int v13; // r15d
  int v14; // esi
  __int64 v15; // rax

  if ( a2 > 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0LL;
  }
  Prop = (HICON)GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  v10 = (HICON)GetProp(v8, *(unsigned __int16 *)(v6 + 1356), v9);
  v12 = Prop;
  if ( !a2 )
    v12 = v10;
  if ( v12 != a3 )
  {
    v13 = 0;
    v14 = v11;
    v15 = HMValidateHandleNoRip((__int64)v10, 3);
    if ( v15 && (*(_DWORD *)(v15 + 80) & 0x80u) != 0 )
    {
      v13 = v14;
      DestroyCursor((struct tagCURSOR *)v15);
    }
    if ( a2 )
    {
      if ( v13 )
      {
        v10 = 0LL;
      }
      else if ( v10 )
      {
        v14 = 0;
      }
      Prop = a3;
    }
    else
    {
      v10 = a3;
      if ( v13 )
        v12 = 0LL;
    }
    InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), Prop, 5LL);
    InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), v10, 5LL);
    if ( Prop && !v10 )
      xxxCreateWindowSmIcon(a1, (__int64)Prop, 1);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
    if ( v14 )
      xxxRedrawTitle(a1, 0x200Cu);
  }
  return v12;
}
