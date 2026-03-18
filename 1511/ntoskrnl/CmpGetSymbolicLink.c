/*
 * XREFs of CmpGetSymbolicLink @ 0x1403FBEB0
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpParseCacheLookup @ 0x1403BB324 (CmpParseCacheLookup.c)
 *     CmpLockTwoKcbsExclusive @ 0x1403DB140 (CmpLockTwoKcbsExclusive.c)
 *     CmpOKToFollowLink @ 0x1403DF0B0 (CmpOKToFollowLink.c)
 *     CmpFindNameInListWithStatus @ 0x1403F40F0 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpGetSymbolicLink(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int16 a5,
        PCUNICODE_STRING Source)
{
  signed __int64 v6; // rbx
  char v7; // r12
  bool v8; // zf
  ULONG_PTR v10; // rsi
  signed __int64 *v11; // r14
  __int64 v12; // r15
  bool v13; // r15
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  _WORD *v17; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  __int64 v21; // rtt
  PCUNICODE_STRING v22; // r15
  unsigned int v23; // esi
  unsigned __int64 v24; // rsi
  unsigned int NameInListWithStatus; // r13d
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  __int64 v28; // rbx
  PVOID v29; // r15
  unsigned int v31; // ecx
  unsigned int v32; // eax
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rdx
  void *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  _DWORD *v43; // rdx
  unsigned int v44; // r15d
  __int64 v45; // rax
  PVOID v46; // rax
  WCHAR *v47; // r15
  int v48; // ecx
  unsigned int v49; // r14d
  WCHAR *v50; // rdx
  WCHAR v51; // ax
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r15
  unsigned int v56; // ecx
  _QWORD *v57; // rax
  PVOID v58; // r8
  unsigned int v59; // ecx
  WCHAR *v60; // rdx
  wchar_t *v61; // rcx
  WCHAR v62; // ax
  int v63; // r15d
  WCHAR v64; // ax
  int v65; // ecx
  _QWORD *v66; // rcx
  WCHAR v67; // ax
  WCHAR v68; // ax
  WCHAR v69; // ax
  unsigned __int16 v70; // ax
  _WORD *v71; // rcx
  char v72; // [rsp+40h] [rbp-C0h] BYREF
  char v73; // [rsp+41h] [rbp-BFh]
  char v74; // [rsp+42h] [rbp-BEh]
  void *Src; // [rsp+48h] [rbp-B8h]
  unsigned int BugCheckParameter4; // [rsp+50h] [rbp-B0h]
  unsigned int BugCheckParameter4_4; // [rsp+54h] [rbp-ACh]
  SIZE_T Size; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v79; // [rsp+60h] [rbp-A0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v81; // [rsp+70h] [rbp-90h] BYREF
  int v82; // [rsp+74h] [rbp-8Ch] BYREF
  int v83; // [rsp+78h] [rbp-88h]
  wchar_t *i; // [rsp+80h] [rbp-80h]
  ULONG_PTR v85; // [rsp+88h] [rbp-78h] BYREF
  WCHAR *v86; // [rsp+90h] [rbp-70h]
  int v87; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v88[4]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v89; // [rsp+A8h] [rbp-58h]
  __int64 v90; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h]
  int v92; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING Destination; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v95; // [rsp+E0h] [rbp-20h]
  char v96[32]; // [rsp+E8h] [rbp-18h] BYREF
  char v99; // [rsp+160h] [rbp+60h]

  v6 = 0LL;
  v81 = -1;
  v7 = 0;
  v93 = 0LL;
  v8 = (*(_DWORD *)(a3 + 4) & 0x100000) == 0;
  v10 = 0LL;
  v79 = 0LL;
  v82 = -1;
  v72 = 0;
  v73 = 0;
  NumberOfBytes = 0xFFFFFFFF00000000uLL;
  LODWORD(Size) = 0;
  P = 0LL;
  BugCheckParameter4 = 0;
  v99 = 0;
  v85 = 0LL;
  if ( !v8 )
    *(_DWORD *)(a3 + 64) = CmpLockTableAdd(a3, 0);
  v11 = (signed __int64 *)(a3 + 48);
  v12 = KeAbPreAcquire(a3 + 48, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a3 + 48), v12, a3 + 48);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  v8 = (*(_DWORD *)(a3 + 4) & 0x20000) == 0;
  v74 = 1;
  if ( !v8 )
  {
    CmpUnlockKcb((PVOID)a3);
    return 3221225852LL;
  }
  v13 = !_bittest((const signed __int32 *)&a5, 0xCu);
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 4);
    if ( (v14 & 8) == 0 || !v13 )
      goto LABEL_117;
    if ( v7 )
      break;
    v10 = *(_QWORD *)(a3 + 104);
    v31 = (v14 >> 21) & 0x3FF;
    v32 = (*(_DWORD *)(v10 + 4) >> 21) & 0x3FF;
    if ( v31 <= v32 && (v31 < v32 || a3 <= v10) )
    {
      CmpLockKcbShared(*(_QWORD *)(a3 + 104));
    }
    else
    {
      if ( *(struct _KTHREAD **)(a3 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(a3 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(a3 + 56));
      _m_prefetchw(v11);
      v33 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v34 = v33 - 16;
      else
        v34 = 0LL;
      if ( (v33 & 2) != 0 || (v35 = *v11, v35 != _InterlockedCompareExchange64(v11, v34, v33)) )
        ExfReleasePushLock((_QWORD *)(a3 + 48));
      KeAbPostRelease(a3 + 48);
      if ( (*(_DWORD *)(a3 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(a3, *(_DWORD *)(a3 + 64));
      if ( (*(_DWORD *)(a3 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock((PVOID)a3);
      CmpLockTwoKcbsShared(a3, v10);
    }
    v7 = 1;
    if ( (*(_DWORD *)(v10 + 4) & 0x20000) != 0 || (*(_DWORD *)(a3 + 4) & 0x20000) != 0 )
    {
      CmpUnlockTwoKcbs((PVOID)a3, (PVOID)v10);
      return 3221225852LL;
    }
  }
  v15 = (_QWORD *)CmpConstructName(*(_QWORD *)(a3 + 104));
  P = v15;
  if ( v15 )
  {
    v16 = *(unsigned __int16 *)v15;
    v17 = (_WORD *)v15[1];
    v99 = 1;
    v79 = v17;
    LODWORD(Size) = v16;
    LODWORD(NumberOfBytes) = v16 + 2;
  }
  else
  {
LABEL_117:
    v17 = v79;
    v16 = Size;
  }
  Src = v17;
  if ( a4 )
  {
    if ( !*(_QWORD *)(a4 + 64) )
    {
      v18 = *(_QWORD *)(a3 + 32);
      if ( (*(_DWORD *)(v18 + 5360) & 1) != 0 )
        *(_QWORD *)(a4 + 64) = v18;
    }
  }
  if ( v7 )
  {
    if ( *(struct _KTHREAD **)(v10 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v10 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 56));
    _m_prefetchw((const void *)(v10 + 48));
    v19 = *(_QWORD *)(v10 + 48);
    if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v20 = v19 - 16;
    else
      v20 = 0LL;
    if ( (v19 & 2) != 0
      || (v21 = *(_QWORD *)(v10 + 48),
          v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 48), v20, v19)) )
    {
      ExfReleasePushLock((_QWORD *)(v10 + 48));
    }
    KeAbPostRelease(v10 + 48);
    if ( (*(_DWORD *)(v10 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v10, *(_DWORD *)(v10 + 64));
    if ( (*(_DWORD *)(v10 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)v10);
    v17 = v79;
    v7 = 0;
    v16 = Size;
    Src = v79;
  }
  if ( v99 )
  {
LABEL_30:
    v22 = Source;
    v23 = NumberOfBytes;
    if ( Source )
      v23 = Source->Length + NumberOfBytes + 2;
    if ( v23 > 0xFFFF )
    {
      NameInListWithStatus = -1073741772;
    }
    else
    {
      if ( v23 <= a2[1] )
      {
        *a2 = v16;
        if ( v22 )
        {
          v24 = 2 * ((unsigned __int64)v16 >> 1);
          memmove((void *)(v24 + *((_QWORD *)a2 + 1) + 2LL), v22->Buffer, v22->Length);
          *(_WORD *)(v24 + *((_QWORD *)a2 + 1)) = 92;
          v17 = Src;
          *a2 += v22->Length + 2;
        }
        memmove(*((void **)a2 + 1), v17, v16);
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
LABEL_37:
        NameInListWithStatus = 0;
        *(_DWORD *)a4 |= 0x10u;
        goto LABEL_38;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v23, 0x20204D43u);
      i = PoolWithTag;
      if ( PoolWithTag )
      {
        Destination.MaximumLength = v23;
        Destination.Buffer = PoolWithTag;
        Destination.Length = v16;
        memmove(PoolWithTag, Src, v16);
        Buffer = i;
        if ( v22 )
        {
          Destination.Length = v16 + 2;
          i[(unsigned __int64)v16 >> 1] = 92;
          RtlAppendUnicodeStringToString(&Destination, v22);
          Buffer = Destination.Buffer;
          LOWORD(v16) = Destination.Length;
        }
        Buffer[(unsigned __int64)(unsigned __int16)v16 >> 1] = 0;
        v38 = (void *)*((_QWORD *)a2 + 1);
        if ( v38 )
          ExFreePoolWithTag(v38, 0);
        *(UNICODE_STRING *)a2 = Destination;
        goto LABEL_37;
      }
      NameInListWithStatus = -1073741670;
    }
LABEL_38:
    if ( !v74 )
      goto LABEL_120;
    goto LABEL_39;
  }
  v39 = *(_QWORD *)(a3 + 32);
  v87 = -1;
  v92 = 0;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v39 + 2848), 1u);
  v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a3 + 32) + 8LL))(
          *(_QWORD *)(a3 + 32),
          *(unsigned int *)(a3 + 40),
          &v87);
  v41 = *(_QWORD *)(a3 + 32);
  v42 = v40;
  if ( !v40 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v41 + 2848));
    NameInListWithStatus = -1073741670;
    goto LABEL_39;
  }
  CmpUpdateKeyNodeAccessBits(v41, v40, *(unsigned int *)(a3 + 40));
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 32) + 2848LL));
  if ( !*(_QWORD *)(a3 + 280) )
  {
    v43 = (_DWORD *)(v42 + 36);
LABEL_89:
    NameInListWithStatus = CmpFindNameInListWithStatus(a1, v43, &CmSymbolicLinkValueName, 0, 0LL, &v81);
    goto LABEL_90;
  }
  v43 = (_DWORD *)(a3 + 272);
  if ( *(_DWORD *)(a3 + 272) )
    goto LABEL_89;
  NameInListWithStatus = -1073741772;
LABEL_90:
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a3 + 32) + 16LL))(*(_QWORD *)(a3 + 32), &v87);
  v44 = v81;
  if ( v81 == -1 )
  {
LABEL_39:
    if ( *(struct _KTHREAD **)(a3 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(a3 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 56));
    _m_prefetchw(v11);
    v26 = *v11;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v6 = v26 - 16;
    if ( (v26 & 2) != 0 || (v27 = *v11, v27 != _InterlockedCompareExchange64(v11, v6, v26)) )
      ExfReleasePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    if ( (*(_DWORD *)(a3 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(a3, *(_DWORD *)(a3 + 64));
    if ( (*(_DWORD *)(a3 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)a3);
    v28 = a1;
    if ( v93 )
      (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, (char *)&NumberOfBytes + 4);
    v29 = v79;
    goto LABEL_52;
  }
  v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, v81, (char *)&NumberOfBytes + 4);
  v93 = v45;
  if ( !v45 )
  {
    NameInListWithStatus = -1073741670;
    goto LABEL_39;
  }
  if ( *(_DWORD *)(v45 + 12) != 6 )
    goto LABEL_179;
  v73 = 1;
  if ( !(unsigned __int8)CmpGetValueData(a1, v44, v45, (unsigned int)&Size, (__int64)&v79, (__int64)&v72, (__int64)&v82) )
  {
    NameInListWithStatus = -1073741670;
    goto LABEL_39;
  }
  (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, (char *)&NumberOfBytes + 4);
  v16 = Size;
  v93 = 0LL;
  LODWORD(NumberOfBytes) = (unsigned __int16)Size + 2;
  if ( v72 )
  {
    v17 = v79;
    Src = v79;
  }
  else
  {
    v46 = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x64764D43u);
    Src = v46;
    if ( !v46 )
    {
      NameInListWithStatus = -1073741670;
      goto LABEL_39;
    }
    memmove(v46, v79, v16);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v82);
    v17 = Src;
    v79 = Src;
    v72 = 1;
  }
  if ( (a5 & 0x1000) != 0 )
    goto LABEL_30;
  v47 = v17;
  if ( v16 < 2 || *v17 != 92 )
  {
LABEL_179:
    NameInListWithStatus = -1073741772;
    goto LABEL_39;
  }
  v83 = 0;
  v48 = 0;
  v49 = 0;
  v50 = (WCHAR *)(((v16 - 1) >> 1) + 1);
  v86 = v50;
  do
  {
    v51 = *v47;
    if ( *v47 == 92 )
    {
      v83 = ++v48;
    }
    else
    {
      if ( v51 < 0x61u )
      {
        v52 = v51;
      }
      else if ( v51 > 0x7Au )
      {
        v67 = RtlUpcaseUnicodeChar(v51);
        v50 = v86;
        v52 = v67;
      }
      else
      {
        v52 = v51 - 32;
      }
      v49 = v52 + 37 * v49;
      v48 = v83;
    }
    ++v47;
    v50 = (WCHAR *)((char *)v50 - 1);
    v86 = v50;
  }
  while ( v50 );
  BugCheckParameter4 = v49;
  v11 = (signed __int64 *)(a3 + 48);
  CmpUnlockKcb((PVOID)a3);
  v29 = Src;
  v74 = 0;
  v89 = Src;
  v88[1] = v16;
  v88[0] = v16;
  v53 = CmpParseCacheLookup(-1, v88, (__int64)v96, (__int64)&v92, (__int64)&v85);
  BugCheckParameter4_4 = v53;
  if ( v53 == -1073741772 )
  {
    if ( CmpLoadingSystemHivesActive )
    {
      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
      {
        v70 = v88[0];
        if ( v88[0] )
        {
          v71 = v89;
          while ( *v71 == 92 )
          {
            ++v71;
            v8 = v70 == 2;
            v70 -= 2;
            v89 = v71;
            v88[0] = v70;
            if ( v8 )
              goto LABEL_168;
          }
          if ( v70 )
          {
            do
            {
              if ( *v71 == 92 )
                break;
              ++v71;
              v70 -= 2;
            }
            while ( v70 );
            v88[0] = v70;
            v89 = v71;
          }
        }
LABEL_168:
        if ( (unsigned __int8)CmpWaitForHiveMount(v88, 1LL, 0LL, a4 + 128) )
        {
          *(_DWORD *)a4 |= 0x100u;
          NameInListWithStatus = 0;
          v29 = v79;
          v28 = a1;
          goto LABEL_52;
        }
      }
      v29 = v79;
      NameInListWithStatus = BugCheckParameter4_4;
      goto LABEL_121;
    }
LABEL_184:
    NameInListWithStatus = v53;
    goto LABEL_121;
  }
  if ( v53 < 0 )
    goto LABEL_184;
  CmpLockHashEntryExclusive(*(_QWORD *)(v85 + 32), BugCheckParameter4);
  v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 32) + 2800LL)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v85 + 32) + 2808LL) - 1) & ((101027
                                                                                       * (BugCheckParameter4 ^ (BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * (BugCheckParameter4 ^ (BugCheckParameter4 >> 9))) >> 9)))
                  + 16);
  v90 = v54;
  if ( !v54 )
  {
LABEL_149:
    CmpUnlockHashEntry(*(_QWORD *)(v85 + 32), BugCheckParameter4);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a3 + 4) & 0x20000) != 0 || (*(_DWORD *)(v10 + 4) & 0x20000) != 0 )
      {
        CmpUnlockTwoKcbs((PVOID)v10, (PVOID)a3);
        NameInListWithStatus = -1073741444;
        goto LABEL_121;
      }
      CmpUnlockTwoKcbs((PVOID)v10, (PVOID)a3);
    }
    v17 = Src;
    goto LABEL_30;
  }
  v55 = v54;
  while ( 1 )
  {
    v10 = v55 - 16;
    CmpLockTwoKcbsExclusive(a3, v55 - 16);
    v56 = *(_DWORD *)(v55 - 16 + 4);
    v7 = 1;
    if ( (v56 & 0x20000) != 0
      || BugCheckParameter4 != *(_DWORD *)v55
      || v83 != ((v56 >> 21) & 0x3FF)
      || (v56 & 0x10) != 0 )
    {
      goto LABEL_113;
    }
    v57 = (_QWORD *)CmpConstructName(v55 - 16);
    P = v57;
    v58 = v57;
    if ( !v57 )
      goto LABEL_148;
    v59 = *(unsigned __int16 *)v57;
    v99 = 1;
    v95 = v59;
    if ( v59 == v16 )
      break;
LABEL_186:
    ExFreePoolWithTag(v58, 0x624E4D43u);
    v99 = 0;
LABEL_113:
    v55 = *(_QWORD *)(v55 + 8);
    v90 = v55;
    CmpUnlockTwoKcbs((PVOID)a3, (PVOID)v10);
    v7 = 0;
    if ( !v55 )
      goto LABEL_148;
  }
  v86 = (WCHAR *)Src;
  v60 = (WCHAR *)Src;
  BugCheckParameter4_4 = 0;
  if ( v59 )
  {
    v61 = (wchar_t *)(v57[1] - (_QWORD)Src);
    for ( i = v61; ; v61 = i )
    {
      v62 = *v60;
      if ( *v60 >= 0x61u )
      {
        if ( v62 > 0x7Au )
        {
          v68 = RtlUpcaseUnicodeChar(v62);
          v60 = v86;
          v61 = i;
          v63 = v68;
        }
        else
        {
          v63 = v62 - 32;
        }
      }
      else
      {
        v63 = v62;
      }
      v64 = *(WCHAR *)((char *)v60 + (_QWORD)v61);
      if ( v64 >= 0x61u )
      {
        if ( v64 > 0x7Au )
        {
          v69 = RtlUpcaseUnicodeChar(v64);
          v60 = v86;
          v65 = v69;
        }
        else
        {
          v65 = v64 - 32;
        }
      }
      else
      {
        v65 = v64;
      }
      if ( v63 != v65 )
        break;
      v86 = ++v60;
      BugCheckParameter4_4 += 2;
      if ( BugCheckParameter4_4 >= v95 )
        goto LABEL_139;
    }
    v55 = v90;
    v58 = P;
    goto LABEL_186;
  }
LABEL_139:
  if ( !CmpReferenceKeyControlBlock((signed __int32 *)v10) )
  {
LABEL_148:
    v29 = Src;
    goto LABEL_149;
  }
  v66 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + 5360LL) & 1) != 0 )
    v66 = *(_QWORD **)(a3 + 32);
  if ( CmpOKToFollowLink(v66, *(_QWORD *)(v10 + 32))
    && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v10 + 32) + 5360LL) ^ *(_BYTE *)(*(_QWORD *)(a3 + 32) + 5360LL)) & 0x20) == 0 )
  {
    CmpCleanUpKcbValueCache(a3);
    if ( !*(_QWORD *)(a4 + 72) )
      *(_QWORD *)(a4 + 72) = a3;
    if ( *(_QWORD *)(a4 + 72) == v10 )
    {
      CmpDereferenceKeyControlBlockWithLock(v10, 0LL);
    }
    else
    {
      *(_WORD *)(a3 + 4) |= 8u;
      *(_QWORD *)(a3 + 104) = v10;
    }
    goto LABEL_148;
  }
  CmpDereferenceKeyControlBlockWithLock(v10, 0LL);
  CmpUnlockTwoKcbs((PVOID)a3, (PVOID)v10);
  CmpUnlockHashEntry(*(_QWORD *)(v85 + 32), BugCheckParameter4);
  NameInListWithStatus = -1073741790;
LABEL_120:
  v29 = Src;
LABEL_121:
  v28 = a1;
LABEL_52:
  if ( v29 && v73 )
  {
    if ( v72 )
      ExFreePoolWithTag(v29, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(v28 + 16))(v28, &v82);
  }
  if ( v99 )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v85 )
    CmpDereferenceKeyControlBlock(v85);
  return NameInListWithStatus;
}
