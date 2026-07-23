/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140484AEC
 * Callers:
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PiSwFindPdoAssociation @ 0x1403F0518 (PiSwFindPdoAssociation.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F0958 (PiSwFindChildren.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x140483C74 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140484B98 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
 */

_UNKNOWN **__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  _UNKNOWN **result; // rax
  NTSTRSAFE_PCWSTR *v2; // rbx
  char *v4; // rdx
  _QWORD **Children; // rax
  _QWORD *v6; // rdi
  __int64 SwDevice; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  _QWORD *PdoAssociation; // rax
  struct _DEVICE_OBJECT *v14; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = 0LL;
  if ( a1 )
  {
    result = *(_UNKNOWN ***)(a1 + 312);
    v4 = (char *)result[5];
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    v2 = (NTSTRSAFE_PCWSTR *)(v4 + 40);
  if ( v2[1] )
  {
    PiSwLock();
    Children = (_QWORD **)PiSwFindChildren();
    v6 = Children;
    if ( Children )
    {
      v11 = *Children;
      if ( *Children != Children )
      {
        do
        {
          v12 = (__int64)(v11 - 12);
          v11 = (_QWORD *)*v11;
          PdoAssociation = PiSwFindPdoAssociation(v12, a1, 1);
          if ( PdoAssociation )
          {
            v14 = (struct _DEVICE_OBJECT *)PdoAssociation[3];
            if ( (*((_DWORD *)v14->DeviceExtension + 2) & 0x20) == 0 )
              PiSwProcessRemove((__int64)v14, 0);
            PiSwDestroyDeviceObject(v14);
          }
        }
        while ( v11 != v6 );
      }
    }
    SwDevice = PiSwFindSwDevice(v2[1]);
    if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      PiSwCloseDescendants(v2);
    ExReleaseResourceLite(&PiSwLockObj);
    return (_UNKNOWN **)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  return result;
}
