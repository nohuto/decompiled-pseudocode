/*
 * XREFs of _HasCaptionIcon @ 0x1C006F598
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C014223C (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  char v1; // al
  unsigned int v2; // r8d
  __int64 Prop; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdx

  v1 = *(_BYTE *)(a1 + 48);
  if ( v1 < 0 )
    return 0LL;
  v2 = 1;
  if ( (*(_BYTE *)(a1 + 54) & 0xC0) != 0x40 && (v1 & 1) == 0 )
    return v2;
  if ( (*(_BYTE *)(a1 + 45) & 2) == 0 && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == 0x8002 )
    return 0LL;
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  v7 = 0;
  if ( !Prop )
  {
    v8 = GetProp(v6, *(unsigned __int16 *)(gpsi + 1358LL), v5);
    if ( v8 && v8 != *(_QWORD *)(gpsi + 5632LL) )
      return v2;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 152) + 152LL);
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 5624LL)
                            + *((_QWORD *)&gSharedInfo + 1)) )
        return v2;
    }
    return 0LL;
  }
  LOBYTE(v7) = Prop != *(_QWORD *)(gpsi + 5624LL);
  return v7;
}
