/*
 * XREFs of UsbhEnumerate2 @ 0x1C00504FC
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhCancelEnumeration @ 0x1C00276A4 (UsbhCancelEnumeration.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041CF8 (UsbhSignalSuspendEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0050860 (UsbhFailDriverResetPort.c)
 *     UsbhHandleOvercurrent @ 0x1C00508F4 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhEnumerate2(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned __int8 v8; // r10
  int v9; // r11d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r11d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9

  v5 = *(_DWORD *)(a4 + 400);
  Log(a1, 4, 1162761522, a4, a2);
  switch ( a2 )
  {
    case 1u:
      Log(a1, v9, 1162752611, v8, 0LL);
      v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005C8D8[2 * v24];
LABEL_19:
      if ( v20 )
        return v20(a1, a4, a5);
      return v5;
    case 2u:
      Log(a1, v9, 1162752613, v8, 0LL);
      v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005C4D8[2 * v23];
      goto LABEL_19;
    case 4u:
      Log(a1, v9, 1162752627, v8, 0LL);
      v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005EEB8[2 * v22];
      goto LABEL_19;
  }
  v10 = a2 - 4 - v9;
  if ( !v10 )
  {
    Log(a1, v9, 1162752630, v8, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  }
  v11 = v10 - 8;
  if ( !v11 )
  {
    Log(a1, v9, 1162752626, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005CAD8[2 * v21];
    goto LABEL_19;
  }
  v12 = v11 - 65520;
  if ( !v12 )
  {
    Log(a1, v9, 1162752628, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005C6D8[2 * v19];
    goto LABEL_19;
  }
  v13 = v12 - 0x10000;
  if ( !v13 )
  {
    Log(a1, v9, 1162752632, v8, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v14 = v13 - 0x20000;
  if ( v14 )
  {
    if ( v14 == 0x40000 )
    {
      Log(a1, v9, 1162752624, v8, 0LL);
      return (unsigned int)UsbhCancelEnumeration(a1, v15 - 2, a4, a5);
    }
  }
  else
  {
    v5 = UsbhCancelEnumeration(a1, 2u, a4, a5);
    UsbhSignalSuspendEvent(a1, a4, v17, v18);
  }
  return v5;
}
