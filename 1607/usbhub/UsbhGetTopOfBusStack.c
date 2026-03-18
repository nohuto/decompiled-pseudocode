/*
 * XREFs of UsbhGetTopOfBusStack @ 0x1C000AEAC
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000B670 (UsbhReferenceListAdd.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0020110 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhGetTopOfBusStack(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // esi
  int v6; // r9d
  PVOID v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = FdoExt(a1);
  v3 = v2;
  if ( (*(_DWORD *)(v2 + 2560) & 1) != 0 )
  {
    v7 = *(PVOID *)(v2 + 1208);
    UsbhReferenceListAdd(a1, v7, 1918062420LL);
    ObfReferenceObject(v7);
    v6 = _InterlockedExchange64((volatile __int64 *)(v3 + 1216), (__int64)v7);
    Log(a1, 8, 1920091215, v6, (__int64)v7);
    v4 = 0;
  }
  else
  {
    v4 = UsbhSyncSendInternalIoctl(a1, 2228239LL, &Object, &v7);
    if ( v4 >= 0 )
    {
      UsbhReferenceListAdd(a1, v7, 1918062420LL);
      _InterlockedExchange64((volatile __int64 *)(v3 + 1216), (__int64)v7);
      ObfDereferenceObject(Object);
    }
  }
  Log(a1, 8, 1733313615, v4, (__int64)v7);
  return (unsigned int)v4;
}
