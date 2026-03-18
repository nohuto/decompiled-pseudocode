/*
 * XREFs of KsepDbCacheReadDevice @ 0x140578E70
 * Callers:
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14069BBC4 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x140577984 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x140578424 (KseShimDatabaseOpen.c)
 *     KsepCacheDeviceFree @ 0x140578FDC (KsepCacheDeviceFree.c)
 *     KsepDbReadKFlag @ 0x1405C6B20 (KsepDbReadKFlag.c)
 *     KsepCacheDeviceInsertData @ 0x1405C6DC8 (KsepCacheDeviceInsertData.c)
 *     SdbTagRefToTagID @ 0x1405C7044 (SdbTagRefToTagID.c)
 *     KsepDbReadKData @ 0x14069C470 (KsepDbReadKData.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(wchar_t *a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int inserted; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int DatabaseMatch; // eax
  __int64 v16; // rsi
  unsigned int i; // eax
  unsigned int v18; // r15d
  unsigned int j; // eax
  unsigned int v20; // r15d
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+4Ch] [rbp-24h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  unsigned int v25; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    inserted = KsepStringDuplicate((__int64)(v5 + 40), a1);
    if ( inserted >= 0 )
    {
      inserted = KseShimDatabaseOpen(&v26, v7, v9, v10);
      if ( inserted >= 0 )
      {
        inserted = 0;
        DatabaseMatch = SdbGetDatabaseMatchEx(v26, 1, a1, v13, 0LL, 0LL, (__int64)&KsepMatchMachineInfo);
        if ( DatabaseMatch && (unsigned int)SdbTagRefToTagID(v26, DatabaseMatch, &v27, &v25) )
        {
          v16 = v27;
          for ( i = SdbFindFirstTag(v27, v25, 28691); ; i = SdbFindNextTag(v16, v25, v18) )
          {
            v18 = i;
            if ( !i )
              break;
            inserted = KsepDbReadKFlag(v16, i, &v21);
            if ( inserted < 0 )
              goto LABEL_6;
            inserted = KsepCacheDeviceInsertData(v5, v21, v24, v22, v23);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          for ( j = SdbFindFirstTag(v16, v25, 28712); ; j = SdbFindNextTag(v16, v25, v20) )
          {
            v20 = j;
            if ( !j )
              break;
            inserted = KsepDbReadKData(v16, j, &v21);
            if ( inserted < 0 )
              goto LABEL_6;
            inserted = KsepCacheDeviceInsertData(v5, v21, v24, v22, v23);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          *a2 = v5;
          v5 = 0LL;
        }
        else
        {
          inserted = -1073741275;
        }
      }
LABEL_6:
      if ( v26 )
        KseShimDatabaseClose(v26, v11, v12, v13);
    }
    if ( v5 )
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
