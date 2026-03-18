/*
 * XREFs of ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1400F8830
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F86AC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400F8A70 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

unsigned __int64 __fastcall ST_STORE<SM_TRAITS>::StDmInitialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  memset((void *)a1, 0, 0x4A0uLL);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultInit(a1 + 24, 1LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultInit(a1 + 88, 1LL);
  memset((void *)(a1 + 776), 0, 0x60uLL);
  *(_QWORD *)(a1 + 848) = a1 + 840;
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_DWORD *)(a1 + 828) = (__int64)(KeMaximumIncrement
                                  * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_DWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 904) = a2;
  memset((void *)(a1 + 912), 0, 0x60uLL);
  *(_QWORD *)(a1 + 984) = a1 + 976;
  *(_QWORD *)(a1 + 976) = 0LL;
  *(_DWORD *)(a1 + 964) = (__int64)(KeMaximumIncrement
                                  * (unsigned __int64)(unsigned int)((__int64)MEMORY[0xFFFFF78000000320] >> 12)) >> 17;
  *(_QWORD *)(a1 + 1024) = 0x20000000LL;
  v4 = 6LL;
  *(_QWORD *)(a1 + 1016) = 0x20000000LL;
  v5 = (_QWORD *)(a1 + 504);
  *(_DWORD *)(a1 + 1008) = 1;
  *(_QWORD *)(a1 + 1040) = a2;
  *(_QWORD *)(a1 + 888) = 1LL;
  *(_QWORD *)(a1 + 896) = 0x1FFFFFFFLL;
  *(_QWORD *)(a1 + 880) = 1LL;
  *(_QWORD *)(a1 + 1032) = 0x3FFFFFFFLL;
  *(_QWORD *)(a1 + 16) = a1 + 776;
  *(_QWORD *)(a1 + 80) = a1 + 912;
  do
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    *(_DWORD *)v5 = -1;
    v5 += 3;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)(a1 + 648);
  v7 = 8LL;
  do
  {
    *v6 = -1;
    v6 += 4;
    --v7;
  }
  while ( v7 );
  memset((void *)(a1 + 248), 0, 0x50uLL);
  *(_DWORD *)(a1 + 248) = 0;
  v8 = *(_DWORD *)(a1 + 328) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 336) = 4;
  *(_DWORD *)(a1 + 224) = 5;
  *(_DWORD *)(a1 + 328) = v8 | 6;
  v9 = *(_DWORD *)(a1 + 216) & 0xFFFFFFFE;
  *(_BYTE *)(a1 + 128) = 2;
  *(_DWORD *)(a1 + 464) = -10001;
  *(_DWORD *)(a1 + 216) = v9 | 6;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  result = (unsigned __int64)((unsigned __int128)(10000 * PerformanceFrequency.QuadPart * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
  *(_DWORD *)(a1 + 448) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  return result;
}
