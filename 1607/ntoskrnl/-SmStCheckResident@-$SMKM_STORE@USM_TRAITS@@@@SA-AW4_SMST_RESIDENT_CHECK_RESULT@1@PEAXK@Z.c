/*
 * XREFs of ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14011EC58
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011EA60 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_S.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckResident(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  int v7; // ecx
  _QWORD *i; // rdx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  memset(v10, 0, 0x20uLL);
  v10[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v10[2] = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v4 = v2 + 4095 + (a1 & 0xFFF);
  v5 = 0;
  v6 = v4 >> 12;
  if ( (int)MmQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 16LL * (unsigned int)v6, 0LL, 0) < 0 )
  {
    return 2;
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      for ( i = &v10[1]; (*i & 1) != 0 || (*i & 0xC00000LL) == 0x400000; i += 2 )
      {
        if ( ++v7 >= (unsigned int)v6 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v5;
}
