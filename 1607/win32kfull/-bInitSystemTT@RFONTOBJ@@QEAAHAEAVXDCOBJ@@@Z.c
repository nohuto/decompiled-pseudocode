/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A060
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0009500 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  BOOL v6; // ebx
  struct PFE *v7; // r8
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+44h] [rbp-14h]
  int v13; // [rsp+4Ch] [rbp-Ch]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v9 = 0;
  v14 = 0LL;
  v6 = *(_DWORD *)(v2 + 852) != 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v9, a2);
  v7 = *(&gappfeSystemDBCS + v6);
  if ( !v7 )
    v7 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v14, a2, v7, (struct _EUDCLOGFONT *)&v9);
  if ( v14 )
    *(_QWORD *)(*(_QWORD *)this + 728LL) = v14;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 728LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  return v3;
}
