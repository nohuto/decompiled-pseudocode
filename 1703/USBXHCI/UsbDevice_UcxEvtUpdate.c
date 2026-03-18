/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C002F9C0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Command_SendCommand @ 0x1C00184A4 (Command_SendCommand.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C002FD34 (UsbDevice_UpdateUsbDevice.c)
 */

void __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v4 = v16[1];
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v16[1] + 16LL),
         off_1C0045250);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v9 = *(_QWORD *)(v7 + 80);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    memset(*(void **)(*(_QWORD *)(v5 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v5 + 432) + 40LL));
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 432) + 16LL);
    v11 = -(__int64)((*(_BYTE *)(v9 + 104) & 4) != 0);
    *(_DWORD *)(v10 + 4) |= 1u;
    v12 = *(_WORD *)(v4 + 48);
    v13 = v11 & 0x20;
    *(_DWORD *)(v13 + v10 + 40) &= 0x3FFFFFu;
    *(_WORD *)(v13 + v10 + 36) = v12;
    memset((void *)(v6 + 456), 0, 0x50uLL);
    *(_QWORD *)(v6 + 512) = v6;
    *(_QWORD *)(v6 + 504) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    *(_QWORD *)(v6 + 480) = *(_QWORD *)(*(_QWORD *)(v6 + 432) + 24LL);
    v14 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 496) = v10;
    if ( Controller_IsControllerAccessible(v14) )
    {
      *(_QWORD *)(v6 + 440) = a2;
      *(_BYTE *)(v6 + 448) = 0;
      Command_SendCommand(v8, v6 + 456);
      return;
    }
    v3 = -1073741810;
  }
  else
  {
    UsbDevice_UpdateUsbDevice(v5, v4);
  }
  v15 = WdfFunctions_01015;
  *(_QWORD *)(v6 + 440) = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v15 + 2104))(WdfDriverGlobals, a2, v3);
}
