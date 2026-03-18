/*
 * XREFs of IopCreateFile @ 0x14045B980
 * Callers:
 *     IoCreateFileEx @ 0x14045B754 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14045B890 (NtOpenFile.c)
 *     NtCreateFile @ 0x14045B8F0 (NtCreateFile.c)
 *     IoCreateFile @ 0x1404D8ECC (IoCreateFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404150D0 (FsRtlFreeExtraCreateParameter.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IoCheckEaBufferValidity @ 0x14045C55C (IoCheckEaBufferValidity.c)
 *     FsRtlFindExtraCreateParameter @ 0x14046B550 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlIsEcpFromUserMode @ 0x1404CC2E0 (FsRtlIsEcpFromUserMode.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        char *Src,
        SIZE_T NumberOfBytes,
        int a12,
        _DWORD *a13,
        int a14,
        int a15,
        _KPROCESS *a16)
{
  ACCESS_MASK v17; // r13d
  char PreviousMode; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  int v23; // esi
  struct _KPRCB *v24; // rcx
  _GENERAL_LOOKASIDE *v25; // r8
  _DWORD *v27; // r14
  struct _KPRCB *v28; // rcx
  _GENERAL_LOOKASIDE *v29; // r8
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // rbx
  PVOID PoolWithQuotaTag; // rax
  int *v35; // r15
  int v36; // eax
  PVOID PoolWithTag; // rax
  struct _KPRCB *v38; // rcx
  _GENERAL_LOOKASIDE *v39; // r8
  NTSTATUS v40; // r15d
  struct _KPRCB *v41; // rcx
  _GENERAL_LOOKASIDE *v42; // r8
  _KPROCESS *Process; // rdx
  size_t Lock_low; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 JobSilo; // rax
  struct _KTHREAD *v47; // rax
  struct _ECP_LIST *Next; // rcx
  int ExtraCreateParameter; // r14d
  _DWORD *v50; // rbx
  void *v51; // rcx
  _SLIST_ENTRY *v52; // r13
  __int64 **v53; // rsi
  __int64 *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // r15
  __int64 *v57; // rbx
  void (__fastcall *v58)(_QWORD *, __int64 *); // rax
  struct _NPAGED_LOOKASIDE_LIST *v59; // rcx
  __int64 *v60; // rbx
  __int64 *v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rdx
  bool v65; // bl
  int v66; // ecx
  __int64 v67; // rcx
  __int64 v68; // rax
  void *v69; // rcx
  struct _KPRCB *v70; // rcx
  unsigned int v71; // [rsp+44h] [rbp-64h]
  char v72; // [rsp+48h] [rbp-60h]
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp-40h] BYREF
  HANDLE *v76; // [rsp+70h] [rbp-38h]

  v17 = a2;
  v76 = a1;
  v71 = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  v72 = PreviousMode;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !PreviousMode && (a14 & 0x200) == 0 )
  {
    v23 = a9;
LABEL_52:
    v27 = a13;
    goto LABEL_53;
  }
  if ( (a6 & 0xFFFD0048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (v23 = a9, (a9 & 0xFF000000) != 0)
    || (a9 & 0x30) != 0 && (v17 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (v17 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (v17 & 4) != 0 )
  {
LABEL_43:
    v28 = KeGetCurrentPrcb();
    v29 = v28->PPLookasideList[8].P;
    ++v29->TotalFrees;
    if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
      || (++v29->FreeMisses,
          v29 = v28->PPLookasideList[8].L,
          ++v29->TotalFrees,
          LOWORD(v29->ListHead.Alignment) < v29->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v29->ListHead, v21);
    }
    else
    {
      ++v29->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v29->FreeEx)(v21);
    }
    return 3221225485LL;
  }
  if ( !IopFailZeroAccessCreate || v17 )
  {
    if ( !a12 )
      goto LABEL_52;
    v27 = a13;
    if ( a12 == 1 )
    {
      if ( !a13 || (*a13 & 0xFFFFFFFC) != 0 || a13[1] > 1u || a13[2] > 1u || (a7 & 4) != 0 || a8 - 1 > 2 )
        goto LABEL_43;
    }
    else
    {
      if ( a12 != 2 )
        goto LABEL_53;
      if ( !a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 )
        goto LABEL_43;
    }
    if ( (a9 & 0xFFFFFFCD) != 0 )
      goto LABEL_43;
LABEL_53:
    if ( v72 )
    {
      v30 = 0LL;
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      v31 = (__int64)v76;
      if ( (unsigned __int64)v76 >= 0x7FFFFFFF0000LL )
        v31 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v31 = *(_QWORD *)v31;
      v32 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v32 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v32 = *(_DWORD *)v32;
      if ( a5 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v33 = *(void **)a5;
        Handle = v33;
        if ( (__int64)v33 < 0 )
          RtlRaiseStatus(-1073741811);
      }
      else
      {
        v33 = 0LL;
        Handle = 0LL;
      }
      if ( Src && (_DWORD)NumberOfBytes )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
          || &Src[(unsigned int)NumberOfBytes] < Src )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
        LODWORD(v21[5].Next) = NumberOfBytes;
        memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
        v35 = a4;
        v36 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
        v71 = v36;
        if ( v36 < 0 )
        {
          *a4 = v36;
          RtlRaiseStatus(v36);
        }
LABEL_96:
        v30 = 0LL;
        v17 = a2;
LABEL_97:
        LODWORD(v21->Next) = 12582920;
        LODWORD(v21[2].Next) = 0;
        *((_QWORD *)&v21[1].Next + 1) = 0LL;
        *((_QWORD *)&v21[3].Next + 1) = v33;
        LODWORD(v21[4].Next) = v23;
        WORD2(v21[4].Next) = a6;
        HIWORD(v21[4].Next) = a7;
        *((_DWORD *)&v21[5].Next + 2) = a8;
        LOWORD(v21[8].Next) = 0;
        BYTE2(v21[8].Next) = 0;
        HIDWORD(v21[5].Next) = a14;
        *((_QWORD *)&v21[2].Next + 1) = 0LL;
        v21[3].Next = (_SLIST_ENTRY *)a3;
        LODWORD(v21[7].Next) = a12;
        *((_QWORD *)&v21[7].Next + 1) = v27;
        LODWORD(v21[9].Next) = a15;
        BYTE4(v21[9].Next) = v72;
        *((_QWORD *)&v21[9].Next + 1) = 0LL;
        v21[10].Next = 0LL;
        *((_QWORD *)&v21[10].Next + 1) = 0LL;
        v21[11].Next = 0LL;
        *((_WORD *)&v21[9].Next + 4) = 40;
        *((_QWORD *)&v21[11].Next + 1) = 1LL;
        Process = a16;
        if ( a16 )
        {
          Lock_low = SLOWORD(a16->Header.Lock);
          if ( Lock_low > 0x28 )
            Lock_low = 40LL;
          memmove(&v21[9].Next + 1, a16, Lock_low);
          v30 = 0LL;
        }
        if ( *((_QWORD *)&v21[11].Next + 1) == 1LL )
        {
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->Process;
          if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
            JobSilo = PspGetJobSilo(Process[1].Affinity.Bitmap[16]);
          else
            JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
          *((_QWORD *)&v21[11].Next + 1) = JobSilo;
        }
        LODWORD(v21[1].Next) = v30;
        *((_QWORD *)&v21->Next + 1) = v30;
        v47 = KeGetCurrentThread();
        ++v47->OtherOperationCount;
        __incgsdword(0x2E64u);
        Next = (struct _ECP_LIST *)v21[10].Next;
        if ( Next )
        {
          ExtraCreateParameter = FsRtlFindExtraCreateParameter(Next, &GUID_ECP_FILTER_DEVICE_TYPE, &EcpContext, 0LL);
          v71 = ExtraCreateParameter;
          if ( ExtraCreateParameter >= 0 )
          {
            v50 = EcpContext;
            if ( FsRtlIsEcpFromUserMode(EcpContext) )
            {
              ExtraCreateParameter = -1073740011;
              v71 = -1073740011;
              LODWORD(v21[1].Next) = -1073740011;
            }
            if ( !*v50 )
            {
              LODWORD(v21[9].Next) |= 0x10u;
              *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
            }
          }
        }
        else
        {
          ExtraCreateParameter = v71;
        }
        if ( SLODWORD(v21[1].Next) >= 0 )
        {
          ExtraCreateParameter = ObOpenObjectByNameEx(
                                   a3,
                                   (__int64)IoFileObjectType,
                                   v72,
                                   0LL,
                                   v17,
                                   (__int64)v21,
                                   *((_QWORD *)&v21[11].Next + 1),
                                   &Handle);
          v71 = ExtraCreateParameter;
        }
        v51 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
        v52 = v21[10].Next;
        if ( v52 )
        {
          v53 = (__int64 **)(&v52->Next + 1);
          if ( (HIDWORD(v52->Next) & 1) != 0 )
          {
            v60 = *v53;
            while ( v60 != (__int64 *)v53 )
            {
              v61 = v60 - 1;
              v60 = (__int64 *)*v60;
              if ( (v61[6] & 1) == 0 )
              {
                v62 = v61 + 1;
                v63 = v61[1];
                v64 = (_QWORD *)v61[2];
                if ( *(__int64 **)(v63 + 8) != v61 + 1 || (_QWORD *)*v64 != v62 )
                  __fastfail(3u);
                *v64 = v63;
                *(_QWORD *)(v63 + 8) = v64;
                v61[2] = 0LL;
                *v62 = 0LL;
                FsRtlFreeExtraCreateParameter(v61 + 9);
              }
            }
          }
          else
          {
            while ( *v53 != (__int64 *)v53 )
            {
              v54 = *v53;
              v55 = **v53;
              if ( (__int64 **)(*v53)[1] != v53 || *(__int64 **)(v55 + 8) != v54 )
                __fastfail(3u);
              *v53 = (__int64 *)v55;
              *(_QWORD *)(v55 + 8) = v53;
              v54[1] = 0LL;
              *v54 = 0LL;
              v56 = v54 + 8;
              v57 = v54 - 1;
              v58 = (void (__fastcall *)(_QWORD *, __int64 *))v54[4];
              if ( v58 )
                v58(v56, v57 + 3);
              if ( (v57[6] & 0x20) != 0 && FltMgrCallbacks )
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v57[8], v56);
              v59 = (struct _NPAGED_LOOKASIDE_LIST *)v57[7];
              if ( v59 )
                ExFreeToNPagedLookasideList(v59, v57);
              else
                ExFreePoolWithTag(v57, 0);
            }
            if ( (HIDWORD(v52->Next) & 4) != 0 )
            {
              ++FsRtlEcpListLookaside.L.TotalFrees;
              if ( LOWORD(FsRtlEcpListLookaside.L.ListHead.Alignment) < FsRtlEcpListLookaside.L.Depth )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside.L.ListHead, v52);
              }
              else
              {
                ++FsRtlEcpListLookaside.L.FreeMisses;
                FsRtlEcpListLookaside.L.FreeEx(v52, (_LOOKASIDE_LIST_EX *)Process);
              }
            }
            else
            {
              ExFreePoolWithTag(v52, 0);
            }
            v21[10].Next = 0LL;
            v35 = a4;
          }
        }
        v65 = LODWORD(v21[2].Next) == -1096154543;
        if ( ExtraCreateParameter >= 0 )
        {
          if ( LODWORD(v21[2].Next) == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *v76 = Handle;
            *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v35 = (int)v21[1].Next;
            v71 = (unsigned int)v21[1].Next;
            goto LABEL_166;
          }
          ObCloseHandle(Handle, v72);
          ExtraCreateParameter = -1073741788;
          v71 = -1073741788;
        }
        v66 = (int)v21[1].Next;
        if ( v66 >= 0 )
        {
          v67 = *((_QWORD *)&v21->Next + 1);
          if ( v67 )
          {
            if ( v65 )
            {
              if ( (*(_DWORD *)(v67 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
            }
            else
            {
              if ( *(_WORD *)(v67 + 88) )
                ExFreePoolWithTag(*(PVOID *)(v67 + 96), 0);
              *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          ExtraCreateParameter = (int)v21[1].Next;
          v71 = ExtraCreateParameter;
          if ( (v66 & 0xC0000000) == 0x80000000 || v66 == -1073741191 )
          {
            *v35 = v66;
            *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( ExtraCreateParameter == -1073741772 )
        {
          v68 = *((_QWORD *)&v21[1].Next + 1);
          if ( v68 == 2684354563LL || v68 == 2684354572LL || v68 == 2147483673LL )
            v71 = -1073741184;
        }
LABEL_166:
        if ( v65 )
        {
          v69 = (void *)*((_QWORD *)&v21->Next + 1);
          if ( v69 )
            ObfDereferenceObject(v69);
        }
        v70 = KeGetCurrentPrcb();
        v42 = v70->PPLookasideList[8].P;
        ++v42->TotalFrees;
        if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
        {
          ++v42->FreeMisses;
          v42 = v70->PPLookasideList[8].L;
          ++v42->TotalFrees;
          if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
          {
            ++v42->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v21);
            return v71;
          }
        }
        goto LABEL_93;
      }
LABEL_74:
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      LODWORD(v21[5].Next) = 0;
      v35 = a4;
      goto LABEL_97;
    }
    if ( v23 < 0 )
    {
      a14 |= 0x400u;
      v23 &= ~0x80000000;
    }
    if ( !a5 )
    {
      v30 = 0LL;
      v33 = 0LL;
LABEL_81:
      Handle = v33;
      if ( !Src || !(_DWORD)NumberOfBytes )
        goto LABEL_74;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
      if ( PoolWithTag )
      {
        LODWORD(v21[5].Next) = NumberOfBytes;
        memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
        v40 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
        v71 = v40;
        if ( v40 < 0 )
        {
          ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
          *a4 = v40;
          v41 = KeGetCurrentPrcb();
          v42 = v41->PPLookasideList[8].P;
          ++v42->TotalFrees;
          if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
          {
            ++v42->FreeMisses;
            v42 = v41->PPLookasideList[8].L;
            ++v42->TotalFrees;
            if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
            {
              ++v42->FreeMisses;
              ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v21);
              return v71;
            }
          }
LABEL_93:
          RtlpInterlockedPushEntrySList(&v42->ListHead, v21);
          return v71;
        }
        v35 = a4;
        goto LABEL_96;
      }
      v38 = KeGetCurrentPrcb();
      v39 = v38->PPLookasideList[8].P;
      ++v39->TotalFrees;
      if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
        || (++v39->FreeMisses,
            v39 = v38->PPLookasideList[8].L,
            ++v39->TotalFrees,
            LOWORD(v39->ListHead.Alignment) < v39->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v39->ListHead, v21);
      }
      else
      {
        ++v39->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v39->FreeEx)(v21);
      }
      return 3221225626LL;
    }
    v33 = *(void **)a5;
    if ( *(__int64 *)a5 >= 0 )
    {
      v30 = 0LL;
      goto LABEL_81;
    }
    goto LABEL_43;
  }
  v24 = KeGetCurrentPrcb();
  v25 = v24->PPLookasideList[8].P;
  ++v25->TotalFrees;
  if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
    || (++v25->FreeMisses,
        v25 = v24->PPLookasideList[8].L,
        ++v25->TotalFrees,
        LOWORD(v25->ListHead.Alignment) < v25->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v25->ListHead, v21);
  }
  else
  {
    ++v25->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v21);
  }
  return 3221225506LL;
}
