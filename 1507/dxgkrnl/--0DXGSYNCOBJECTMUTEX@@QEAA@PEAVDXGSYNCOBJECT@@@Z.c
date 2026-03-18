/*
 * XREFs of ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0002850
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGSYNCOBJECTMUTEX *__fastcall DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
        DXGSYNCOBJECTMUTEX *this,
        struct DXGSYNCOBJECT *a2,
        unsigned __int8 a3)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGSYNCOBJECT *)((char *)a2 + 32), a3);
  return this;
}
