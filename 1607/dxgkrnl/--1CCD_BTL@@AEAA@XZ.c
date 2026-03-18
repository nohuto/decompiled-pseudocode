/*
 * XREFs of ??1CCD_BTL@@AEAA@XZ @ 0x1C01AC264
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00B94A4 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  CCD_BTL::CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 88));
  CCD_TOPOLOGY::~CCD_TOPOLOGY(this);
}
