/*
 * XREFs of USBParseProcessUnit @ 0x1C001DBF0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001A2E8 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D1C8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D268 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001D448 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, __int64 a2)
{
  int v3; // r13d
  __int64 v4; // r14
  int v5; // r13d
  __int64 v6; // rdi
  int UnitString; // ebx
  int v8; // r15d
  char *v9; // rsi
  int v10; // ecx
  __int64 i; // rdx
  unsigned int v12; // edi
  __int64 v13; // r12
  char *PoolWithTag; // rax
  unsigned __int16 *v15; // rdx
  int v16; // ecx
  int *v17; // r14
  __int64 v18; // r12
  int ChannelConfigForUnit; // ebx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v26; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+18h]
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 4);
  v4 = *(unsigned __int8 *)(a2 + 6) + a2 + 7;
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = v3 + 1;
  v6 = *(unsigned __int8 *)(v4 + 4);
  v27 = v6;
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = *(unsigned __int8 *)(v4 + 4) - 1;
    for ( i = v10; i >= 0; v8 = *(unsigned __int8 *)(v4 + i-- + 5) | (v8 << 8) )
      ;
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v12 = *(unsigned __int8 *)(v6 + v4 + 6);
      if ( v12 )
      {
        v13 = v12;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v12, 0x41627845u);
        v9 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = (unsigned __int16 *)(v4 + v27 + 7);
          do
          {
            v16 = *v15++;
            *(_DWORD *)PoolWithTag = v16;
            PoolWithTag += 4;
            --v13;
          }
          while ( v13 );
        }
        else
        {
          UnitString = -1073741670;
        }
      }
    }
    else
    {
      v12 = 0;
    }
    if ( UnitString >= 0 )
    {
      v17 = USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
      if ( v17 )
      {
        v18 = *(unsigned __int8 *)(a2 + 6);
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v26 + 40),
                                 *(char **)(v26 + 48),
                                 *(unsigned __int8 *)(a2 + 3));
        v20 = USBParseCountOutputChannelsForUnit(
                *(unsigned __int16 **)(v26 + 40),
                *(char **)(v26 + 48),
                *(unsigned __int8 *)(a2 + 3));
        UnitString = BusApiBuildFunctionUnit(
                       a1,
                       *(unsigned __int8 *)(a2 + 3),
                       4,
                       v20,
                       ChannelConfigForUnit,
                       v18,
                       v17,
                       SourceString,
                       4 * v12,
                       &v26);
        if ( UnitString >= 0 )
        {
          v21 = v26;
          if ( v26 )
          {
            *(_DWORD *)(v26 + 64) = v5;
            *(_DWORD *)(v21 + 76) = v8;
            *(_DWORD *)(v21 + 80) = v12;
            if ( v12 )
            {
              v22 = v12;
              v23 = 0LL;
              *(_QWORD *)(v21 + 88) = v21 + 12 * (v18 + 8);
              do
              {
                *(_DWORD *)(v23 + *(_QWORD *)(v21 + 88)) = *(_DWORD *)&v9[v23];
                v23 += 4LL;
                --v22;
              }
              while ( v22 );
            }
          }
        }
        ExFreePool(v17);
      }
      else
      {
        UnitString = -1073741670;
      }
    }
    if ( v9 )
      ExFreePool(v9);
  }
  return (unsigned int)UnitString;
}
