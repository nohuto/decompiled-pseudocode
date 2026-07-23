/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14000B030
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14000BA40 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x1400A6660 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpGetComponentNameAtIndex @ 0x1404036B0 (CmpGetComponentNameAtIndex.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupPathInfo @ 0x1404037E0 (CmpCleanupPathInfo.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpInitializePathInfo @ 0x140403828 (CmpInitializePathInfo.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14043F0C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpComputeComponentHashes @ 0x14049B480 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x1404A87D0 (CmpValidateComponents.c)
 *     CmpCompareUnicodeString @ 0x1404B6020 (CmpCompareUnicodeString.c)
 *     CmpConstructAndCacheName @ 0x1404C56E4 (CmpConstructAndCacheName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140518418 (CmpPerformCompleteKcbCacheLookup.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR *a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int v10; // r13d
  wchar_t *Buffer; // rdi
  bool v12; // r15
  __int64 KcbAtLayerHeight; // rax
  __int64 v14; // r14
  char v15; // cl
  unsigned __int64 v16; // rdi
  void *v17; // r15
  unsigned int v18; // ebx
  char v19; // r9
  unsigned int v20; // esi
  unsigned int v21; // r14d
  unsigned int v22; // r8d
  __int64 v23; // r12
  unsigned __int16 *v24; // rax
  int v25; // r8d
  unsigned __int16 v26; // bx
  wchar_t *v27; // rdi
  char v28; // r13
  __int64 v29; // r10
  unsigned __int16 v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int16 v32; // r9
  wchar_t v33; // r8
  unsigned __int16 v34; // dx
  unsigned __int64 v35; // r11
  unsigned __int16 v36; // cx
  _WORD *v37; // rax
  __int16 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  char *v41; // r10
  UNICODE_STRING *v42; // rbx
  void *v43; // rcx
  int NameInListWithStatus; // ebx
  __int16 v46; // r9
  __int64 v47; // rcx
  __int16 v48; // r9
  __int64 v49; // rbx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r8d
  unsigned int v54; // ebx
  __int64 v55; // r10
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v57; // r8d
  unsigned int v58; // r9d
  __int64 v59; // rbx
  wchar_t *v60; // r12
  UNICODE_STRING v61; // xmm6
  unsigned __int16 Length; // di
  __int16 v63; // r8
  wchar_t *v64; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v66; // cx
  int v67; // ebx
  ULONG_PTR v68; // r15
  int v69; // ebx
  int v70; // eax
  int v71; // ebx
  __int64 v72; // r15
  unsigned int v73; // ebx
  __int64 v74; // rax
  ULONG_PTR v75; // rcx
  char v76; // r14
  unsigned int v77; // ebx
  __int64 v78; // r15
  const UNICODE_STRING *v79; // rax
  UNICODE_STRING *v80; // rdi
  void *v81; // rcx
  ULONG_PTR v82; // rbx
  __int16 v83; // [rsp+40h] [rbp-C0h]
  char v84; // [rsp+40h] [rbp-C0h]
  char i; // [rsp+42h] [rbp-BEh] BYREF
  char v86[5]; // [rsp+43h] [rbp-BDh] BYREF
  __int64 v87; // [rsp+48h] [rbp-B8h]
  unsigned int v88; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v89; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v91; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int16 v93[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v94; // [rsp+84h] [rbp-7Ch] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h] BYREF
  __int64 v96; // [rsp+90h] [rbp-70h]
  __int64 v97; // [rsp+98h] [rbp-68h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v100; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-40h]
  __int64 v102; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v104; // [rsp+E0h] [rbp-20h]
  ULONG_PTR *v105; // [rsp+E8h] [rbp-18h]
  _WORD v106[4]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t *v107; // [rsp+F8h] [rbp-8h]
  __int64 v108; // [rsp+100h] [rbp+0h]
  _BYTE v109[40]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v110[176]; // [rsp+130h] [rbp+30h] BYREF

  v7 = a1;
  v8 = a5;
  v104 = a6;
  LOWORD(v10) = a3;
  v108 = a1;
  v105 = a7;
  Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v89 = 0LL;
  BugCheckParameter4 = 0LL;
  v86[0] = 0;
  v87 = 0LL;
  P = 0LL;
  v91 = 0;
  v97 = 0xFFFFFFFFLL;
  v99 = 0xFFFFFFFFLL;
  v98 = 0xFFFFFFFFLL;
  v102 = a2;
  v101 = a5;
  v88 = -1;
  i = 0;
  CmpInitializePathInfo(v110);
  CmpInitializeKcbStack(v109);
  v12 = !a5 && !*(_WORD *)(v7 + 2);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v7, *(unsigned __int16 *)(v7 + 2));
  v14 = KcbAtLayerHeight;
  if ( !v12 || (*(_DWORD *)(KcbAtLayerHeight + 4) & 8) == 0 )
  {
LABEL_38:
    v46 = *(_WORD *)(v7 + 2);
    v83 = v46;
    if ( v46 < 0 )
    {
LABEL_149:
      NameInListWithStatus = -1073741772;
LABEL_150:
      v17 = (void *)v89;
LABEL_151:
      CmpUnlockKcbStack(v7);
LABEL_107:
      v19 = 0;
      goto LABEL_108;
    }
    while ( 1 )
    {
      v96 = CmpGetKcbAtLayerHeight(v7, (unsigned __int16)v46);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v96, 0LL) == 1 )
        goto LABEL_149;
      if ( *(_DWORD *)(v47 + 32) == -1 )
        goto LABEL_135;
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(v47 + 280), v8) )
        break;
      if ( *(_DWORD *)(v96 + 272) )
      {
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 *(_QWORD *)(v96 + 24),
                                 (int)v96 + 272,
                                 (unsigned int)&CmSymbolicLinkValueName,
                                 0,
                                 0LL,
                                 (__int64)&v88);
        goto LABEL_43;
      }
      v88 = -1;
LABEL_134:
      v48 = v83;
LABEL_135:
      v46 = v48 - 1;
      v83 = v46;
      if ( v46 < 0 )
      {
        v51 = v87;
LABEL_45:
        if ( v88 == -1 )
          goto LABEL_149;
        v52 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v51 + 8))(v51, v88, &v99);
        v101 = v52;
        if ( (*(_BYTE *)(v52 + 16) & 2) != 0 )
        {
          v72 = v87;
          NameInListWithStatus = -1073741772;
          v76 = 1;
          goto LABEL_102;
        }
        if ( *(_DWORD *)(v52 + 12) != 6 )
        {
          v72 = v87;
          NameInListWithStatus = -1073741772;
          v76 = 1;
          goto LABEL_102;
        }
        if ( !(unsigned __int8)CmpGetValueData(
                                 v87,
                                 v88,
                                 v52,
                                 (unsigned int)&v91,
                                 (__int64)&P,
                                 (__int64)&i,
                                 (__int64)&v98) )
        {
          v72 = v87;
          NameInListWithStatus = -1073741670;
          v76 = 1;
          goto LABEL_99;
        }
        if ( v91 > 0xFFFF )
        {
          v72 = v87;
          NameInListWithStatus = -1073741772;
          v76 = 1;
          goto LABEL_99;
        }
        if ( (v91 & 1) != 0 )
        {
          v72 = v87;
          NameInListWithStatus = -1073741772;
          v76 = 1;
          goto LABEL_99;
        }
        v10 = (__int16)v10;
        v53 = v10;
        SourceString.Buffer = (wchar_t *)P;
        SourceString.Length = v91;
        SourceString.MaximumLength = v91;
        v54 = (unsigned __int16)v91;
        LODWORD(v96) = a4;
        if ( (__int16)v10 < (unsigned int)a4 )
        {
          v55 = v102;
          do
          {
            ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v55, v53);
            v53 = v57 + 1;
            v54 += *ComponentNameAtIndex + 2;
          }
          while ( v53 < v58 );
        }
        if ( v54 > 0xFFFF )
        {
          v72 = v87;
          NameInListWithStatus = -1073741772;
          v76 = 1;
          goto LABEL_99;
        }
        DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v54, 0x36364D43u);
        Buffer = DestinationString.Buffer;
        if ( !DestinationString.Buffer )
        {
          v72 = v87;
          NameInListWithStatus = -1073741670;
          v76 = 1;
          goto LABEL_99;
        }
        DestinationString.Length = 0;
        DestinationString.MaximumLength = v54;
        RtlUnicodeStringCopy(&DestinationString, &SourceString);
        if ( i )
        {
          ExFreePoolWithTag(P, 0);
          v59 = v87;
        }
        else
        {
          v59 = v87;
          (*(void (__fastcall **)(__int64, __int64 *))(v87 + 16))(v87, &v98);
        }
        P = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(v59 + 16))(v59, &v99);
        v101 = 0LL;
        CmpUnlockKcbStack(v7);
        v60 = DestinationString.Buffer;
        v61 = DestinationString;
        v84 = 0;
        Length = DestinationString.Length;
        if ( !v12 )
        {
          v72 = v87;
          goto LABEL_87;
        }
        v100 = DestinationString;
        v107 = DestinationString.Buffer;
        v63 = 0;
        v106[0] = 0;
        v106[1] = DestinationString.MaximumLength;
        if ( DestinationString.Length )
        {
          v64 = v100.Buffer;
          MaximumLength = v100.MaximumLength;
          v66 = v100.Length;
          while ( *v64 == 92 )
          {
            ++v64;
            v66 -= 2;
            MaximumLength -= 2;
            v100.Buffer = v64;
            v63 += 2;
            v100.Length = v66;
            v100.MaximumLength = MaximumLength;
            v106[0] = v63;
            if ( !v66 )
              goto LABEL_68;
          }
          if ( v66 )
          {
            while ( *v64 != 92 )
            {
              ++v64;
              v66 -= 2;
              MaximumLength -= 2;
              v100.Buffer = v64;
              v63 += 2;
              v100.Length = v66;
              v100.MaximumLength = MaximumLength;
              v106[0] = v63;
              if ( !v66 )
                goto LABEL_68;
            }
            do
            {
              if ( *v64 != 92 )
                break;
              ++v64;
              MaximumLength -= 2;
              v66 -= 2;
            }
            while ( v66 );
            v100.Buffer = v64;
            v100.Length = v66;
            v100.MaximumLength = MaximumLength;
          }
        }
