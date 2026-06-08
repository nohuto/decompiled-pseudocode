/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C001FC9C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001B00 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001FD4 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0015D80 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int *v5; // r12
  bool IsAnyHypervisorPresent; // al
  __int64 v9; // r8
  unsigned int v10; // ebx
  void *v11; // rcx
  PWDF_DRIVER_GLOBALS v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int *v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // r14
  __int128 v18; // xmm0
  __int64 *v19; // r15
  unsigned int v20; // r8d
  _BYTE *v21; // r10
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  char v32[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-3Ch]
  int v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-30h]
  _QWORD v36[2]; // [rsp+48h] [rbp-28h] BYREF
  int v37; // [rsp+58h] [rbp-18h]

  v3 = *(unsigned int **)(a1 + 1080);
  v5 = *(unsigned int **)(a1 + 464);
  v33 = *v3;
  *(_QWORD *)(a2 + 40) = PepIdlePreselect;
  *(_BYTE *)(a2 + 18) = 1;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  *(_BYTE *)(a2 + 16) = 1;
  v10 = 0;
  v11 = PepIdleTest;
  *(_DWORD *)(a2 + 104) = 0;
  *(_QWORD *)(a2 + 56) = PepIdleAvailabilityCheck;
  if ( IsAnyHypervisorPresent )
    v11 = PepIdleVmTest;
  *(_QWORD *)(a2 + 48) = v11;
  v12 = WdfDriverGlobals;
  *(_QWORD *)(a2 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(a2 + 72) = PepIdleExecute;
  *(_QWORD *)(a2 + 80) = PepIdleCompleteV2;
  *(_QWORD *)(a2 + 88) = PepIsHalted;
  *(_QWORD *)(a2 + 96) = PepInitiateWake;
  v13 = WdfFunctions_01015;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_DWORD *)(v9 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v13 + 2504))(v12, qword_1C000DD10, 0LL);
  *(_BYTE *)(a1 + 1105) = 0;
  v36[1] = 0x100000000LL;
  v36[0] = 127LL;
  v37 = 0;
  v34 = 0;
  if ( !v33 )
    goto LABEL_26;
  v14 = a3 + 64;
  v35 = 0LL;
  v15 = (int *)(a2 + 112);
  v16 = 0LL;
  v17 = v3 + 1;
  while ( 1 )
  {
    v18 = *(_OWORD *)(v16 + *(_QWORD *)(a1 + 1088));
    v32[0] = 0;
    *((_OWORD *)v15 + 1) = v18;
    if ( ((*v17 >> 3) & 0xF) == 0 )
    {
      v22 = v17[1];
LABEL_21:
      v15[1] = v22;
      goto LABEL_22;
    }
    if ( !v5 || !*v5 )
      goto LABEL_25;
    v19 = v36;
    v20 = 0;
    v21 = v5 + 4;
    do
    {
      if ( *v21 == ((*v17 >> 3) & 0xF) )
        v19 = (__int64 *)&v5[4 * v20 + 1 + v20];
      ++v20;
      v21 += 20;
    }
    while ( v20 < *v5 );
    if ( v19 != v36 )
      *(_QWORD *)v14 = v19;
    if ( (int)DecodeAcpi2CState(a1, v19, 0LL, v32, v14) < 0 )
      break;
    if ( !*(_QWORD *)v14 && (*v17 & 0x78u) > 8 )
    {
      *v15 |= 0x40000000u;
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    v22 = v17[1];
    if ( v22 != -1 )
      goto LABEL_21;
    v15[1] = 10 * *((unsigned __int16 *)v19 + 7);
LABEL_22:
    *(_BYTE *)(v14 + 65) = (*v17 & 0x200) != 0;
    v14 += 72LL;
    *v15 ^= (*v17 ^ *v15) & 0x78;
    v23 = *v15;
    v15[2] = v17[2];
    *v15 ^= (*v17 ^ v23) & 0x80;
    v24 = *v15 ^ (*v17 ^ *v15) & 0x100;
    *v15 = v24;
    v25 = v24 ^ (*v17 ^ v24) & 1;
    v26 = (unsigned __int8)v32[0];
    *v15 = v25;
    v27 = v25 ^ (*v17 ^ v25) & 2;
    *v15 = v27;
    v28 = *v17 & 4;
    v17 += 3;
    v29 = v28 | v27 & 0x7FFFFFFB | (v26 << 31);
    v30 = v34;
    *v15 = v29;
    v15 += 8;
    v16 = v35 + 16;
    v34 = v30 + 1;
    v35 += 16LL;
    if ( v30 + 1 >= v33 )
      goto LABEL_26;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 8u);
LABEL_25:
  v10 = -1073741823;
LABEL_26:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD10);
  return v10;
}
