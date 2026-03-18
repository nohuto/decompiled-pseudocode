/*
 * XREFs of ??1CCD_BTL@@AEAA@XZ @ 0x1C017EC1C
 * Callers:
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00625E8 (-Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  CCD_BTL::CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 88));
  CCD_TOPOLOGY::~CCD_TOPOLOGY(this);
}
