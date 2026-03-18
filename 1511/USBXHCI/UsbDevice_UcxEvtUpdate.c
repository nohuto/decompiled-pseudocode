/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C00324A0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Command_SendCommand @ 0x1C001BD2C (Command_SendCommand.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C003280C (UsbDevice_UpdateUsbDevice.c)
 */

void __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  memset(v15, 0, sizeof(v15));
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v15);
  v4 = v15[1];
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v15[1] + 16LL),
         off_1C0041318);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v9 = *(_QWORD *)(v7 + 80);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    memset(*(void **)(*(_QWORD *)(v5 + 432) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v5 + 432) + 40LL));
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 432) + 16LL);
    v11 = v10 + 64;
    if ( (*(_BYTE *)(v9 + 104) & 4) == 0 )
      v11 = v10 + 32;
    *(_DWORD *)(v10 + 4) |= 1u;
    v12 = *(_WORD *)(v4 + 48);
    *(_DWORD *)(v11 + 8) &= 0x3FFFFFu;
    *(_WORD *)(v11 + 4) = v12;
    memset((void *)(v6 + 456), 0, 0x50uLL);
    *(_QWORD *)(v6 + 512) = v6;
    *(_QWORD *)(v6 + 504) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    *(_QWORD *)(v6 + 480) = *(_QWORD *)(*(_QWORD *)(v6 + 432) + 24LL);
    v13 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 496) = v10;
    if ( Controller_IsControllerAccessible(v13) )
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
  v14 = WdfFunctions_01015;
  *(_QWORD *)(v6 + 440) = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v14 + 2104))(WdfDriverGlobals, a2, v3);
}
