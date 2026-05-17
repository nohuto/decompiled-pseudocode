/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180083478
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180083960 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180093CA0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     memset @ 0x180098540 (memset.c)
 *     EvaluateCurrentState @ 0x1800F67A8 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x1800F6860 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
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
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  _QWORD v33[134]; // [rsp+60h] [rbp-A0h] BYREF

  v32 = a4;
  if ( (unsigned int)EvaluateCurrentState() )
  {
    result = PssValidateSnapshotDescriptor(a1);
    if ( (int)result < 0 )
      return result;
  }
  v30 = 0LL;
  memset(v33, 0, sizeof(v33));
  v8 = (unsigned __int64)*(unsigned int *)(a1 + 832) << 6;
  if ( v8 > 0xFFFFFFFF || (v9 = v8 + 1072, (unsigned int)(v8 + 1072) < 0x430) )
  {
    v23 = -1073741675;
LABEL_31:
    if ( v33[119] )
      ZwDuplicateObject(a2, v33[119], 0LL, 0LL, 0, 0, 1);
    if ( v33[115] )
      ZwDuplicateObject(a2, v33[115], 0LL, 0LL, 0, 0, 1);
    if ( v33[108] )
      ZwDuplicateObject(a2, v33[108], 0LL, 0LL, 0, 0, 1);
    if ( v33[111] )
      ZwDuplicateObject(a2, v33[111], 0LL, 0LL, 0, 0, 1);
    if ( v33[105] )
      ZwDuplicateObject(a2, v33[105], 0LL, 0LL, 0, 0, 1);
    if ( v33[102] )
      ZwDuplicateObject(a2, v33[102], 0LL, 0LL, 0, 0, 1);
    goto LABEL_43;
  }
  v10 = 8LL;
  v11 = v33;
  v12 = (_OWORD *)a1;
  do
  {
    v13 = v12[1];
    *v11 = *v12;
    v14 = v12[2];
    v11[1] = v13;
    v15 = v12[3];
    v11[2] = v14;
    v16 = v12[4];
    v11[3] = v15;
    v17 = v12[5];
    v11[4] = v16;
    v18 = v12[6];
    v11[5] = v17;
    v19 = v12[7];
    v12 += 8;
    v11[6] = v18;
    v11 += 8;
    *(v11 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = *(_QWORD *)(a1 + 816);
  v21 = v12[1];
  *v11 = *v12;
  v22 = v12[2];
  v11[1] = v21;
  v11[2] = v22;
  v33[102] = 0LL;
  v33[105] = 0LL;
  v33[108] = 0LL;
  v33[111] = 0LL;
  v33[115] = 0LL;
  v33[119] = 0LL;
  if ( v20 )
  {
    v23 = ZwDuplicateObject(-1LL, v20, a2, &v33[102], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v24 = *(_QWORD *)(a1 + 840);
  if ( v24 )
  {
    v23 = ZwDuplicateObject(-1LL, v24, a2, &v33[105], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v25 = *(_QWORD *)(a1 + 864);
  if ( v25 )
  {
    v23 = ZwDuplicateObject(-1LL, v25, a2, &v33[108], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v26 = *(_QWORD *)(a1 + 888);
  if ( v26 )
  {
    v23 = ZwDuplicateObject(-1LL, v26, a2, &v33[111], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v27 = *(_QWORD *)(a1 + 920);
  if ( v27 )
  {
    v23 = ZwDuplicateObject(-1LL, v27, a2, &v33[115], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v28 = *(_QWORD *)(a1 + 952);
  if ( v28 )
  {
    v23 = ZwDuplicateObject(-1LL, v28, a2, &v33[119], 0, 0, 2);
    if ( v23 < 0 )
      goto LABEL_28;
  }
  v30 = 0LL;
  v31 = v9;
  v23 = ZwAllocateVirtualMemory(a2, &v30, 0LL, &v31, 4096, 4);
  if ( v23 < 0 )
    goto LABEL_28;
  HIDWORD(v33[0]) = HIDWORD(v33[0]) & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 848) )
    v33[106] = v30 + 1072;
  if ( *(_WORD *)(a1 + 224) )
    v33[29] = v30 + 240;
  v23 = NtWriteVirtualMemory(a2, v30, v33, v9, 0LL);
  if ( v23 < 0
    || (v29 = *(_QWORD *)(a1 + 848)) != 0
    && (v23 = NtWriteVirtualMemory(a2, v33[106], v29, (unsigned int)v8, 0LL), v23 < 0) )
  {
LABEL_28:
    if ( v30 )
    {
      v31 = v9;
      ZwFreeVirtualMemory(-1LL, &v30, &v31, 0x8000LL);
    }
    goto LABEL_31;
  }
  v23 = 0;
  *a3 = v30;
LABEL_43:
  if ( (v32 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v23;
}
