/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1401207D4
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  __int64 v4; // rbx
  unsigned __int16 **v8; // r8
  unsigned __int64 v9; // r10
  int v10; // r9d
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r11
  int v17; // r10d
  _DWORD *v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ebx
  unsigned __int16 *v23; // rdx
  _QWORD v24[40]; // [rsp+20h] [rbp-178h] BYREF

  v4 = a3;
  memset(v24, 0, sizeof(v24));
  v8 = &a2[v4];
  v9 = 0LL;
  v10 = 7;
  v11 = (unsigned __int64)(8 * v4 + 7) >> 3;
  if ( a2 > v8 )
    v11 = 0LL;
  if ( v11 )
  {
    v12 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v12 )
        v13 = 0;
      else
        v13 = **a2 >> 13;
      v14 = v13;
      v15 = 5LL * v13;
      v16 = LODWORD(v24[v15]);
      if ( (unsigned int)v16 < 4 )
      {
        v23 = *a2;
        LODWORD(v24[v15]) = v16 + 1;
        HIDWORD(v24[v15]) += *v23 & 0x1FFF;
        v24[5 * v14 + 1 + v16] = v23;
      }
      ++a2;
      ++v9;
    }
    while ( v9 < v11 );
  }
  v17 = -1;
  v18 = (_DWORD *)&v24[35] + 1;
  v19 = 0;
  do
  {
    v20 = *(v18 - 1);
    if ( v20 > 1 && v19 < v20 * *(_DWORD *)(a1 + 816) - *v18 )
    {
      v19 = v20 * *(_DWORD *)(a1 + 816) - *v18;
      v17 = v10;
    }
    v18 -= 10;
    --v10;
  }
  while ( v10 >= 0 );
  v21 = v24[5 * v17];
  if ( v21 > 4 )
    v21 = 4;
  memmove(a4, &v24[5 * v17 + 1], 8LL * v21);
  return v21;
}
