/*
 * XREFs of PfpFileBuildReadSupport @ 0x1404D9100
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1404F3380 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400FDF20 (PfpFileCheckAttributesForPrefetch.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     PfpOpenHandleCreate @ 0x1404D944C (PfpOpenHandleCreate.c)
 *     PfpFileSetupObjectAttributes @ 0x1404DA224 (PfpFileSetupObjectAttributes.c)
 *     PfpFileBuildReadList @ 0x1404DA2D0 (PfpFileBuildReadList.c)
 *     PfpOpenHandleClose @ 0x1404DA474 (PfpOpenHandleClose.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v5; // r13
  int v8; // ebx
  void *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdi
  NTSTATUS v13; // ebx
  HANDLE FileHandle; // r13
  __m128i v15; // xmm6
  unsigned __int64 v16; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // r8
  __int64 v19; // rbx
  __int128 v20; // xmm1
  HANDLE v21; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  void *v25; // [rsp+48h] [rbp-61h] BYREF
  char v26; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v27[4]; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  int v29; // [rsp+108h] [rbp+5Fh] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  ULONG AllocationAttributes; // [rsp+120h] [rbp+77h]

  v5 = a3;
  v8 = 32;
  memset(v27, 0, sizeof(v27));
  SectionHandle = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  v27[3] = (HANDLE)((unsigned __int64)v27[3] | 0x200000000LL);
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
    *(_OWORD *)v27 = *(_OWORD *)v12;
    FileHandle = v27[0];
    v15 = *(__m128i *)v27;
    v16 = _mm_srli_si128(v23, 8).m128i_u64[0] | 0x1000000000LL;
    v27[2] = (HANDLE)v23.m128i_i64[0];
    v27[3] = (HANDLE)v16;
  }
  else
  {
    PfpFileSetupObjectAttributes(
      (_DWORD)a1,
      (_DWORD)a2,
      v5,
      (unsigned int)&v26,
      (__int64)&ObjectAttributes,
      (__int64)&v29);
    v13 = PfpOpenHandleCreate(
            (unsigned int)v27,
            a1[5],
            ObjectAttributes.ObjectName,
            ObjectAttributes.RootDirectory,
            v8,
            v29,
            128,
            a1[2] + (v5 << 6));
    if ( v13 < 0 )
    {
      v16 = (unsigned __int64)v27[3];
      goto LABEL_13;
    }
    FileHandle = v27[0];
    v13 = PfpFileCheckAttributesForPrefetch(v27[0]);
    if ( v13 < 0 )
    {
      v16 = (unsigned __int64)v27[3];
      goto LABEL_28;
    }
    v15 = *(__m128i *)v27;
    if ( a1[1] )
    {
      v24 = *(__m128i *)&v27[2];
      *(_OWORD *)v12 = *(_OWORD *)v27;
      *(__m128i *)(v12 + 16) = v24;
      v16 = _mm_srli_si128(v24, 8).m128i_u64[0] | 0x1000000000LL;
      v27[3] = (HANDLE)v16;
    }
    else
    {
      v16 = (unsigned __int64)v27[3];
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
    LOBYTE(v18) = a4;
    v13 = PfpFileBuildReadList(a1, a2, v18, &v25);
    if ( v13 < 0 )
    {
      v10 = v25;
    }
    else
    {
      v19 = a5;
      v20 = *(_OWORD *)&v27[2];
      *(__m128i *)(a5 + 8) = v15;
      *(_OWORD *)(v19 + 24) = v20;
      memset(v27, 0, sizeof(v27));
      v16 = (unsigned __int64)v27[3] | 0x200000000LL;
      *(_QWORD *)(v19 + 48) = a2;
      v21 = SectionHandle;
      SectionHandle = 0LL;
      *(_QWORD *)(v19 + 40) = v21;
      *(_QWORD *)v19 = v25;
      v13 = 0;
      v27[3] = (HANDLE)v16;
    }
    goto LABEL_13;
  }
  if ( a4 && v17 == -1073740749 )
  {
LABEL_13:
    if ( (v16 & 0x100000000LL) == 0 )
      goto LABEL_14;
  }
LABEL_28:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_14:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v16 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v27, a1[5]);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v13;
}
