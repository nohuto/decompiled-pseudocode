/*
 * XREFs of ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00273C8
 * Callers:
 *     OutputDuplPresent @ 0x1C017F6DC (OutputDuplPresent.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2);
  *this = 0LL;
}
