/*
 * XREFs of PfSnGetSectionObject @ 0x140473938
 * Callers:
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400138DC (PfpFileCheckAttributesForPrefetch.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoQueryFileInformation @ 0x14042A8B0 (IoQueryFileInformation.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14042D8E8 (PfpOpenHandleCreate.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x140473CCC (PfSnIsSectionPrefetchedAfterPhase.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     PfSnPrefetchFileMetadata @ 0x140541200 (PfSnPrefetchFileMetadata.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  unsigned __int64 v13; // r12
  HANDLE v14; // r15
  __int64 v15; // rax
  ULONG AllocationAttributes; // ecx
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int128 v22; // xmm1
  int v23; // edi
  NTSTATUS v24; // eax
  PVOID v25; // r11
  __int64 v26; // rdx
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  unsigned __int8 v29; // r10
  int v31; // edx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v35; // r11d
  HANDLE FileHandle; // [rsp+30h] [rbp-B1h]
  HANDLE SectionHandle; // [rsp+40h] [rbp-A1h] BYREF
  __int64 FileInformation; // [rsp+48h] [rbp-99h] BYREF
  ULONG v39; // [rsp+50h] [rbp-91h]
  PFILE_OBJECT FileObject[4]; // [rsp+58h] [rbp-89h] BYREF
  ULONG ReturnedLength[2]; // [rsp+78h] [rbp-69h] BYREF
  PVOID Object; // [rsp+80h] [rbp-61h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  _QWORD v45[3]; // [rsp+C0h] [rbp-21h] BYREF

  FileInformation = a8;
  *(_QWORD *)ReturnedLength = a3;
  v43 = a9;
  *a9 = 0LL;
  *a10 = 0;
  memset(FileObject, 0, sizeof(FileObject));
  v13 = (unsigned __int64)FileObject[3] | 0x200000000LL;
  v14 = 0LL;
  FileObject[3] = (PFILE_OBJECT)((unsigned __int64)FileObject[3] | 0x200000000LL);
  v15 = *(_QWORD *)a1;
  SectionHandle = 0LL;
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  v39 = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v15 + 88) )
  {
    v18 = -1073741811;
    goto LABEL_27;
  }
  v17 = *((_QWORD *)a1 + 21) + 56LL * a6;
  if ( (*(_QWORD *)(v17 + 24) & 0x400000000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v32 = (unsigned int)a4[7];
      v45[0] = 0LL;
      v45[1] = 0LL;
      v33 = (unsigned int)a4[6] | (unsigned __int64)(v32 << 32);
      v45[0] = 0x100000003LL;
      v45[2] = v33;
      if ( v33 )
        PfSnPrefetchFileMetadata(a1, *(_QWORD *)(a2 + 32), v45, 0LL, 1, FileInformation);
    }
    v18 = PfpOpenHandleCreate(
            (__int64)FileObject,
            (__int64)(a1 + 2),
            *(__int64 *)ReturnedLength,
            *(_QWORD *)(a2 + 64),
            161,
            0x40u,
            0x80u,
            a2 + 32);
    if ( v18 < 0 || (v18 = PfpFileCheckAttributesForPrefetch(FileObject[0]), v18 < 0) )
    {
      v13 = (unsigned __int64)FileObject[3];
      goto LABEL_27;
    }
    if ( *((_DWORD *)a1 + 58) < *((_DWORD *)a1 + 59)
      && IoQueryFileInformation(FileObject[1], FileInternalInformation, 8u, &FileInformation, ReturnedLength) >= 0 )
    {
      v19 = (unsigned int)_InterlockedExchangeAdd(a1 + 58, 1u);
      v20 = *((_QWORD *)a1 + 28);
      v21 = 3 * v19;
      *(_QWORD *)(v20 + 8 * v21 + 12) = FileInformation;
      LODWORD(v19) = FileObject[3];
      *(_QWORD *)(v20 + 8 * v21) = FileObject[1]->FsContext;
      *(_DWORD *)(v20 + 8 * v21 + 8) = v19;
    }
    v22 = *(_OWORD *)&FileObject[2];
    *(_OWORD *)v17 = *(_OWORD *)FileObject;
    *(_OWORD *)(v17 + 16) = v22;
    memset(FileObject, 0, sizeof(FileObject));
    v14 = SectionHandle;
    v13 = (unsigned __int64)FileObject[3] | 0x200000000LL;
    AllocationAttributes = v39;
    FileObject[3] = (PFILE_OBJECT)((unsigned __int64)FileObject[3] | 0x200000000LL);
  }
  v23 = a7;
  if ( !a7 )
  {
    if ( !*(_QWORD *)(v17 + 40) )
      goto LABEL_12;
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      goto LABEL_17;
    *(_DWORD *)(v17 + 48) |= 2u;
LABEL_41:
    *a10 = v35;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v17 + 32) )
  {
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
      goto LABEL_17;
    *(_DWORD *)(v17 + 48) |= v35;
    goto LABEL_41;
  }
LABEL_12:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  FileHandle = *(HANDLE *)v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  if ( v18 >= 0 )
  {
    v14 = SectionHandle;
    v24 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    v25 = Object;
    v18 = v24;
    if ( v24 < 0 )
    {
LABEL_23:
      if ( v25 )
        ObfDereferenceObject(v25);
      goto LABEL_25;
    }
    v23 = a7;
    if ( a7 )
    {
      *(_QWORD *)(v17 + 32) = Object;
      if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        goto LABEL_17;
      *(_DWORD *)(v17 + 48) |= v31;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      {
        *(_DWORD *)(v17 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v17 + 32) != v26
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v27)
        && ((unsigned __int8)v27 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 )
      {
        goto LABEL_17;
      }
      *(_DWORD *)(v17 + 48) |= 2u;
    }
    *a10 = v31;
LABEL_17:
    *v43 = *(_QWORD *)(v17 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v27)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v28)
      && ((v29 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 || v23) )
    {
      *(_DWORD *)(v17 + 48) |= 4u;
    }
    v18 = 0;
    goto LABEL_23;
  }
  v14 = SectionHandle;
LABEL_25:
  if ( v14 )
    NtClose(v14);
LABEL_27:
  if ( (v13 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileObject, (__int64)(a1 + 2));
  return (unsigned int)v18;
}
