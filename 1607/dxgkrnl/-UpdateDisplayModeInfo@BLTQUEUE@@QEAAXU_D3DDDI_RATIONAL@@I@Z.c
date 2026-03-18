/*
 * XREFs of ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C00CF1C0
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEB64 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0185184 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00CF9E0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfo(struct _D3DDDI_RATIONAL *this, struct _D3DDDI_RATIONAL a2, UINT a3)
{
  if ( !a2.Numerator || !a2.Denominator )
    a2 = (struct _D3DDDI_RATIONAL)0x10000003CLL;
  this[52] = a2;
  this[53].Numerator = a3;
  BYTE2(this[50].Numerator) = 1;
  BLTQUEUE::IssueCommand((BLTQUEUE *)this);
}
