/*
 * XREFs of IopCreateFile @ 0x140439640
 * Callers:
 *     IoCreateFileEx @ 0x1404393FC (IoCreateFileEx.c)
 *     NtOpenFile @ 0x140439544 (NtOpenFile.c)
 *     NtCreateFile @ 0x1404395B0 (NtCreateFile.c)
 *     IoCreateFile @ 0x1404B282C (IoCreateFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlFindExtraCreateParameter @ 0x1403F55D0 (FsRtlFindExtraCreateParameter.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     IoCheckEaBufferValidity @ 0x14043A220 (IoCheckEaBufferValidity.c)
 *     FsRtlIsEcpFromUserMode @ 0x1404A9594 (FsRtlIsEcpFromUserMode.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        ULONG64 a4,
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
  ACCESS_MASK v17; // r12d
  char PreviousMode; // r13
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
  KPROCESSOR_MODE v41; // si
  size_t v42; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct _ECP_LIST *Next; // rcx
  int ExtraCreateParameter; // r15d
  _DWORD *v46; // rdi
  void *v47; // rcx
  _SLIST_ENTRY *v48; // r13
  __int64 **v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // r14
  __int64 *v53; // rdi
  void (__fastcall *v54)(_QWORD *, __int64 *); // rax
  struct _NPAGED_LOOKASIDE_LIST *v55; // rcx
  __int64 *v56; // rdi
  __int64 *v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // r8
  _QWORD *v60; // rdx
  bool v61; // di
  _DWORD *v62; // rcx
  int v63; // ecx
  _DWORD *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  void *v67; // rcx
  struct _KPRCB *v68; // rcx
  unsigned int v69; // [rsp+40h] [rbp-68h]
  unsigned __int8 v70; // [rsp+48h] [rbp-60h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  _DWORD *v72; // [rsp+60h] [rbp-48h]
  PVOID EcpContext; // [rsp+68h] [rbp-40h] BYREF
  HANDLE *v74; // [rsp+70h] [rbp-38h]
  PVOID Object; // [rsp+78h] [rbp-30h]

  v72 = (_DWORD *)a4;
  v17 = a2;
  v74 = a1;
  Object = 0LL;
  v69 = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  v70 = PreviousMode;
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
  if ( !IopFailZeroAccessCreate || v17 )
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
    if ( v70 )
    {
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      v31 = v74;
      if ( (unsigned __int64)v74 >= MmUserProbeAddress )
        v31 = (_QWORD *)MmUserProbeAddress;
      *v31 = *v31;
      v32 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
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
        v34 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, v72 + 2);
        v69 = v34;
        if ( v34 < 0 )
        {
          *v72 = v34;
          RtlRaiseStatus(v34);
        }
LABEL_95:
        v17 = a2;
LABEL_96:
        LODWORD(v21->Next) = 12582920;
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
        v21[3].Next = (_SLIST_ENTRY *)a3;
        LODWORD(v21[7].Next) = v23;
        *((_QWORD *)&v21[7].Next + 1) = v28;
        LODWORD(v21[9].Next) = a15;
        v41 = v70;
        BYTE4(v21[9].Next) = v70;
        *((_QWORD *)&v21[9].Next + 1) = 0LL;
        v21[10].Next = 0LL;
        *((_QWORD *)&v21[10].Next + 1) = 0LL;
        v21[11].Next = 0LL;
        *((_WORD *)&v21[9].Next + 4) = 40;
        *((_QWORD *)&v21[11].Next + 1) = 1LL;
        if ( a16 )
        {
          v42 = *a16;
          if ( v42 > 0x28 )
            v42 = 40LL;
          memmove(&v21[9].Next + 1, a16, v42);
        }
        if ( *((_QWORD *)&v21[11].Next + 1) == 1LL )
        {
          Object = PsGetCurrentServerSilo();
          *((_QWORD *)&v21[11].Next + 1) = Object;
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
          v69 = ExtraCreateParameter;
          if ( ExtraCreateParameter >= 0 )
          {
            v46 = EcpContext;
            if ( FsRtlIsEcpFromUserMode(EcpContext) )
            {
              ExtraCreateParameter = -1073740011;
              v69 = -1073740011;
              LODWORD(v21[1].Next) = -1073740011;
            }
            if ( !*v46 )
            {
              LODWORD(v21[9].Next) |= 0x10u;
              *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
            }
          }
        }
        else
        {
          ExtraCreateParameter = v69;
        }
        if ( SLODWORD(v21[1].Next) >= 0 )
        {
          ExtraCreateParameter = ObOpenObjectByNameEx(
                                   a3,
                                   (struct _OBJECT_TYPE *)IoFileObjectType,
                                   v70,
                                   0LL,
                                   v17,
                                   v21,
                                   *((_QWORD *)&v21[11].Next + 1),
                                   &Handle);
          v69 = ExtraCreateParameter;
        }
        v47 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        v48 = v21[10].Next;
        if ( v48 )
        {
          v49 = (__int64 **)(&v48->Next + 1);
          if ( (HIDWORD(v48->Next) & 1) == 0 )
          {
            while ( *v49 != (__int64 *)v49 )
            {
              v50 = *v49;
              v51 = **v49;
              if ( (__int64 **)(*v49)[1] != v49 || *(__int64 **)(v51 + 8) != v50 )
                __fastfail(3u);
              *v49 = (__int64 *)v51;
              *(_QWORD *)(v51 + 8) = v49;
              v50[1] = 0LL;
              *v50 = 0LL;
              v52 = v50 + 8;
              v53 = v50 - 1;
              v54 = (void (__fastcall *)(_QWORD *, __int64 *))v50[4];
              if ( v54 )
                v54(v52, v53 + 3);
              if ( (v53[6] & 0x20) != 0 && FltMgrCallbacks )
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v53[8], v52);
              v55 = (struct _NPAGED_LOOKASIDE_LIST *)v53[7];
              if ( v55 )
                ExFreeToNPagedLookasideList(v55, v53);
              else
                ExFreePoolWithTag(v53, 0);
            }
            if ( (HIDWORD(v48->Next) & 4) != 0 )
            {
              ++unk_140306B1C;
              if ( LOWORD(FsRtlEcpListLookaside.Alignment) < unk_140306B10 )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, v48);
              }
              else
              {
                ++unk_140306B20;
                unk_140306B38(v48);
              }
            }
            else
            {
              ExFreePoolWithTag(v48, 0);
            }
            v21[10].Next = 0LL;
LABEL_133:
            v41 = v70;
            goto LABEL_143;
          }
          v56 = *v49;
          if ( *v49 != (__int64 *)v49 )
          {
            do
            {
              v57 = v56 - 1;
              v56 = (__int64 *)*v56;
              if ( (v57[6] & 1) == 0 )
              {
                v58 = v57 + 1;
                v59 = v57[1];
                v60 = (_QWORD *)v57[2];
                if ( *(__int64 **)(v59 + 8) != v57 + 1 || (_QWORD *)*v60 != v58 )
                  __fastfail(3u);
                *v60 = v59;
                *(_QWORD *)(v59 + 8) = v60;
                v57[2] = 0LL;
                *v58 = 0LL;
                FsRtlFreeExtraCreateParameter(v57 + 9);
              }
            }
            while ( v56 != (__int64 *)v49 );
            goto LABEL_133;
          }
          v41 = v70;
        }
LABEL_143:
        v61 = LODWORD(v21[2].Next) == -1096154543;
        if ( ExtraCreateParameter >= 0 )
        {
          if ( LODWORD(v21[2].Next) == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *v74 = Handle;
            v62 = v72;
            *((_QWORD *)v72 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v62 = v21[1].Next;
            v69 = (unsigned int)v21[1].Next;
            goto LABEL_163;
          }
          ObCloseHandle(Handle, v41);
          ExtraCreateParameter = -1073741788;
          v69 = -1073741788;
        }
        v63 = (int)v21[1].Next;
        if ( v63 >= 0 )
        {
          v65 = *((_QWORD *)&v21->Next + 1);
          if ( v65 )
          {
            if ( v61 )
            {
              if ( (*(_DWORD *)(v65 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
            }
            else
            {
              if ( *(_WORD *)(v65 + 88) )
                ExFreePoolWithTag(*(PVOID *)(v65 + 96), 0);
              *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          ExtraCreateParameter = (int)v21[1].Next;
          v69 = ExtraCreateParameter;
          if ( (v63 & 0xC0000000) == 0x80000000 )
          {
            v64 = v72;
            *v72 = v63;
            *((_QWORD *)v64 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( ExtraCreateParameter == -1073741772 )
        {
          v66 = *((_QWORD *)&v21[1].Next + 1);
          if ( v66 == 2684354563LL || v66 == 2684354572LL || v66 == 2147483673LL )
            v69 = -1073741184;
        }
LABEL_163:
        if ( v61 )
        {
          v67 = (void *)*((_QWORD *)&v21->Next + 1);
          if ( v67 )
            ObfDereferenceObject(v67);
        }
        if ( Object )
          ObfDereferenceObject(Object);
        v68 = KeGetCurrentPrcb();
        v40 = v68->PPLookasideList[8].P;
        ++v40->TotalFrees;
        if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
        {
          ++v40->FreeMisses;
          v40 = v68->PPLookasideList[8].L;
          ++v40->TotalFrees;
          if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
          {
            ++v40->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v21);
            return v69;
          }
        }
        goto LABEL_93;
      }
LABEL_74:
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      LODWORD(v21[5].Next) = 0;
      goto LABEL_96;
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
        v38 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, v72 + 2);
        v69 = v38;
        if ( v38 < 0 )
        {
          ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
          *v72 = v38;
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
              return v69;
            }
          }
LABEL_93:
          RtlpInterlockedPushEntrySList(&v40->ListHead, v21);
          return v69;
        }
        goto LABEL_95;
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
