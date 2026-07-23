/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D580
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011E5E0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x14010FFF8 (MmAreMdlPagesCached.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  bool v7; // zf
  __int64 v8; // xmm1_8
  _BYTE *v9; // r14
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // r15d
  __int64 *v14; // r8
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-48h]
  unsigned int v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  _BYTE v23[16]; // [rsp+60h] [rbp-20h] BYREF

  v18 = 0LL;
  v19 = (__int64 *)&v18;
  v4 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v7 = *(_QWORD *)(a2 + 48) == 0LL;
  v8 = *(_QWORD *)(a3 + 24);
  v21 = *(_OWORD *)(a3 + 8);
  v20 = (unsigned __int8)v4;
  v22 = v8;
  if ( !v7 && !(unsigned int)MmAreMdlPagesCached(*(_QWORD *)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  v9 = v23;
  v10 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a2, (__int64)&v21, a3, (__int64)v23);
  v11 = v21;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = v22;
    while ( 1 )
    {
      if ( v12 == 259 )
        v9 += 16;
      v11 ^= (unsigned __int8)(v11 ^ (v11 + 1));
      LODWORD(v21) = v11;
      if ( (unsigned __int8)v11 >= v20 )
        break;
      LODWORD(v22) = ++v13;
      v12 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a2, (__int64)&v21, a3, (__int64)v9);
      if ( v12 < 0 )
        goto LABEL_12;
    }
    v12 = 0;
  }
LABEL_12:
  if ( (unsigned __int8)v11 != *(_BYTE *)(a3 + 8) )
    *(_BYTE *)(a3 + 8) = v21;
  v14 = v19;
  if ( v19 != (__int64 *)&v18 )
  {
    while ( v14 != (__int64 *)&v18 )
    {
      v16 = v18;
      v18 = (__int64 *)(*v18 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v16 == v14 )
      {
        v18 = 0LL;
        v19 = (__int64 *)&v18;
      }
      else
      {
        *v14 = *v14 & 7 | (8 * ((unsigned __int64)*v14 >> 3) - 8);
      }
      if ( (*((_DWORD *)v16 + 7) & 1) == 0 )
      {
        *((_DWORD *)v16 + 7) |= 1u;
        v17 = v16[2];
        if ( v17 )
          *(_DWORD *)(v17 + 4) = v12;
        else
          *((_DWORD *)v16 + 2) = v12;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v16);
      v14 = v19;
    }
    return 259;
  }
  return (unsigned int)v12;
}
