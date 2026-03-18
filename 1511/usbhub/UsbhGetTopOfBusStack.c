/*
 * XREFs of UsbhGetTopOfBusStack @ 0x1C001E2F0
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 */

__int64 __fastcall UsbhGetTopOfBusStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile __int64 *v5; // rax
  volatile __int64 *v6; // rdi
  NTSTATUS v7; // esi
  __int64 v9; // r9
  _UNICODE_STRING v10; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)&v10.Length = 0LL;
  v5 = (volatile __int64 *)FdoExt(a1, a2, a3, a4);
  v6 = v5;
  if ( (v5[320] & 1) != 0 )
  {
    *(_QWORD *)&v10.Length = *((_QWORD *)v5 + 151);
    UsbhReferenceListAdd(a1, *(_QWORD *)&v10.Length, 1918062420LL);
    ObfReferenceObject(*(PVOID *)&v10.Length);
    v9 = _InterlockedExchange64(v6 + 152, *(__int64 *)&v10.Length);
    Log(a1, 8, 1920091215, v9, *(__int64 *)&v10.Length);
    v7 = 0;
  }
  else
  {
    v7 = UsbhSyncSendInternalIoctl(a1, 0x22000Fu, (unsigned __int64)&v10.Buffer, &v10);
    if ( v7 >= 0 )
    {
      UsbhReferenceListAdd(a1, *(_QWORD *)&v10.Length, 1918062420LL);
      _InterlockedExchange64(v6 + 152, *(__int64 *)&v10.Length);
      ObfDereferenceObject(v10.Buffer);
    }
  }
  Log(a1, 8, 1733313615, v7, *(__int64 *)&v10.Length);
  return (unsigned int)v7;
}
