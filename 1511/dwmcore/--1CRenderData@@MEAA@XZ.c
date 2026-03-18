/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x18009ECA8
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18009E5A0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009EC3C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800A0190 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CRenderData::~CRenderData(void **this)
{
  *this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData((CRenderData *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 11);
  CDataStreamWriter::FreeResources((CDataStreamWriter *)(this + 5));
  CResource::~CResource((CResource *)this);
}
