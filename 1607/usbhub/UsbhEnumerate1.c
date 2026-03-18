/*
 * XREFs of UsbhEnumerate1 @ 0x1C0009834
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

__int64 __fastcall UsbhEnumerate1(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned __int8 v8; // r10
  int v9; // r11d
  int v10; // r9d
  int v11; // r9d
  __int64 v12; // r9
  unsigned int (__fastcall *v13)(__int64, __int64, __int64); // rax
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9

  v5 = *(_DWORD *)(a4 + 400);
  Log(a1, 4, 1162761521, a4, a2);
  switch ( a2 )
  {
    case 1u:
      Log(a1, v9, 1162752355, v8, 0LL);
      v13 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005C2D8[2 * v22];
LABEL_7:
      if ( v13 )
        return v13(a1, a4, a5);
      return v5;
    case 2u:
      Log(a1, v9, 1162752357, v8, 0LL);
      v13 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005BCD8[2 * v21];
      goto LABEL_7;
    case 4u:
      Log(a1, v9, 1162752371, v8, 0LL);
      v13 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005C0D8[2 * v20];
      goto LABEL_7;
  }
  v10 = a2 - 4 - v9;
  if ( !v10 )
  {
    Log(a1, v9, 1162752374, v8, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  }
  v11 = v10 - 8;
  if ( !v11 )
  {
    Log(a1, v9, 1162752370, v8, 0LL);
    v13 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005A698[2 * v12];
    goto LABEL_7;
  }
  v16 = v11 - 65520;
  if ( !v16 )
  {
    Log(a1, v9, 1162752372, v8, 0LL);
    v13 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005BED8[2 * v19];
    goto LABEL_7;
  }
  v17 = v16 - 0x10000;
  if ( !v17 )
  {
    Log(a1, v9, 1162752376, v8, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v18 = v17 - 0x20000;
  if ( !v18 )
  {
    v5 = UsbhCancelEnumeration(a1, 1LL, a4, a5);
    UsbhSignalSuspendEvent(a1, a4);
    return v5;
  }
  if ( v18 == 0x40000 )
  {
    Log(a1, v9, 1162752368, v8, 0LL);
    return (unsigned int)UsbhCancelEnumeration(a1, 1LL, a4, a5);
  }
  return v5;
}
