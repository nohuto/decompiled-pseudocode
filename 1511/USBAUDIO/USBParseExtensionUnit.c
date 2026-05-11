/*
 * XREFs of USBParseExtensionUnit @ 0x1C001DE10
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001A2E8 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D1C8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D268 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001D448 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned __int8 *v8; // r8
  int v9; // eax
  int UnitString; // ebx
  int *v11; // r14
  int v12; // r12d
  unsigned int v13; // edi
  int ChannelConfigForUnit; // ebx
  int v15; // eax
  __int64 v16; // rax
  PCWSTR SourceString; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF

  v3 = a2 + *(unsigned __int8 *)(a2 + 6);
  v4 = 0;
  v6 = *(unsigned __int8 *)(v3 + 11);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_BYTE *)(v3 + 11) )
  {
    v8 = (unsigned __int8 *)(v6 + v3 + 12);
    do
    {
      v9 = *v8--;
      v4 = v9 | (v4 << 8);
      LODWORD(v6) = v6 - 1;
    }
    while ( (_DWORD)v6 );
  }
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v11 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
    if ( v11 )
    {
      v12 = *(unsigned __int16 *)(a2 + 4);
      v13 = *(unsigned __int8 *)(a2 + 6);
      ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                               *(unsigned __int16 **)(v7 + 40),
                               *(char **)(v7 + 48),
                               *(unsigned __int8 *)(a2 + 3));
      v15 = USBParseCountOutputChannelsForUnit(
              *(unsigned __int16 **)(v7 + 40),
              *(char **)(v7 + 48),
              *(unsigned __int8 *)(a2 + 3));
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     *(unsigned __int8 *)(a2 + 3),
                     7,
                     v15,
                     ChannelConfigForUnit,
                     v13,
                     v11,
                     SourceString,
                     0,
                     &v19);
      if ( UnitString >= 0 )
      {
        v16 = v19;
        if ( v19 )
        {
          *(_DWORD *)(v19 + 64) = v12;
          *(_DWORD *)(v16 + 68) = v4;
        }
      }
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)UnitString;
}
