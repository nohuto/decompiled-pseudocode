/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C00374A0
 * Callers:
 *     Crashdump_Cleanup @ 0x1C00336C0 (Crashdump_Cleanup.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0018664 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C00186A0 (Endpoint_GetMaxPrimaryStreams.c)
 *     Crashdump_Command_SendCommand @ 0x1C0036070 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpointsForSaveState(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 DequeuePointer; // rax
  int v6; // edx
  __int64 v7; // r10
  int MaxPrimaryStreams; // eax
  int v9; // ecx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  v2 = -1073741823;
  v3 = 1;
  v4 = 176LL;
  do
  {
    if ( *(_QWORD *)(v4 + a1 - 24) )
    {
      DequeuePointer = Endpoint_GetDequeuePointer(*(_QWORD *)(v4 + *(_QWORD *)(a1 + 24)), 1);
      v6 = *(unsigned __int8 *)(a1 + 56);
      v11 = DequeuePointer;
      v13 = ((v3 & 0x1F | (v6 << 8)) << 16) | 0x4000;
      MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(v7);
      v9 = 0;
      if ( MaxPrimaryStreams )
        v9 = 0x10000;
      v12 = v9;
      v2 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v11, 0LL);
      if ( v2 < 0 )
        break;
    }
    ++v3;
    v4 += 8LL;
  }
  while ( v3 < 0x20 );
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpointsForSaveState: end 0x%X\n", v2);
  return (unsigned int)v2;
}
