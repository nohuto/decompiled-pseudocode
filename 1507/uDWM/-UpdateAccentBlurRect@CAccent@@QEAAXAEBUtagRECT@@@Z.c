/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800024C4
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x1800022B0 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x1800358B0 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x1800393C4 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall CAccent::UpdateAccentBlurRect(CAccent *this, const struct tagRECT *a2)
{
  struct CResource *v3; // rbx
  const struct tagRECT *v4; // rcx
  int v5; // eax
  struct CResource *v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( IsRectEmpty(a2) )
    goto LABEL_4;
  v5 = ResourceHelper::CreateRectangleGeometry(v4, &v6);
  if ( v5 >= 0 )
  {
    v3 = v6;
LABEL_4:
    CAccent::SetClipRegion(this, v3);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x306u);
  v3 = v6;
LABEL_5:
  if ( v3 )
    CBaseObject::Release(v3);
}
