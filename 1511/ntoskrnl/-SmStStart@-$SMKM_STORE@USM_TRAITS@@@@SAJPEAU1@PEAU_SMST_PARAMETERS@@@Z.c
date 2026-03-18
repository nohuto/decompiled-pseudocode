/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400F9010
 * Callers:
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperStart @ 0x1400F93C8 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400F9450 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     SmKmFileInfoInit @ 0x14054F7D4 (SmKmFileInfoInit.c)
 *     SmKmFileInfoDuplicate @ 0x14065A2A4 (SmKmFileInfoDuplicate.c)
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
  *(_QWORD *)(a1 + 5160) = a2[4];
  v7 = *((_DWORD *)a2 + 10);
  *(_DWORD *)(a1 + 5168) = v7;
  if ( !v7 )
    *(_DWORD *)(a1 + 5168) = SmStNormalPriority;
  *(_BYTE *)(a1 + 4484) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 4485) ^= (*(_BYTE *)(a1 + 4485) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v8 = *(_BYTE *)(a1 + 4485) ^ (*(_BYTE *)(a1 + 4485) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 4485) = v8;
  *(_DWORD *)(a1 + 4672) = v2[2];
  if ( (unsigned __int8)*v2 )
  {
    SmKmFileInfoInit(a1 + 4680);
    *(_DWORD *)(a1 + 4676) = v2[3];
    v12 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 4680, *((_QWORD *)v2 + 6));
LABEL_36:
    if ( (int)result < 0 )
      return result;
    goto LABEL_21;
  }
  if ( (v8 & 4) != 0 )
  {
    memset((void *)(a1 + 4696), 0, 0x78uLL);
    *(_WORD *)(a1 + 4704) = 0;
    *(_BYTE *)(a1 + 4706) = 6;
    *(_DWORD *)(a1 + 4708) = 0;
    *(_QWORD *)(a1 + 4720) = a1 + 4712;
    *(_QWORD *)(a1 + 4712) = a1 + 4712;
    *(_WORD *)(a1 + 4728) = 0;
    *(_BYTE *)(a1 + 4730) = 6;
    *(_DWORD *)(a1 + 4732) = 0;
    *(_QWORD *)(a1 + 4744) = a1 + 4736;
    *(_QWORD *)(a1 + 4736) = a1 + 4736;
    memset((void *)(a1 + 4816), 0, 0x78uLL);
    *(_WORD *)(a1 + 4824) = 0;
    *(_BYTE *)(a1 + 4826) = 6;
    *(_DWORD *)(a1 + 4828) = 0;
    *(_QWORD *)(a1 + 4840) = a1 + 4832;
    *(_QWORD *)(a1 + 4832) = a1 + 4832;
    *(_WORD *)(a1 + 4848) = 0;
    *(_BYTE *)(a1 + 4850) = 6;
    *(_DWORD *)(a1 + 4852) = 0;
    *(_QWORD *)(a1 + 4864) = a1 + 4856;
    *(_QWORD *)(a1 + 4856) = a1 + 4856;
    memset((void *)(a1 + 4936), 0, 0x50uLL);
    *(_WORD *)(a1 + 4944) = 0;
    *(_BYTE *)(a1 + 4946) = 6;
    *(_DWORD *)(a1 + 4948) = 0;
    *(_QWORD *)(a1 + 4960) = a1 + 4952;
    *(_QWORD *)(a1 + 4952) = a1 + 4952;
    *(_WORD *)(a1 + 4968) = 0;
    *(_BYTE *)(a1 + 4970) = 6;
    *(_DWORD *)(a1 + 4972) = 0;
    *(_QWORD *)(a1 + 4984) = a1 + 4976;
    *(_QWORD *)(a1 + 4976) = a1 + 4976;
    *(_QWORD *)(a1 + 5000) = a1 + 4992;
    *(_QWORD *)(a1 + 4992) = 0LL;
    *(_QWORD *)(a1 + 5008) = 0LL;
    result = SmKmStoreHelperStart(a1 + 4696);
    if ( (int)result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 4816);
    if ( (int)result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 4485) & 8) != 0 )
      *(_QWORD *)(a1 + 4800) = &unk_140305230;
    *(_QWORD *)(a1 + 4928) = &dword_140305248;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 4688) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 4672), 1, 0LL) )
      return 3221225626LL;
    *(_BYTE *)(a1 + 4485) |= 0x10u;
  }
  v11 = v2[3];
  *(_DWORD *)(a1 + 4676) = v11;
  v12 = 0;
  v13 = (unsigned int)(8 * v11);
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x67526D73u);
  if ( !v14 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 4680) = v14;
  memset(v14, 0, (unsigned int)v13);
  if ( (*(_BYTE *)(a1 + 4485) & 4) == 0 )
  {
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 5048));
    goto LABEL_36;
  }
LABEL_21:
  memset(v18, 0, sizeof(v18));
  v15 = *(_DWORD *)(a1 + 4676);
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
    if ( (*(_BYTE *)(a1 + 4485) & 4) == 0 )
      goto LABEL_28;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(a1, SMKM_STORE<SM_TRAITS>::SmStReadThread, a1 + 4936);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
LABEL_28:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 4664);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
