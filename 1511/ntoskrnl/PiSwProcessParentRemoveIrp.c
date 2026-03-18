/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x140496838
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiSwDestroyDeviceObject @ 0x140493B44 (PiSwDestroyDeviceObject.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwFindPdoAssociation @ 0x140495044 (PiSwFindPdoAssociation.c)
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwFindChildren @ 0x140496750 (PiSwFindChildren.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 */

_UNKNOWN **__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  _UNKNOWN **result; // rax
  NTSTRSAFE_PCWSTR *v2; // rbx
  char *v4; // rdx
  _QWORD **Children; // rax
  _QWORD *v6; // rdi
  __int64 SwDevice; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *PdoAssociation; // rax
  struct _DEVICE_OBJECT *v11; // r14
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
      v8 = *Children;
      if ( *Children != Children )
      {
        do
        {
          v9 = (__int64)(v8 - 12);
          v8 = (_QWORD *)*v8;
          PdoAssociation = PiSwFindPdoAssociation(v9, a1, 1);
          if ( PdoAssociation )
          {
            v11 = (struct _DEVICE_OBJECT *)PdoAssociation[3];
            if ( (*((_DWORD *)v11->DeviceExtension + 2) & 0x20) == 0 )
              PiSwProcessRemove((__int64)v11, 0);
            PiSwDestroyDeviceObject(v11);
          }
        }
        while ( v8 != v6 );
      }
    }
    SwDevice = PiSwFindSwDevice(v2[1]);
    if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
      PiSwCloseDescendants();
    ExReleaseResourceLite(&PiSwLockObj);
    return (_UNKNOWN **)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
