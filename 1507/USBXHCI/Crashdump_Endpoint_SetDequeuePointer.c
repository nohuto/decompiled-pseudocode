/*
 * XREFs of Crashdump_Endpoint_SetDequeuePointer @ 0x1C0036C28
 * Callers:
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C0036600 (Crashdump_Endpoint_PrepareForHibernate.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C0036070 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_Endpoint_SetDequeuePointer(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: begin\n");
  v2 = *(_QWORD *)(a1 + 24);
  v8 = 0;
  v3 = *(_BYTE *)(a1 + 160) == 0;
  v9 = ((*(_DWORD *)(a1 + 32) & 0x1F | (*(unsigned __int8 *)(v2 + 56) << 8)) << 16) | 0x4000;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 24LL * *(unsigned int *)(a1 + 192) + 112) | 1LL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 176);
    v8 = 0x10000;
    v7 = *(_QWORD *)(v4 + 16);
  }
  v5 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v7, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SetDequeuePointer: end 0x%X\n", v5);
  return v5;
}
