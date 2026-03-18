/*
 * XREFs of CmpGetSymbolicLink @ 0x1404C5480
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpFindNameInListWithStatus @ 0x140429D80 (CmpFindNameInListWithStatus.c)
 *     CmpLockTwoKcbsExclusive @ 0x140447040 (CmpLockTwoKcbsExclusive.c)
 *     CmpOKToFollowLink @ 0x140448C8C (CmpOKToFollowLink.c)
 *     CmpParseCacheLookup @ 0x14044BDF8 (CmpParseCacheLookup.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpIsKcbLockAllowed @ 0x1404C61DC (CmpIsKcbLockAllowed.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpGetSymbolicLink(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        PCUNICODE_STRING Source)
{
  signed __int64 v5; // rbx
  char v6; // r14
  bool v7; // zf
  unsigned __int64 v8; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r15
  _QWORD *v13; // rax
  unsigned int v14; // r15d
  _WORD *v15; // r12
  wchar_t *Buffer; // rdx
  __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  __int64 v20; // rtt
  unsigned int v21; // esi
  unsigned __int64 v22; // rsi
  unsigned int NameInListWithStatus; // r15d
  signed __int64 v24; // rax
  __int64 v25; // rtt
  __int64 v26; // rbx
  __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  wchar_t *PoolWithTag; // rax
  void *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  ULONG_PTR v36; // rcx
  __int64 v37; // r15
  _DWORD *v38; // rdx
  unsigned int v39; // r12d
  __int64 v40; // rax
  _WORD *v41; // rax
  WCHAR *v42; // rcx
  int v43; // r8d
  int v44; // edi
  __int64 v45; // rdx
  WCHAR v46; // ax
  int v47; // r8d
  int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // ecx
  _QWORD *v51; // rax
  unsigned int v52; // edx
  WCHAR *v53; // rcx
  WCHAR v54; // ax
  int v55; // edx
  WCHAR v56; // ax
  int v57; // edx
  __int64 v58; // r8
  __int64 v59; // r9
  _QWORD *v60; // rcx
  WCHAR v61; // ax
  WCHAR v62; // ax
  WCHAR v63; // ax
  unsigned __int16 v64; // ax
  _WORD *v65; // rcx
  char v66; // [rsp+40h] [rbp-91h]
  char v67; // [rsp+41h] [rbp-90h] BYREF
  char v68; // [rsp+42h] [rbp-8Fh]
  char v69; // [rsp+43h] [rbp-8Eh]
  ULONG_PTR BugCheckParameter4; // [rsp+44h] [rbp-8Dh] BYREF
  void *Src; // [rsp+50h] [rbp-81h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-79h]
  __int64 v73; // [rsp+60h] [rbp-71h]
  int v74; // [rsp+68h] [rbp-69h] BYREF
  _BYTE v75[4]; // [rsp+6Ch] [rbp-65h] BYREF
  int v76; // [rsp+70h] [rbp-61h] BYREF
  int v77; // [rsp+74h] [rbp-5Dh]
  unsigned int v78; // [rsp+78h] [rbp-59h] BYREF
  WCHAR *v79; // [rsp+80h] [rbp-51h]
  __int64 v80; // [rsp+88h] [rbp-49h] BYREF
  int v81; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v82; // [rsp+94h] [rbp-3Dh]
  unsigned __int16 v83[4]; // [rsp+98h] [rbp-39h] BYREF
  _WORD *v84; // [rsp+A0h] [rbp-31h]
  PVOID P; // [rsp+A8h] [rbp-29h]
  __int64 v86; // [rsp+B0h] [rbp-21h]
  unsigned int v87; // [rsp+B8h] [rbp-19h]
  int v88; // [rsp+BCh] [rbp-15h] BYREF
  UNICODE_STRING Destination; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-1h]
  _BYTE v91[72]; // [rsp+D8h] [rbp+7h] BYREF
  wchar_t *v94; // [rsp+140h] [rbp+6Fh]
  int v95; // [rsp+140h] [rbp+6Fh]

  v5 = 0LL;
  v78 = -1;
  v6 = 0;
  v86 = 0LL;
  v7 = (*(_DWORD *)(a3 + 4) & 0x100000) == 0;
  v8 = a3;
  v76 = -1;
  Src = 0LL;
  v10 = 0LL;
  v74 = -1;
  v67 = 0;
  v68 = 0;
  LODWORD(NumberOfBytes) = 0;
  P = 0LL;
  BugCheckParameter4 = 0LL;
  v66 = 0;
  v80 = 0LL;
  if ( !v7 )
    *(_DWORD *)(a3 + 64) = CmpLockTableAdd(a3, 0);
  v12 = KeAbPreAcquire(v8 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v8 + 48), v12, v8 + 48, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 56));
  v7 = (*(_DWORD *)(v8 + 4) & 0x20000) == 0;
  v69 = 1;
  if ( !v7 )
  {
    CmpUnlockKcb((char *)v8);
    return 3221225852LL;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(v8 + 4) & 8) == 0 )
      goto LABEL_101;
    if ( v6 )
      break;
    v10 = *(_QWORD *)(v8 + 104);
    if ( (unsigned __int8)CmpIsKcbLockAllowed(v8, v10, v75) == 1 )
    {
      CmpLockKcbShared(v10, v28, v30, v31);
    }
    else
    {
      CmpUnlockKcb(v29);
      CmpLockTwoKcbsShared(v8, v10);
    }
    v6 = 1;
    if ( (*(_DWORD *)(v10 + 4) & 0x20000) != 0 || (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
    {
      CmpUnlockTwoKcbs(v8, v10);
      return 3221225852LL;
    }
  }
  v13 = (_QWORD *)CmpConstructName(*(_QWORD *)(v8 + 104));
  P = v13;
  if ( v13 )
  {
    v14 = *(unsigned __int16 *)v13;
    v15 = (_WORD *)v13[1];
    v66 = 1;
    Src = v15;
    HIDWORD(BugCheckParameter4) = v14;
    LODWORD(NumberOfBytes) = v14 + 2;
  }
  else
  {
LABEL_101:
    v15 = Src;
    v14 = HIDWORD(BugCheckParameter4);
  }
  Buffer = (wchar_t *)a4;
  if ( a4 )
  {
    if ( !*(_QWORD *)(a4 + 64) )
    {
      v17 = *(_QWORD *)(v8 + 32);
      if ( (*(_DWORD *)(v17 + 5360) & 1) != 0 )
        *(_QWORD *)(a4 + 64) = v17;
    }
  }
  if ( v6 )
  {
    if ( *(struct _KTHREAD **)(v10 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v10 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 56));
    _m_prefetchw((const void *)(v10 + 48));
    v18 = *(_QWORD *)(v10 + 48);
    if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v19 = v18 - 16;
    else
      v19 = 0LL;
    if ( (v18 & 2) != 0
      || (v20 = *(_QWORD *)(v10 + 48),
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 48), v19, v18)) )
    {
      ExfReleasePushLock((_QWORD *)(v10 + 48), a4);
    }
    KeAbPostRelease(v10 + 48);
    if ( (*(_DWORD *)(v10 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v10, *(_DWORD *)(v10 + 64));
    if ( (*(_DWORD *)(v10 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)v10);
    v15 = Src;
    v6 = 0;
    v14 = HIDWORD(BugCheckParameter4);
  }
  if ( v66 )
  {
LABEL_29:
    v21 = NumberOfBytes;
    if ( Source )
      v21 = Source->Length + NumberOfBytes + 2;
    if ( v21 > 0xFFFF )
    {
      NameInListWithStatus = -1073741772;
    }
    else
    {
      if ( v21 <= a2[1] )
      {
        *a2 = v14;
        if ( Source )
        {
          v22 = 2 * ((unsigned __int64)v14 >> 1);
          memmove((void *)(v22 + *((_QWORD *)a2 + 1) + 2LL), Source->Buffer, Source->Length);
          *(_WORD *)(v22 + *((_QWORD *)a2 + 1)) = 92;
          *a2 += Source->Length + 2;
        }
        memmove(*((void **)a2 + 1), v15, v14);
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
LABEL_36:
        NameInListWithStatus = 0;
        *(_DWORD *)a4 |= 0x10u;
        goto LABEL_37;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v21, 0x20204D43u);
      v94 = PoolWithTag;
      if ( PoolWithTag )
      {
        Destination.MaximumLength = v21;
        Destination.Buffer = PoolWithTag;
        Destination.Length = v14;
        memmove(PoolWithTag, v15, v14);
        Buffer = v94;
        if ( Source )
        {
          Destination.Length = v14 + 2;
          v94[(unsigned __int64)v14 >> 1] = 92;
          RtlAppendUnicodeStringToString(&Destination, Source);
          Buffer = Destination.Buffer;
          LOWORD(v14) = Destination.Length;
        }
        Buffer[(unsigned __int64)(unsigned __int16)v14 >> 1] = 0;
        v33 = (void *)*((_QWORD *)a2 + 1);
        if ( v33 )
          ExFreePoolWithTag(v33, 0);
        *(UNICODE_STRING *)a2 = Destination;
        goto LABEL_36;
      }
      NameInListWithStatus = -1073741670;
    }
LABEL_37:
    if ( !v69 )
      goto LABEL_137;
    goto LABEL_38;
  }
  v34 = *(_QWORD *)(v8 + 32);
  v81 = -1;
  v88 = 0;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v34 + 2848), 1u);
  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v8 + 32) + 8LL))(
          *(_QWORD *)(v8 + 32),
          *(unsigned int *)(v8 + 40),
          &v81);
  v36 = *(_QWORD *)(v8 + 32);
  v37 = v35;
  if ( !v35 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v36 + 2848));
    NameInListWithStatus = -1073741670;
    goto LABEL_38;
  }
  CmpUpdateKeyNodeAccessBits(v36, v35, *(_DWORD *)(v8 + 40));
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 32) + 2848LL));
  if ( !*(_QWORD *)(v8 + 280) )
  {
    v38 = (_DWORD *)(v37 + 36);
LABEL_74:
    NameInListWithStatus = CmpFindNameInListWithStatus(a1, v38, &CmSymbolicLinkValueName, 0, 0LL, &v78);
    goto LABEL_75;
  }
  v38 = (_DWORD *)(v8 + 272);
  if ( *(_DWORD *)(v8 + 272) )
    goto LABEL_74;
  NameInListWithStatus = -1073741772;
LABEL_75:
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v8 + 32) + 16LL))(*(_QWORD *)(v8 + 32), &v81);
  v39 = v78;
  if ( v78 == -1 )
  {
LABEL_38:
    if ( *(struct _KTHREAD **)(v8 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v8 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 56));
    _m_prefetchw((const void *)(v8 + 48));
    v24 = *(_QWORD *)(v8 + 48);
    if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v24 - 16;
    if ( (v24 & 2) != 0
      || (v25 = *(_QWORD *)(v8 + 48), v25 != _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(v8 + 48),
                                               v5,
                                               v24)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 48), (__int64)Buffer);
    }
    KeAbPostRelease(v8 + 48);
    if ( (*(_DWORD *)(v8 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v8, *(_DWORD *)(v8 + 64));
    if ( (*(_DWORD *)(v8 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)v8);
    v26 = a1;
    if ( v86 )
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v76);
    v15 = Src;
    goto LABEL_51;
  }
  v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v78, &v76);
  v86 = v40;
  Buffer = (wchar_t *)v40;
  if ( !v40 )
  {
    NameInListWithStatus = -1073741670;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v40 + 12) != 6 )
    goto LABEL_161;
  v68 = 1;
  if ( !CmpGetValueData(a1, v39, v40, (unsigned int *)&BugCheckParameter4 + 1, (__int64 *)&Src, &v67, (__int64)&v74) )
  {
    NameInListWithStatus = -1073741670;
    goto LABEL_38;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v76);
  v14 = HIDWORD(BugCheckParameter4);
  v86 = 0LL;
  LODWORD(NumberOfBytes) = WORD2(BugCheckParameter4) + 2;
  if ( v67 )
  {
    v15 = Src;
  }
  else
  {
    v41 = ExAllocatePoolWithTag(PagedPool, HIDWORD(BugCheckParameter4), 0x64764D43u);
    v15 = v41;
    if ( !v41 )
    {
      NameInListWithStatus = -1073741670;
      goto LABEL_38;
    }
    memmove(v41, Src, v14);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v74);
    Src = v15;
    v67 = 1;
  }
  v42 = v15;
  v79 = v15;
  if ( v14 < 2 || *v15 != 92 )
  {
LABEL_161:
    NameInListWithStatus = -1073741772;
    goto LABEL_38;
  }
  v77 = 0;
  v43 = 0;
  v44 = 0;
  v45 = ((v14 - 1) >> 1) + 1;
  v73 = v45;
  do
  {
    v46 = *v42;
    if ( *v42 == 92 )
    {
      v77 = ++v43;
    }
    else
    {
      if ( v46 < 0x61u )
      {
        v47 = v46;
      }
      else if ( v46 > 0x7Au )
      {
        v61 = RtlUpcaseUnicodeChar(v46);
        v42 = v79;
        v45 = v73;
        v47 = v61;
      }
      else
      {
        v47 = v46 - 32;
      }
      v44 = v47 + 37 * v44;
      v43 = v77;
    }
    ++v42;
    --v45;
    v79 = v42;
    v73 = v45;
  }
  while ( v45 );
  LODWORD(BugCheckParameter4) = v44;
  v8 = a3;
  CmpUnlockKcb((char *)a3);
  v69 = 0;
  v84 = v15;
  v83[1] = v14;
  v83[0] = v14;
  v48 = CmpParseCacheLookup(-1, v83, (__int64)v91, (__int64)&v88, (__int64)&v80);
  if ( v48 == -1073741772 )
  {
    if ( CmpLoadingSystemHivesActive )
    {
      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
      {
        v64 = v83[0];
        if ( v83[0] )
        {
          v65 = v84;
          while ( *v65 == 92 )
          {
            ++v65;
            v7 = v64 == 2;
            v64 -= 2;
            v84 = v65;
            v83[0] = v64;
            if ( v7 )
              goto LABEL_135;
          }
          if ( v64 )
          {
            do
            {
              if ( *v65 == 92 )
                break;
              ++v65;
              v64 -= 2;
            }
            while ( v64 );
            v83[0] = v64;
            v84 = v65;
          }
        }
LABEL_135:
        if ( (unsigned __int8)CmpWaitForHiveMount(v83, 1LL, 0LL, a4 + 128) )
        {
          *(_DWORD *)a4 |= 0x100u;
          NameInListWithStatus = 0;
          v15 = Src;
          goto LABEL_137;
        }
      }
      v15 = Src;
      NameInListWithStatus = -1073741772;
      goto LABEL_137;
    }
LABEL_154:
    NameInListWithStatus = v48;
    goto LABEL_137;
  }
  if ( v48 < 0 )
    goto LABEL_154;
  CmpLockHashEntryExclusive(*(_QWORD *)(v80 + 32), (unsigned int)BugCheckParameter4);
  v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 32) + 2800LL)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v80 + 32) + 2808LL) - 1) & ((101027
                                                                                       * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9)))
                  + 16);
  v73 = v49;
  if ( !v49 )
    goto LABEL_126;
  do
  {
    v10 = v49 - 16;
    CmpLockTwoKcbsExclusive(v8, v49 - 16);
    v50 = *(_DWORD *)(v10 + 4);
    v6 = 1;
    if ( (v50 & 0x20000) != 0 )
    {
      v73 = *(_QWORD *)(v73 + 8);
      goto LABEL_97;
    }
    if ( (_DWORD)BugCheckParameter4 != *(_DWORD *)v73 || v77 != ((v50 >> 21) & 0x3FF) || (v50 & 0x10) != 0 )
      goto LABEL_96;
    v51 = (_QWORD *)CmpConstructName(v10);
    P = v51;
    if ( !v51 )
      break;
    v52 = *(unsigned __int16 *)v51;
    v66 = 1;
    v87 = v52;
    if ( v52 != v14 )
      goto LABEL_168;
    v82 = 0;
    v53 = v15;
    v79 = v15;
    if ( !v52 )
    {
LABEL_117:
      if ( !(unsigned __int8)CmpReferenceKeyControlBlock(v10) )
        break;
      v60 = 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 32) + 5360LL) & 1) != 0 )
        v60 = *(_QWORD **)(v8 + 32);
      if ( CmpOKToFollowLink(v60, *(_QWORD *)(v10 + 32), v58, v59)
        && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v10 + 32) + 5360LL) ^ *(_BYTE *)(*(_QWORD *)(v8 + 32) + 5360LL)) & 0x20) == 0 )
      {
        CmpCleanUpKcbValueCache(v8);
        if ( !*(_QWORD *)(a4 + 72) )
          *(_QWORD *)(a4 + 72) = v8;
        if ( *(_QWORD *)(a4 + 72) == v10 )
        {
          CmpDereferenceKeyControlBlockWithLock(v10);
        }
        else
        {
          *(_WORD *)(v8 + 4) |= 8u;
          *(_QWORD *)(v8 + 104) = v10;
        }
        break;
      }
      CmpDereferenceKeyControlBlockWithLock(v10);
      CmpUnlockTwoKcbs(v8, v10);
      CmpUnlockHashEntry(*(_QWORD *)(v80 + 32), (unsigned int)BugCheckParameter4);
      NameInListWithStatus = -1073741790;
      goto LABEL_137;
    }
    v90 = v51[1] - (_QWORD)v15;
    while ( 1 )
    {
      v54 = *v53;
      if ( *v53 < 0x61u )
      {
        v55 = v54;
LABEL_112:
        v95 = v55;
        goto LABEL_113;
      }
      if ( v54 <= 0x7Au )
      {
        v55 = v54 - 32;
        goto LABEL_112;
      }
      v62 = RtlUpcaseUnicodeChar(v54);
      v53 = v79;
      v95 = v62;
LABEL_113:
      v56 = *(WCHAR *)((char *)v53 + v90);
      if ( v56 >= 0x61u )
      {
        if ( v56 > 0x7Au )
        {
          v63 = RtlUpcaseUnicodeChar(v56);
          v53 = v79;
          v57 = v63;
        }
        else
        {
          v57 = v56 - 32;
        }
      }
      else
      {
        v57 = v56;
      }
      if ( v95 != v57 )
        break;
      v79 = ++v53;
      v82 += 2;
      if ( v82 >= v87 )
        goto LABEL_117;
    }
    v51 = P;
LABEL_168:
    ExFreePoolWithTag(v51, 0x624E4D43u);
    v66 = 0;
LABEL_96:
    v73 = *(_QWORD *)(v73 + 8);
LABEL_97:
    CmpUnlockTwoKcbs(v8, v10);
    v49 = v73;
    v6 = 0;
  }
  while ( v73 );
LABEL_126:
  CmpUnlockHashEntry(*(_QWORD *)(v80 + 32), (unsigned int)BugCheckParameter4);
  if ( !v6 )
    goto LABEL_29;
  if ( (*(_DWORD *)(v8 + 4) & 0x20000) == 0 && (*(_DWORD *)(v10 + 4) & 0x20000) == 0 )
  {
    CmpUnlockTwoKcbs(v10, v8);
    goto LABEL_29;
  }
  CmpUnlockTwoKcbs(v10, v8);
  NameInListWithStatus = -1073741444;
LABEL_137:
  v26 = a1;
LABEL_51:
  if ( v15 && v68 )
  {
    if ( v67 )
      ExFreePoolWithTag(v15, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(v26 + 16))(v26, &v74);
  }
  if ( v66 )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v80 )
    CmpDereferenceKeyControlBlock(v80);
  return NameInListWithStatus;
}
