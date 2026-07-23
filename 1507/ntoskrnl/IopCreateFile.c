/*
 * XREFs of IopCreateFile @ 0x14050A2E0
 * Callers:
 *     IoCreateFile @ 0x140508400 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x14050A0C0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14050A1E4 (NtOpenFile.c)
 *     NtCreateFile @ 0x14050A250 (NtCreateFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404A5750 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlpCleanupEcps @ 0x14050AD28 (FsRtlpCleanupEcps.c)
 *     IoCheckEaBufferValidity @ 0x14050ADA4 (IoCheckEaBufferValidity.c)
 *     FsRtlIsEcpFromUserMode @ 0x140531C00 (FsRtlIsEcpFromUserMode.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        _SLIST_ENTRY *a3,
        NTSTATUS *a4,
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
        _SLIST_ENTRY *a16)
{
  NTSTATUS *v16; // r12
  char PreviousMode; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v21; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  int v23; // r13d
  int v24; // edi
  struct _KPRCB *v25; // rcx
  _GENERAL_LOOKASIDE *v26; // r8
  _DWORD *v28; // rsi
  struct _KPRCB *v29; // rcx
  _GENERAL_LOOKASIDE *v30; // r8
  _QWORD *v31; // rcx
  _DWORD *v32; // rcx
  PVOID PoolWithQuotaTag; // rax
  int v34; // eax
  PVOID PoolWithTag; // rax
  struct _KPRCB *v36; // rcx
  _GENERAL_LOOKASIDE *v37; // r8
  NTSTATUS v38; // r14d
  struct _KPRCB *v39; // rcx
  _GENERAL_LOOKASIDE *v40; // r8
  __int64 v41; // r10
  struct _KTHREAD *CurrentThread; // rax
  struct _ECP_LIST *Next; // rcx
  int ExtraCreateParameter; // edi
  _DWORD *v45; // rsi
  void *v46; // rcx
  bool v47; // si
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rax
  void *v51; // rcx
  struct _KPRCB *v52; // rcx
  unsigned int v53; // [rsp+44h] [rbp-64h]
  HANDLE Handle; // [rsp+50h] [rbp-58h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-50h]
  int *v56; // [rsp+60h] [rbp-48h]
  PVOID EcpContext; // [rsp+68h] [rbp-40h] BYREF
  HANDLE *v58; // [rsp+70h] [rbp-38h]

  v16 = a4;
  v56 = a4;
  v58 = a1;
  v53 = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  ListEntry = v21;
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    ListEntry = v21;
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
      ListEntry = v21;
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !PreviousMode && (a14 & 0x200) == 0 )
  {
    v23 = a12;
    v24 = a9;
LABEL_52:
    v28 = a13;
    goto LABEL_53;
  }
  if ( (a6 & 0xFFFD0048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (v24 = a9, (a9 & 0xFF000000) != 0)
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (a2 & 4) != 0 )
  {
LABEL_43:
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[8].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[8].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v21);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v21);
    }
    return 3221225485LL;
  }
  if ( !IopFailZeroAccessCreate || a2 )
  {
    v23 = a12;
    if ( !a12 )
      goto LABEL_52;
    v28 = a13;
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
    if ( PreviousMode )
    {
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      v31 = v58;
      if ( (unsigned __int64)v58 >= MmUserProbeAddress )
        v31 = (_QWORD *)MmUserProbeAddress;
      *v31 = *v31;
      v32 = v16;
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v32 = (_DWORD *)MmUserProbeAddress;
      *v32 = *v32;
      if ( a5 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Handle = *(HANDLE *)a5;
        if ( (__int64)Handle < 0 )
          RtlRaiseStatus(-1073741811);
      }
      else
      {
        Handle = 0LL;
      }
      if ( Src && (_DWORD)NumberOfBytes )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > MmUserProbeAddress
          || &Src[(unsigned int)NumberOfBytes] < Src )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
        LODWORD(v21[5].Next) = NumberOfBytes;
        memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
        v16 = v56;
        v34 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)v56 + 2);
        v53 = v34;
        if ( v34 < 0 )
        {
          *v56 = v34;
          RtlRaiseStatus(v34);
        }
        goto LABEL_95;
      }
LABEL_74:
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      LODWORD(v21[5].Next) = 0;
      goto LABEL_95;
    }
    if ( v24 < 0 )
    {
      a14 |= 0x400u;
      v24 &= ~0x80000000;
    }
    if ( !a5 )
    {
      Handle = 0LL;
LABEL_81:
      if ( !Src || !(_DWORD)NumberOfBytes )
        goto LABEL_74;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
      if ( PoolWithTag )
      {
        LODWORD(v21[5].Next) = NumberOfBytes;
        memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
        v38 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)v16 + 2);
        v53 = v38;
        if ( v38 < 0 )
        {
          ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
          *v16 = v38;
          v39 = KeGetCurrentPrcb();
          v40 = v39->PPLookasideList[8].P;
          ++v40->TotalFrees;
          if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
          {
            ++v40->FreeMisses;
            v40 = v39->PPLookasideList[8].L;
            ++v40->TotalFrees;
            if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
            {
              ++v40->FreeMisses;
              ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v21);
              return v53;
            }
          }
LABEL_93:
          RtlpInterlockedPushEntrySList(&v40->ListHead, v21);
          return v53;
        }
LABEL_95:
        LODWORD(v21->Next) = 12058632;
        LODWORD(v21[2].Next) = 0;
        *((_QWORD *)&v21[1].Next + 1) = 0LL;
        *((_QWORD *)&v21[3].Next + 1) = Handle;
        LODWORD(v21[4].Next) = v24;
        WORD2(v21[4].Next) = a6;
        HIWORD(v21[4].Next) = a7;
        *((_DWORD *)&v21[5].Next + 2) = a8;
        LOWORD(v21[8].Next) = 0;
        BYTE2(v21[8].Next) = 0;
        HIDWORD(v21[5].Next) = a14;
        *((_QWORD *)&v21[2].Next + 1) = 0LL;
        v41 = (__int64)a3;
        v21[3].Next = a3;
        LODWORD(v21[7].Next) = v23;
        *((_QWORD *)&v21[7].Next + 1) = v28;
        LODWORD(v21[9].Next) = a15;
        BYTE4(v21[9].Next) = PreviousMode;
        if ( a16 )
        {
          *(PSLIST_ENTRY)((char *)v21 + 152) = *a16;
          *(PSLIST_ENTRY)((char *)v21 + 168) = a16[1];
        }
        else
        {
          *((_QWORD *)&v21[9].Next + 1) = 0LL;
          v21[10].Next = 0LL;
          *((_QWORD *)&v21[10].Next + 1) = 0LL;
          v21[11].Next = 0LL;
          *((_WORD *)&v21[9].Next + 4) = 32;
        }
        LODWORD(v21[1].Next) = 0;
        *((_QWORD *)&v21->Next + 1) = 0LL;
        CurrentThread = KeGetCurrentThread();
        ++CurrentThread->OtherOperationCount;
        __incgsdword(0x2E64u);
        Next = (struct _ECP_LIST *)v21[10].Next;
        if ( Next )
        {
          ExtraCreateParameter = FsRtlFindExtraCreateParameter(Next, &GUID_ECP_FILTER_DEVICE_TYPE, &EcpContext, 0LL);
          v53 = ExtraCreateParameter;
          if ( ExtraCreateParameter < 0 )
            goto LABEL_104;
          v45 = EcpContext;
          if ( FsRtlIsEcpFromUserMode(EcpContext) )
          {
            ExtraCreateParameter = -1073740011;
            v53 = -1073740011;
            LODWORD(v21[1].Next) = -1073740011;
          }
          if ( *v45 )
          {
LABEL_104:
            v41 = (__int64)a3;
          }
          else
          {
            LODWORD(v21[9].Next) |= 0x10u;
            *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
            v41 = (__int64)a3;
          }
        }
        else
        {
          ExtraCreateParameter = v53;
        }
        if ( SLODWORD(v21[1].Next) >= 0 )
        {
          ExtraCreateParameter = ObOpenObjectByName(
                                   v41,
                                   (__int64)IoFileObjectType,
                                   PreviousMode,
                                   0LL,
                                   a2,
                                   (__int64)v21,
                                   &Handle);
          v53 = ExtraCreateParameter;
        }
        v46 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v46 )
          ExFreePoolWithTag(v46, 0);
        if ( v21[10].Next && (unsigned __int8)FsRtlpCleanupEcps() )
          v21[10].Next = 0LL;
        v47 = LODWORD(v21[2].Next) == -1096154543;
        if ( ExtraCreateParameter >= 0 )
        {
          if ( LODWORD(v21[2].Next) == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *v58 = Handle;
            *((_QWORD *)v16 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v16 = (NTSTATUS)v21[1].Next;
            v53 = (unsigned int)v21[1].Next;
            goto LABEL_133;
          }
          ObCloseHandle(Handle, PreviousMode);
          ExtraCreateParameter = -1073741788;
          v53 = -1073741788;
        }
        v48 = (int)v21[1].Next;
        if ( v48 >= 0 )
        {
          v49 = *((_QWORD *)&v21->Next + 1);
          if ( v49 )
          {
            if ( v47 )
            {
              if ( (*(_DWORD *)(v49 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
            }
            else
            {
              if ( *(_WORD *)(v49 + 88) )
                ExFreePoolWithTag(*(PVOID *)(v49 + 96), 0);
              *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          ExtraCreateParameter = (int)v21[1].Next;
          v53 = ExtraCreateParameter;
          if ( (v48 & 0xC0000000) == 0x80000000 )
          {
            *v16 = v48;
            *((_QWORD *)v16 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( ExtraCreateParameter == -1073741772 )
        {
          v50 = *((_QWORD *)&v21[1].Next + 1);
          if ( v50 == 2684354563LL || v50 == 2684354572LL || v50 == 2147483673LL )
            v53 = -1073741184;
        }
LABEL_133:
        if ( v47 )
        {
          v51 = (void *)*((_QWORD *)&v21->Next + 1);
          if ( v51 )
            ObfDereferenceObject(v51);
        }
        v52 = KeGetCurrentPrcb();
        v40 = v52->PPLookasideList[8].P;
        ++v40->TotalFrees;
        if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
        {
          ++v40->FreeMisses;
          v40 = v52->PPLookasideList[8].L;
          ++v40->TotalFrees;
          if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
          {
            ++v40->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v21);
            return v53;
          }
        }
        goto LABEL_93;
      }
      v36 = KeGetCurrentPrcb();
      v37 = v36->PPLookasideList[8].P;
      ++v37->TotalFrees;
      if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
        || (++v37->FreeMisses,
            v37 = v36->PPLookasideList[8].L,
            ++v37->TotalFrees,
            LOWORD(v37->ListHead.Alignment) < v37->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v37->ListHead, v21);
      }
      else
      {
        ++v37->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v37->FreeEx)(v21);
      }
      return 3221225626LL;
    }
    if ( *(__int64 *)a5 >= 0 )
    {
      Handle = *(HANDLE *)a5;
      goto LABEL_81;
    }
    goto LABEL_43;
  }
  v25 = KeGetCurrentPrcb();
  v26 = v25->PPLookasideList[8].P;
  ++v26->TotalFrees;
  if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
    || (++v26->FreeMisses,
        v26 = v25->PPLookasideList[8].L,
        ++v26->TotalFrees,
        LOWORD(v26->ListHead.Alignment) < v26->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v26->ListHead, v21);
  }
  else
  {
    ++v26->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v26->FreeEx)(v21);
  }
  return 3221225506LL;
}
