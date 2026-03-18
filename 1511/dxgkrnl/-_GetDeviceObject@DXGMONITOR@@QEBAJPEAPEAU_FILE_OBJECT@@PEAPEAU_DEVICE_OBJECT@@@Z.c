/*
 * XREFs of ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0007EFC
 * Callers:
 *     MonitorGetDeviceObject @ 0x1C00BC490 (MonitorGetDeviceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetDeviceObject(DXGMONITOR *this, struct _FILE_OBJECT **a2, struct _DEVICE_OBJECT **a3)
{
  void *v6; // rcx
  __int64 v8; // rax

  if ( !a2 || !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = (void *)*((_QWORD *)this + 8);
  if ( !v6 )
    return 3221226021LL;
  ObfReferenceObject(v6);
  *a2 = (struct _FILE_OBJECT *)*((_QWORD *)this + 8);
  *a3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 5);
  return 0LL;
}
