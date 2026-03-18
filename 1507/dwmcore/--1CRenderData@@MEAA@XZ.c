/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x18004F448
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18004E680 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18004F3DC (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004F7F0 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CRenderData::~CRenderData(void **this)
{
  *this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData((CRenderData *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 11);
  CDataStreamWriter::FreeResources((CDataStreamWriter *)(this + 5));
  CResource::~CResource((CResource *)this);
}
