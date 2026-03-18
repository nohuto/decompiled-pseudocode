/*
 * XREFs of Crashdump_Endpoint_SetDequeuePointer @ 0x1C00351AC
 * Callers:
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0034B7C (Crashdump_Endpoint_PrepareForHibernate.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C00345C0 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_Endpoint_SetDequeuePointer(__int64 a1)
{
  bool v2; // zf
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: begin\n");
  v6 = 0LL;
  v5 = 0LL;
  v2 = *(_BYTE *)(a1 + 160) == 0;
  HIDWORD(v6) = ((*(_DWORD *)(a1 + 32) & 0x1F | (*(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 56LL) << 8)) << 16) | 0x4000;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 24LL * *(unsigned int *)(a1 + 192) + 112) | 1LL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    LODWORD(v6) = (unsigned __int16)v6 | 0x10000;
  }
  v3 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v5, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: end 0x%X\n", v3);
  return v3;
}
