/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18008BD70 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180084150 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  _QWORD v37[142]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = a4;
  v34 = 0LL;
  memset(v37, 0, 0x468uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF || (v8 = v7 + 1128, (unsigned int)(v7 + 1128) < 0x468) )
  {
    v26 = -1073741675;
  }
  else
  {
    v9 = 8LL;
    v10 = (_OWORD *)a1;
    v11 = v37;
    do
    {
      v12 = v10[1];
      *v11 = *v10;
      v13 = v10[2];
      v11[1] = v12;
      v14 = v10[3];
      v11[2] = v13;
      v15 = v10[4];
      v11[3] = v14;
      v16 = v10[5];
      v11[4] = v15;
      v17 = v10[6];
      v11[5] = v16;
      v18 = v10[7];
      v10 += 8;
      v11[6] = v17;
      v11 += 8;
      *(v11 - 1) = v18;
      --v9;
    }
    while ( v9 );
    v19 = *(_QWORD *)(a1 + 872);
    v20 = v10[1];
    *v11 = *v10;
    v21 = v10[2];
    v11[1] = v20;
    v22 = v10[3];
    v11[2] = v21;
    v23 = v10[4];
    v11[3] = v22;
    v24 = v10[5];
    v25 = *((_QWORD *)v10 + 12);
    v11[4] = v23;
    v11[5] = v24;
    *((_QWORD *)v11 + 12) = v25;
    v37[109] = 0LL;
    v37[112] = 0LL;
    v37[115] = 0LL;
    v37[118] = 0LL;
    v37[122] = 0LL;
    v37[126] = 0LL;
    if ( !v19 || (v26 = ZwDuplicateObject(-1LL, v19, a2, &v37[109], 0, 0, 2), v26 >= 0) )
    {
      v27 = *(_QWORD *)(a1 + 896);
      if ( !v27 || (v26 = ZwDuplicateObject(-1LL, v27, a2, &v37[112], 0, 0, 2), v26 >= 0) )
      {
        v28 = *(_QWORD *)(a1 + 920);
        if ( !v28 || (v26 = ZwDuplicateObject(-1LL, v28, a2, &v37[115], 0, 0, 2), v26 >= 0) )
        {
          v29 = *(_QWORD *)(a1 + 944);
          if ( !v29 || (v26 = ZwDuplicateObject(-1LL, v29, a2, &v37[118], 0, 0, 2), v26 >= 0) )
          {
            v30 = *(_QWORD *)(a1 + 976);
            if ( !v30 || (v26 = ZwDuplicateObject(-1LL, v30, a2, &v37[122], 0, 0, 2), v26 >= 0) )
            {
              v31 = *(_QWORD *)(a1 + 1008);
              if ( !v31 || (v26 = ZwDuplicateObject(-1LL, v31, a2, &v37[126], 0, 0, 2), v26 >= 0) )
              {
                v34 = 0LL;
                v35 = v8;
                v26 = ZwAllocateVirtualMemory(a2, &v34, 0LL, &v35, 4096, 4);
                if ( v26 >= 0 )
                {
                  HIDWORD(v37[0]) = HIDWORD(v37[0]) & 0xFFFFFFF8 | 1;
                  if ( *(_QWORD *)(a1 + 904) )
                    v37[113] = v34 + 1128;
                  if ( *(_WORD *)(a1 + 280) )
                    v37[36] = v34 + 296;
                  v26 = NtWriteVirtualMemory(a2, v34, v37, v8, 0LL);
                  if ( v26 >= 0 )
                  {
                    v32 = *(_QWORD *)(a1 + 904);
                    if ( !v32 || (v26 = NtWriteVirtualMemory(a2, v37[113], v32, (unsigned int)v7, 0LL), v26 >= 0) )
                    {
                      v26 = 0;
                      *a3 = v34;
                      goto LABEL_25;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v34 )
    {
      v35 = v8;
      ZwFreeVirtualMemory(-1LL, &v34, &v35, 0x8000LL);
    }
  }
  if ( v37[126] )
    ZwDuplicateObject(a2, v37[126], 0LL, 0LL, 0, 0, 1);
  if ( v37[122] )
    ZwDuplicateObject(a2, v37[122], 0LL, 0LL, 0, 0, 1);
  if ( v37[115] )
    ZwDuplicateObject(a2, v37[115], 0LL, 0LL, 0, 0, 1);
  if ( v37[118] )
    ZwDuplicateObject(a2, v37[118], 0LL, 0LL, 0, 0, 1);
  if ( v37[112] )
    ZwDuplicateObject(a2, v37[112], 0LL, 0LL, 0, 0, 1);
  if ( v37[109] )
    ZwDuplicateObject(a2, v37[109], 0LL, 0LL, 0, 0, 1);
LABEL_25:
  if ( (v36 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v26;
}
