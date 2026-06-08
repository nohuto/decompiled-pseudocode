/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x1C0015F3C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002E50 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0005D78 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0015380 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int *v5; // r12
  bool IsAnyHypervisorPresent; // al
  __int64 v9; // r8
  unsigned int v10; // ebx
  void *v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // r14
  __int128 v16; // xmm0
  __int64 *v17; // r15
  unsigned int v18; // r8d
  _BYTE *v19; // r10
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  char v29[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-3Ch]
  int v31; // [rsp+38h] [rbp-38h]
  __int64 v32; // [rsp+40h] [rbp-30h]
  _QWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+58h] [rbp-18h]

  v3 = *(unsigned int **)(a1 + 1088);
  v5 = *(unsigned int **)(a1 + 472);
  v30 = *v3;
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
  *(_QWORD *)(a2 + 64) = PepIdlePreExecuteV2;
  *(_QWORD *)(a2 + 72) = PepIdleExecute;
  *(_QWORD *)(a2 + 80) = PepIdleCompleteV2;
  *(_QWORD *)(a2 + 88) = PepIsHalted;
  *(_QWORD *)(a2 + 96) = PepInitiateWake;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_DWORD *)(v9 + 40) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A0,
    0LL);
  *(_BYTE *)(a1 + 1113) = 0;
  v33[1] = 0x100000000LL;
  v33[0] = 127LL;
  v34 = 0;
  v31 = 0;
  if ( !v30 )
    goto LABEL_26;
  v12 = a3 + 64;
  v32 = 0LL;
  v13 = a2 + 112;
  v14 = 0LL;
  v15 = v3 + 1;
  while ( 1 )
  {
    v16 = *(_OWORD *)(v14 + *(_QWORD *)(a1 + 1096));
    v29[0] = 0;
    *(_OWORD *)(v13 + 16) = v16;
    if ( ((*v15 >> 3) & 0xF) == 0 )
    {
      v20 = v15[1];
LABEL_21:
      *(_DWORD *)(v13 + 4) = v20;
      goto LABEL_22;
    }
    if ( !v5 || !*v5 )
      goto LABEL_25;
    v17 = v33;
    v18 = 0;
    v19 = v5 + 4;
    do
    {
      if ( *v19 == ((*v15 >> 3) & 0xF) )
        v17 = (__int64 *)&v5[4 * v18 + 1 + v18];
      ++v18;
      v19 += 20;
    }
    while ( v18 < *v5 );
    if ( v17 != v33 )
      *(_QWORD *)v12 = v17;
    if ( (int)DecodeAcpi2CState(a1, v17, 0LL, v29, v12) < 0 )
      break;
    if ( !*(_QWORD *)v12 && (*v15 & 0x78u) > 8 )
    {
      *(_DWORD *)v13 |= 0x40000000u;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    v20 = v15[1];
    if ( v20 != -1 )
      goto LABEL_21;
    *(_DWORD *)(v13 + 4) = 10 * *((unsigned __int16 *)v17 + 7);
LABEL_22:
    *(_BYTE *)(v12 + 65) = (*v15 & 0x200) != 0;
    v12 += 72LL;
    *(_DWORD *)v13 ^= (*(_DWORD *)v13 ^ *v15) & 0x78;
    *(_DWORD *)(v13 + 8) = v15[2];
    *(_DWORD *)v13 ^= (*(_DWORD *)v13 ^ *v15) & 0x80;
    v21 = *(_DWORD *)v13 ^ (*v15 ^ *(_DWORD *)v13) & 0x100;
    *(_DWORD *)v13 = v21;
    v22 = v21 ^ (*v15 ^ v21) & 1;
    v23 = (unsigned __int8)v29[0];
    *(_DWORD *)v13 = v22;
    v24 = v22 ^ (*v15 ^ v22) & 2;
    *(_DWORD *)v13 = v24;
    v25 = *v15 & 4;
    v15 += 3;
    v26 = v25 | v24 & 0x7FFFFFFB | (v23 << 31);
    v27 = v31;
    *(_DWORD *)v13 = v26;
    v13 += 32LL;
    v14 = v32 + 16;
    v31 = v27 + 1;
    v32 += 16LL;
    if ( v27 + 1 >= v30 )
      goto LABEL_26;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 8u);
LABEL_25:
  v10 = -1073741823;
LABEL_26:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A0);
  return v10;
}
