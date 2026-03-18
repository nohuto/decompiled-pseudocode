/*
 * XREFs of Crashdump_Endpoint_PrepareForHibernate @ 0x1C00375E0
 * Callers:
 *     Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00389AC (Crashdump_UsbDevice_PrepareForHibernate.c)
 * Callees:
 *     memset @ 0x1C0011000 (memset.c)
 *     Crashdump_Endpoint_SetDequeuePointer @ 0x1C0037C08 (Crashdump_Endpoint_SetDequeuePointer.c)
 *     Crashdump_Endpoint_StopEndpoint @ 0x1C0037CBC (Crashdump_Endpoint_StopEndpoint.c)
 */

__int64 __fastcall Crashdump_Endpoint_PrepareForHibernate(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_PrepareForHibernate: begin\n");
  memset(*(void **)(a1 + 120), 0, *(unsigned int *)(a1 + 128));
  memset(*(void **)(a1 + 144), 0, *(unsigned int *)(a1 + 152));
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 1LL;
  v2 = Crashdump_Endpoint_StopEndpoint(a1);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = Crashdump_Endpoint_SetDequeuePointer(a1);
  else
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Endpoint_StopEndpoint failed with error 0x%X\n", v2);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_PrepareForHibernate: end 0x%X\n", v3);
  return v3;
}
