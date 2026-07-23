/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x1400B37D8
 * Callers:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rbx
  KIRQL v4; // si
  __int64 v5; // rdi
  __int64 **v6; // rax
  _DWORD *v7; // rax
  struct _KEVENT *v8; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = (__int64 *)PnpEnumerationRequestList;
  v4 = v2;
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = *v3;
      if ( v3[2] == a1 )
      {
        v6 = (__int64 **)v3[1];
        if ( *(__int64 **)(v5 + 8) != v3 || *v6 != v3 )
          __fastfail(3u);
        *v6 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v6;
        v7 = (_DWORD *)v3[6];
        if ( v7 )
          *v7 = -1073741810;
        v8 = (struct _KEVENT *)v3[5];
        if ( v8 )
          KeSetEvent(v8, 0, 0);
        ObfDereferenceObjectWithTag((PVOID)v3[2], 0x746C6644u);
        ExFreePoolWithTag(v3, 0x32706E50u);
      }
      v3 = (__int64 *)v5;
    }
    while ( (PVOID *)v5 != &PnpEnumerationRequestList );
  }
  KeReleaseSpinLock(&PnpSpinLock, v4);
}
