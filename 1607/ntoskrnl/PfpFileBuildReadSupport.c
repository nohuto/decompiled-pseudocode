/*
 * XREFs of PfpFileBuildReadSupport @ 0x1404EC2A0
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140668D84 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400C83EC (PfpFileCheckAttributesForPrefetch.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     NtCreateSection @ 0x14042B860 (NtCreateSection.c)
 *     PfpFileBuildReadList @ 0x1404EC098 (PfpFileBuildReadList.c)
 *     PfpFileSetupObjectAttributes @ 0x1404EC200 (PfpFileSetupObjectAttributes.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, int *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v5; // r13
  int v8; // ebx
  void *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ebx
  HANDLE FileHandle; // r13
  __m128i v15; // xmm6
  unsigned __int64 v16; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // rbx
  __int128 v19; // xmm1
  HANDLE v20; // rax
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  void *v24; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v26[4]; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  int v28; // [rsp+108h] [rbp+5Fh] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  ULONG AllocationAttributes; // [rsp+120h] [rbp+77h]

  v5 = a3;
  v8 = 32;
  memset(v26, 0, sizeof(v26));
  SectionHandle = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v26[3] = (HANDLE)((unsigned __int64)v26[3] | 0x200000000LL);
  if ( a4 )
  {
    AllocationAttributes = 285212672;
  }
  else
  {
    AllocationAttributes = 0x4000000;
    v8 = 129;
  }
  v11 = a1[1];
  v12 = v11 + 32 * (((__int64)a2 - *(unsigned int *)(*a1 + 40LL) - *a1) / 48);
  if ( v11 && (*(_QWORD *)(v12 + 24) & 0x400000000LL) != 0 )
  {
    v23 = *(__m128i *)(v12 + 16);
    *(_OWORD *)v26 = *(_OWORD *)v12;
    FileHandle = v26[0];
    v15 = *(__m128i *)v26;
    v16 = _mm_srli_si128(v23, 8).m128i_u64[0] | 0x1000000000LL;
    v26[2] = (HANDLE)v23.m128i_i64[0];
    v26[3] = (HANDLE)v16;
  }
  else
  {
    PfpFileSetupObjectAttributes((__int64)a1, a2, v5, (__int64)v25, (__int64)&ObjectAttributes, &v28);
    v13 = PfpOpenHandleCreate(
            (unsigned int)v26,
            a1[5],
            ObjectAttributes.ObjectName,
            ObjectAttributes.RootDirectory,
            v8,
            v28,
            128,
            a1[2] + (v5 << 6));
    if ( v13 < 0 )
    {
      v16 = (unsigned __int64)v26[3];
      goto LABEL_13;
    }
    FileHandle = v26[0];
    v13 = PfpFileCheckAttributesForPrefetch(v26[0]);
    if ( v13 < 0 )
    {
      v16 = (unsigned __int64)v26[3];
      goto LABEL_23;
    }
    v15 = *(__m128i *)v26;
    if ( a1[1] )
    {
      v22 = *(__m128i *)&v26[2];
      *(_OWORD *)v12 = *(_OWORD *)v26;
      *(__m128i *)(v12 + 16) = v22;
      v16 = _mm_srli_si128(v22, 8).m128i_u64[0] | 0x1000000000LL;
      v26[3] = (HANDLE)v16;
    }
    else
    {
      v16 = (unsigned __int64)v26[3];
    }
  }
  if ( (*a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v15, 8).m128i_u64[0] + 40) + 16LL) )
  {
    v13 = -1073741791;
    goto LABEL_13;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  v13 = v17;
  if ( v17 >= 0 )
  {
    v13 = PfpFileBuildReadList((__int64)a1, (__int64)a2, a4, &v24);
    if ( v13 < 0 )
    {
      v10 = v24;
    }
    else
    {
      v18 = a5;
      v19 = *(_OWORD *)&v26[2];
      *(__m128i *)(a5 + 8) = v15;
      *(_OWORD *)(v18 + 24) = v19;
      memset(v26, 0, sizeof(v26));
      v16 = (unsigned __int64)v26[3] | 0x200000000LL;
      *(_QWORD *)(v18 + 48) = a2;
      v20 = SectionHandle;
      SectionHandle = 0LL;
      *(_QWORD *)(v18 + 40) = v20;
      *(_QWORD *)v18 = v24;
      v13 = 0;
      v26[3] = (HANDLE)v16;
    }
    goto LABEL_13;
  }
  if ( a4 && v17 == -1073740749 )
  {
LABEL_13:
    if ( (v16 & 0x100000000LL) == 0 )
      goto LABEL_14;
  }
LABEL_23:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_14:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v16 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v26, a1[5]);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v13;
}
