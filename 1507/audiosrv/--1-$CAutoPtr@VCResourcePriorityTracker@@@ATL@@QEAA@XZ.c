/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180068198
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$3 @ 0x18004744D (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x1800474FC (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x1800680FC (--_GCResourcePriorityTracker@@QEAAPEAXI@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  struct _RTL_CRITICAL_SECTION *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CResourcePriorityTracker::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
