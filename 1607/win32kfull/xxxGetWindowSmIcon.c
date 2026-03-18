/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C00AB130
 * Callers:
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(struct tagWND *a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  unsigned __int64 WindowSmIcon; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 19);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  v9 = Prop;
  if ( !Prop || (LOBYTE(v6) = 3, (result = HMValidateHandleNoSecure(Prop, v6, v7, v8)) == 0) )
  {
    result = *(_QWORD *)(v3 + 152);
    if ( !result )
    {
      if ( (*((_BYTE *)a1 + 45) & 2) != 0 || (*((_BYTE *)a1 + 44) & 8) != 0 && (*((_BYTE *)a1 + 48) & 0x40) != 0 || a2 )
        return qword_1C0321A08;
      if ( xxxSendTransformableMessageTimeout(a1, 55LL, 0LL, 0LL, 0, 100, (__int64 *)&BugCheckParameter3, 1, 0) )
        v9 = BugCheckParameter3;
      if ( !v9 )
        return qword_1C0321A08;
      WindowSmIcon = xxxCreateWindowSmIcon(a1, v9, 0LL);
      LOBYTE(v12) = 3;
      result = HMValidateHandleNoSecure(WindowSmIcon, v12, v13, v14);
      if ( !result )
        return qword_1C0321A08;
    }
  }
  return result;
}
