/*
 * XREFs of ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C0259480
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C0258540 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::Destroy(CPhysicalMonitorHandle *this)
{
  unsigned int v2; // ebx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = CMonitorPDO::Destroy(this);
  CAutoMutex::CAutoMutex((CAutoMutex *)&v4, *((struct CMutex **)this + 1));
  DDCCIFreeMemory(*((void **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v4);
  return v2;
}
