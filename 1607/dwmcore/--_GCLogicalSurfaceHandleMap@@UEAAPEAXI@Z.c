/*
 * XREFs of ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x18011B890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CLogicalSurfaceHandleMap@@UEAA@XZ @ 0x18011B674 (--1CLogicalSurfaceHandleMap@@UEAA@XZ.c)
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
