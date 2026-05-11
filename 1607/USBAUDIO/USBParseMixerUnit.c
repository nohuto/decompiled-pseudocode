/*
 * XREFs of USBParseMixerUnit @ 0x1C001E9E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008380 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C001B3B8 (BusApiBuildFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C001C474 (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C001E404 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C001E538 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C001E65C (USBParseGetUnitString.c)
 *     USBParseBuildSourceIdArray @ 0x1C001E7E4 (USBParseBuildSourceIdArray.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rcx
  unsigned __int8 *v6; // r15
  __int64 v7; // rbx
  int UnitString; // edi
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r8d
  unsigned int i; // eax
  int v13; // r8d
  int v14; // r12d
  unsigned __int64 v15; // rdx
  unsigned int v16; // r13d
  unsigned __int64 v17; // rax
  int v18; // r14d
  __int64 result; // rax
  unsigned int v20; // r12d
  void *v21; // rdi
  char *v22; // r14
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // r15
  int *v26; // r15
  __int64 v27; // r13
  int v28; // r8d
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // al
  PCWSTR SourceString[3]; // [rsp+50h] [rbp-18h] BYREF
  char *PoolWithTag; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+60h] BYREF

  v37 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v4 = *(_QWORD *)(v37 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v37 + 40) + 2LL);
  if ( *a2 < 5u )
    return 3221225473LL;
  if ( (unsigned __int64)&a2[*a2] > v4 )
    return 3221225473LL;
  v5 = a2[4];
  if ( (unsigned __int64)&a2[v5 + 9] > v4 )
    return 3221225473LL;
  v6 = &a2[v5 + 5];
  v7 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, SourceString);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  v9 = *(_WORD *)(v6 + 1);
  if ( v9 )
  {
    v10 = 0;
    v11 = v9;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( _bittest(&v11, i) )
        ++v10;
    }
    if ( v10 != *v6 )
      UnitString = -1073741438;
  }
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  v13 = a2[4];
  v14 = 0;
  v15 = *a2;
  LODWORD(PoolWithTag) = 0;
  if ( v15 < v13 + 1 + 9LL )
    return 3221225473LL;
  v16 = v15 - v13 - 10;
  v17 = (unsigned __int64)&v6[v16 + 3];
  v36 = v16;
  if ( v17 >= v4 || v17 <= (unsigned __int64)a2 || (__int64)v15 < (__int64)&v6[v16 - (_QWORD)a2 + 4] )
    return 3221225473LL;
  v18 = 0;
  if ( !v13 )
  {
LABEL_20:
    v20 = ((v14 * (unsigned int)*v6) >> 3) + ((((_BYTE)v14 * *v6) & 7) != 0);
    if ( v20 <= v16 )
    {
      v22 = (char *)(v6 + 4);
    }
    else
    {
      v21 = *(void **)(a1 + 8);
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x41627845u);
      v22 = PoolWithTag;
      if ( PoolWithTag )
        UnitString = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v21);
      else
        UnitString = -1073741670;
      if ( UnitString < 0 )
        return (unsigned int)-1073741670;
      memset(v22, 0, v20);
      if ( v16 )
      {
        v23 = v36;
        v24 = v22;
        v25 = v6 - (unsigned __int8 *)v22;
        do
        {
          *v24 = v24[v25 + 4];
          ++v24;
          --v23;
        }
        while ( v23 );
      }
    }
    v26 = USBParseBuildSourceIdArray(a2[4], a2 + 5);
    if ( v26 )
    {
      v27 = v37;
      v28 = a2[3];
      LODWORD(v36) = 0;
      LODWORD(PoolWithTag) = 0;
      UnitString = USBParseCountOutputChannelsForUnit(*(unsigned __int16 **)(v37 + 40), *(char **)(v37 + 48), v28, &v36);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(
                       *(unsigned __int16 **)(v27 + 40),
                       *(char **)(v27 + 48),
                       a2[3],
                       &PoolWithTag);
        if ( UnitString >= 0 )
        {
          v29 = a2[4];
          UnitString = BusApiBuildFunctionUnit(
                         a1,
                         a2[3],
                         5,
                         v36,
                         (int)PoolWithTag,
                         a2[4],
                         v26,
                         SourceString[0],
                         v20,
                         &v37);
          if ( UnitString >= 0 )
          {
            v30 = v37;
            if ( v37 )
            {
              *(_DWORD *)(v37 + 68) = v20;
              *(_QWORD *)(v30 + 72) = v30 + 12 * (v29 + 8);
              if ( v20 )
              {
                v31 = v20;
                do
                {
                  v32 = *v22++;
                  *(_BYTE *)(v7 + *(_QWORD *)(v30 + 72)) = v32;
                  ++v7;
                  --v31;
                }
                while ( v31 );
              }
            }
          }
        }
      }
      ExFreePool(v26);
    }
    return (unsigned int)UnitString;
  }
  while ( 1 )
  {
    result = USBParseCountOutputChannelsForUnit(
               *(unsigned __int16 **)(v37 + 40),
               *(char **)(v37 + 48),
               a2[v18 + 5],
               &PoolWithTag);
    UnitString = result;
    if ( (int)result < 0 )
      return result;
    v14 += (int)PoolWithTag;
    if ( ++v18 >= (unsigned int)a2[4] )
      goto LABEL_20;
  }
}
