/*
 * XREFs of IopCreateFile @ 0x14045A850
 * Callers:
 *     IoCreateFileEx @ 0x14045A624 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14045A760 (NtOpenFile.c)
 *     NtCreateFile @ 0x14045A7C0 (NtCreateFile.c)
 *     IoCreateFile @ 0x1404BC4D0 (IoCreateFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IoCheckEaBufferValidity @ 0x14045B42C (IoCheckEaBufferValidity.c)
 *     FsRtlFindExtraCreateParameter @ 0x14046A420 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlIsEcpFromUserMode @ 0x1404B1D0C (FsRtlIsEcpFromUserMode.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
        __int16 *a16)
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
  size_t v43; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 JobSilo; // rax
  struct _KTHREAD *v46; // rax
  struct _ECP_LIST *Next; // rcx
  int ExtraCreateParameter; // r14d
  _DWORD *v49; // rbx
  void *v50; // rcx
  _SLIST_ENTRY *v51; // r13
  __int64 **v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // r15
  __int64 *v56; // rbx
  void (__fastcall *v57)(_QWORD *, __int64 *); // rax
  struct _NPAGED_LOOKASIDE_LIST *v58; // rcx
  __int64 *v59; // rbx
  __int64 *v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // r8
  _QWORD *v63; // rdx
  bool v64; // bl
  int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rax
  void *v68; // rcx
  struct _KPRCB *v69; // rcx
  unsigned int v70; // [rsp+44h] [rbp-64h]
  char v71; // [rsp+48h] [rbp-60h]
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp-40h] BYREF
  HANDLE *v75; // [rsp+70h] [rbp-38h]

  v17 = a2;
  v75 = a1;
  v70 = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  v71 = PreviousMode;
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
    if ( v71 )
    {
      v30 = 0LL;
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      v31 = (__int64)v75;
      if ( (unsigned __int64)v75 >= 0x7FFFFFFF0000LL )
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
        v70 = v36;
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
        BYTE4(v21[9].Next) = v71;
        *((_QWORD *)&v21[9].Next + 1) = 0LL;
        v21[10].Next = 0LL;
        *((_QWORD *)&v21[10].Next + 1) = 0LL;
        v21[11].Next = 0LL;
        *((_WORD *)&v21[9].Next + 4) = 40;
        *((_QWORD *)&v21[11].Next + 1) = 1LL;
        if ( a16 )
        {
          v43 = *a16;
          if ( v43 > 0x28 )
            v43 = 40LL;
          memmove(&v21[9].Next + 1, a16, v43);
          v30 = 0LL;
        }
        if ( *((_QWORD *)&v21[11].Next + 1) == 1LL )
        {
          CurrentThread = KeGetCurrentThread();
          if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
            JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
          else
            JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
          *((_QWORD *)&v21[11].Next + 1) = JobSilo;
        }
        LODWORD(v21[1].Next) = v30;
        *((_QWORD *)&v21->Next + 1) = v30;
        v46 = KeGetCurrentThread();
        ++v46->OtherOperationCount;
        __incgsdword(0x2E64u);
        Next = (struct _ECP_LIST *)v21[10].Next;
        if ( Next )
        {
          ExtraCreateParameter = FsRtlFindExtraCreateParameter(Next, &GUID_ECP_FILTER_DEVICE_TYPE, &EcpContext, 0LL);
          v70 = ExtraCreateParameter;
          if ( ExtraCreateParameter >= 0 )
          {
            v49 = EcpContext;
            if ( FsRtlIsEcpFromUserMode(EcpContext) )
            {
              ExtraCreateParameter = -1073740011;
              v70 = -1073740011;
              LODWORD(v21[1].Next) = -1073740011;
            }
            if ( !*v49 )
            {
              LODWORD(v21[9].Next) |= 0x10u;
              *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
            }
          }
        }
        else
        {
          ExtraCreateParameter = v70;
        }
        if ( SLODWORD(v21[1].Next) >= 0 )
        {
          ExtraCreateParameter = ObOpenObjectByNameEx(
                                   a3,
                                   (__int64)IoFileObjectType,
                                   v71,
                                   0LL,
                                   v17,
                                   (__int64)v21,
                                   *((_QWORD *)&v21[11].Next + 1),
                                   &Handle);
          v70 = ExtraCreateParameter;
        }
        v50 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v50 )
          ExFreePoolWithTag(v50, 0);
        v51 = v21[10].Next;
        if ( v51 )
        {
          v52 = (__int64 **)(&v51->Next + 1);
          if ( (HIDWORD(v51->Next) & 1) != 0 )
          {
            v59 = *v52;
            while ( v59 != (__int64 *)v52 )
            {
              v60 = v59 - 1;
              v59 = (__int64 *)*v59;
              if ( (v60[6] & 1) == 0 )
              {
                v61 = v60 + 1;
                v62 = v60[1];
                v63 = (_QWORD *)v60[2];
                if ( *(__int64 **)(v62 + 8) != v60 + 1 || (_QWORD *)*v63 != v61 )
                  __fastfail(3u);
                *v63 = v62;
                *(_QWORD *)(v62 + 8) = v63;
                v60[2] = 0LL;
                *v61 = 0LL;
                FsRtlFreeExtraCreateParameter(v60 + 9);
              }
            }
          }
          else
          {
            while ( *v52 != (__int64 *)v52 )
            {
              v53 = *v52;
              v54 = **v52;
              if ( (__int64 **)(*v52)[1] != v52 || *(__int64 **)(v54 + 8) != v53 )
                __fastfail(3u);
              *v52 = (__int64 *)v54;
              *(_QWORD *)(v54 + 8) = v52;
              v53[1] = 0LL;
              *v53 = 0LL;
              v55 = v53 + 8;
              v56 = v53 - 1;
              v57 = (void (__fastcall *)(_QWORD *, __int64 *))v53[4];
              if ( v57 )
                v57(v55, v56 + 3);
              if ( (v56[6] & 0x20) != 0 && FltMgrCallbacks )
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v56[8], v55);
              v58 = (struct _NPAGED_LOOKASIDE_LIST *)v56[7];
              if ( v58 )
                ExFreeToNPagedLookasideList(v58, v56);
              else
                ExFreePoolWithTag(v56, 0);
            }
            if ( (HIDWORD(v51->Next) & 4) != 0 )
            {
              ++unk_140329A1C;
              if ( LOWORD(FsRtlEcpListLookaside.Alignment) < unk_140329A10 )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, v51);
              }
              else
              {
                ++unk_140329A20;
                unk_140329A38(v51);
              }
            }
            else
            {
              ExFreePoolWithTag(v51, 0);
            }
            v21[10].Next = 0LL;
            v35 = a4;
          }
        }
        v64 = LODWORD(v21[2].Next) == -1096154543;
        if ( ExtraCreateParameter >= 0 )
        {
          if ( LODWORD(v21[2].Next) == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *v75 = Handle;
            *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v35 = (int)v21[1].Next;
            v70 = (unsigned int)v21[1].Next;
            goto LABEL_166;
          }
          ObCloseHandle(Handle, v71);
          ExtraCreateParameter = -1073741788;
          v70 = -1073741788;
        }
        v65 = (int)v21[1].Next;
        if ( v65 >= 0 )
        {
          v66 = *((_QWORD *)&v21->Next + 1);
          if ( v66 )
          {
            if ( v64 )
            {
              if ( (*(_DWORD *)(v66 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
            }
            else
            {
              if ( *(_WORD *)(v66 + 88) )
                ExFreePoolWithTag(*(PVOID *)(v66 + 96), 0);
              *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          ExtraCreateParameter = (int)v21[1].Next;
          v70 = ExtraCreateParameter;
          if ( (v65 & 0xC0000000) == 0x80000000 || v65 == -1073741191 )
          {
            *v35 = v65;
            *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( ExtraCreateParameter == -1073741772 )
        {
          v67 = *((_QWORD *)&v21[1].Next + 1);
          if ( v67 == 2684354563LL || v67 == 2684354572LL || v67 == 2147483673LL )
            v70 = -1073741184;
        }
LABEL_166:
        if ( v64 )
        {
          v68 = (void *)*((_QWORD *)&v21->Next + 1);
          if ( v68 )
            ObfDereferenceObject(v68);
        }
        v69 = KeGetCurrentPrcb();
        v42 = v69->PPLookasideList[8].P;
        ++v42->TotalFrees;
        if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
        {
          ++v42->FreeMisses;
          v42 = v69->PPLookasideList[8].L;
          ++v42->TotalFrees;
          if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
          {
            ++v42->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v21);
            return v70;
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
        v70 = v40;
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
              return v70;
            }
          }
LABEL_93:
          RtlpInterlockedPushEntrySList(&v42->ListHead, v21);
          return v70;
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
