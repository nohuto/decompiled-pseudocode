/*
 * XREFs of ??1CConnection@@UEAA@XZ @ 0x1800E0DA4
 * Callers:
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x1800E0E30 (--_GCConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1800E0E88 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1800E13F8 (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CConnection::~CConnection(CConnection *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx
  CKernelTransport *v5; // rcx

  *(_QWORD *)this = &CConnection::`vftable'{for `IMilNotificationTransport'};
  *((_QWORD *)this + 1) = &CConnection::`vftable'{for `CMILCOMBase'};
  v3 = (void *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    SetEvent(v3);
    v4 = (void *)*((_QWORD *)this + 24);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  v5 = (CKernelTransport *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    CKernelTransport::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 14) = 0LL;
  }
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  CChannelTable::~CChannelTable((CConnection *)((char *)this + 24));
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
}
