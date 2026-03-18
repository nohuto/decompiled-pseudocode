/*
 * XREFs of SmGlobalsInitialize @ 0x14076AA64
 * Callers:
 *     SmInitSystem @ 0x14076A984 (SmInitSystem.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14013EA90 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x1404C69BC (SmRegistrationCtxInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rsi
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v6; // xmm1
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-10h]

  *(_QWORD *)&v8 = 0x32000000190LL;
  *((_QWORD *)&v8 + 1) = 0x640000004B0LL;
  *(_QWORD *)&v9 = 0xC0000000800LL;
  *((_QWORD *)&v9 + 1) = 0xFFFFFFFF00001000uLL;
  memset((void *)a1, 0, 0x2D80uLL);
  *(_QWORD *)&v7 = 27LL;
  *((_QWORD *)&v7 + 1) = SmpStoreMgrCallback;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v7);
  *(_QWORD *)(a1 + 10200) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 10240), 0, 0x28uLL);
  *(_QWORD *)(a1 + 10240) = 0LL;
  *(_QWORD *)(a1 + 10248) = 0LL;
  *(_QWORD *)(a1 + 10256) = 0LL;
  *(_DWORD *)(a1 + 10280) = -1;
  *(_QWORD *)(a1 + 10288) = 0LL;
  *(_DWORD *)(a1 + 10208) = 5;
  memset((void *)(a1 + 10296), 0, 0x230uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 10304);
  v3 = 16LL;
  do
  {
    v2->Count = 0LL;
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  memset((void *)(a1 + 10808), 0, 0x28uLL);
  *(_QWORD *)(a1 + 10808) = 0LL;
  *(_QWORD *)(a1 + 10824) = a1 + 10816;
  *(_QWORD *)(a1 + 10816) = a1 + 10816;
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 10856));
  *(_QWORD *)(a1 + 10872) = 0LL;
  *(_QWORD *)(a1 + 10880) = 0LL;
  *(_QWORD *)(a1 + 10864) = 0LL;
  memset((void *)(a1 + 10888), 0, 0x70uLL);
  *(_WORD *)(a1 + 10896) = 1;
  *(_BYTE *)(a1 + 10898) = 6;
  *(_DWORD *)(a1 + 10900) = 0;
  *(_QWORD *)(a1 + 10912) = a1 + 10904;
  *(_QWORD *)(a1 + 10904) = a1 + 10904;
  memset((void *)(a1 + 11000), 0, 0x70uLL);
  v4 = v8;
  *(_WORD *)(a1 + 11008) = 1;
  result = a1 + 11016;
  v6 = v9;
  *(_BYTE *)(a1 + 11010) = 6;
  *(_DWORD *)(a1 + 11012) = 0;
  *(_QWORD *)(a1 + 11024) = a1 + 11016;
  *(_QWORD *)(a1 + 11016) = a1 + 11016;
  *(_OWORD *)(a1 + 11144) = v4;
  *(_QWORD *)(a1 + 11560) = 0LL;
  *(_OWORD *)(a1 + 11160) = v6;
  return result;
}
