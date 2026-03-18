/*
 * XREFs of Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0035B4C
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x1C0035560 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     memset @ 0x1C0010E80 (memset.c)
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C0034E9C (Crashdump_Endpoint_SendControlTransfer.c)
 */

__int64 __fastcall Crashdump_UsbDevice_GetDeviceDescriptor(_QWORD *a1, unsigned __int8 **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int8 *v5; // r13
  unsigned int v6; // ebx
  int v8; // [rsp+D0h] [rbp+8h] BYREF
  int v9; // [rsp+D4h] [rbp+Ch]
  unsigned __int8 **v10; // [rsp+D8h] [rbp+10h]

  v10 = a2;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: begin\n");
  v3 = *a1;
  memset(*(void **)(*a1 + 448LL), 0, *(unsigned int *)(*a1 + 456LL));
  v4 = a1[19];
  v5 = *(unsigned __int8 **)(v3 + 448);
  v8 = 16778880;
  v9 = 0x400000;
  v8 = Crashdump_Endpoint_SendControlTransfer(v4, (unsigned __int8 *)&v8, 18, (_QWORD *)(v3 + 440));
  v6 = v8;
  if ( v8 >= 0 )
  {
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n",
      *v5,
      v5[1],
      *((unsigned __int16 *)v5 + 1),
      v5[4],
      v5[5],
      v5[6],
      v5[7],
      *((unsigned __int16 *)v5 + 4),
      *((unsigned __int16 *)v5 + 5),
      *((unsigned __int16 *)v5 + 6),
      v5[14],
      v5[15],
      v5[16],
      v5[17]);
    v6 = v8;
    *v10 = v5;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: end 0x%X\n", v6);
  return v6;
}
