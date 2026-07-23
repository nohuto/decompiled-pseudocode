/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1404A74B4
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x14066EB80 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x14066EBD0 (FsRtlNotifyReportChange.c)
 *     VerifierFsRtlNotifyFilterReportChange @ 0x140741DA0 (VerifierFsRtlNotifyFilterReportChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsChargePoolQuota @ 0x140074534 (PsChargePoolQuota.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1404A6720 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1404A7E04 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406C7C48 (RtlxOemStringToUnicodeSize.c)
 */

// local variable allocation has failed, the output may be wrong!
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
  USHORT v10; // r13
  PSTRING v11; // r10
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  _LIST_ENTRY *Flink; // rcx
  __int64 v18; // rsi
  char v19; // r11
  char v20; // bl
  PSTRING v21; // r14
  USHORT v22; // cx
  __int16 v23; // ax
  __int16 *v24; // r9
  unsigned __int16 v25; // dx
  __int16 v26; // ax
  char *v27; // rax
  bool v28; // zf
  unsigned __int8 (__fastcall *v29)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v30)(_QWORD, PVOID); // rax
  __int16 v31; // r8
  ULONG v32; // eax
  _QWORD *v33; // rax
  __int16 v34; // r8
  char *v35; // r9
  int v36; // r8d
  int v37; // edx
  unsigned __int16 v38; // ax
  char *v39; // r14
  USHORT v40; // cx
  __int16 v41; // ax
  int v42; // r9d
  int v43; // edx
  int v44; // r10d
  unsigned int v45; // r8d
  unsigned __int16 *v46; // r11
  unsigned __int16 *v47; // r11
  int v48; // r14d
  ULONG v49; // r14d
  ULONG v50; // eax
  int v51; // eax
  int v52; // ecx
  char v53; // bl
  ULONG v54; // eax
  int v55; // ecx
  ULONG v56; // ecx
  ULONG v57; // r13d
  NTSTATUS v58; // eax
  _DWORD *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r10
  PVOID PoolWithTag; // rax
  __int16 v65; // ax
  signed __int32 v66; // eax
  char v67; // [rsp+40h] [rbp-F8h]
  unsigned __int16 v68; // [rsp+48h] [rbp-F0h]
  int v69; // [rsp+50h] [rbp-E8h]
  ULONG Amount; // [rsp+54h] [rbp-E4h]
  ULONG_PTR Amount_4; // [rsp+58h] [rbp-E0h]
  OEM_STRING OemString; // [rsp+60h] [rbp-D8h] BYREF
  int Length; // [rsp+70h] [rbp-C8h]
  _DWORD *v74; // [rsp+78h] [rbp-C0h]
  OEM_STRING v75; // [rsp+80h] [rbp-B8h] BYREF
  int v76; // [rsp+90h] [rbp-A8h]
  int v77; // [rsp+94h] [rbp-A4h]
  unsigned int v78; // [rsp+98h] [rbp-A0h]
  USHORT v79; // [rsp+A0h] [rbp-98h]
  _BYTE v80[14]; // [rsp+A2h] [rbp-96h] BYREF
  ULONG pulResult[2]; // [rsp+B0h] [rbp-88h] BYREF
  _LIST_ENTRY *v82; // [rsp+B8h] [rbp-80h]
  _QWORD *v83; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v84; // [rsp+C8h] [rbp-70h]
  _WORD v85[4]; // [rsp+D0h] [rbp-68h] BYREF
  char *Buffer; // [rsp+D8h] [rbp-60h]
  _QWORD *v87; // [rsp+E0h] [rbp-58h]
  NTSTATUS v88; // [rsp+ECh] [rbp-4Ch]
  _LIST_ENTRY *v89; // [rsp+148h] [rbp+10h]

  v89 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v79 = 0;
  memset(v80, 0, sizeof(v80));
  v75.Length = 0;
  *(_QWORD *)&v75.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v75.Buffer + 2) = 0;
  HIWORD(v75.Buffer) = 0;
  OemString.Length = 0;
  *(_QWORD *)&OemString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&OemString.Buffer + 2) = 0;
  HIWORD(OemString.Buffer) = 0;
  v67 = 0;
  v76 = 0;
  if ( !TargetNameOffset && FullTargetName )
    return;
  *(_QWORD *)&v80[6] = 0LL;
  v75.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    v14 = KeGetCurrentThread();
    v15 = KeAbPreAcquire((ULONG_PTR)NotifySync, 0LL, 0LL, TargetNameOffset);
    v16 = v15;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)NotifySync, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)NotifySync, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *((_QWORD *)NotifySync + 1) = v14;
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v11 = FullTargetName;
    NotifyList = v89;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  Length = v75.Length;
  v68 = OemString.Length;
  while ( 1 )
  {
    v82 = Flink;
    Amount_4 = (ULONG_PTR)Flink;
    if ( Flink == NotifyList )
      break;
    v18 = (__int64)&Flink[-2];
    v84 = Flink - 2;
    if ( v11 )
    {
      if ( **(_WORD **)(v18 + 136) && (*(_DWORD *)(v18 + 76) & FilterMatch) != 0 )
      {
        v21 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          Buffer = v11->Buffer;
          v22 = v10;
          v85[0] = v10;
          v23 = *(unsigned __int8 *)(v18 + 144);
          if ( v10 != v23 )
          {
            v22 = v10 - v23;
            v85[0] = v10 - v23;
          }
          v85[1] = v22;
          v21 = (PSTRING)v85;
          NormalizedParentName = (PSTRING)v85;
          Flink = (_LIST_ENTRY *)Amount_4;
        }
        v24 = *(__int16 **)(v18 + 136);
        v25 = *v24;
        if ( v21->Length < (unsigned __int16)*v24 )
          goto LABEL_139;
        if ( v21->Length == v25 )
        {
          v20 = 1;
          goto LABEL_33;
        }
        v26 = *(_WORD *)(v18 + 72);
        if ( (v26 & 1) == 0 )
        {
LABEL_139:
          NotifyList = v89;
          goto LABEL_140;
        }
        if ( (v26 & 0x10) == 0 )
        {
          v27 = v21->Buffer;
          v28 = *(_BYTE *)(v18 + 144) == 1 ? v27[v25] == 92 : *(_WORD *)&v27[v25] == 92;
          if ( !v28 )
          {
LABEL_138:
            Flink = (_LIST_ENTRY *)Amount_4;
            goto LABEL_139;
          }
        }
        v20 = 0;
LABEL_33:
        if ( !memcmp(*((const void **)v24 + 1), v21->Buffer, v25)
          && (v20
           || (v29 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID, _QWORD))(v18 + 16)) == 0LL
           || v29(*(_QWORD *)(v18 + 8), TargetContext, *(_QWORD *)(v18 + 24))) )
        {
          v30 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID))(v18 + 64);
          if ( !v30 || !FilterContext || v30(*(_QWORD *)(v18 + 8), FilterContext) )
          {
            v11 = FullTargetName;
            v19 = v67;
            goto LABEL_42;
          }
        }
