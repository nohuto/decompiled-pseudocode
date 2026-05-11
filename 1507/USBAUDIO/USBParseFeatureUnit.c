/*
 * XREFs of USBParseFeatureUnit @ 0x1C001EDF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008240 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C001B388 (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E398 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E4CC (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E5F0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rbx
  unsigned __int16 *v5; // rcx
  int v6; // r8d
  char *v7; // rdx
  int v8; // esi
  __int64 result; // rax
  int UnitString; // ebx
  int v11; // r13d
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rsi
  __int64 v18; // rdx
  int v19; // ecx
  __int16 v20; // r8
  int v21; // r9d
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28[3]; // [rsp+50h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+58h] BYREF
  PCWSTR SourceString; // [rsp+C8h] [rbp+60h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *a2 < 6u )
    return 3221225473LL;
  v5 = *(unsigned __int16 **)(v4 + 40);
  if ( &a2[*a2] > (unsigned __int8 *)v5 + v5[1] )
    return 3221225473LL;
  v6 = a2[3];
  v7 = *(char **)(v4 + 48);
  v8 = 0;
  LODWORD(v31) = 0;
  v30 = 0;
  SourceString = 0LL;
  result = USBParseCountOutputChannelsForUnit(v5, v7, v6, &v31);
  if ( (int)result >= 0 )
  {
    result = USBParseGetChannelConfigForUnit(*(unsigned __int16 **)(v4 + 40), *(char **)(v4 + 48), a2[3], &v30);
    UnitString = result;
    if ( (int)result >= 0 )
    {
      v11 = v31;
      v12 = ((unsigned __int64)*a2 - 7) / a2[5];
      v13 = v31 + 1;
      v14 = v12;
      if ( (_DWORD)v12 != (_DWORD)v31 + 1 )
      {
        if ( v30 )
        {
          if ( (unsigned int)v12 >= v13 )
            UnitString = -1073741438;
          else
            v8 = v31 - v12 + 1;
        }
        else
        {
          if ( (_DWORD)v12 != (_DWORD)v31 )
            return (unsigned int)-1073741438;
          v8 = 1;
        }
      }
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      UnitString = USBParseGetUnitString(a1, a2, &SourceString);
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      v15 = v8 + v14;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * (v8 + v14), 0x41627845u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)UnitString;
      LODWORD(v31) = a2[4];
      memset(PoolWithTag, 0, 4LL * v14);
      v18 = 0LL;
      if ( !v14 )
      {
LABEL_22:
        if ( (unsigned int)v18 < v15 )
          memset(&v17[v18], 0, 4LL * (v15 - (unsigned int)v18));
        UnitString = BusApiBuildFunctionUnit(a1, a2[3], 2, v11, v30, 1u, (int *)&v31, SourceString, 4 * v11 + 4, v28);
        if ( UnitString >= 0 )
        {
          v23 = v28[0];
          if ( v28[0] )
          {
            v24 = v28[0] + 108;
            *(_QWORD *)(v28[0] + 72) = v28[0] + 108;
            *(_BYTE *)(v23 + 64) = *v17 != 0;
            if ( v13 )
            {
              v25 = v17;
              v26 = v13;
              v27 = v24 - (_QWORD)v17;
              do
              {
                *(_DWORD *)(v23 + 68) |= *v25;
                *(_DWORD *)((char *)v25 + v27) = *v25;
                ++v25;
                --v26;
              }
              while ( v26 );
            }
          }
        }
        ExFreePool(v17);
        return (unsigned int)UnitString;
      }
      while ( 1 )
      {
        v19 = a2[5];
        v20 = 0;
        if ( a2[5] )
          break;
LABEL_21:
        v17[v18] = v20 & 3 | (4 * (v20 & 0xFFFC));
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v14 )
          goto LABEL_22;
      }
      v21 = v19 + v18 * v19;
      while ( 1 )
      {
        v22 = (unsigned int)(v21 - 1);
        if ( *a2 < (unsigned __int64)(v22 + 6) )
          break;
        --v21;
        v20 = a2[v22 + 6] | (unsigned __int16)(v20 << 8);
        if ( !--v19 )
          goto LABEL_21;
      }
      ExFreePool(v17);
      return 3221225473LL;
    }
  }
  return result;
}
