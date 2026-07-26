/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A69C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A1940 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  __int64 v3; // rdx
  _BYTE v4[32]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-C8h] BYREF
  int v6; // [rsp+58h] [rbp-C0h]

  ndisInitializeNetPnPEvent(v5, v4);
  v6 = 6;
  KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
  ++this->MutexOwnerCount;
  this->MutexOwnerThread = KeGetCurrentThread();
  this->MutexOwner = 987405;
  ndisDeliverNetPnPEventSynchronously((__int64)this, 0LL, (__int64)v5);
  this->MutexOwner = 0;
  if ( this->MutexOwnerCount-- == 1 )
    this->MutexOwnerThread = 0LL;
  KeReleaseMutex(&this->Mutex, 0);
  ndisDereferenceProtocol(this, v3, 0xCu);
}
