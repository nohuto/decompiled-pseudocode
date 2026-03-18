/*
 * XREFs of IopReferenceDriverObjectByName @ 0x140538D28
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x1405745C0 (PiGetDefaultMessageString.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140464694 (ObOpenObjectByName.c)
 */

PVOID __fastcall IopReferenceDriverObjectByName(_WORD *a1)
{
  NTSTATUS v2; // ebx
  int v3; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+48h] [rbp-30h]
  _WORD *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  __int128 v7; // [rsp+60h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  if ( *a1
    && (v5 = a1,
        v3 = 48,
        v4 = 0LL,
        v6 = 576,
        v7 = 0LL,
        (int)ObOpenObjectByName((__int64)&v3, (__int64)IoDriverObjectType, 0, 0LL, 0x80u, 0LL, &Handle) >= 0)
    && (v2 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL), ZwClose(Handle), v2 >= 0) )
  {
    return Object;
  }
  else
  {
    return 0LL;
  }
}
