/*
 * XREFs of ??_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000CD7C
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00A2E70 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00A2F30 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DXGPROCESS_ADAPTER_INFO *__fastcall DXGPROCESS_ADAPTER_INFO::`scalar deleting destructor'(
        DXGPROCESS_ADAPTER_INFO *this)
{
  DXGPROCESS_ADAPTER_INFO *v2; // rcx

  v2 = (DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)this + 1);
  if ( v2 != this )
    operator delete(v2);
  operator delete(this);
  return this;
}
