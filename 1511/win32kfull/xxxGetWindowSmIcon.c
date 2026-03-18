/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C007EE70
 * Callers:
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int64 Prop; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 WindowSmIcon; // rax
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 152);
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  v6 = Prop;
  if ( !Prop || (result = HMValidateHandleNoSecure(Prop, 3)) == 0 )
  {
    result = *(_QWORD *)(v3 + 152);
    if ( !result )
    {
      if ( (*(_BYTE *)(a1 + 45) & 2) != 0 || (*(_BYTE *)(a1 + 44) & 8) != 0 && (*(_BYTE *)(a1 + 48) & 0x40) != 0 || a2 )
        return qword_1C031B908;
      if ( xxxSendTransformableMessageTimeout((struct tagWND *)a1, 55LL, 0LL, 0LL, 0, 100, &v9, 1, 0) )
        v6 = v9;
      if ( !v6 )
        return qword_1C031B908;
      WindowSmIcon = xxxCreateWindowSmIcon(a1, v6, 0LL);
      result = HMValidateHandleNoSecure(WindowSmIcon, 3);
      if ( !result )
        return qword_1C031B908;
    }
  }
  return result;
}
