/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x18004EAF8
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18004DBA0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18004BF34 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18004EA5C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *(_QWORD *)this = &CRenderData::`vftable';
  CRenderData::DestroyRenderData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 160, v2, v3);
  CDataStreamWriter::FreeResources((CRenderData *)((char *)this + 112));
  CResource::~CResource(this);
}
