/*
 * XREFs of USBParseExtensionUnit @ 0x1C001F3C0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001B3B8 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E404 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E538 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E65C (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001E7E4 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int UnitString; // edi
  int *v16; // rbp
  int v17; // r8d
  char *v18; // rdx
  unsigned __int16 *v19; // rcx
  int v20; // r14d
  __int64 v21; // rax
  int v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+98h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  v6 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 < 7u )
    return 3221225473LL;
  v7 = v6;
  if ( v6 + a2 > v5 )
    return 3221225473LL;
  v8 = *(unsigned __int8 *)(a2 + 6);
  if ( v8 + a2 + 12 > v5 )
    return 3221225473LL;
  v9 = 0;
  v10 = v8 + a2 + 7;
  v11 = *(unsigned __int8 *)(v10 + 4);
  v12 = v11 + v10 + 5;
  if ( v12 >= v5 || v12 <= a2 || v7 < (__int64)(v10 + *(unsigned __int8 *)(v10 + 4) - a2 + 6) )
    return 3221225473LL;
  if ( *(_BYTE *)(v10 + 4) )
  {
    v13 = (unsigned __int8 *)(v11 + v10 + 5);
    do
    {
      v14 = *v13--;
      v9 = v14 | (v9 << 8);
      LODWORD(v11) = v11 - 1;
    }
    while ( (_DWORD)v11 );
  }
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v16 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
    if ( v16 )
    {
      v17 = *(unsigned __int8 *)(a2 + 3);
      v18 = *(char **)(v4 + 48);
      v19 = *(unsigned __int16 **)(v4 + 40);
      v24 = 0;
      v23 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v19, v18, v17, &v24);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(
                       *(unsigned __int16 **)(v4 + 40),
                       *(char **)(v4 + 48),
                       *(unsigned __int8 *)(a2 + 3),
                       &v23);
        if ( UnitString >= 0 )
        {
          v20 = *(unsigned __int16 *)(a2 + 4);
          UnitString = BusApiBuildFunctionUnit(
                         a1,
                         *(unsigned __int8 *)(a2 + 3),
                         7,
                         v24,
                         v23,
                         *(unsigned __int8 *)(a2 + 6),
                         v16,
                         SourceString,
                         0,
                         &v26);
          if ( UnitString >= 0 )
          {
            v21 = v26;
            if ( v26 )
            {
              *(_DWORD *)(v26 + 64) = v20;
              *(_DWORD *)(v21 + 68) = v9;
            }
          }
        }
      }
      ExFreePool(v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)UnitString;
}
