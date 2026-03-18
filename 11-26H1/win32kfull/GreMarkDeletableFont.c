/*
 * XREFs of GreMarkDeletableFont @ 0x14010FAD4
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1400CE68C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     DeleteMetricsFont @ 0x14010FB44 (DeleteMetricsFont.c)
 *     CreateFontFromUserProfile @ 0x140123A40 (CreateFontFromUserProfile.c)
 *     UserSetFont @ 0x1401249BC (UserSetFont.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  Gre::Base *v3; // rcx
  struct LFONT *v4; // rbx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  struct LFONT *v7; // [rsp+28h] [rbp-10h]

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, a1, 0LL);
  if ( v6 && (*(_DWORD *)(v6 + 4) & 2) == 0 )
  {
    LOBYTE(v2) = 10;
    HmgMarkDeletable(a1, v2);
  }
  v4 = v7;
  if ( v7 )
  {
    v5 = Gre::Base::Globals(v3);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5, v4);
  }
}
