/*
 * XREFs of ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D97D4
 * Callers:
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D96D8 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x1400D9958 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     StLcInitialize @ 0x1400D9F68 (StLcInitialize.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmCrEncInitialize @ 0x1404F9DA4 (SmCrEncInitialize.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StInitialize(__int64 a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *i; // rax
  unsigned int v5; // eax
  __int64 result; // rax

  memset((void *)a1, 0, 0x1180uLL);
  *(_BYTE *)a1 = 2;
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 80, a1 + 1264);
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 1264, 0LL);
  memset((void *)(a1 + 2456), 0, 0x38uLL);
  SmCrEncInitialize(a1 + 2544);
  v2 = *(_DWORD *)(a1 + 2696) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 2704) = 3;
  *(_DWORD *)(a1 + 2696) = v2 | 6;
  memset((void *)(a1 + 2760), 0, 0x518uLL);
  *(_QWORD *)(a1 + 2760) = a1 + 2784;
  *(_QWORD *)(a1 + 2776) = MEMORY[0xFFFFF78000000008] + 600000000LL;
  *(_QWORD *)(a1 + 4088) = 500LL;
  *(_QWORD *)(a1 + 4104) = 1000LL;
  *(_QWORD *)(a1 + 4120) = 3000LL;
  *(_QWORD *)(a1 + 4136) = 5000LL;
  *(_QWORD *)(a1 + 4152) = 10000LL;
  *(_QWORD *)(a1 + 4168) = 20000LL;
  *(_QWORD *)(a1 + 4184) = 50000LL;
  *(_QWORD *)(a1 + 4200) = 100000LL;
  StLcInitialize(a1 + 4064);
  memset((void *)(a1 + 4224), 0, 0xD0uLL);
  v3 = (_QWORD *)(a1 + 4368);
  for ( i = (_QWORD *)(a1 + 4224); i < v3; i += 3 )
  {
    *i = -1LL;
    i[1] = -1LL;
  }
  v5 = *(_DWORD *)(a1 + 4392) & 0xFFFFFFFE;
  *v3 = -1LL;
  *(_DWORD *)(a1 + 4400) = 6;
  *(_DWORD *)(a1 + 4392) = v5 | 6;
  InitializeSListHead((PSLIST_HEADER)(a1 + 2528));
  result = *(_DWORD *)(a1 + 4432) & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 4440) = 7;
  *(_DWORD *)(a1 + 4432) = result;
  return result;
}
