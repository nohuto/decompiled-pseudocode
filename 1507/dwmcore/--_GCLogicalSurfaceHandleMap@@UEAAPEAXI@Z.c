/*
 * XREFs of ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x1800E93E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CLogicalSurfaceHandleMap@@UEAA@XZ @ 0x1800E91AC (--1CLogicalSurfaceHandleMap@@UEAA@XZ.c)
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
