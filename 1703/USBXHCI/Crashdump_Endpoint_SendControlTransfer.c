/*
 * XREFs of Crashdump_Endpoint_SendControlTransfer @ 0x1C0034E9C
 * Callers:
 *     Crashdump_SendUrb @ 0x1C0032AE0 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C0032BC0 (Crashdump_SendUrbAsync.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C00353BC (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_Configure @ 0x1C0035560 (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0035B4C (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C0035CD0 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C0036908 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003508C (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, unsigned __int8 *a2, int a3, _QWORD *a4)
{
  unsigned __int8 v8; // r11
  int v9; // r10d
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *a2;
  v9 = *a2 >= 0x80u;
  if ( *(_DWORD *)(a1 + 192) )
  {
    v10 = *(_QWORD *)(a1 + 144);
    v11 = 112LL;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 120);
    v11 = 136LL;
  }
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  v12 = 1;
  *(_QWORD *)v10 = *(_QWORD *)a2;
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    v12 = 2;
    v13 = (v9 << 16) | *(_DWORD *)(v10 + 28) & 0xFFFE0FFF | 0xC00;
    *(_DWORD *)(v10 + 28) = v13;
    *(_QWORD *)(v10 + 16) = *a4;
    *(_DWORD *)(v10 + 24) ^= (a3 ^ *(_DWORD *)(v10 + 24)) & 0x1FFFF;
    *(_DWORD *)(v10 + 28) = v13 | 1;
  }
  v14 = v10 + 16LL * v12;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)(v14 + 12) & 0xFFFE13FF | ((v8 < 0x80u) << 16) | 0x1011;
  v15 = v10 + 16LL * (v12 + 1);
  v16 = v10 + 16LL * (v12 + 2);
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = *(_DWORD *)(v15 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v15 + 12) = v17;
  v18 = *(_QWORD *)(a1 + 200);
  *(_DWORD *)(v15 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v15 + 12) = v17 | 0x21;
  *(_QWORD *)v15 = v18;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = 0LL;
  v19 = *(_DWORD *)(v16 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v16 + 12) = v19;
  *(_QWORD *)v16 = *(_QWORD *)(v11 + a1);
  *(_DWORD *)(v16 + 12) = v19 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v23, 0);
  v20 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v10 + 12) &= ~1u;
  v21 = v20;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v20);
  return v21;
}
