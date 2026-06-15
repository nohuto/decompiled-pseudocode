/*
 * XREFs of ?Release@CMonitorManager@@UEAAKXZ @ 0x180097C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CMonitorManager@@IEAA@XZ @ 0x18009466C (--1CMonitorManager@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::Release(CMonitorManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::~CMonitorManager(this);
    operator delete(this);
  }
  return v2;
}
