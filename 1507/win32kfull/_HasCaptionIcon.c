/*
 * XREFs of _HasCaptionIcon @ 0x1C00943D8
 * Callers:
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0093D50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     FindNCHit @ 0x1C00FAEF8 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C010BDD0 (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  char v1; // al
  unsigned int v2; // r8d
  __int64 Prop; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
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
    v8 = GetProp(v5, *(unsigned __int16 *)(gpsi + 1358LL), v6);
    if ( v8 && v8 != *(_QWORD *)(gpsi + 4240LL) )
      return v2;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 152) + 152LL);
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 4232LL)
                            + gSharedInfo[1]) )
        return v2;
    }
    return 0LL;
  }
  LOBYTE(v7) = Prop != *(_QWORD *)(gpsi + 4232LL);
  return v7;
}
