/*
 * XREFs of USBParseMixerUnit @ 0x1C001D610
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008000 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C001A2E8 (BusApiBuildFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C001B374 (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001D1C8 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001D268 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001D304 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001D448 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  unsigned __int8 *v5; // r13
  __int64 v6; // rdi
  int UnitString; // ebx
  unsigned __int16 v8; // dx
  int v9; // ecx
  int v10; // r8d
  unsigned int i; // eax
  int v12; // r14d
  unsigned int v13; // esi
  unsigned int v14; // r15d
  __int64 v15; // r12
  unsigned int v16; // r14d
  void *v17; // rbx
  char *v18; // rsi
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r13
  int *v22; // r15
  __int64 v23; // r13
  int ChannelConfigForUnit; // ebx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // al
  __int64 v30; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+10h]
  char *PoolWithTag; // [rsp+B0h] [rbp+18h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v30 = a1;
  v2 = a1;
  v4 = a2[4];
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = &a2[v4 + 5];
  v6 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v8 = *(_WORD *)(v5 + 1);
    if ( v8 )
    {
      v9 = 0;
      v10 = v8;
      for ( i = 0; i < 0x10; ++i )
      {
        if ( _bittest(&v10, i) )
          ++v9;
      }
      if ( v9 != *v5 )
        UnitString = -1073741438;
    }
    if ( UnitString >= 0 )
    {
      v12 = 0;
      v13 = 0;
      v14 = *a2 - a2[4] - 10;
      if ( a2[4] )
      {
        v15 = v31;
        do
          v12 += USBParseCountOutputChannelsForUnit(
                   *(unsigned __int16 **)(v15 + 40),
                   *(char **)(v15 + 48),
                   a2[v13++ + 5]);
        while ( v13 < a2[4] );
        v2 = v30;
      }
      v16 = ((v12 * (unsigned int)*v5) >> 3) + ((((_BYTE)v12 * *v5) & 7) != 0);
      if ( v16 <= v14 )
      {
        v18 = (char *)(v5 + 4);
      }
      else
      {
        v17 = *(void **)(v2 + 8);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x41627845u);
        v18 = PoolWithTag;
        if ( PoolWithTag )
          UnitString = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v17);
        else
          UnitString = -1073741670;
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        memset(v18, 0, v16);
        if ( v14 )
        {
          v19 = v18;
          v20 = v14;
          v21 = v5 - (unsigned __int8 *)v18;
          do
          {
            *v19 = v19[v21 + 4];
            ++v19;
            --v20;
          }
          while ( v20 );
        }
        v2 = v30;
      }
      v22 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
      if ( v22 )
      {
        v23 = a2[4];
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(unsigned __int16 **)(v31 + 40),
                                 *(char **)(v31 + 48),
                                 a2[3]);
        v25 = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v31 + 40), *(char **)(v31 + 48), a2[3]);
        UnitString = BusApiBuildFunctionUnit(v2, a2[3], 5, v25, ChannelConfigForUnit, v23, v22, SourceString, v16, &v30);
        if ( UnitString >= 0 )
        {
          v26 = v30;
          if ( v30 )
          {
            *(_DWORD *)(v30 + 68) = v16;
            *(_QWORD *)(v26 + 72) = v26 + 12 * (v23 + 8);
            if ( v16 )
            {
              v27 = v16;
              do
              {
                v28 = *v18++;
                *(_BYTE *)(v6 + *(_QWORD *)(v26 + 72)) = v28;
                ++v6;
                --v27;
              }
              while ( v27 );
            }
          }
        }
        ExFreePool(v22);
      }
    }
  }
  return (unsigned int)UnitString;
}
