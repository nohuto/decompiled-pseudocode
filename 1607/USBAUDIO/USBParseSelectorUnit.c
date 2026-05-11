/*
 * XREFs of USBParseSelectorUnit @ 0x1C001ECE0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001B3B8 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E404 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E538 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E65C (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001E7E4 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rbp
  unsigned __int8 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  const WCHAR *SourceString; // r14
  int UnitString; // edi
  int v10; // eax
  int *v12; // rsi
  int v13; // r8d
  char *v14; // rdx
  unsigned __int16 *v15; // rcx
  const WCHAR *v16; // [rsp+80h] [rbp+8h] BYREF
  int v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *a2;
  v6 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( v5 >= 5u && (unsigned __int64)&a2[v5] <= v6 )
  {
    v7 = a2[4];
    if ( (unsigned __int64)&a2[v7 + 5] <= v6 )
    {
      SourceString = 0LL;
      UnitString = 0;
      v16 = 0LL;
      if ( (_BYTE)v7 )
      {
        v10 = v5 - 6;
        if ( v10 == (_DWORD)v7 )
        {
          UnitString = USBParseGetUnitString(a1, a2, &v16);
          if ( UnitString < 0 )
            return (unsigned int)-1073741670;
          SourceString = v16;
        }
        else if ( v10 + 1 != (_DWORD)v7 )
        {
          return (unsigned int)-1073741670;
        }
        v12 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
        if ( v12 )
        {
          v13 = a2[3];
          v14 = *(char **)(v4 + 48);
          v15 = *(unsigned __int16 **)(v4 + 40);
          v17 = 0;
          LODWORD(v16) = 0;
          UnitString = USBParseCountOutputChannelsForUnit(v15, v14, v13, &v17);
          if ( UnitString >= 0 )
          {
            UnitString = USBParseGetChannelConfigForUnit(
                           *(unsigned __int16 **)(v4 + 40),
                           *(char **)(v4 + 48),
                           a2[3],
                           &v16);
            if ( UnitString >= 0 )
              UnitString = BusApiBuildFunctionUnit(a1, a2[3], 3, v17, (int)v16, a2[4], v12, SourceString, 0, &v18);
          }
          ExFreePool(v12);
        }
        return (unsigned int)UnitString;
      }
      return (unsigned int)-1073741670;
    }
  }
  return 3221225473LL;
}
