/*
 * XREFs of ?Release@CMonitorManager@@UEAAKXZ @ 0x18007E420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorManager@@IEAAPEAXI@Z @ 0x18007B068 (--_GCMonitorManager@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CMonitorManager::Release(CMonitorManager *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    CMonitorManager::`scalar deleting destructor'(this);
  return v1;
}
