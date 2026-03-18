/*
 * XREFs of MiManagePartition @ 0x14062480C
 * Callers:
 *     NtManagePartition @ 0x140624EB0 (NtManagePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401D8F48 (MiAllocatePartitionPhysicalPages.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiCombineIdenticalPages @ 0x14050E19C (MiCombineIdenticalPages.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiHotAddPartitionMemory @ 0x140624578 (MiHotAddPartitionMemory.c)
 */

__int64 __fastcall MiManagePartition(
        HANDLE Handle,
        HANDLE a2,
        int a3,
        __int64 a4,
        size_t Size,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 *v10; // r9
  KPROCESSOR_MODE v12; // si
  __int64 v13; // rax
  ACCESS_MASK v14; // r14d
  int PartitionPhysicalPages; // ebx
  PVOID v16; // rcx
  __int64 v17; // r10
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 *v21; // r15
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int16 v26; // r9
  unsigned __int64 v27; // rax
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID v29; // [rsp+40h] [rbp-B8h]
  __int64 v30[3]; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v31; // [rsp+60h] [rbp-98h] BYREF
  int v32; // [rsp+68h] [rbp-90h]
  PVOID v33; // [rsp+70h] [rbp-88h]
  __int64 Src[7]; // [rsp+78h] [rbp-80h] BYREF

  memset(Src, 0, sizeof(Src));
  v10 = 0LL;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v12 = PreviousMode;
        if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          return 3221225569LL;
        v13 = 16LL;
        goto LABEL_10;
      case 2:
        v13 = 40LL;
        v14 = 2;
        break;
      case 3:
        v13 = 24LL;
        v14 = 2;
        v10 = Src;
        break;
      case 4:
        v12 = PreviousMode;
        if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          return 3221225569LL;
        v13 = 24LL;
LABEL_10:
        v14 = 2;
        v10 = Src;
        goto LABEL_17;
      default:
        return 3221225475LL;
    }
  }
  else
  {
    v13 = 56LL;
    v14 = 1;
  }
  v12 = PreviousMode;
LABEL_17:
  if ( (unsigned int)Size != v13 )
    return 3221225476LL;
  if ( v10 )
    memmove(v10, (const void *)a4, (unsigned int)Size);
  PartitionPhysicalPages = ObReferenceObjectByHandle(Handle, v14, MmPartitionObjectType, v12, &Object, 0LL);
  v33 = Object;
  if ( PartitionPhysicalPages < 0 )
    return (unsigned int)PartitionPhysicalPages;
  v29 = 0LL;
  if ( a3 == 1 )
  {
    PartitionPhysicalPages = ObReferenceObjectByHandle(a2, v14, MmPartitionObjectType, v12, &v31, 0LL);
    v29 = v31;
    if ( PartitionPhysicalPages < 0 )
      goto LABEL_27;
  }
  else if ( a2 )
  {
    PartitionPhysicalPages = -1073741584;
LABEL_27:
    v16 = Object;
LABEL_64:
    ObfDereferenceObject(v16);
    return (unsigned int)PartitionPhysicalPages;
  }
  v17 = *(_QWORD *)Object;
  if ( a3 )
  {
    v18 = a3 - 1;
    if ( !v18 )
    {
      v25 = Src[0];
      if ( !Src[0] )
        goto LABEL_63;
      v26 = Src[1];
      if ( LODWORD(Src[1]) == -1 )
      {
        v26 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
        v25 = Src[0];
      }
      else if ( LODWORD(Src[1]) >= (unsigned __int16)KeNumberNodes )
      {
        goto LABEL_57;
      }
      if ( (Src[1] & 0xFFFFFFFE00000000uLL) == 0 )
      {
        PartitionPhysicalPages = MiAllocatePartitionPhysicalPages(*(int **)v29, v17, v25, v26, SBYTE4(Src[1]));
        MiInitializeWorkingSetManagerParameters(*(_QWORD *)Object);
        goto LABEL_63;
      }
LABEL_57:
      PartitionPhysicalPages = -1073741811;
      goto LABEL_63;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v32 = *(_DWORD *)(a4 + 32);
      PartitionPhysicalPages = MiCreatePagingFile(
                                 (_OWORD *)a4,
                                 (__int64 *)(a4 + 16),
                                 (__int64 *)(a4 + 24),
                                 v12,
                                 v32,
                                 v17);
      goto LABEL_63;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        goto LABEL_63;
      if ( Src[1] && !LODWORD(Src[2]) )
      {
        PartitionPhysicalPages = MiHotAddPartitionMemory((int *)v17, Src);
        if ( PartitionPhysicalPages < 0 )
          goto LABEL_63;
        v21 = (__int64 *)(a4 + 8);
        if ( v12 )
        {
          v22 = v21;
          if ( (unsigned __int64)v21 >= MmUserProbeAddress )
            v22 = (_QWORD *)MmUserProbeAddress;
          *v22 = *v22;
          *v21 = Src[1];
          goto LABEL_63;
        }
        v23 = Src[1];
LABEL_51:
        *v21 = v23;
        goto LABEL_63;
      }
      goto LABEL_57;
    }
    if ( (Src[1] & 0xFFFFFFFC) != 0 || (Src[1] & 1) != 0 && (int *)v17 != MiSystemPartition )
    {
      PartitionPhysicalPages = -1073741585;
      goto LABEL_63;
    }
    PartitionPhysicalPages = MiCombineIdenticalPages(v17, (void *)Src[0], Src[1], v12, v30);
    if ( PartitionPhysicalPages >= 0 )
    {
      v21 = (__int64 *)(a4 + 16);
      if ( !v12 )
      {
        v23 = v30[0];
        goto LABEL_51;
      }
      v24 = v21;
      if ( (unsigned __int64)v21 >= MmUserProbeAddress )
        v24 = (_QWORD *)MmUserProbeAddress;
      *v24 = *v24;
      *v21 = v30[0];
    }
  }
  else
  {
    LODWORD(Src[0]) = 0;
    Src[1] = *(_QWORD *)(v17 + 5712);
    Src[2] = *(_QWORD *)(v17 + 5952);
    Src[3] = *(_QWORD *)(v17 + 5888);
    Src[4] = *(_QWORD *)(v17 + 5960);
    Src[5] = *(_QWORD *)(v17 + 6120);
    v27 = *(_QWORD *)(v17 + 4992);
    if ( v27 < Src[4] )
      v27 = Src[4];
    Src[6] = v27;
    memmove((void *)a4, Src, (unsigned int)Size);
  }
LABEL_63:
  ObfDereferenceObject(Object);
  v16 = v29;
  if ( v29 )
    goto LABEL_64;
  return (unsigned int)PartitionPhysicalPages;
}
