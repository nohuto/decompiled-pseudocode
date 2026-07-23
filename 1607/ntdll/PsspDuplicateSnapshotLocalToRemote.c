/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180004D60
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180007BB0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180007C30 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A6B60 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     PssValidateSnapshotDescriptor @ 0x1800FEF18 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rdx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  void *v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  NTSTATUS v28; // ebx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Buffer[142]; // [rsp+50h] [rbp-B0h] BYREF

  result = PssValidateSnapshotDescriptor(a1, a2);
  if ( (int)result < 0 )
    return result;
  BaseAddress = 0LL;
  memset(Buffer, 0, 0x468uLL);
  v9 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v9 > 0xFFFFFFFF || (v10 = v9 + 1128, (unsigned int)v9 >= 0xFFFFFB98) )
  {
    v28 = -1073741675;
LABEL_31:
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
    goto LABEL_43;
  }
  v11 = 8LL;
  v12 = (_OWORD *)a1;
  v13 = Buffer;
  do
  {
    v14 = v12[1];
    *v13 = *v12;
    v15 = v12[2];
    v13[1] = v14;
    v16 = v12[3];
    v13[2] = v15;
    v17 = v12[4];
    v13[3] = v16;
    v18 = v12[5];
    v13[4] = v17;
    v19 = v12[6];
    v13[5] = v18;
    v20 = v12[7];
    v12 += 8;
    v13[6] = v19;
    v13 += 8;
    *(v13 - 1) = v20;
    --v11;
  }
  while ( v11 );
  v21 = *(void **)(a1 + 872);
  v22 = v12[1];
  *v13 = *v12;
  v23 = v12[2];
  v13[1] = v22;
  v24 = v12[3];
  v13[2] = v23;
  v25 = v12[4];
  v13[3] = v24;
  v26 = v12[5];
  v27 = *((_QWORD *)v12 + 12);
  v13[4] = v25;
  v13[5] = v26;
  *((_QWORD *)v13 + 12) = v27;
  Buffer[109] = 0LL;
  Buffer[112] = 0LL;
  Buffer[115] = 0LL;
  Buffer[118] = 0LL;
  Buffer[122] = 0LL;
  Buffer[126] = 0LL;
  if ( v21 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21, a2, (PHANDLE)&Buffer[109], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  v29 = *(void **)(a1 + 896);
  if ( v29 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, (PHANDLE)&Buffer[112], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  v30 = *(void **)(a1 + 920);
  if ( v30 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[115], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  v31 = *(void **)(a1 + 944);
  if ( v31 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[118], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  v32 = *(void **)(a1 + 976);
  if ( v32 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[122], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  v33 = *(void **)(a1 + 1008);
  if ( v33 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, (PHANDLE)&Buffer[126], 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_28;
  }
  RegionSize = v10;
  BaseAddress = 0LL;
  v28 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v28 < 0 )
    goto LABEL_28;
  HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    Buffer[113] = (char *)BaseAddress + 1128;
  if ( *(_WORD *)(a1 + 280) )
    Buffer[36] = (char *)BaseAddress + 296;
  v28 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, 0x468uLL, 0LL);
  if ( v28 < 0 )
  {
LABEL_28:
    if ( BaseAddress )
    {
      RegionSize = v10;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    goto LABEL_31;
  }
  v34 = *(void **)(a1 + 904);
  v28 = 0;
  if ( v34 )
  {
    v28 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v34, (unsigned int)v9, 0LL);
    if ( v28 >= 0 )
    {
      v28 = 0;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
LABEL_27:
  *a3 = BaseAddress;
LABEL_43:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v28;
}