LABEL_137:
        v11 = FullTargetName;
        goto LABEL_138;
      }
    }
    else if ( TargetContext == *(PVOID *)(v18 + 24) )
    {
      OemString.Buffer = 0LL;
      v68 = 0;
      OemString.Length = 0;
      v19 = 1;
      v67 = 1;
      v20 = 0;
      v21 = NormalizedParentName;
LABEL_42:
      v31 = *(_WORD *)(v18 + 72);
      if ( (v31 & 2) == 0 )
      {
        Amount = *(_DWORD *)(v18 + 96);
        if ( Amount )
        {
          v83 = 0LL;
          v87 = 0LL;
          v32 = *(_DWORD *)(v18 + 100);
          if ( v32 )
            goto LABEL_48;
          v33 = (_QWORD *)(v18 + 48);
          if ( (_QWORD *)*v33 != v33 )
          {
            v83 = (_QWORD *)(*v33 - 168LL);
            v87 = v83;
            v32 = *(_DWORD *)(v83[23] + 8LL);
LABEL_48:
            Amount = v32;
          }
          if ( v20 )
          {
            v38 = 0;
            v68 = 0;
            OemString.Length = 0;
          }
          else if ( v19 )
          {
            v38 = v68;
          }
          else
          {
            v34 = v31 & 0x10;
            if ( v34 || (v35 = v21->Buffer, v35 != v11->Buffer) )
            {
              v39 = *(char **)&v80[6];
              if ( !*(_QWORD *)&v80[6] )
              {
                v39 = v11->Buffer;
                *(_QWORD *)&v80[6] = v39;
                v40 = v10;
                v79 = v10;
                v41 = *(unsigned __int8 *)(v18 + 144);
                if ( v10 != v41 )
                {
                  v40 = v10 - v41;
                  v79 = v10 - v41;
                }
                *(_WORD *)v80 = v40;
              }
              LOBYTE(v42) = 0;
              v43 = 0;
              if ( !v34 )
              {
                v44 = 1;
                v77 = 1;
                v45 = 0;
                v78 = 0;
                if ( *(_BYTE *)(v18 + 144) == 1 )
                {
                  while ( 1 )
                  {
                    v46 = *(unsigned __int16 **)(v18 + 136);
                    if ( v45 >= *v46 )
                      break;
                    if ( *(_BYTE *)(v45 + *((_QWORD *)v46 + 1)) == 92 )
                      v77 = ++v44;
                    v78 = ++v45;
                  }
                  while ( 1 )
                  {
                    if ( v39[v43] == 92 )
                    {
                      LOBYTE(v42) = v42 + 1;
                      if ( (unsigned __int8)v42 == v44 )
                        break;
                    }
                    ++v43;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v47 = *(unsigned __int16 **)(v18 + 136);
                    if ( v45 >= *v47 >> 1 )
                      break;
                    if ( *(_WORD *)(*((_QWORD *)v47 + 1) + 2LL * v45) == 92 )
                      v77 = ++v44;
                    v78 = ++v45;
                  }
                  while ( 1 )
                  {
                    if ( *(_WORD *)&v39[2 * v43] == 92 )
                    {
                      v42 = (unsigned __int8)(v42 + 1);
                      if ( v42 == v44 )
                        break;
                    }
                    ++v43;
                  }
                  v43 *= *(unsigned __int8 *)(v18 + 144);
                }
                v19 = v67;
              }
              v69 = *(unsigned __int8 *)(v18 + 144) + v43;
              OemString.Buffer = &v39[v69];
              v38 = v79 - v69;
            }
            else
            {
              v36 = **(unsigned __int16 **)(v18 + 136);
              v37 = *(unsigned __int8 *)(v18 + 144);
              OemString.Buffer = &v35[v37 + v36];
              v38 = v21->Length - v37 - v36;
            }
            v68 = v38;
            OemString.Length = v38;
            OemString.MaximumLength = v38;
          }
          v48 = 12;
          if ( v19 )
          {
            v49 = StreamName->Length + 12;
          }
          else
          {
            if ( !v20 )
            {
              if ( *(_BYTE *)(v18 + 144) == 1 )
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                  v50 = RtlxOemStringToUnicodeSize(&OemString);
                else
                  v50 = 2 * v38 + 2;
                v51 = v50 + 10;
              }
              else
              {
                v51 = v38 + 12;
              }
              v48 = v51 + 2;
            }
            if ( v75.Buffer )
            {
              LOWORD(v52) = Length;
            }
            else
            {
              v75.Buffer = &FullTargetName->Buffer[v10];
              v52 = FullTargetName->Length - v10;
              Length = v52;
              v75.Length = v52;
              v75.MaximumLength = v52;
            }
            v53 = *(_BYTE *)(v18 + 144);
            if ( v53 == 1 )
            {
              if ( (_BYTE)NlsMbOemCodePageTag )
                v54 = RtlxOemStringToUnicodeSize(&v75);
              else
                v54 = 2 * (unsigned __int16)v52 + 2;
              v48 -= 2;
            }
            else
            {
              v54 = (unsigned __int16)v52;
            }
            v49 = v54 + v48;
            if ( StreamName )
            {
              if ( v53 == 2 )
              {
                v55 = StreamName->Length + 2;
              }
              else
              {
                if ( (_BYTE)NlsMbOemCodePageTag )
                  v56 = RtlxOemStringToUnicodeSize(StreamName);
                else
                  v56 = 2 * StreamName->Length + 2;
                v55 = v56 - 2 + 1;
              }
              v49 += v55;
            }
          }
          v57 = (*(_DWORD *)(v18 + 104) + 3) & 0xFFFFFFFC;
          pulResult[1] = v57;
          v58 = RtlULongAdd(v57, v49, pulResult);
          v88 = v58;
          if ( v49 > Amount || v58 || pulResult[0] > Amount )
            goto LABEL_126;
          v59 = 0LL;
          v74 = 0LL;
          v60 = *(_QWORD *)(v18 + 88);
          if ( v60 )
          {
            v61 = *(unsigned int *)(v18 + 108);
            v74 = (_DWORD *)(v60 + v61);
            *v74 = v57 - v61;
            *(_DWORD *)(v18 + 108) = v57;
            v59 = (_DWORD *)(*(_QWORD *)(v18 + 88) + v57);
            v74 = v59;
            goto LABEL_121;
          }
          if ( v83 )
          {
            v62 = v83[3];
            if ( v62 )
            {
              v59 = (_DWORD *)v83[3];
              v74 = v59;
              *(_QWORD *)(v18 + 88) = v62;
              goto LABEL_120;
            }
            v63 = v83[1];
            if ( v63 )
            {
              if ( (*(_BYTE *)(v63 + 10) & 5) != 0 )
                v59 = *(_DWORD **)(v63 + 24);
              else
                v59 = MmMapLockedPagesSpecifyCache((PMDL)v63, 0, MmCached, 0LL, 0, 0x40000010u);
              v74 = v59;
              *(_QWORD *)(v18 + 88) = v59;
LABEL_120:
              *(_DWORD *)(v18 + 100) = Amount;
            }
          }
LABEL_121:
          if ( !*(_QWORD *)(v18 + 88) )
          {
            PsChargePoolQuota(*(PEPROCESS *)(v18 + 120), PagedPool, Amount);
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, Amount, 0x4E725346u);
            *(_QWORD *)(v18 + 88) = PoolWithTag;
            *(_QWORD *)(v18 + 80) = PoolWithTag;
            memset(*(void **)(v18 + 88), 0, Amount);
            *(_DWORD *)(v18 + 100) = Amount;
            v59 = *(_DWORD **)(v18 + 88);
            v74 = v59;
          }
          if ( v59 )
          {
            if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                    (_DWORD)v59,
                                    Action,
                                    (unsigned int)&OemString,
                                    (unsigned int)&v75,
                                    (__int64)StreamName,
                                    *(_BYTE *)(v18 + 144) == 2,
                                    v49) )
            {
              *(_DWORD *)(v18 + 104) = v49 + v57;
              goto LABEL_127;
            }