LABEL_68:
        if ( !(unsigned int)CmpCompareUnicodeString(v106, &CmRegistryRootName, 2LL)
          && (int)CmpComputeComponentHashes(&v100, v93, v110) >= 0 )
        {
          v67 = v93[0];
          if ( (int)CmpValidateComponents((unsigned int)v93[0], v110) >= 0 )
          {
            if ( (int)CmpPerformCompleteKcbCacheLookup(
                        *((_QWORD *)CmpRegistryRootObject + 1),
                        0,
                        v67,
                        (unsigned int)v110,
                        0LL,
                        (__int64)&BugCheckParameter4,
                        (__int64)v86,
                        (__int64)&v94) < 0 )
            {
              v89 = BugCheckParameter4;
            }
            else if ( v94 == (_WORD)v67 )
            {
              v68 = BugCheckParameter4;
              v89 = BugCheckParameter4;
              if ( (int)CmpStartKcbStackForTopLayerKcb(v109, BugCheckParameter4) >= 0 )
              {
                CmpLockKcbStackShared(v109);
                v69 = CmpConstructAndCacheName(v68, 0LL);
                CmpUnlockKcbStack(v109);
                if ( v69 >= 0 )
                {
                  if ( v86[0] )
                  {
                    CmpUnlockHashEntryByKcb(v68);
                    v86[0] = 0;
                  }
                  CmpLockKcbStackTopExclusiveRestShared(v7);
                  v84 = 1;
                  if ( (unsigned __int8)CmpIsKeyStackDeleted(v7, 0LL) )
                  {
                    v72 = v87;
                    v76 = 1;
                    goto LABEL_88;
                  }
                  v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v14 + 24) + 8LL))(
                          *(_QWORD *)(v14 + 24),
                          *(unsigned int *)(v14 + 32),
                          &v97);
                  v71 = CmpFindNameInListWithStatus(
                          *(_QWORD *)(v14 + 24),
                          v70 + 36,
                          (unsigned int)&CmSymbolicLinkValueName,
                          0,
                          0LL,
                          (__int64)&v88);
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v14 + 24) + 16LL))(
                    *(_QWORD *)(v14 + 24),
                    &v97);
                  if ( v71 >= 0 )
                  {
                    v73 = v88;
                    v87 = *(_QWORD *)(v14 + 24);
                    v72 = v87;
                    v74 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v72 + 8))(v72, v88, &v99);
                    v101 = v74;
                    if ( *(_DWORD *)(v74 + 12) == 6 )
                    {
                      if ( (unsigned __int8)CmpGetValueData(
                                              v72,
                                              v73,
                                              v74,
                                              (unsigned int)&v91,
                                              (__int64)&P,
                                              (__int64)&i,
                                              (__int64)&v98) )
                      {
                        if ( v91 <= 0xFFFF && (v91 & 1) == 0 )
                        {
                          SourceString.Length = v91;
                          SourceString.MaximumLength = v91;
                          SourceString.Buffer = (wchar_t *)P;
                          if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString, &SourceString, 0LL) )
                          {
                            CmpCleanUpKcbValueCache(v14);
                            v75 = v89;
                            *(_QWORD *)(v14 + 96) = v89;
                            if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v75) )
                              v89 = 0LL;
                            *(_WORD *)(v14 + 4) |= 8u;
                            CmpUnlockKcbStack(v7);
