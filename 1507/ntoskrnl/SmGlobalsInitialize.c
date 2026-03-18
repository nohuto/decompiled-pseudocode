/*
 * XREFs of SmGlobalsInitialize @ 0x1407DEC20
 * Callers:
 *     SmInitSystem @ 0x1407DEB40 (SmInitSystem.c)
 * Callees:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14016C2EC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x14055D368 (SmRegistrationCtxInitialize.c)
 *     SmcCacheManagerInitialize @ 0x1407DEDAC (SmcCacheManagerInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-20h]
  __int128 v7; // [rsp+40h] [rbp-10h]

  *(_QWORD *)&v6 = 0x32000000190LL;
  *((_QWORD *)&v6 + 1) = 0x640000004B0LL;
  *(_QWORD *)&v7 = 0xC0000000800LL;
  *((_QWORD *)&v7 + 1) = 0xFFFFFFFF00001000uLL;
  memset((void *)a1, 0, 0x2D60uLL);
  *(_QWORD *)&v5 = 27LL;
  *((_QWORD *)&v5 + 1) = SmpStoreMgrCallback;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v5);
  *(_QWORD *)(a1 + 10184) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 10224), 0, 0x28uLL);
  *(_QWORD *)(a1 + 10224) = 0LL;
  *(_QWORD *)(a1 + 10232) = 0LL;
  *(_QWORD *)(a1 + 10240) = 0LL;
  *(_DWORD *)(a1 + 10264) = -1;
  *(_QWORD *)(a1 + 10272) = 0LL;
  *(_DWORD *)(a1 + 10192) = 5;
  SmcCacheManagerInitialize(a1 + 10280);
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 10840));
  *(_QWORD *)(a1 + 10856) = 0LL;
  *(_QWORD *)(a1 + 10864) = 0LL;
  *(_QWORD *)(a1 + 10848) = 0LL;
  memset((void *)(a1 + 10872), 0, 0x68uLL);
  *(_WORD *)(a1 + 10880) = 1;
  *(_BYTE *)(a1 + 10882) = 6;
  *(_DWORD *)(a1 + 10884) = 0;
  *(_QWORD *)(a1 + 10896) = a1 + 10888;
  *(_QWORD *)(a1 + 10888) = a1 + 10888;
  memset((void *)(a1 + 10976), 0, 0x68uLL);
  v2 = v6;
  *(_DWORD *)(a1 + 10988) = 0;
  result = a1 + 10992;
  v4 = v7;
  *(_WORD *)(a1 + 10984) = 1;
  *(_BYTE *)(a1 + 10986) = 6;
  *(_QWORD *)(a1 + 11000) = a1 + 10992;
  *(_QWORD *)(a1 + 10992) = a1 + 10992;
  *(_OWORD *)(a1 + 11112) = v2;
  *(_QWORD *)(a1 + 11528) = 0LL;
  *(_OWORD *)(a1 + 11128) = v4;
  return result;
}
