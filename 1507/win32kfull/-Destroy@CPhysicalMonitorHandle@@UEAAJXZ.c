/*
 * XREFs of ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C025C360
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C025B400 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 * Callees:
 *     operator_delete @ 0x1C0132128 (operator_delete.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::Destroy(CPhysicalMonitorHandle *this)
{
  unsigned int v2; // ebx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = CMonitorPDO::Destroy(this);
  CAutoMutex::CAutoMutex((CAutoMutex *)&v4, *((struct CMutex **)this + 1));
  operator_delete(*((void **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v4);
  return v2;
}
