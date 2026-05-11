/*
 * XREFs of USBParseProcessUnit @ 0x1C001F080
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C001B388 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E398 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E4CC (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001E774 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // r15
  int UnitString; // ebp
  int v10; // r13d
  char *PoolWithTag; // r14
  int v12; // eax
  __int64 i; // rcx
  int v14; // esi
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int8 *v17; // rax
  _DWORD *v18; // rcx
  unsigned __int16 *v19; // rdx
  int v20; // eax
  int *v22; // rdi
  int v23; // r8d
  char *v24; // rdx
  unsigned __int16 *v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // [rsp+50h] [rbp-68h]
  PCWSTR SourceString; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32[11]; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+C8h] [rbp+10h] BYREF
  int v35; // [rsp+D0h] [rbp+18h] BYREF
  int v36; // [rsp+D8h] [rbp+20h]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v30 = v4;
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  if ( *a2 < 7u )
    return 3221225473LL;
  if ( (unsigned __int64)&a2[*a2] > v5 )
    return 3221225473LL;
  v6 = a2[6];
  if ( (unsigned __int64)&a2[v6 + 12] > v5 )
    return 3221225473LL;
  v7 = &a2[v6];
  v8 = &v7[v7[11] + 13];
  v36 = *((unsigned __int16 *)a2 + 2) + 1;
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v10 = 0;
    PoolWithTag = 0LL;
    if ( (unsigned __int64)v8 < v5 )
    {
      v12 = v7[11] - 1;
      for ( i = v12; i >= 0; v10 = v7[i-- + 12] | (v10 << 8) )
        ;
      if ( (unsigned int)(v36 - 2) > 1 )
      {
        v14 = 0;
LABEL_23:
        if ( UnitString >= 0 )
        {
          v22 = USBParseBuildSourceIdArray(a2[6], a2 + 7);
          if ( v22 )
          {
            v23 = a2[3];
            v24 = *(char **)(v4 + 48);
            v25 = *(unsigned __int16 **)(v4 + 40);
            v35 = 0;
            v34 = 0;
            UnitString = USBParseCountOutputChannelsForUnit(v25, v24, v23, &v35);
            if ( UnitString >= 0 )
            {
              UnitString = USBParseGetChannelConfigForUnit(
                             *(unsigned __int16 **)(v4 + 40),
                             *(char **)(v4 + 48),
                             a2[3],
                             &v34);
              if ( UnitString >= 0 )
              {
                v26 = a2[6];
                UnitString = BusApiBuildFunctionUnit(a1, a2[3], 4, v35, v34, a2[6], v22, SourceString, 4 * v14, v32);
                if ( UnitString >= 0 )
                {
                  v27 = v32[0];
                  if ( v32[0] )
                  {
                    *(_DWORD *)(v32[0] + 64) = v36;
                    *(_DWORD *)(v27 + 76) = v10;
                    *(_DWORD *)(v27 + 80) = v14;
                    if ( v14 )
                    {
                      v28 = (unsigned int)v14;
                      v29 = 0LL;
                      *(_QWORD *)(v27 + 88) = v27 + 12 * (v26 + 8);
                      do
                      {
                        *(_DWORD *)(v29 + *(_QWORD *)(v27 + 88)) = *(_DWORD *)&PoolWithTag[v29];
                        v29 += 4LL;
                        --v28;
                      }
                      while ( v28 );
                    }
                  }
                }
              }
            }
            ExFreePool(v22);
          }
          else
          {
            UnitString = -1073741670;
          }
        }
        if ( PoolWithTag )
          ExFreePool(PoolWithTag);
        return (unsigned int)UnitString;
      }
      _mm_lfence();
      v14 = *v8;
      if ( !*v8 )
        goto LABEL_23;
      v15 = *v8;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4 * v15, 0x41627845u);
      if ( !PoolWithTag )
      {
        UnitString = -1073741670;
LABEL_22:
        v4 = v30;
        goto LABEL_23;
      }
      v16 = 2LL * (unsigned int)(v14 - 1);
      v17 = &v8[v16 + 1];
      if ( (unsigned __int64)v17 < v5 && v17 > a2 && *a2 >= (__int64)&v8[v16 - (_QWORD)a2 + 2] )
      {
        if ( v14 > 0 )
        {
          v18 = PoolWithTag;
          v19 = (unsigned __int16 *)(v8 + 1);
          do
          {
            v20 = *v19++;
            *v18++ = v20;
            --v15;
          }
          while ( v15 );
        }
        goto LABEL_22;
      }
      ExFreePool(PoolWithTag);
    }
    return 3221225473LL;
  }
  return (unsigned int)UnitString;
}
