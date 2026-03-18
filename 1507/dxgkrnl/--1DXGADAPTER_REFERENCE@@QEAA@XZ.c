/*
 * XREFs of ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00209B4
 * Callers:
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplPresent @ 0x1C01563D4 (OutputDuplPresent.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2);
  *this = 0LL;
}
