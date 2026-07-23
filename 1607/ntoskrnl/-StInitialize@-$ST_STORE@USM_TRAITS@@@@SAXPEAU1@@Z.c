/*
 * XREFs of ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400023E8
 * Callers:
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400022E0 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14000256C (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     StLcInitialize @ 0x140002CCC (StLcInitialize.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmCrEncInitialize @ 0x1403E4DF4 (SmCrEncInitialize.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StInitialize(__int64 a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *i; // rax
  unsigned int v5; // eax
  __int64 result; // rax

  memset((void *)a1, 0, 0x16E0uLL);
  *(_BYTE *)a1 = 2;
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 80, a1 + 1968);
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 1968, 0LL);
  memset((void *)(a1 + 3864), 0, 0x38uLL);
  SmCrEncInitialize(a1 + 3952);
  v2 = *(_DWORD *)(a1 + 4104) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 4112) = 3;
  *(_DWORD *)(a1 + 4104) = v2 | 6;
  memset((void *)(a1 + 4168), 0, 0x518uLL);
  *(_QWORD *)(a1 + 4168) = a1 + 4192;
  *(_QWORD *)(a1 + 4184) = MEMORY[0xFFFFF78000000008] + 600000000LL;
  *(_QWORD *)(a1 + 5496) = 500LL;
  *(_QWORD *)(a1 + 5512) = 1000LL;
  *(_QWORD *)(a1 + 5528) = 3000LL;
  *(_QWORD *)(a1 + 5544) = 5000LL;
  *(_QWORD *)(a1 + 5560) = 10000LL;
  *(_QWORD *)(a1 + 5576) = 20000LL;
  *(_QWORD *)(a1 + 5592) = 50000LL;
  *(_QWORD *)(a1 + 5608) = 100000LL;
  StLcInitialize(a1 + 5472);
  memset((void *)(a1 + 5632), 0, 0xB8uLL);
  v3 = (_QWORD *)(a1 + 5752);
  for ( i = (_QWORD *)(a1 + 5632); i < v3; i += 3 )
  {
    *i = -1LL;
    i[1] = -1LL;
  }
  v5 = *(_DWORD *)(a1 + 5776) & 0xFFFFFFFE;
  *v3 = -1LL;
  *(_DWORD *)(a1 + 5784) = 5;
  *(_DWORD *)(a1 + 5776) = v5 | 6;
  InitializeSListHead((PSLIST_HEADER)(a1 + 3936));
  result = *(_DWORD *)(a1 + 5816) & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 5824) = 6;
  *(_DWORD *)(a1 + 5816) = result;
  return result;
}
