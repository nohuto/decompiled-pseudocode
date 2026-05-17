/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180004D44
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180007BC0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180007C40 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A6B60 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     EvaluateCurrentState @ 0x1800E2A90 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x1800FEF18 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h]
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v38[142]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = a4;
  result = PssValidateSnapshotDescriptor(a1);
  if ( (int)result < 0 )
    return result;
  v35 = 0LL;
  memset(v38, 0, 0x468uLL);
  v8 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v8 > 0xFFFFFFFF || (v9 = v8 + 1128, (unsigned int)(v8 + 1128) < 0x468) )
  {
    v27 = -1073741675;
LABEL_33:
    if ( v38[126] )
      ZwDuplicateObject(a2, v38[126], 0LL, 0LL, 0, 0, 1);
    if ( v38[122] )
      ZwDuplicateObject(a2, v38[122], 0LL, 0LL, 0, 0, 1);
    if ( v38[115] )
      ZwDuplicateObject(a2, v38[115], 0LL, 0LL, 0, 0, 1);
    if ( v38[118] )
      ZwDuplicateObject(a2, v38[118], 0LL, 0LL, 0, 0, 1);
    if ( v38[112] )
      ZwDuplicateObject(a2, v38[112], 0LL, 0LL, 0, 0, 1);
    if ( v38[109] )
      ZwDuplicateObject(a2, v38[109], 0LL, 0LL, 0, 0, 1);
    goto LABEL_45;
  }
  v10 = 8LL;
  v11 = (_OWORD *)a1;
  v12 = v38;
  do
  {
    v13 = v11[1];
    *v12 = *v11;
    v14 = v11[2];
    v12[1] = v13;
    v15 = v11[3];
    v12[2] = v14;
    v16 = v11[4];
    v12[3] = v15;
    v17 = v11[5];
    v12[4] = v16;
    v18 = v11[6];
    v12[5] = v17;
    v19 = v11[7];
    v11 += 8;
    v12[6] = v18;
    v12 += 8;
    *(v12 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = *(_QWORD *)(a1 + 872);
  v21 = v11[1];
  *v12 = *v11;
  v22 = v11[2];
  v12[1] = v21;
  v23 = v11[3];
  v12[2] = v22;
  v24 = v11[4];
  v12[3] = v23;
  v25 = v11[5];
  v26 = *((_QWORD *)v11 + 12);
  v12[4] = v24;
  v12[5] = v25;
  *((_QWORD *)v12 + 12) = v26;
  v38[109] = 0LL;
  v38[112] = 0LL;
  v38[115] = 0LL;
  v38[118] = 0LL;
  v38[122] = 0LL;
  v38[126] = 0LL;
  if ( v20 )
  {
    v27 = ZwDuplicateObject(-1LL, v20, a2, &v38[109], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v28 = *(_QWORD *)(a1 + 896);
  if ( v28 )
  {
    v27 = ZwDuplicateObject(-1LL, v28, a2, &v38[112], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v29 = *(_QWORD *)(a1 + 920);
  if ( v29 )
  {
    v27 = ZwDuplicateObject(-1LL, v29, a2, &v38[115], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v30 = *(_QWORD *)(a1 + 944);
  if ( v30 )
  {
    v27 = ZwDuplicateObject(-1LL, v30, a2, &v38[118], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v31 = *(_QWORD *)(a1 + 976);
  if ( v31 )
  {
    v27 = ZwDuplicateObject(-1LL, v31, a2, &v38[122], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v32 = *(_QWORD *)(a1 + 1008);
  if ( v32 )
  {
    v27 = ZwDuplicateObject(-1LL, v32, a2, &v38[126], 0, 0, 2);
    if ( v27 < 0 )
      goto LABEL_30;
  }
  v35 = 0LL;
  v37[0] = v9;
  v27 = ZwAllocateVirtualMemory(a2, &v35, 0LL, v37, 4096, 4);
  if ( v27 < 0 )
    goto LABEL_30;
  HIDWORD(v38[0]) = HIDWORD(v38[0]) & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v38[113] = v35 + 1128;
  if ( *(_WORD *)(a1 + 280) )
    v38[36] = v35 + 296;
  v33 = (unsigned int)EvaluateCurrentState(&g_Feature_3414365496_60407404_FeatureDescriptorDetails)
      ? NtWriteVirtualMemory(a2, v35, v38, 1128LL, 0LL)
      : NtWriteVirtualMemory(a2, v35, v38, v9, 0LL);
  v27 = v33;
  if ( v33 < 0
    || (v34 = *(_QWORD *)(a1 + 904)) != 0
    && (v27 = NtWriteVirtualMemory(a2, v38[113], v34, (unsigned int)v8, 0LL), v27 < 0) )
  {
LABEL_30:
    if ( v35 )
    {
      v37[0] = v9;
      ZwFreeVirtualMemory(-1LL, &v35, v37, 0x8000LL);
    }
    goto LABEL_33;
  }
  v27 = 0;
  *a3 = v35;
LABEL_45:
  if ( (v36 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v27;
}
