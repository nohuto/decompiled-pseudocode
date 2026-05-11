/*
 * XREFs of USBParseTerminalUnit @ 0x1C001E7D0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C001B4AC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001DC38 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C001E0FC (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E398 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E4CC (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int MicArrayDescriptor; // edx
  int PinIndexForStreamingTerminal; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int8 v9; // al
  int v10; // r15d
  unsigned int v11; // r12d
  int v12; // r8d
  char *v13; // rdx
  unsigned __int16 *v14; // rcx
  const WCHAR *v16; // [rsp+60h] [rbp-10h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  int v18; // [rsp+B8h] [rbp+48h] BYREF
  int v19; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  MicArrayDescriptor = 0;
  PinIndexForStreamingTerminal = -1;
  v16 = 0LL;
  v20 = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  v8 = *(_QWORD *)(v7 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL);
  v9 = *(_BYTE *)a2;
  if ( *(_BYTE *)(a2 + 2) == 2 )
  {
    if ( v9 >= 0xCu && a2 + (unsigned __int64)v9 <= v8 )
    {
      v10 = 0;
      v17 = -1;
      v11 = 0;
      if ( *(_WORD *)(a2 + 4) != 517 )
        goto LABEL_11;
      MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, a2, &v20);
      if ( MicArrayDescriptor == -1073741275 )
        MicArrayDescriptor = 0;
LABEL_10:
      if ( MicArrayDescriptor < 0 )
        return (unsigned int)MicArrayDescriptor;
LABEL_11:
      MicArrayDescriptor = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &v16);
      if ( MicArrayDescriptor >= 0 )
      {
        v12 = *(unsigned __int8 *)(a2 + 3);
        v13 = *(char **)(v7 + 48);
        v14 = *(unsigned __int16 **)(v7 + 40);
        v19 = 0;
        v18 = 0;
        MicArrayDescriptor = USBParseCountOutputChannelsForUnit(v14, v13, v12, &v19);
        if ( MicArrayDescriptor >= 0 )
        {
          MicArrayDescriptor = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v7 + 40),
                                 *(char **)(v7 + 48),
                                 *(unsigned __int8 *)(a2 + 3),
                                 &v18);
          if ( MicArrayDescriptor >= 0 )
          {
            if ( *(_WORD *)(a2 + 4) == 257 )
              PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, (unsigned __int8 *)a2, 0);
            return (unsigned int)BusApiBuildTerminalFunctionUnit(
                                   a1,
                                   *(unsigned __int8 *)(a2 + 3),
                                   v10,
                                   v19,
                                   v18,
                                   v11,
                                   &v17,
                                   v16,
                                   v20,
                                   *(unsigned __int16 *)(a2 + 4),
                                   1,
                                   PinIndexForStreamingTerminal);
          }
        }
      }
      return (unsigned int)MicArrayDescriptor;
    }
  }
  else if ( v9 >= 9u && a2 + (unsigned __int64)v9 <= v8 )
  {
    v10 = 1;
    v17 = *(unsigned __int8 *)(a2 + 7);
    v11 = 1;
    goto LABEL_10;
  }
  return 3221225473LL;
}
