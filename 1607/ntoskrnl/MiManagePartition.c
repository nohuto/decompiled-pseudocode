/*
 * XREFs of MiManagePartition @ 0x140660A88
 * Callers:
 *     NtManagePartition @ 0x140661488 (NtManagePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014B1AC (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 *     MiCombineIdenticalPages @ 0x140663C88 (MiCombineIdenticalPages.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiManagePartition(
        HANDLE Handle,
        HANDLE a2,
        int a3,
        LARGE_INTEGER *a4,
        size_t Size,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 v10; // rbx
  _QWORD *v11; // r9
  KPROCESSOR_MODE v13; // si
  ACCESS_MASK v14; // r14d
  int ChannelInformation; // ebx
  __int64 v16; // r9
  PVOID v17; // rcx
  int *v18; // r12
  int v19; // edi
  int v20; // edi
  int v21; // edi
  LARGE_INTEGER *v22; // r14
  SIZE_T v23; // rbx
  LARGE_INTEGER *PoolWithTag; // r15
  LARGE_INTEGER *v25; // rdx
  __int64 v26; // rcx
  LONGLONG v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned int v30; // r9d
  unsigned int v31; // esi
  unsigned __int64 v32; // rax
  unsigned int v33; // r14d
  unsigned __int64 v34; // r15
  __int64 i; // r8
  unsigned int v36; // [rsp+34h] [rbp-104h]
  PVOID Object; // [rsp+38h] [rbp-100h] BYREF
  PVOID P; // [rsp+40h] [rbp-F8h]
  PVOID v39; // [rsp+48h] [rbp-F0h]
  LONGLONG v40; // [rsp+50h] [rbp-E8h] BYREF
  ULONG LowPart; // [rsp+58h] [rbp-E0h]
  PVOID v42; // [rsp+60h] [rbp-D8h] BYREF
  SIZE_T v43; // [rsp+70h] [rbp-C8h] BYREF
  PVOID v44[3]; // [rsp+78h] [rbp-C0h] BYREF
  _QWORD Src[12]; // [rsp+90h] [rbp-A8h] BYREF

  v10 = 88LL;
  memset(Src, 0, 0x58uLL);
  v11 = 0LL;
  switch ( a3 )
  {
    case 0:
      v14 = 1;
      goto LABEL_16;
    case 1:
      v13 = PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
        return 3221225569LL;
      v10 = 16LL;
      goto LABEL_10;
    case 2:
      v10 = 40LL;
      v14 = 2;
      v13 = PreviousMode;
      goto LABEL_18;
    case 3:
      v10 = 24LL;
      v14 = 2;
LABEL_16:
      v13 = PreviousMode;
      goto LABEL_17;
  }
  if ( a3 != 4 )
    return 3221225475LL;
  v13 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    return 3221225569LL;
  v10 = 32LL;
LABEL_10:
  v14 = 2;
LABEL_17:
  v11 = Src;
LABEL_18:
  if ( (unsigned int)Size != v10 )
    return 3221225476LL;
  if ( v11 )
    memmove(v11, a4, (unsigned int)Size);
  ChannelInformation = ObReferenceObjectByHandle(Handle, v14, MmPartitionObjectType, v13, &Object, 0LL);
  v44[2] = Object;
  if ( ChannelInformation < 0 )
    return (unsigned int)ChannelInformation;
  v39 = 0LL;
  if ( a3 == 1 )
  {
    ChannelInformation = ObReferenceObjectByHandle(a2, v14, MmPartitionObjectType, v13, &v42, 0LL);
    v39 = v42;
    if ( ChannelInformation < 0 )
      goto LABEL_28;
  }
  else if ( a2 )
  {
    ChannelInformation = -1073741584;
LABEL_28:
    v17 = Object;
LABEL_94:
    ObfDereferenceObject(v17);
    return (unsigned int)ChannelInformation;
  }
  v18 = *(int **)Object;
  if ( !a3 )
  {
    if ( !LODWORD(Src[0]) )
    {
      v31 = HIDWORD(Src[0]);
      if ( (HIDWORD(Src[0]) < (unsigned __int16)KeNumberNodes || HIDWORD(Src[0]) == -1) && LODWORD(Src[1]) == -1 )
      {
        while ( 1 )
        {
          if ( v31 == -1 )
          {
            HIDWORD(Src[1]) = (unsigned __int16)KeNumberNodes;
            Src[2] = *((_QWORD *)v18 + 816);
            Src[3] = *((_QWORD *)v18 + 901);
            Src[4] = *((_QWORD *)v18 + 917);
            v32 = *((_QWORD *)v18 + 704);
            if ( v32 < Src[3] )
              v32 = Src[3];
            Src[5] = v32;
            v33 = 0;
            v36 = (unsigned __int16)KeNumberNodes;
          }
          else
          {
            HIDWORD(Src[1]) = 0;
            memset(&Src[2], 0, 32);
            v33 = v31;
            v36 = v31 + 1;
          }
          memset(&Src[8], 0, 24);
          v34 = 0LL;
          Src[6] = 0LL;
          ChannelInformation = 0;
          P = (PVOID)(*((_QWORD *)v18 + 6) + 2184LL * v33 + 2056);
          while ( v33 < v36 )
          {
            ChannelInformation = MmGetChannelInformation(*(unsigned __int16 *)v18, v33, v44, &v43);
            if ( ChannelInformation < 0 )
              break;
            for ( i = 0LL; (unsigned int)i < (unsigned int)(v43 / 0x28); i = (unsigned int)(i + 1) )
            {
              Src[8] += *((_QWORD *)v44[0] + 5 * i + 2);
              Src[9] += *((_QWORD *)v44[0] + 5 * i + 3);
              Src[10] += *((_QWORD *)v44[0] + 5 * i + 4);
            }
            ExFreePoolWithTag(v44[0], 0);
            v34 += *(_QWORD *)P;
            P = (char *)P + 2184;
            ++v33;
          }
          Src[6] = v34;
          v31 = HIDWORD(Src[0]);
          if ( ChannelInformation < 0 )
            goto LABEL_93;
          Src[7] = Src[8] + Src[10] + Src[9];
          if ( Src[7] <= v34 )
          {
            memmove(a4, Src, (unsigned int)Size);
            goto LABEL_93;
          }
        }
      }
    }
    goto LABEL_74;
  }
  v19 = a3 - 1;
  if ( !v19 )
  {
    v29 = Src[0];
    if ( !Src[0] )
      goto LABEL_93;
    v30 = Src[1];
    if ( LODWORD(Src[1]) == -1 )
    {
      v30 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
      v29 = Src[0];
    }
    else if ( LODWORD(Src[1]) >= (unsigned __int16)KeNumberNodes )
    {
      goto LABEL_74;
    }
    if ( (Src[1] & 0xFFFFFFFE00000000uLL) == 0 )
    {
      ChannelInformation = MiAllocatePartitionPhysicalPages(*(int **)v39, (__int64)v18, v29, v30, SHIDWORD(Src[1]));
      MiInitializeWorkingSetManagerParameters(*(_QWORD *)Object);
      goto LABEL_93;
    }
    goto LABEL_74;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    LowPart = a4[4].LowPart;
    ChannelInformation = MiCreatePagingFile(a4, a4 + 2, (unsigned __int64 *)&a4[3].QuadPart, v13, LowPart, (__int64)v18);
    goto LABEL_93;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 != 1 )
      goto LABEL_93;
    if ( (Src[0] & 0xFFFFFFFC) == 0 && (Src[0] & 3) != 0 && HIDWORD(Src[0]) )
    {
      v22 = a4 + 2;
      if ( v13 )
      {
        v23 = 16LL * HIDWORD(Src[0]);
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x6148694Du);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          ChannelInformation = -1073741670;
          goto LABEL_93;
        }
        if ( v23 )
        {
          if ( ((unsigned __int8)v22 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v22[v23 / 8] > 0x7FFFFFFF0000LL || &v22[v23 / 8] < v22 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(PoolWithTag, &a4[2], v23);
      }
      else
      {
        PoolWithTag = a4 + 2;
      }
      ChannelInformation = MiHotAddPartitionMemory(
                             (__int16 *)v18,
                             (unsigned __int64 *)&PoolWithTag->QuadPart,
                             (__int64)Src);
      if ( PoolWithTag != v22 )
        ExFreePoolWithTag(PoolWithTag, 0);
      if ( ChannelInformation >= 0 )
      {
        v25 = a4 + 1;
        if ( v13 )
        {
          v26 = (__int64)&a4[1];
          if ( (unsigned __int64)v25 >= 0x7FFFFFFF0000LL )
            v26 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v26 = *(_QWORD *)v26;
          *v25 = (LARGE_INTEGER)Src[1];
          goto LABEL_93;
        }
        v27 = Src[1];
LABEL_65:
        v25->QuadPart = v27;
        goto LABEL_93;
      }
      goto LABEL_93;
    }
LABEL_74:
    ChannelInformation = -1073741811;
    goto LABEL_93;
  }
  if ( (Src[1] & 1) != 0 && v18 != MiSystemPartition )
  {
    ChannelInformation = -1073741585;
    goto LABEL_93;
  }
  LOBYTE(v16) = v13;
  ChannelInformation = MiCombineIdenticalPages(v18, Src[0], LODWORD(Src[1]), v16, &v40);
  if ( ChannelInformation >= 0 )
  {
    v25 = a4 + 2;
    if ( !v13 )
    {
      v27 = v40;
      goto LABEL_65;
    }
    v28 = (__int64)&a4[2];
    if ( (unsigned __int64)v25 >= 0x7FFFFFFF0000LL )
      v28 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v28 = *(_QWORD *)v28;
    v25->QuadPart = v40;
  }
LABEL_93:
  ObfDereferenceObject(Object);
  v17 = v39;
  if ( v39 )
    goto LABEL_94;
  return (unsigned int)ChannelInformation;
}
