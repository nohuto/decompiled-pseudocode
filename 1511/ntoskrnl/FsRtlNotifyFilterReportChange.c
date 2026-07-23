/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x14048CA00
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x1405F5A58 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1405F5AA8 (FsRtlNotifyReportChange.c)
 *     VerifierFsRtlNotifyFilterReportChange @ 0x1406C05AC (VerifierFsRtlNotifyFilterReportChange.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x1400C9030 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlNotifyUpdateBuffer @ 0x14048C84C (FsRtlNotifyUpdateBuffer.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14048DE28 (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x140644BBC (RtlxOemStringToUnicodeSize.c)
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
  __int16 v19; // r8
  unsigned int Flink_high; // r13d
  _LIST_ENTRY *v21; // rax
  unsigned __int16 v22; // ax
  int v23; // r14d
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // r10
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int16 v31; // ax
  USHORT v32; // cx
  __int16 Flink_low; // ax
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v35; // dx
  __int16 v36; // ax
  char *v37; // rax
  bool v38; // zf
  struct _LIST_ENTRY *v39; // rax
  struct _LIST_ENTRY *v40; // rax
  __int16 v41; // r8
  char *v42; // r9
  int v43; // r8d
  int v44; // edx
  char *v45; // r14
  USHORT v46; // cx
  __int16 v47; // ax
  int v48; // r9d
  int v49; // edx
  int v50; // r10d
  unsigned int v51; // r8d
  struct _LIST_ENTRY *v52; // r11
  struct _LIST_ENTRY *v53; // r11
  ULONG v54; // eax
  int v55; // eax
  int v56; // ecx
  char v57; // bl
  ULONG v58; // eax
  int v59; // ecx
  ULONG v60; // ecx
  __int64 Blink_high; // rcx
  char v62; // [rsp+40h] [rbp-F8h]
  unsigned __int16 v63; // [rsp+48h] [rbp-F0h]
  int v64; // [rsp+4Ch] [rbp-ECh]
  OEM_STRING OemString; // [rsp+58h] [rbp-E0h] BYREF
  int Length; // [rsp+68h] [rbp-D0h]
  struct _LIST_ENTRY *v67; // [rsp+70h] [rbp-C8h]
  _LIST_ENTRY *v68; // [rsp+78h] [rbp-C0h]
  OEM_STRING v69; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+90h] [rbp-A8h]
  int v71; // [rsp+94h] [rbp-A4h]
  int v72; // [rsp+98h] [rbp-A0h]
  USHORT v73; // [rsp+A0h] [rbp-98h]
  _DWORD v74[5]; // [rsp+A2h] [rbp-96h] BYREF
  _LIST_ENTRY *v75; // [rsp+B8h] [rbp-80h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v77; // [rsp+C8h] [rbp-70h]
  _WORD v78[4]; // [rsp+D0h] [rbp-68h] BYREF
  char *Buffer; // [rsp+D8h] [rbp-60h]
  struct _LIST_ENTRY **v80; // [rsp+E8h] [rbp-50h]
  _LIST_ENTRY *v82; // [rsp+148h] [rbp+10h]

  v82 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v73 = 0;
  memset(v74, 0, 14);
  v69.Length = 0;
  *(_QWORD *)&v69.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v69.Buffer + 2) = 0;
  HIWORD(v69.Buffer) = 0;
  OemString.Length = 0;
  *(_QWORD *)&OemString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&OemString.Buffer + 2) = 0;
  HIWORD(OemString.Buffer) = 0;
  v62 = 0;
  v72 = 0;
  if ( !TargetNameOffset && FullTargetName )
    return;
  *(_QWORD *)((char *)&v74[1] + 2) = 0LL;
  v69.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v11 = FullTargetName;
    NotifyList = v82;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  Length = v69.Length;
  v63 = OemString.Length;
  while ( 1 )
  {
    v75 = Flink;
    v68 = Flink;
    if ( Flink == NotifyList )
      break;
    v15 = Flink - 2;
    v77 = Flink - 2;
    if ( v11 )
    {
      if ( v15[8].Blink->Flink && (HIDWORD(v15[4].Blink) & FilterMatch) != 0 )
      {
        v18 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v32 = v10;
          v78[0] = v10;
          Flink_low = LOBYTE(v15[9].Flink);
          if ( v10 != Flink_low )
          {
            v32 = v10 - Flink_low;
            v78[0] = v10 - Flink_low;
          }
          v78[1] = v32;
          v18 = (PSTRING)v78;
          NormalizedParentName = (PSTRING)v78;
        }
        Blink = v15[8].Blink;
        v35 = (unsigned __int16)Blink->Flink;
        if ( v18->Length >= LOWORD(Blink->Flink) )
        {
          if ( v18->Length == v35 )
          {
            v17 = 1;
            goto LABEL_58;
          }
          v36 = (__int16)v15[4].Blink;
          if ( (v36 & 1) != 0 )
          {
            if ( (v36 & 0x10) != 0
              || ((v37 = v18->Buffer, LOBYTE(v15[9].Flink) != 1)
                ? (v38 = *(_WORD *)&v37[v35] == 92)
                : (v38 = v37[v35] == 92),
                  v38) )
            {
              v17 = 0;
LABEL_58:
              if ( !memcmp(Blink->Blink, v18->Buffer, v35)
                && (v17
                 || (v39 = v15[1].Flink) == 0LL
                 || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v39)(
                      v15->Blink,
                      TargetContext,
                      v15[1].Blink)) )
              {
                v40 = v15[4].Flink;
                if ( !v40
                  || !FilterContext
                  || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v40)(v15->Blink, FilterContext) )
                {
                  v11 = FullTargetName;
                  v16 = v62;
LABEL_10:
                  v19 = (__int16)v15[4].Blink;
                  if ( (v19 & 2) == 0 )
                  {
                    Flink_high = (unsigned int)v15[6].Flink;
                    if ( Flink_high )
                    {
                      p_Blink = 0LL;
                      v80 = 0LL;
                      if ( HIDWORD(v15[6].Flink) )
                      {
                        Flink_high = HIDWORD(v15[6].Flink);
                      }
                      else
                      {
                        v21 = v15 + 3;
                        if ( v21->Flink != v21 )
                        {
                          p_Blink = &v21->Flink[-11].Blink;
                          v80 = p_Blink;
                          Flink_high = (unsigned int)p_Blink[23]->Blink;
                        }
                      }
                      if ( v17 )
                      {
                        v22 = 0;
                        v63 = 0;
                        OemString.Length = 0;
                      }
                      else if ( v16 )
                      {
                        v22 = v63;
                      }
                      else
                      {
                        v41 = v19 & 0x10;
                        if ( v41 || (v42 = v18->Buffer, v42 != v11->Buffer) )
                        {
                          v45 = *(char **)((char *)&v74[1] + 2);
                          if ( !*(_QWORD *)((char *)&v74[1] + 2) )
                          {
                            v45 = v11->Buffer;
                            *(_QWORD *)((char *)&v74[1] + 2) = v45;
                            v46 = v10;
                            v73 = v10;
                            v47 = LOBYTE(v15[9].Flink);
                            if ( v10 != v47 )
                            {
                              v46 = v10 - v47;
                              v73 = v10 - v47;
                            }
                            LOWORD(v74[0]) = v46;
                          }
                          LOBYTE(v48) = 0;
                          v49 = 0;
                          if ( !v41 )
                          {
                            v50 = 1;
                            v71 = 1;
                            v51 = 0;
                            v70 = 0;
                            if ( LOBYTE(v15[9].Flink) == 1 )
                            {
                              while ( 1 )
                              {
                                v52 = v15[8].Blink;
                                if ( v51 >= LOWORD(v52->Flink) )
                                  break;
                                if ( *((_BYTE *)&v52->Blink->Flink + v51) == 92 )
                                  v71 = ++v50;
                                v70 = ++v51;
                              }
                              while ( 1 )
                              {
                                if ( v45[v49] == 92 )
                                {
                                  LOBYTE(v48) = v48 + 1;
                                  if ( (unsigned __int8)v48 == v50 )
                                    break;
                                }
                                ++v49;
                              }
                            }
                            else
                            {
                              while ( 1 )
                              {
                                v53 = v15[8].Blink;
                                if ( v51 >= LOWORD(v53->Flink) >> 1 )
                                  break;
                                if ( *((_WORD *)&v53->Blink->Flink + v51) == 92 )
                                  v71 = ++v50;
                                v70 = ++v51;
                              }
                              while ( 1 )
                              {
                                if ( *(_WORD *)&v45[2 * v49] == 92 )
                                {
                                  v48 = (unsigned __int8)(v48 + 1);
                                  if ( v48 == v50 )
                                    break;
                                }
                                ++v49;
                              }
                              v49 *= LOBYTE(v15[9].Flink);
                            }
                            v16 = v62;
                          }
                          v64 = LOBYTE(v15[9].Flink) + v49;
                          OemString.Buffer = &v45[v64];
                          v22 = v73 - v64;
                        }
                        else
                        {
                          v43 = (int)v15[8].Blink->Flink;
                          v44 = LOBYTE(v15[9].Flink);
                          OemString.Buffer = &v42[v44 + v43];
                          v22 = v18->Length - v44 - v43;
                        }
                        v63 = v22;
                        OemString.Length = v22;
                        OemString.MaximumLength = v22;
                      }
                      v23 = 12;
                      if ( v16 )
                      {
                        v24 = StreamName->Length + 12;
                      }
                      else
                      {
                        if ( !v17 )
                        {
                          if ( LOBYTE(v15[9].Flink) == 1 )
                          {
                            if ( (_BYTE)NlsMbOemCodePageTag )
                              v54 = RtlxOemStringToUnicodeSize(&OemString);
                            else
                              v54 = 2 * v22 + 2;
                            v55 = v54 + 10;
                          }
                          else
                          {
                            v55 = v22 + 12;
                          }
                          v23 = v55 + 2;
                        }
                        if ( v69.Buffer )
                        {
                          LOWORD(v56) = Length;
                        }
                        else
                        {
                          v69.Buffer = &FullTargetName->Buffer[v10];
                          v56 = FullTargetName->Length - v10;
                          Length = v56;
                          v69.Length = v56;
                          v69.MaximumLength = v56;
                        }
                        v57 = (char)v15[9].Flink;
                        if ( v57 == 1 )
                        {
                          if ( (_BYTE)NlsMbOemCodePageTag )
                            v58 = RtlxOemStringToUnicodeSize(&v69);
                          else
                            v58 = 2 * (unsigned __int16)v56 + 2;
                          v23 -= 2;
                        }
                        else
                        {
                          v58 = (unsigned __int16)v56;
                        }
                        v24 = v58 + v23;
                        if ( StreamName )
                        {
                          if ( v57 == 2 )
                          {
                            v59 = StreamName->Length + 2;
                          }
                          else
                          {
                            if ( (_BYTE)NlsMbOemCodePageTag )
                              v60 = RtlxOemStringToUnicodeSize(StreamName);
                            else
                              v60 = 2 * StreamName->Length + 2;
                            v59 = v60 - 2 + 1;
                          }
                          v24 += v59;
                        }
                      }
                      v25 = (LODWORD(v15[6].Blink) + 3) & 0xFFFFFFFC;
                      *(_DWORD *)((char *)&v74[3] + 2) = v25;
                      if ( v24 > Flink_high || v25 + v24 > Flink_high )
                        goto LABEL_128;
                      v26 = 0LL;
                      v67 = 0LL;
                      v27 = v15[5].Blink;
                      if ( v27 )
                      {
                        Blink_high = HIDWORD(v15[6].Blink);
                        v67 = (struct _LIST_ENTRY *)((char *)v27 + Blink_high);
                        LODWORD(v67->Flink) = v25 - Blink_high;
                        HIDWORD(v15[6].Blink) = v25;
                        v26 = (struct _LIST_ENTRY *)((char *)v15[5].Blink + v25);
                        v67 = v26;
                      }
                      else
                      {
                        if ( !p_Blink )
                          goto LABEL_26;
                        v28 = p_Blink[3];
                        if ( v28 )
                        {
                          v26 = p_Blink[3];
                          v67 = v26;
                          v15[5].Blink = v28;
                        }
                        else
                        {
                          v29 = p_Blink[1];
                          if ( !v29 )
                            goto LABEL_26;
                          if ( (BYTE2(v29->Blink) & 5) != 0 )
                            v26 = v29[1].Blink;
                          else
                            v26 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                          (PMDL)v29,
                                                          0,
                                                          MmCached,
                                                          0LL,
                                                          0,
                                                          0x40000010u);
                          v67 = v26;
                          v15[5].Blink = v26;
                        }
                        HIDWORD(v15[6].Flink) = Flink_high;
                      }
LABEL_26:
                      if ( !v15[5].Blink )
                      {
                        PsChargePoolQuota((PEPROCESS)v15[7].Blink, PagedPool, Flink_high);
                        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                                              (POOL_TYPE)17,
                                                              Flink_high,
                                                              0x4E725346u);
                        v15[5].Blink = PoolWithTag;
                        v15[5].Flink = PoolWithTag;
                        memset(v15[5].Blink, 0, Flink_high);
                        HIDWORD(v15[6].Flink) = Flink_high;
                        v26 = v15[5].Blink;
                        v67 = v26;
                      }
                      if ( v26 )
                      {
                        if ( FsRtlNotifyUpdateBuffer(
                               (__int64)v26,
                               Action,
                               (PCCH *)&OemString,
                               (PCCH *)&v69,
                               (PCCH *)StreamName,
                               LOBYTE(v15[9].Flink) == 2,
                               v24) )
                        {
                          LODWORD(v15[6].Blink) = v25 + v24;
                          goto LABEL_31;
                        }
LABEL_128:
                        LOWORD(v15[4].Blink) |= 2u;
                      }
LABEL_31:
                      if ( ((__int64)v15[4].Blink & 2) != 0 && v15[5].Blink )
                      {
                        if ( v15[5].Flink )
                        {
                          PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[7].Blink, HIDWORD(v15[6].Flink));
                          ExFreePoolWithTag(v15[5].Flink, 0);
                        }
                        v15[5].Blink = 0LL;
                        v15[5].Flink = 0LL;
                        v15[6].Blink = 0LL;
                        HIDWORD(v15[6].Flink) = 0;
                      }
                      v10 = TargetNameOffset;
                    }
                    Flink = v68;
                  }
                  v31 = (__int16)v15[4].Blink;
                  if ( Action == 4 )
                  {
                    LOWORD(v15[4].Blink) = v31 | 8;
                  }
                  else
                  {
                    LOWORD(v15[4].Blink) = v31 & 0xFFF7;
                    if ( v15[3].Flink != &v15[3] )
                      FsRtlNotifyCompleteIrpList(v15, 0LL);
                  }
                }
              }
              v11 = FullTargetName;
            }
          }
        }
        NotifyList = v82;
      }
    }
    else if ( TargetContext == v15[1].Blink )
    {
      OemString.Buffer = 0LL;
      v63 = 0;
      OemString.Length = 0;
      v16 = 1;
      v62 = 1;
      v17 = 0;
      v18 = NormalizedParentName;
      goto LABEL_10;
    }
    Flink = Flink->Flink;
  }
  v38 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v38 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
