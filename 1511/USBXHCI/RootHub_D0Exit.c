/*
 * XREFs of RootHub_D0Exit @ 0x1C00048C0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0004F40 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_HandleResumedPorts @ 0x1C0004780 (RootHub_HandleResumedPorts.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0005480 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  int v6; // edx
  int v7; // r15d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  int v10; // r15d
  int v11; // r13d
  __int64 v12; // r14
  unsigned int *v13; // rax
  int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // rax
  char v17; // cl
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // rbx
  int *v21; // rdi
  KIRQL v22; // al
  __int64 v23; // rbx
  _DWORD *v24; // rdi
  KIRQL v25; // al
  __int64 v26; // rdi
  unsigned int *v27; // rax
  unsigned int v28; // ebx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  signed __int32 v41[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+48h] [rbp-60h]
  unsigned int *v44; // [rsp+50h] [rbp-58h]
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  int v48; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  RootHub_HandleResumedPorts(a1);
  v7 = 2;
  v48 = 2;
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_24;
  v8 = 0;
  v9 = a3 - 3;
  v45 = a3 - 3;
  do
  {
    if ( v3 == 5 )
      goto LABEL_18;
    v10 = 0;
    v11 = -1073741823;
    v12 = 16LL * v8;
    v13 = (unsigned int *)(v12 + *(_QWORD *)(a1 + 40));
    v44 = v13;
    v14 = -1;
    while ( 1 )
    {
      v15 = *v13;
      if ( *v13 == v14 )
        goto LABEL_35;
      v16 = *(_QWORD *)(a1 + 48);
      v14 = v15;
      v43 = 56LL * v8;
      v17 = *(_BYTE *)(v16 + v43 + 1);
      if ( v17 == 2 )
      {
        v18 = 229;
        goto LABEL_8;
      }
      if ( v17 != 3 )
        break;
      v18 = 230;
LABEL_8:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        v18,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v8 + 1,
        v15);
      v19 = (v15 >> 5) & 0xF;
      if ( v19 == 3
        || (v15 & 0x20203) != 0x203
        || v19 == 4
        || v19 == 15
        || v19 == 6
        || (unsigned int)(v19 - 9) <= 2
        || (v15 & 0x10) != 0
        || *(_BYTE *)(*(_QWORD *)(a1 + 48) + v43 + 6) )
      {
        v11 = 0;
        goto LABEL_11;
      }
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        232,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v8 + 1,
        v10);
LABEL_35:
      KeStallExecutionProcessor(0xAu);
      if ( (unsigned int)++v10 >= 0x960 )
        goto LABEL_11;
      v13 = v44;
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v6,
      10,
      231,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v8 + 1,
      v15);
    v11 = 0;
LABEL_11:
    if ( v10 == 2400 )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        233,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v8 + 1,
        v15);
    }
    else if ( v10 )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        234,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v10,
        v8 + 1);
    }
    if ( v11 < 0 && a3 == 7 )
      ((void (__fastcall *)(void *, _QWORD))qword_1C0042770)(WPP_MAIN_CB.Dpc.DpcData, *(_QWORD *)a1);
    if ( (*(_DWORD *)(v12 + *(_QWORD *)(a1 + 40)) & 0x201) == 0x201
      && ((v38 = (*(_DWORD *)(v12 + *(_QWORD *)(a1 + 40)) >> 5) & 0xF, ((v38 - 4) & 0xFFFFFFF9) != 0) || v38 == 8) )
    {
      v7 = 1;
      v48 = 1;
    }
    else
    {
      v7 = v48;
    }
    v9 = v45;
LABEL_18:
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x40000000LL) != 0 )
    {
      v20 = 56LL * v8;
      v21 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + *(_QWORD *)(a1 + 48) + 16LL));
      *v21 = *v21 & 0xE00C200 | 0x20000;
      _InterlockedOr(v41, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + *(_QWORD *)(a1 + 48) + 16LL), v22);
    }
    if ( v9 <= 3 && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x20000000LL) != 0 )
    {
      v23 = 56LL * v8;
      v24 = (_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + *(_QWORD *)(a1 + 48) + 16LL));
      *v24 &= 0xC200u;
      _InterlockedOr(v41, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(v23 + *(_QWORD *)(a1 + 48) + 16LL), v25);
    }
    v26 = *(_QWORD *)(a1 + 8);
    v27 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v8);
    v28 = *v27;
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(v26 + 64),
      v6,
      10,
      12,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (char)v27,
      *v27);
    v29 = (v28 >> 3) & 1;
    LOBYTE(v29) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v29,
      10,
      13,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v28 & 1,
      (v28 & 2) != 0,
      (v28 & 8) != 0);
    v30 = (v28 >> 5) & 0xF;
    LOBYTE(v30) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v30,
      10,
      14,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 & 0x10) != 0,
      (v28 & 0x200) != 0,
      (v28 >> 5) & 0xF);
    v31 = HIWORD(v28) & 1;
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v31,
      10,
      15,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 >> 10) & 0xF,
      (unsigned __int16)v28 >> 14,
      BYTE2(v28) & 1);
    v32 = (v28 >> 20) & 1;
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v32,
      10,
      16,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 & 0x20000) != 0,
      (v28 & 0x40000) != 0,
      (v28 & 0x100000) != 0);
    v33 = (v28 >> 22) & 1;
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v33,
      10,
      17,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 & 0x80000) != 0,
      (v28 & 0x200000) != 0,
      (v28 & 0x400000) != 0);
    v34 = (v28 >> 26) & 1;
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v34,
      10,
      18,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 & 0x800000) != 0,
      (v28 & 0x2000000) != 0,
      (v28 & 0x4000000) != 0);
    LOBYTE(v35) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v26 + 64),
      v35,
      10,
      19,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      (v28 & 0x8000000) != 0,
      (v28 & 0x40000000) != 0,
      (v28 & 0x80000000) != 0);
    v3 = a2;
    ++v8;
  }
  while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
LABEL_24:
  v36 = *(_QWORD *)(a1 + 8);
  v42 = v7;
  v37 = *(_QWORD *)(v36 + 392);
  if ( v37 )
  {
    v39 = PoFxPowerControl(v37, &GUID_HC_SUB_DX_STATE, &v42, 4LL, 0LL, 0LL, 0LL);
    if ( v39 < 0 )
    {
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v36 + 64),
        v40,
        3,
        32,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v39);
    }
  }
}