LABEL_87:
                            v76 = 0;
LABEL_88:
                            v77 = v96;
                            if ( (__int16)v10 < (unsigned int)v96 )
                            {
                              v78 = v102;
                              while ( 1 )
                              {
                                v79 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v78, v10);
                                DestinationString.Length = Length + 2;
                                v60[(unsigned __int64)Length >> 1] = 92;
                                RtlUnicodeStringCat(&DestinationString, v79);
                                if ( ++v10 >= v77 )
                                  break;
                                v60 = DestinationString.Buffer;
                                Length = DestinationString.Length;
                              }
                              v61 = DestinationString;
                              v7 = v108;
                              v72 = v87;
                            }
                            v80 = (UNICODE_STRING *)v104;
                            v81 = *(void **)(v104 + 8);
                            if ( v81 )
                            {
                              ExFreePoolWithTag(v81, 0);
                              v80->Buffer = 0LL;
                            }
                            v82 = v89;
                            if ( v86[0] )
                              CmpUnlockHashEntryByKcb(v89);
                            v89 = 0LL;
                            *v105 = v82;
                            *v80 = v61;
                            RtlInitUnicodeString(&DestinationString, 0LL);
                            NameInListWithStatus = 0;
                            Buffer = DestinationString.Buffer;
                            if ( DestinationString.Buffer )
                              ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_99:
                            if ( P )
                            {
                              if ( i )
                                ExFreePoolWithTag(P, 0);
                              else
                                (*(void (__fastcall **)(__int64, __int64 *))(v72 + 16))(v72, &v98);
                            }
