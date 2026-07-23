/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28
 * Callers:
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003E04 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperStart @ 0x140004EFC (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004F84 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmKmFileInfoInit @ 0x140582070 (SmKmFileInfoInit.c)
 *     SmKmFileInfoDuplicate @ 0x140697F60 (SmKmFileInfoDuplicate.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, int **a2)
{
  int *v2; // r14
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  char v8; // cl
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  int v11; // eax
  int v12; // edi
  SIZE_T v13; // rbx
  PVOID v14; // rax
  int v15; // eax
  __int128 v16; // xmm0
  bool v17; // zf
  _OWORD v18[4]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( (unsigned __int8)v5 >= 2u )
    return 3221225485LL;
  if ( v2[5] )
    return 3221225485LL;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return 3221225485LL;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)v5 == 1 && (v5 & 0x100) != 0 )
    return 3221225659LL;
  if ( (v5 & 0x60000) == 0x20000 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 6560) = a2[4];
  v7 = *((_DWORD *)a2 + 14);
  *(_DWORD *)(a1 + 6568) = v7;
  if ( !v7 )
    *(_DWORD *)(a1 + 6568) = SmStNormalPriority;
  *(_BYTE *)(a1 + 5860) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 5861) ^= (*(_BYTE *)(a1 + 5861) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v8 = *(_BYTE *)(a1 + 5861) ^ (*(_BYTE *)(a1 + 5861) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 5861) = v8;
  *(_DWORD *)(a1 + 6048) = v2[2];
  if ( (unsigned __int8)*v2 )
  {
    SmKmFileInfoInit(a1 + 6056);
    *(_DWORD *)(a1 + 6052) = v2[3];
    v12 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6056, *((_QWORD *)v2 + 6));
LABEL_36:
    if ( (int)result < 0 )
      return result;
    goto LABEL_21;
  }
  if ( (v8 & 4) != 0 )
  {
    memset((void *)(a1 + 6072), 0, 0x80uLL);
    *(_WORD *)(a1 + 6080) = 0;
    *(_BYTE *)(a1 + 6082) = 6;
    *(_DWORD *)(a1 + 6084) = 0;
    *(_QWORD *)(a1 + 6096) = a1 + 6088;
    *(_QWORD *)(a1 + 6088) = a1 + 6088;
    *(_WORD *)(a1 + 6104) = 0;
    *(_BYTE *)(a1 + 6106) = 6;
    *(_DWORD *)(a1 + 6108) = 0;
    *(_QWORD *)(a1 + 6120) = a1 + 6112;
    *(_QWORD *)(a1 + 6112) = a1 + 6112;
    memset((void *)(a1 + 6200), 0, 0x80uLL);
    *(_WORD *)(a1 + 6208) = 0;
    *(_BYTE *)(a1 + 6210) = 6;
    *(_DWORD *)(a1 + 6212) = 0;
    *(_QWORD *)(a1 + 6224) = a1 + 6216;
    *(_QWORD *)(a1 + 6216) = a1 + 6216;
    *(_WORD *)(a1 + 6232) = 0;
    *(_BYTE *)(a1 + 6234) = 6;
    *(_DWORD *)(a1 + 6236) = 0;
    *(_QWORD *)(a1 + 6248) = a1 + 6240;
    *(_QWORD *)(a1 + 6240) = a1 + 6240;
    memset((void *)(a1 + 6328), 0, 0x50uLL);
    *(_WORD *)(a1 + 6336) = 0;
    *(_BYTE *)(a1 + 6338) = 6;
    *(_DWORD *)(a1 + 6340) = 0;
    *(_QWORD *)(a1 + 6352) = a1 + 6344;
    *(_QWORD *)(a1 + 6344) = a1 + 6344;
    *(_WORD *)(a1 + 6360) = 0;
    *(_BYTE *)(a1 + 6362) = 6;
    *(_DWORD *)(a1 + 6364) = 0;
    *(_QWORD *)(a1 + 6376) = a1 + 6368;
    *(_QWORD *)(a1 + 6368) = a1 + 6368;
    *(_QWORD *)(a1 + 6392) = a1 + 6384;
    *(_QWORD *)(a1 + 6384) = 0LL;
    *(_QWORD *)(a1 + 6400) = 0LL;
    *(_QWORD *)(a1 + 6424) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6072, a2[6]);
    if ( (int)result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6200, a2[6]);
    if ( (int)result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 5861) & 8) != 0 )
      *(_QWORD *)(a1 + 6184) = &unk_1403BF3C0;
    *(_QWORD *)(a1 + 6320) = &dword_1403BF3D8;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6064) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6048), 1, 0) )
      return 3221225626LL;
    *(_BYTE *)(a1 + 5861) |= 0x10u;
  }
  v11 = v2[3];
  *(_DWORD *)(a1 + 6052) = v11;
  v12 = 0;
  v13 = (unsigned int)(8 * v11);
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x67526D73u);
  if ( !v14 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 6056) = v14;
  memset(v14, 0, (unsigned int)v13);
  if ( (*(_BYTE *)(a1 + 5861) & 4) == 0 )
  {
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 6448));
    goto LABEL_36;
  }
LABEL_21:
  memset(v18, 0, sizeof(v18));
  v15 = *(_DWORD *)(a1 + 6052);
  v16 = *(_OWORD *)v2;
  LODWORD(v18[1]) = v12;
  *((_QWORD *)&v18[1] + 1) = a1;
  v18[0] = v16;
  HIDWORD(v18[0]) = v15;
  *(_QWORD *)&v18[3] = a2[3];
  if ( (unsigned __int8)*v2 )
    *((_QWORD *)&v18[3] + 1) = *((_QWORD *)v2 + 8);
  *(_QWORD *)&v18[2] = a2[1];
  v17 = *((_DWORD *)a2 + 4) == 0;
  DWORD2(v18[2]) = *((_DWORD *)a2 + 4);
  LODWORD(v18[0]) ^= (LOWORD(v18[0]) ^ (v17 << 11)) & 0x800;
  result = ST_STORE<SM_TRAITS>::StStart(a1, v18);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 5861) & 4) == 0 )
      goto LABEL_28;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
               a1,
               a2[6],
               SMKM_STORE<SM_TRAITS>::SmStReadThread,
               a1 + 6328);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
LABEL_28:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6040);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
