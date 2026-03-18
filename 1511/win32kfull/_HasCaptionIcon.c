/*
 * XREFs of _HasCaptionIcon @ 0x1C00711D8
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0138088 (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
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
    if ( v8 && v8 != *(_QWORD *)(gpsi + 4240LL) )
      return v2;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 152) + 152LL);
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 4232LL)
                            + *((_QWORD *)&gSharedInfo + 1)) )
        return v2;
    }
    return 0LL;
  }
  LOBYTE(v7) = Prop != *(_QWORD *)(gpsi + 4232LL);
  return v7;
}