LABEL_102:
                            if ( v101 )
                              (*(void (__fastcall **)(__int64, __int64 *))(v72 + 16))(v72, &v99);
                            if ( Buffer )
                              ExFreePoolWithTag(Buffer, 0);
                            v17 = (void *)v89;
                            if ( v76 )
                              goto LABEL_151;
                            goto LABEL_107;
                          }
                        }
                      }
                    }
LABEL_116:
                    v76 = v84;
                    goto LABEL_88;
                  }
                }
              }
            }
            else
            {
              CmpDereferenceKeyControlBlock(BugCheckParameter4);
              v89 = 0LL;
            }
          }
        }
        v72 = v87;
        goto LABEL_116;
      }
    }
    v49 = v96;
    v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v96 + 24) + 8LL))(
            *(_QWORD *)(v96 + 24),
            *(unsigned int *)(v96 + 32),
            &v97);
    NameInListWithStatus = CmpFindNameInListWithStatus(
                             *(_QWORD *)(v49 + 24),
                             v50 + 36,
                             (unsigned int)&CmSymbolicLinkValueName,
                             0,
                             0LL,
                             (__int64)&v88);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v96 + 24) + 16LL))(*(_QWORD *)(v96 + 24), &v97);
LABEL_43:
    if ( NameInListWithStatus >= 0 )
    {
      v51 = *(_QWORD *)(v96 + 24);
      v87 = v51;
      goto LABEL_45;
    }
    if ( NameInListWithStatus != -1073741772 )
      goto LABEL_150;
    v8 = v101;
    goto LABEL_134;
  }
  v15 = 0;
  BugCheckParameter4 = *(_QWORD *)(KcbAtLayerHeight + 96);
  v16 = *(_QWORD *)(BugCheckParameter4 + 288);
  if ( (v16 & 1) != 0 )
  {
    v15 = 1;
    v16 &= ~1uLL;
  }
  if ( !v16 || v15 )
  {
    Buffer = DestinationString.Buffer;
    v89 = BugCheckParameter4;
    goto LABEL_38;
  }
  v17 = (void *)BugCheckParameter4;
  v89 = BugCheckParameter4;
  if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(BugCheckParameter4) )
  {
    NameInListWithStatus = -1073741670;
    v17 = 0LL;
    goto LABEL_151;
  }
  CmpUnlockKcbStack(v7);
  CmpLockKcbShared(BugCheckParameter4);
  v18 = *(unsigned __int16 *)v16;
  v19 = 1;
  v20 = (__int16)v10;
  v21 = a4;
  v22 = (__int16)v10;
  v23 = v102;
  for ( i = 1; v22 < v21; v18 += *v24 + 2 )
  {
    v24 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v102, v22);
    v22 = v25 + 1;
  }
  if ( v18 > 0xFFFF )
  {
    NameInListWithStatus = -1073741772;
  }
  else
  {
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x36364D43u);
    if ( DestinationString.Buffer )
    {
      DestinationString.MaximumLength = v18;
      DestinationString.Length = 0;
      RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)v16);
      if ( (__int16)v10 < v21 )
      {
        v26 = DestinationString.MaximumLength;
        v27 = DestinationString.Buffer;
        v28 = DestinationString.MaximumLength;
        do
        {
          v29 = CmpGetComponentNameAtIndex(v23, v20);
          v31 = (unsigned __int64)v30 >> 1;
          v32 = v30 + 2;
          DestinationString.Length = v32;
          v27[v31] = v33;
          if ( (v32 & 1) == 0 && (v28 & 1) == 0 && v32 <= v26 && v26 != 0xFFFF && (v27 || !v32 && !v26) )
          {
            v34 = *(_WORD *)v29;
            v35 = (unsigned __int64)v32 >> 1;
            if ( (*(_WORD *)v29 & 1) == 0 )
            {
              v36 = *(_WORD *)(v29 + 2);
              if ( (v36 & 1) == 0 && v34 <= v36 && v36 != 0xFFFF )
              {
                v37 = *(_WORD **)(v29 + 8);
                if ( v37 || !v34 && !v36 )
                {
                  v38 = 0;
                  v39 = (unsigned __int64)v34 >> 1;
                  v40 = ((unsigned __int64)v26 >> 1) - v35;
                  if ( v40 )
                  {
                    v41 = (char *)v27 + 2 * v35 - (_QWORD)v37;
                    do
                    {
                      if ( !v39 )
                        break;
                      --v39;
                      *(_WORD *)((char *)v37 + (_QWORD)v41) = *v37;
                      ++v38;
                      ++v37;
                      --v40;
                    }
                    while ( v40 );
                  }
                  DestinationString.Length = 2 * (v35 + v38);
                }
              }
            }
          }
          ++v20;
        }
        while ( v20 < v21 );
        v17 = (void *)v89;
      }
      v42 = (UNICODE_STRING *)v104;
      v43 = *(void **)(v104 + 8);
      if ( v43 )
      {
        ExFreePoolWithTag(v43, 0);
        v42->Buffer = 0LL;
      }
      *v42 = DestinationString;
      CmpUnlockKcb(v17);
      NameInListWithStatus = 0;
      *v105 = (ULONG_PTR)v17;
      goto LABEL_37;
    }
    v19 = i;
    NameInListWithStatus = -1073741670;
  }
LABEL_108:
  if ( v17 )
  {
    if ( v19 )
      CmpUnlockKcb(v17);
    CmpDereferenceKeyControlBlock((ULONG_PTR)v17);
  }
LABEL_37:
  CmpCleanupKcbStack(v109);
  CmpCleanupPathInfo(v110);
  return (unsigned int)NameInListWithStatus;
}
