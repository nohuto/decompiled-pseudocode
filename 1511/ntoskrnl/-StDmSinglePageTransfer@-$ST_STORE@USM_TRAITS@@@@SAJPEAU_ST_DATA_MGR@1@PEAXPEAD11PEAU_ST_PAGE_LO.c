/*
 * XREFs of ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F324
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14010F674 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x140204F78 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 * Callees:
 *     SmMapPage @ 0x14010E5A4 (SmMapPage.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F414 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  __int64 v8; // rbp
  int v11; // edx
  __int64 v12; // rbx
  BOOL v13; // eax
  BOOL v14; // edi
  char *v15; // rdx
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  signed __int32 v19; // ecx
  bool v20; // zf
  signed __int32 v21; // eax
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  int v24[10]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  v8 = a3;
  if ( !a4 || (a4 & 1) != 0 )
  {
    v13 = 0;
    v11 = 0;
    v12 = 0LL;
    if ( (a4 & 1) == 0 )
      goto LABEL_5;
    v8 = a3 | 2;
  }
  else
  {
    v11 = 1;
    v12 = a4;
    v13 = *(_BYTE *)(a1 + 128) == 1;
  }
  if ( v13 )
  {
    _m_prefetchw((const void *)(v12 + 8));
    v19 = *(_DWORD *)(v12 + 8);
    if ( (v19 & 0x40000) == 0 )
    {
      do
      {
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v19 | 0x20000, v19);
        v20 = v19 == v21;
        v19 = v21;
      }
      while ( !v20 && (v21 & 0x40000) == 0 );
    }
    if ( (v19 & 0x40000) != 0 )
      return (unsigned int)-1073741431;
    v7 = 1;
  }
LABEL_5:
  v14 = 0;
  if ( v11 )
  {
    v15 = (char *)SmMapPage((__int64)a5, v24);
    v14 = (*(_DWORD *)(v12 + 8) & 0x8000000) != 0;
  }
  else
  {
    v15 = a5;
    v24[0] = 4096;
  }
  if ( v15 )
  {
    v16 = (unsigned __int64)&v15[4096 * *(unsigned __int16 *)(a6 + 6)];
    if ( v14 )
      v16 |= 1uLL;
    v17 = ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, v8, v16, a6, a7, v24[0]);
  }
  else
  {
    v17 = -1073741670;
  }
  if ( v7 )
  {
    _m_prefetchw((const void *)(v12 + 8));
    v22 = *(_DWORD *)(v12 + 8);
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v22 & 0xFFFDFFFF, v22);
    }
    while ( v23 != v22 );
  }
  return v17;
}
