/*
 * XREFs of Crashdump_Endpoint_SendControlTransfer @ 0x1C0037E8C
 * Callers:
 *     Crashdump_SendUrb @ 0x1C0035BA0 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C0035C80 (Crashdump_SendUrbAsync.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C00383A0 (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_Configure @ 0x1C003853C (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0038B18 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C0038C98 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C0039880 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003807C (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v8; // r10d
  __int64 v9; // rdi
  _QWORD *v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ebx
  signed __int32 v24[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *(unsigned __int8 *)a2 >> 7;
  if ( *(_DWORD *)(a1 + 192) )
  {
    v9 = *(_QWORD *)(a1 + 144);
    v10 = (_QWORD *)(a1 + 112);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 120);
    v10 = (_QWORD *)(a1 + 136);
  }
  *(_QWORD *)v9 = 0LL;
  v11 = 1;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)v9 = *a2;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v9 + 12) = *(_DWORD *)(v9 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    v11 = 2;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    v12 = *(_DWORD *)(v9 + 28) & 0xFFFE0FFF | ((v8 & 1) << 16) | 0xC00;
    *(_DWORD *)(v9 + 28) = v12;
    *(_QWORD *)(v9 + 16) = *a4;
    *(_DWORD *)(v9 + 24) ^= (a3 ^ *(_DWORD *)(v9 + 24)) & 0x1FFFF;
    *(_DWORD *)(v9 + 28) = v12 | 1;
  }
  v13 = 16LL * v11;
  v14 = v11 + 1;
  v15 = v9 + v13;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_DWORD *)(v15 + 12) = (*(_DWORD *)(v15 + 12) & 0xFFFF03EE | 0x1011) ^ ((*(_DWORD *)(v15 + 12) & 0xFFFF03EE | 0x1011) ^ ((v8 == 0) << 16)) & 0x10000;
  v16 = v9 + 16LL * v14;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = 0LL;
  v17 = *(_DWORD *)(v16 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v16 + 12) = v17;
  v18 = *(_QWORD *)(a1 + 200);
  *(_DWORD *)(v16 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v16 + 12) = v17 | 0x21;
  *(_QWORD *)v16 = v18;
  v19 = v9 + 16LL * (v14 + 1);
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = 0LL;
  v20 = *(_DWORD *)(v19 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v19 + 12) = v20;
  *(_QWORD *)v19 = *v10;
  *(_DWORD *)(v19 + 12) = v20 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 192) == 0;
  *(_BYTE *)(v9 + 12) ^= 1u;
  _InterlockedOr(v24, 0);
  v21 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v9 + 12) &= ~1u;
  v22 = v21;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v21);
  return v22;
}
