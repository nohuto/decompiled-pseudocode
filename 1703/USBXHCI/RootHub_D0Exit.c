/*
 * XREFs of RootHub_D0Exit @ 0x1C0004660
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_HandleResumedPorts @ 0x1C0004260 (RootHub_HandleResumedPorts.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0004CD0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // r15d
  int v6; // edx
  unsigned int v7; // r14d
  int v8; // ebp
  unsigned int v9; // r12d
  int v10; // ebp
  int *v11; // r13
  int v12; // edi
  __int64 v13; // r12
  unsigned int v14; // ebx
  char v15; // cl
  int v16; // r9d
  int v17; // eax
  int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rdi
  int *v21; // rbx
  KIRQL v22; // dl
  int v23; // ecx
  __int64 v24; // rbx
  _DWORD *v25; // rdi
  KIRQL v26; // al
  __int64 v27; // rdi
  unsigned int *v28; // rcx
  unsigned int v29; // ebx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // edx
  signed __int32 v41[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v42; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+48h] [rbp-70h]
  __int128 v44; // [rsp+50h] [rbp-68h]
  __int128 v45; // [rsp+60h] [rbp-58h]
  int v46; // [rsp+C0h] [rbp+8h]

  v3 = a2;
  v5 = a3;
  RootHub_HandleResumedPorts(a1);
  v7 = 1;
  v8 = 2;
  v46 = 2;
  if ( !*(_DWORD *)(a1 + 16) )
    goto LABEL_45;
  v9 = v5 - 3;
  do
  {
    if ( v3 == 5 )
      goto LABEL_36;
    v10 = 0;
    v11 = (int *)(16LL * (v7 - 1) + *(_QWORD *)(a1 + 40));
    v12 = -1;
    v13 = v7 - 1;
    v43 = 16 * v13;
    while ( 1 )
    {
      v14 = *v11;
      if ( *v11 == v12 )
        goto LABEL_20;
      v12 = *v11;
      v15 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 56 * v13 + 1);
      if ( v15 == 2 )
      {
        v16 = 229;
        goto LABEL_10;
      }
      if ( v15 != 3 )
        break;
      v16 = 230;
LABEL_10:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        v16,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v7,
        *v11);
      if ( (v14 & 0x1E0) == 0x60
        || (v14 & 0x203) != 0x203
        || (v14 & 0x20000) != 0
        || (v17 = (v14 >> 5) & 0xF, v17 == 4)
        || v17 == 15
        || v17 == 6
        || (unsigned int)(v17 - 9) <= 2
        || (v14 & 0x10) != 0
        || *(_BYTE *)(*(_QWORD *)(a1 + 48) + 56 * v13 + 6) )
      {
        v18 = 0;
        goto LABEL_22;
      }
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        232,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v7,
        v10);
LABEL_20:
      KeStallExecutionProcessor(0xAu);
      if ( (unsigned int)++v10 >= 0x960 )
      {
        v18 = -1073741823;
        goto LABEL_22;
      }
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v6,
      10,
      231,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v7,
      v14);
    v18 = 0;
LABEL_22:
    if ( v10 == 2400 )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        233,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v7,
        v14);
    }
    else if ( v10 )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v6,
        10,
        234,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
        v10,
        v7);
    }
    v5 = a3;
    if ( v18 < 0 && a3 == 7 )
      ((void (__fastcall *)(void *, _QWORD))qword_1C0046750)(WPP_MAIN_CB.Dpc.SystemArgument2, *(_QWORD *)a1);
    v9 = a3 - 3;
    v8 = v46;
    v19 = *(_DWORD *)(v43 + *(_QWORD *)(a1 + 40));
    if ( (v19 & 0x201) == 0x201 && ((((v19 >> 5) & 0xF) - 4) & 0xFFFFFFFD) != 0 )
    {
      if ( (v19 & 0x1E0) != 0x140 )
        v8 = 1;
      v46 = v8;
    }
LABEL_36:
    v44 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
    if ( (v44 & 0x40000000) != 0 )
    {
      v20 = 56LL * (v7 - 1);
      v21 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * (v7 - 1));
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + *(_QWORD *)(a1 + 48) + 16LL));
      v23 = *v21;
      if ( v5 != 7 || (v23 & 0x20000) == 0 )
      {
        *v21 = v23 & 0xE00C200 | 0x20000;
        _InterlockedOr(v41, 0);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + *(_QWORD *)(a1 + 48) + 16LL), v22);
    }
    if ( v9 <= 3 )
    {
      v45 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
      if ( (v45 & 0x20000000) != 0 )
      {
        v24 = 56LL * (v7 - 1);
        v25 = (_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * (v7 - 1));
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + *(_QWORD *)(a1 + 48) + 16LL));
        *v25 &= 0xC200u;
        _InterlockedOr(v41, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)(v24 + *(_QWORD *)(a1 + 48) + 16LL), v26);
      }
    }
    v27 = *(_QWORD *)(a1 + 8);
    v28 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (v7 - 1));
    v29 = *v28;
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(v27 + 64),
      v6,
      10,
      12,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (char)v28,
      *v28);
    v30 = (v29 >> 3) & 1;
    LOBYTE(v30) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v30,
      10,
      13,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v29 & 1,
      (v29 & 2) != 0,
      (v29 & 8) != 0);
    v31 = (v29 >> 5) & 0xF;
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v31,
      10,
      14,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 & 0x10) != 0,
      (v29 & 0x200) != 0,
      (v29 >> 5) & 0xF);
    v32 = HIWORD(v29) & 1;
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v32,
      10,
      15,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 >> 10) & 0xF,
      (unsigned __int16)v29 >> 14,
      BYTE2(v29) & 1);
    v33 = (v29 >> 20) & 1;
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v33,
      10,
      16,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 & 0x20000) != 0,
      (v29 & 0x40000) != 0,
      (v29 & 0x100000) != 0);
    v34 = (v29 >> 22) & 1;
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v34,
      10,
      17,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 & 0x80000) != 0,
      (v29 & 0x200000) != 0,
      (v29 & 0x400000) != 0);
    v35 = (v29 >> 26) & 1;
    LOBYTE(v35) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v35,
      10,
      18,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 & 0x800000) != 0,
      (v29 & 0x2000000) != 0,
      (v29 & 0x4000000) != 0);
    LOBYTE(v36) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v27 + 64),
      v36,
      10,
      19,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      (v29 & 0x8000000) != 0,
      (v29 & 0x40000000) != 0,
      (v29 & 0x80000000) != 0);
    v3 = a2;
    ++v7;
  }
  while ( v7 <= *(_DWORD *)(a1 + 16) );
LABEL_45:
  v37 = *(_QWORD *)(a1 + 8);
  v42 = v8;
  v38 = *(_QWORD *)(v37 + 400);
  if ( v38 )
  {
    v39 = PoFxPowerControl(v38, &GUID_HC_SUB_DX_STATE, &v42, 4LL, 0LL, 0LL, 0LL);
    if ( v39 < 0 )
    {
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v37 + 64),
        v40,
        3,
        32,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v39);
    }
  }
}
