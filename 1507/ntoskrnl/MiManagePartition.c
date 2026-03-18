/*
 * XREFs of MiManagePartition @ 0x1406A4074
 * Callers:
 *     NtManagePartition @ 0x1406A4780 (NtManagePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14021CD0C (MiAllocatePartitionPhysicalPages.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiHotAddPartitionMemory @ 0x1406A3DD4 (MiHotAddPartitionMemory.c)
 *     MiCombineIdenticalPages @ 0x1406A89D0 (MiCombineIdenticalPages.c)
 */

__int64 __fastcall MiManagePartition(
        HANDLE Handle,
        HANDLE a2,
        int a3,
        LARGE_INTEGER *a4,
        size_t Size,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 *v10; // r9
  KPROCESSOR_MODE v12; // r14
  __int64 v13; // rax
  ACCESS_MASK v14; // esi
  int PartitionPhysicalPages; // ebx
  __int64 v16; // r9
  PVOID v17; // rcx
  __int64 v18; // r10
  int v19; // edi
  int v20; // edi
  int v21; // edi
  LARGE_INTEGER *v22; // r15
  _QWORD *p_QuadPart; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int16 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID v33; // [rsp+40h] [rbp-B8h]
  __int64 v34[3]; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v35; // [rsp+60h] [rbp-98h] BYREF
  ULONG LowPart; // [rsp+68h] [rbp-90h]
  PVOID v37; // [rsp+70h] [rbp-88h]
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
        v14 = 2;
        v13 = 40LL;
        break;
      case 3:
        v14 = 2;
        v13 = 24LL;
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
    memmove(v10, a4, (unsigned int)Size);
  PartitionPhysicalPages = ObReferenceObjectByHandle(Handle, v14, MmPartitionObjectType, v12, &Object, 0LL);
  v37 = Object;
  if ( PartitionPhysicalPages < 0 )
    return (unsigned int)PartitionPhysicalPages;
  v33 = 0LL;
  if ( a3 == 1 )
  {
    PartitionPhysicalPages = ObReferenceObjectByHandle(a2, v14, MmPartitionObjectType, v12, &v35, 0LL);
    v33 = v35;
    if ( PartitionPhysicalPages < 0 )
      goto LABEL_27;
  }
  else if ( a2 )
  {
    PartitionPhysicalPages = -1073741584;
LABEL_27:
    v17 = Object;
LABEL_64:
    ObfDereferenceObject(v17);
    return (unsigned int)PartitionPhysicalPages;
  }
  v18 = *(_QWORD *)Object;
  if ( a3 )
  {
    v19 = a3 - 1;
    if ( !v19 )
    {
      v26 = Src[0];
      if ( !Src[0] )
        goto LABEL_63;
      v27 = Src[1];
      if ( LODWORD(Src[1]) == -1 )
      {
        v27 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
        v26 = Src[0];
      }
      else if ( LODWORD(Src[1]) >= (unsigned __int16)KeNumberNodes )
      {
        goto LABEL_57;
      }
      if ( !HIDWORD(Src[1]) )
      {
        PartitionPhysicalPages = MiAllocatePartitionPhysicalPages(*(__int16 **)v33, v18, v26, v27);
        MiInitializeWorkingSetManagerParameters(*(_QWORD *)Object, v28, v29, v30);
        goto LABEL_63;
      }
LABEL_57:
      PartitionPhysicalPages = -1073741811;
      goto LABEL_63;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      LowPart = a4[4].LowPart;
      PartitionPhysicalPages = MiCreatePagingFile(a4, a4 + 2, (__int64 *)&a4[3], v12, LowPart, v18);
      goto LABEL_63;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        goto LABEL_63;
      if ( Src[1] && !LODWORD(Src[2]) )
      {
        PartitionPhysicalPages = MiHotAddPartitionMemory((__int16 *)v18, Src);
        if ( PartitionPhysicalPages < 0 )
          goto LABEL_63;
        v22 = a4 + 1;
        if ( v12 )
        {
          p_QuadPart = &v22->QuadPart;
          if ( (unsigned __int64)v22 >= MmUserProbeAddress )
            p_QuadPart = (_QWORD *)MmUserProbeAddress;
          *p_QuadPart = *p_QuadPart;
          *v22 = (LARGE_INTEGER)Src[1];
          goto LABEL_63;
        }
        v24 = Src[1];
LABEL_51:
        v22->QuadPart = v24;
        goto LABEL_63;
      }
      goto LABEL_57;
    }
    if ( (Src[1] & 0xFFFFFFFE) != 0 || (Src[1] & 1) != 0 && (__int16 *)v18 != MiSystemPartition )
    {
      PartitionPhysicalPages = -1073741585;
      goto LABEL_63;
    }
    LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
    PartitionPhysicalPages = MiCombineIdenticalPages(v18, Src[0], LODWORD(Src[1]), v16, v34);
    if ( PartitionPhysicalPages >= 0 )
    {
      v22 = a4 + 2;
      if ( !v12 )
      {
        v24 = v34[0];
        goto LABEL_51;
      }
      v25 = &v22->QuadPart;
      if ( (unsigned __int64)v22 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = *v25;
      *v22 = (LARGE_INTEGER)v34[0];
    }
  }
  else
  {
    LODWORD(Src[0]) = 0;
    Src[1] = *(_QWORD *)(v18 + 5328);
    Src[2] = *(_QWORD *)(v18 + 5568);
    Src[3] = *(_QWORD *)(v18 + 5504);
    Src[4] = *(_QWORD *)(v18 + 5576);
    Src[5] = *(_QWORD *)(v18 + 5736);
    v31 = *(_QWORD *)(v18 + 4736);
    if ( v31 < Src[4] )
      v31 = Src[4];
    Src[6] = v31;
    memmove(a4, Src, (unsigned int)Size);
  }
LABEL_63:
  ObfDereferenceObject(Object);
  v17 = v33;
  if ( v33 )
    goto LABEL_64;
  return (unsigned int)PartitionPhysicalPages;
}
