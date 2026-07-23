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

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
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
  void *v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  NTSTATUS v26; // ebx
  void *v27; // rdx
  void *v28; // rdx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  _QWORD Buffer[142]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = a4;
  BaseAddress = 0LL;
  memset(Buffer, 0, 0x468uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF || (v8 = v7 + 1128, (unsigned int)(v7 + 1128) < 0x468) )
  {
    v26 = -1073741675;
  }
  else
  {
    v9 = 8LL;
    v10 = (_OWORD *)a1;
    v11 = Buffer;
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
    v19 = *(void **)(a1 + 872);
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
    Buffer[109] = 0LL;
    Buffer[112] = 0LL;
    Buffer[115] = 0LL;
    Buffer[118] = 0LL;
    Buffer[122] = 0LL;
    Buffer[126] = 0LL;
    if ( !v19
      || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, a2, (PHANDLE)&Buffer[109], 0, 0, 2u), v26 >= 0) )
    {
      v27 = *(void **)(a1 + 896);
      if ( !v27
        || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, a2, (PHANDLE)&Buffer[112], 0, 0, 2u), v26 >= 0) )
      {
        v28 = *(void **)(a1 + 920);
        if ( !v28
          || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, a2, (PHANDLE)&Buffer[115], 0, 0, 2u), v26 >= 0) )
        {
          v29 = *(void **)(a1 + 944);
          if ( !v29
            || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, (PHANDLE)&Buffer[118], 0, 0, 2u), v26 >= 0) )
          {
            v30 = *(void **)(a1 + 976);
            if ( !v30
              || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[122], 0, 0, 2u),
                  v26 >= 0) )
            {
              v31 = *(void **)(a1 + 1008);
              if ( !v31
                || (v26 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[126], 0, 0, 2u),
                    v26 >= 0) )
              {
                BaseAddress = 0LL;
                RegionSize = v8;
                v26 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
                if ( v26 >= 0 )
                {
                  HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
                  if ( *(_QWORD *)(a1 + 904) )
                    Buffer[113] = (char *)BaseAddress + 1128;
                  if ( *(_WORD *)(a1 + 280) )
                    Buffer[36] = (char *)BaseAddress + 296;
                  v26 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
                  if ( v26 >= 0 )
                  {
                    v32 = *(void **)(a1 + 904);
                    if ( !v32
                      || (v26 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v32, (unsigned int)v7, 0LL), v26 >= 0) )
                    {
                      v26 = 0;
                      *a3 = BaseAddress;
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
    if ( BaseAddress )
    {
      RegionSize = v8;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  if ( Buffer[126] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[126], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[122] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[122], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[115] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[115], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[118] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[118], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[112] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[112], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[109] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[109], 0LL, 0LL, 0, 0, 1u);
LABEL_25:
  if ( (v36 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v26;
}
