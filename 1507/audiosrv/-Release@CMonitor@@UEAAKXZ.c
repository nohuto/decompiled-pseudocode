/*
 * XREFs of ?Release@CMonitor@@UEAAKXZ @ 0x18009BD10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1800989E0 (--1CMonitor@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitor::Release(CMonitor *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitor::~CMonitor(this);
    operator delete(this);
  }
  return v2;
}
