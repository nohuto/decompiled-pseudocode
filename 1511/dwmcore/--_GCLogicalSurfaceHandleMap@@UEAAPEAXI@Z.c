/*
 * XREFs of ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x180105340
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CLogicalSurfaceHandleMap@@UEAA@XZ @ 0x1801050F8 (--1CLogicalSurfaceHandleMap@@UEAA@XZ.c)
 */

CLogicalSurfaceHandleMap *__fastcall CLogicalSurfaceHandleMap::`scalar deleting destructor'(
        CLogicalSurfaceHandleMap *this,
        char a2)
{
  CLogicalSurfaceHandleMap::~CLogicalSurfaceHandleMap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLogicalSurfaceHandleMap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