LABEL_126:
            *(_WORD *)(v18 + 72) |= 2u;
          }
LABEL_127:
          if ( (*(_BYTE *)(v18 + 72) & 2) != 0 && *(_QWORD *)(v18 + 88) )
          {
            if ( *(_QWORD *)(v18 + 80) )
            {
              PsReturnProcessPagedPoolQuota(*(_QWORD *)(v18 + 120), *(unsigned int *)(v18 + 100));
              ExFreePoolWithTag(*(PVOID *)(v18 + 80), 0);
            }
            *(_QWORD *)(v18 + 88) = 0LL;
            *(_QWORD *)(v18 + 80) = 0LL;
            *(_QWORD *)(v18 + 104) = 0LL;
            *(_DWORD *)(v18 + 100) = 0;
          }
          v10 = TargetNameOffset;
        }
      }
      v65 = *(_WORD *)(v18 + 72);
      if ( Action == 4 )
      {
        *(_WORD *)(v18 + 72) = v65 | 8;
      }
      else
      {
        *(_WORD *)(v18 + 72) = v65 & 0xFFF7;
        if ( *(_QWORD *)(v18 + 48) != v18 + 48 )
          FsRtlNotifyCompleteIrpList(v18, 0);
      }
      goto LABEL_137;
    }
LABEL_140:
    Flink = Flink->Flink;
  }
  v28 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v28 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    *((_QWORD *)NotifySync + 1) = 0LL;
    v66 = _InterlockedCompareExchange((volatile signed __int32 *)NotifySync, 1, 0);
    if ( v66 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)NotifySync, v66);
    KeAbPostRelease((ULONG_PTR)NotifySync);
  }
}
