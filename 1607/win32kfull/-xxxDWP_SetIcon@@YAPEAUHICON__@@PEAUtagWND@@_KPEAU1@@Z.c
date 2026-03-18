/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  __int64 v6; // r10
  HICON Prop; // r12
  __int64 v8; // r8
  __int64 v9; // rdx
  HICON v10; // rdi
  __int64 v11; // r8
  HICON v12; // rbp
  int v13; // r15d
  int v14; // esi
  __int64 v15; // rax

  if ( a2 > 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0LL;
  }
  Prop = (HICON)GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  v10 = (HICON)GetProp((__int64)a1, *(unsigned __int16 *)(v6 + 1356), v8);
  v12 = Prop;
  if ( !a2 )
    v12 = v10;
  if ( v12 != a3 )
  {
    LOBYTE(v9) = 3;
    v13 = 0;
    v14 = v11;
    v15 = HMValidateHandleNoRip(v10, v9, v11);
    if ( v15 && (*(_DWORD *)(v15 + 80) & 0x80u) != 0 )
    {
      v13 = v14;
      DestroyCursor((struct tagCURSOR *)v15, 0LL);
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
    InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1358LL), (__int64)Prop, 5);
    InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), (__int64)v10, 5);
    if ( Prop && !v10 )
      xxxCreateWindowSmIcon(a1, Prop, 1LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
    if ( v14 )
      xxxRedrawTitle(a1, 0x200Cu);
  }
  return v12;
}
