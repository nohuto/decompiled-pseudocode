/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850
 * Callers:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetTextFaceW @ 0x1C002FB84 (GreGetTextFaceW.c)
 *     cjCopyFontDataW @ 0x1C0030450 (cjCopyFontDataW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0038848 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00DD3C4 (GreGetCharSet.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00F4410 (NtGdiQueryFontAssocInfo.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C010FB9C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C010FEB8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C011183C (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C014F794 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027FB10 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029B618 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct PDEVOBJ *a3)
{
  struct HLFONT__ *v3; // rsi
  struct HLFONT__ *v5; // rcx
  __int64 v7; // rax
  __int64 HDEV; // rbx
  int v9; // edi
  __int64 v10; // rdx
  struct PDEVOBJ *v11; // rax
  _QWORD *v12; // rcx
  int v13; // edi
  int v14; // edi
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = 10;
  v7 = HmgShareLock(v5, a2);
  *(_QWORD *)this = v7;
  if ( v7 && (*(_DWORD *)(v7 + 28) & 1) != 0 )
  {
    HDEV = UserGetHDEV();
    v9 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)this);
    *(_QWORD *)this = 0LL;
    v11 = (struct PDEVOBJ *)&v16;
    v16 = HDEV;
    if ( a3 )
      v11 = a3;
    v12 = *(_QWORD **)v11;
    if ( *(_QWORD *)v11 )
    {
      v13 = v9 - 4;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            v3 = (struct HLFONT__ *)v12[185];
        }
        else
        {
          v3 = (struct HLFONT__ *)v12[184];
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)v12[183];
      }
      LOBYTE(v10) = 10;
      *(_QWORD *)this = HmgShareLock(v3, v10);
    }
  }
  return this;
}
