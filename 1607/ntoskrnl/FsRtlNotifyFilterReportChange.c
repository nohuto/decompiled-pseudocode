/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1404AAFC0
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x14061FEB4 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x14061FF04 (FsRtlNotifyReportChange.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x14009C638 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1404AB8A8 (FsRtlNotifyUpdateBuffer.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1404ABEC8 (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406858D4 (RtlxOemStringToUnicodeSize.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r15
  PSTRING v11; // r10
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // r13
  _LIST_ENTRY *v15; // rdi
  char v16; // r11
  char v17; // bl
  PSTRING v18; // r14
  USHORT v19; // cx
  __int16 Flink_low; // ax
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v22; // dx
  __int16 v23; // ax
  char *v24; // rax
  bool v25; // zf
  struct _LIST_ENTRY *v26; // rax
  struct _LIST_ENTRY *v27; // rax
  __int16 v28; // r8
  UINT Flink_high; // r13d
  _LIST_ENTRY *v30; // rax
  __int16 v31; // r8
  char *v32; // r9
  int v33; // r8d
  int v34; // edx
  unsigned __int16 v35; // ax
  char *v36; // r14
  USHORT v37; // cx
  __int16 v38; // ax
  int v39; // r9d
  int v40; // edx
  int v41; // r10d
  unsigned int v42; // r8d
  struct _LIST_ENTRY *v43; // r11
  struct _LIST_ENTRY *v44; // r11
  int v45; // r14d
  UINT v46; // r14d
  ULONG v47; // eax
  int v48; // eax
  int v49; // ecx
  char v50; // bl
  ULONG v51; // eax
  int v52; // ecx
  ULONG v53; // ecx
  UINT v54; // r15d
  NTSTATUS v55; // eax
  struct _LIST_ENTRY *v56; // rcx
  struct _LIST_ENTRY *v57; // rax
  __int64 Blink_high; // rcx
  struct _LIST_ENTRY *v59; // rax
  struct _LIST_ENTRY *v60; // r10
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int16 v62; // ax
  char v63; // [rsp+40h] [rbp-F8h]
  unsigned __int16 v64; // [rsp+48h] [rbp-F0h]
  int v65; // [rsp+4Ch] [rbp-ECh]
  OEM_STRING OemString; // [rsp+58h] [rbp-E0h] BYREF
  int Length; // [rsp+68h] [rbp-D0h]
  struct _LIST_ENTRY *v68; // [rsp+70h] [rbp-C8h]
  _LIST_ENTRY *v69; // [rsp+78h] [rbp-C0h]
  OEM_STRING v70; // [rsp+80h] [rbp-B8h] BYREF
  int v71; // [rsp+90h] [rbp-A8h]
  unsigned int v72; // [rsp+94h] [rbp-A4h]
  int v73; // [rsp+98h] [rbp-A0h]
  USHORT v74; // [rsp+A0h] [rbp-98h]
  _BYTE v75[14]; // [rsp+A2h] [rbp-96h] BYREF
  UINT puResult[2]; // [rsp+B0h] [rbp-88h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+B8h] [rbp-80h]
  _LIST_ENTRY *v78; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v79; // [rsp+C8h] [rbp-70h]
  _WORD v80[4]; // [rsp+D0h] [rbp-68h] BYREF
  char *Buffer; // [rsp+D8h] [rbp-60h]
  NTSTATUS v82; // [rsp+E0h] [rbp-58h]
  struct _LIST_ENTRY **v83; // [rsp+E8h] [rbp-50h]
  _LIST_ENTRY *v85; // [rsp+148h] [rbp+10h]

  v85 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v74 = 0;
  memset(v75, 0, sizeof(v75));
  v70.Length = 0;
  *(_QWORD *)&v70.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v70.Buffer + 2) = 0;
  HIWORD(v70.Buffer) = 0;
  OemString.Length = 0;
  *(_QWORD *)&OemString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&OemString.Buffer + 2) = 0;
  HIWORD(OemString.Buffer) = 0;
  v63 = 0;
  v73 = 0;
  if ( !TargetNameOffset && FullTargetName )
    return;
  *(_QWORD *)&v75[6] = 0LL;
  v70.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v11 = FullTargetName;
    NotifyList = v85;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  Length = v70.Length;
  v64 = OemString.Length;
  while ( 1 )
  {
    v79 = Flink;
    v69 = Flink;
    if ( Flink == NotifyList )
      break;
    v15 = Flink - 2;
    v78 = Flink - 2;
    if ( v11 )
    {
      if ( v15[8].Blink->Flink && (HIDWORD(v15[4].Blink) & FilterMatch) != 0 )
      {
        v18 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v19 = v10;
          v80[0] = v10;
          Flink_low = LOBYTE(v15[9].Flink);
          if ( v10 != Flink_low )
          {
            v19 = v10 - Flink_low;
            v80[0] = v10 - Flink_low;
          }
          v80[1] = v19;
          v18 = (PSTRING)v80;
          NormalizedParentName = (PSTRING)v80;
        }
        Blink = v15[8].Blink;
        v22 = (unsigned __int16)Blink->Flink;
        if ( v18->Length < LOWORD(Blink->Flink) )
          goto LABEL_134;
        if ( v18->Length == v22 )
        {
          v17 = 1;
          goto LABEL_29;
        }
        v23 = (__int16)v15[4].Blink;
        if ( (v23 & 1) == 0
          || (v23 & 0x10) == 0
          && ((v24 = v18->Buffer, LOBYTE(v15[9].Flink) != 1)
            ? (v25 = *(_WORD *)&v24[v22] == 92)
            : (v25 = v24[v22] == 92),
              !v25) )
        {
LABEL_134:
          NotifyList = v85;
          goto LABEL_135;
        }
        v17 = 0;
LABEL_29:
        if ( !memcmp(Blink->Blink, v18->Buffer, v22)
          && (v17
           || (v26 = v15[1].Flink) == 0LL
           || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v26)(
                v15->Blink,
                TargetContext,
                v15[1].Blink)) )
        {
          v27 = v15[4].Flink;
          if ( !v27
            || !FilterContext
            || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v27)(v15->Blink, FilterContext) )
          {
            v11 = FullTargetName;
            v16 = v63;
LABEL_38:
            v28 = (__int16)v15[4].Blink;
            if ( (v28 & 2) == 0 )
            {
              Flink_high = (UINT)v15[6].Flink;
              if ( Flink_high )
              {
                p_Blink = 0LL;
                v83 = 0LL;
                if ( HIDWORD(v15[6].Flink) )
                {
                  Flink_high = HIDWORD(v15[6].Flink);
                }
                else
                {
                  v30 = v15 + 3;
                  if ( v30->Flink != v30 )
                  {
                    p_Blink = &v30->Flink[-11].Blink;
                    v83 = p_Blink;
                    Flink_high = (UINT)p_Blink[23]->Blink;
                  }
                }
                if ( v17 )
                {
                  v35 = 0;
                  v64 = 0;
                  OemString.Length = 0;
                }
                else if ( v16 )
                {
                  v35 = v64;
                }
                else
                {
                  v31 = v28 & 0x10;
                  if ( v31 || (v32 = v18->Buffer, v32 != v11->Buffer) )
                  {
                    v36 = *(char **)&v75[6];
                    if ( !*(_QWORD *)&v75[6] )
                    {
                      v36 = v11->Buffer;
                      *(_QWORD *)&v75[6] = v36;
                      v37 = v10;
                      v74 = v10;
                      v38 = LOBYTE(v15[9].Flink);
                      if ( v10 != v38 )
                      {
                        v37 = v10 - v38;
                        v74 = v10 - v38;
                      }
                      *(_WORD *)v75 = v37;
                    }
                    LOBYTE(v39) = 0;
                    v40 = 0;
                    if ( !v31 )
                    {
                      v41 = 1;
                      v71 = 1;
                      v42 = 0;
                      v72 = 0;
                      if ( LOBYTE(v15[9].Flink) == 1 )
                      {
                        while ( 1 )
                        {
                          v43 = v15[8].Blink;
                          if ( v42 >= LOWORD(v43->Flink) )
                            break;
                          if ( *((_BYTE *)&v43->Blink->Flink + v42) == 92 )
                            v71 = ++v41;
                          v72 = ++v42;
                        }
                        while ( 1 )
                        {
                          if ( v36[v40] == 92 )
                          {
                            LOBYTE(v39) = v39 + 1;
                            if ( (unsigned __int8)v39 == v41 )
                              break;
                          }
                          ++v40;
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v44 = v15[8].Blink;
                          if ( v42 >= LOWORD(v44->Flink) >> 1 )
                            break;
                          if ( *((_WORD *)&v44->Blink->Flink + v42) == 92 )
                            v71 = ++v41;
                          v72 = ++v42;
                        }
                        while ( 1 )
                        {
                          if ( *(_WORD *)&v36[2 * v40] == 92 )
                          {
                            v39 = (unsigned __int8)(v39 + 1);
                            if ( v39 == v41 )
                              break;
                          }
                          ++v40;
                        }
                        v40 *= LOBYTE(v15[9].Flink);
                      }
                      v16 = v63;
                    }
                    v65 = LOBYTE(v15[9].Flink) + v40;
                    OemString.Buffer = &v36[v65];
                    v35 = v74 - v65;
                  }
                  else
                  {
                    v33 = (int)v15[8].Blink->Flink;
                    v34 = LOBYTE(v15[9].Flink);
                    OemString.Buffer = &v32[v34 + v33];
                    v35 = v18->Length - v34 - v33;
                  }
                  v64 = v35;
                  OemString.Length = v35;
                  OemString.MaximumLength = v35;
                }
                v45 = 12;
                if ( v16 )
                {
                  v46 = StreamName->Length + 12;
                }
                else
                {
                  if ( !v17 )
                  {
                    if ( LOBYTE(v15[9].Flink) == 1 )
                    {
                      if ( (_BYTE)NlsMbOemCodePageTag )
                        v47 = RtlxOemStringToUnicodeSize(&OemString);
                      else
                        v47 = 2 * v35 + 2;
                      v48 = v47 + 10;
                    }
                    else
                    {
                      v48 = v35 + 12;
                    }
                    v45 = v48 + 2;
                  }
                  if ( v70.Buffer )
                  {
                    LOWORD(v49) = Length;
                  }
                  else
                  {
                    v70.Buffer = &FullTargetName->Buffer[v10];
                    v49 = FullTargetName->Length - v10;
                    Length = v49;
                    v70.Length = v49;
                    v70.MaximumLength = v49;
                  }
                  v50 = (char)v15[9].Flink;
                  if ( v50 == 1 )
                  {
                    if ( (_BYTE)NlsMbOemCodePageTag )
                      v51 = RtlxOemStringToUnicodeSize(&v70);
                    else
                      v51 = 2 * (unsigned __int16)v49 + 2;
                    v45 -= 2;
                  }
                  else
                  {
                    v51 = (unsigned __int16)v49;
                  }
                  v46 = v51 + v45;
                  if ( StreamName )
                  {
                    if ( v50 == 2 )
                    {
                      v52 = StreamName->Length + 2;
                    }
                    else
                    {
                      if ( (_BYTE)NlsMbOemCodePageTag )
                        v53 = RtlxOemStringToUnicodeSize(StreamName);
                      else
                        v53 = 2 * StreamName->Length + 2;
                      v52 = v53 - 2 + 1;
                    }
                    v46 += v52;
                  }
                }
                v54 = (LODWORD(v15[6].Blink) + 3) & 0xFFFFFFFC;
                puResult[1] = v54;
                v55 = RtlUIntAdd(v54, v46, puResult);
                v82 = v55;
                if ( v46 > Flink_high || v55 || puResult[0] > Flink_high )
                  goto LABEL_121;
                v56 = 0LL;
                v68 = 0LL;
                v57 = v15[5].Blink;
                if ( v57 )
                {
                  Blink_high = HIDWORD(v15[6].Blink);
                  v68 = (struct _LIST_ENTRY *)((char *)v57 + Blink_high);
                  LODWORD(v68->Flink) = v54 - Blink_high;
                  HIDWORD(v15[6].Blink) = v54;
                  v56 = (struct _LIST_ENTRY *)((char *)v15[5].Blink + v54);
                  v68 = v56;
                  goto LABEL_116;
                }
                if ( p_Blink )
                {
                  v59 = p_Blink[3];
                  if ( v59 )
                  {
                    v56 = p_Blink[3];
                    v68 = v56;
                    v15[5].Blink = v59;
                    goto LABEL_115;
                  }
                  v60 = p_Blink[1];
                  if ( v60 )
                  {
                    if ( (BYTE2(v60->Blink) & 5) != 0 )
                      v56 = v60[1].Blink;
                    else
                      v56 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                    (PMDL)v60,
                                                    0,
                                                    MmCached,
                                                    0LL,
                                                    0,
                                                    0x40000010u);
                    v68 = v56;
                    v15[5].Blink = v56;
LABEL_115:
                    HIDWORD(v15[6].Flink) = Flink_high;
                  }
                }
LABEL_116:
                if ( !v15[5].Blink )
                {
                  PsChargePoolQuota((PEPROCESS)v15[7].Blink, PagedPool, Flink_high);
                  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)17, Flink_high, 0x4E725346u);
                  v15[5].Blink = PoolWithTag;
                  v15[5].Flink = PoolWithTag;
                  memset(v15[5].Blink, 0, Flink_high);
                  HIDWORD(v15[6].Flink) = Flink_high;
                  v56 = v15[5].Blink;
                  v68 = v56;
                }
                if ( v56 )
                {
                  if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                          (_DWORD)v56,
                                          Action,
                                          (unsigned int)&OemString,
                                          (unsigned int)&v70,
                                          (__int64)StreamName,
                                          LOBYTE(v15[9].Flink) == 2,
                                          v46) )
                  {
                    LODWORD(v15[6].Blink) = v54 + v46;
                    goto LABEL_122;
                  }
LABEL_121:
                  LOWORD(v15[4].Blink) |= 2u;
                }
LABEL_122:
                if ( ((__int64)v15[4].Blink & 2) != 0 && v15[5].Blink )
                {
                  if ( v15[5].Flink )
                  {
                    PsReturnProcessPagedPoolQuota((ULONG_PTR)v15[7].Blink, HIDWORD(v15[6].Flink));
                    ExFreePoolWithTag(v15[5].Flink, 0);
                  }
                  v15[5].Blink = 0LL;
                  v15[5].Flink = 0LL;
                  v15[6].Blink = 0LL;
                  HIDWORD(v15[6].Flink) = 0;
                }
                v10 = TargetNameOffset;
              }
              Flink = v69;
            }
            v62 = (__int16)v15[4].Blink;
            if ( Action == 4 )
            {
              LOWORD(v15[4].Blink) = v62 | 8;
            }
            else
            {
              LOWORD(v15[4].Blink) = v62 & 0xFFF7;
              if ( v15[3].Flink != &v15[3] )
                FsRtlNotifyCompleteIrpList(v15, 0LL);
            }
          }
        }
        v11 = FullTargetName;
        goto LABEL_134;
      }
    }
    else if ( TargetContext == v15[1].Blink )
    {
      OemString.Buffer = 0LL;
      v64 = 0;
      OemString.Length = 0;
      v16 = 1;
      v63 = 1;
      v17 = 0;
      v18 = NormalizedParentName;
      goto LABEL_38;
    }
LABEL_135:
    Flink = Flink->Flink;
  }
  v25 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v25 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
