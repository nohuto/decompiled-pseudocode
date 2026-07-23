/*
 * XREFs of ObpLookupObjectName @ 0x14044E320
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 * Callees:
 *     SeClearLearningModeObjectInformation @ 0x14000F1C0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     ObpLockDirectoryShared @ 0x1400EC2BC (ObpLockDirectoryShared.c)
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObCheckCreateObjectAccess @ 0x140402FEC (ObCheckCreateObjectAccess.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x140410FE0 (PsReferenceImpersonationTokenEx.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14048845C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1404B1AD4 (ObpInsertDirectoryEntry.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     ObpIsUnsecureName @ 0x140544B08 (ObpIsUnsecureName.c)
 *     ObpUseSystemDeviceMap @ 0x140665600 (ObpUseSystemDeviceMap.c)
 *     ObpCheckTraverseAccess @ 0x14066631C (ObpCheckTraverseAccess.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        UNICODE_STRING *a2,
        int a3,
        struct _OBJECT_TYPE *a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        _QWORD *a13)
{
  struct _OBJECT_TYPE *v13; // rdi
  __int16 v14; // bx
  __int64 v16; // r9
  char *v17; // r14
  int AccessMode; // r12d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  bool v20; // di
  NTSTATUS result; // eax
  PVOID v22; // rdi
  NTSTATUS v23; // eax
  PVOID v24; // rcx
  NTSTATUS v25; // ebx
  UNICODE_STRING v26; // xmm0
  unsigned __int64 *v27; // r13
  UNICODE_STRING *v28; // r15
  int PermanentSiloContext; // eax
  NTSTATUS v30; // ebx
  wchar_t *v31; // rcx
  char v32; // di
  struct _KTHREAD *v33; // r14
  volatile signed __int32 *v34; // r12
  void *v35; // r15
  __int64 Process; // r13
  __int64 ProcessServerSilo; // rbx
  bool v38; // zf
  bool v39; // si
  void *v40; // rax
  unsigned __int64 *v41; // r14
  struct _KTHREAD *v42; // rax
  __int64 v43; // rdi
  signed __int64 v44; // rax
  signed __int64 v45; // rcx
  unsigned __int64 v46; // rtt
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  __m128i v49; // xmm0
  PVOID *v50; // rax
  PVOID *v51; // r12
  __int64 v52; // r12
  unsigned __int64 *v53; // rdi
  struct _OBJECT_TYPE *v54; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  unsigned __int64 *v56; // rdi
  int v57; // ecx
  NTSTATUS v58; // esi
  wchar_t *Buffer; // r15
  unsigned int v60; // r14d
  unsigned __int64 v61; // rsi
  __int64 v62; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v64; // rbx
  PVOID v65; // rcx
  __int64 v66; // rdi
  unsigned int v67; // eax
  __int128 v68; // rt0
  unsigned int v69; // ebx
  unsigned int v70; // edx
  int v71; // ebx
  char v72; // r14
  unsigned int v73; // ebx
  unsigned __int64 *v74; // rsi
  struct _KTHREAD *v75; // rax
  unsigned __int64 *v76; // rdi
  __int64 v77; // rbx
  PVOID v78; // rbx
  PVOID v79; // rcx
  __int64 *v80; // r13
  int v81; // ecx
  __int64 v82; // r8
  _QWORD *v83; // r10
  wchar_t *v84; // rdx
  wchar_t *v85; // r11
  signed __int64 v86; // r10
  unsigned int v87; // r8d
  unsigned int v88; // r9d
  signed __int64 *v89; // rbx
  signed __int64 v90; // rax
  signed __int64 v91; // rcx
  signed __int64 *v92; // rbx
  signed __int64 v93; // rax
  signed __int64 v94; // rcx
  signed __int64 v95; // rtt
  void *v96; // rcx
  void *v97; // rcx
  signed __int64 v98; // rtt
  void *v99; // rcx
  PVOID v100; // rsi
  int v101; // eax
  unsigned __int64 *v102; // r14
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v104; // rcx
  unsigned __int64 *v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // rax
  signed __int64 v108; // rax
  signed __int64 v109; // rcx
  unsigned __int64 v110; // rtt
  struct _KTHREAD *v111; // rcx
  __int16 v112; // ax
  char v113; // r15
  unsigned __int64 *v114; // rsi
  struct _KTHREAD *v115; // rax
  __int64 v116; // rbx
  unsigned __int64 v117; // rbx
  int v118; // edi
  signed __int64 v119; // rax
  signed __int64 v120; // rcx
  unsigned __int64 v121; // rtt
  void *v122; // rcx
  void *v123; // rcx
  __int64 (__usercall *v124)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  __int64 v125; // r14
  void *v126; // rcx
  NTSTATUS v127; // eax
  int v128; // eax
  PVOID v129; // r12
  signed __int32 v130; // ebx
  signed __int32 v131; // eax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *v133; // rcx
  unsigned __int64 *v134; // rdi
  _BYTE *v135; // rax
  _BYTE *v136; // rbx
  signed __int64 v137; // rax
  signed __int64 v138; // rcx
  unsigned __int64 v139; // rtt
  void *v140; // rcx
  signed __int64 v141; // rax
  signed __int64 v142; // rcx
  unsigned __int64 v143; // rtt
  void *v144; // rcx
  NTSTATUS v145; // ebx
  _DWORD *v146; // r14
  ACCESS_MASK v147; // edx
  KPROCESSOR_MODE v148; // r12
  int v149; // edi
  unsigned int v150; // esi
  PVOID PoolWithTag; // rdi
  char *v152; // rbx
  void *v153; // rcx
  unsigned __int16 v154; // ax
  void *v155; // rcx
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  bool v157; // [rsp+60h] [rbp-A0h]
  char v158; // [rsp+62h] [rbp-9Eh]
  PVOID v159; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v160; // [rsp+70h] [rbp-90h] BYREF
  NTSTATUS v161; // [rsp+80h] [rbp-80h] BYREF
  int v162; // [rsp+84h] [rbp-7Ch]
  __int64 v163; // [rsp+88h] [rbp-78h]
  unsigned int v164; // [rsp+90h] [rbp-70h]
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  bool v167; // [rsp+A8h] [rbp-58h] BYREF
  char v168[7]; // [rsp+A9h] [rbp-57h] BYREF
  PVOID v169; // [rsp+B0h] [rbp-50h]
  int v170; // [rsp+B8h] [rbp-48h]
  PVOID v171; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String1; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v173[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v174; // [rsp+E4h] [rbp-1Ch]
  __int64 v175; // [rsp+E8h] [rbp-18h]
  NTSTATUS AccessStatus; // [rsp+F0h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+F4h] [rbp-Ch] BYREF
  int Length; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v179; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 *v180; // [rsp+108h] [rbp+8h] BYREF
  int v181; // [rsp+110h] [rbp+10h] BYREF
  __int64 v182; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v183; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v184[16]; // [rsp+128h] [rbp+28h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+138h] [rbp+38h]
  UNICODE_STRING *v186; // [rsp+140h] [rbp+40h]
  ULONG_PTR v187; // [rsp+148h] [rbp+48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp+60h] BYREF
  char v189; // [rsp+1D0h] [rbp+D0h]
  int v191; // [rsp+1E0h] [rbp+E0h]

  v191 = a3;
  v13 = a4;
  P = 0LL;
  v14 = a3;
  v170 = 64;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v157 = 0;
  v189 = 0;
  if ( a12 )
    *a12 = 0;
  v38 = ObpCaseInsensitive == 0;
  v16 = a9;
  v161 = 0;
  v162 = 0;
  *a13 = 0LL;
  v158 = 1;
  v159 = 0LL;
  v173[0] = 16;
  v174 = -1;
  v175 = a9;
  if ( !v38
    && (v13->TypeInfo.ObjectTypeFlags & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v191 = a3 | 0x40;
  }
  v17 = a8;
  AccessMode = a5;
  if ( (v14 & 0x400) != 0 )
    AccessMode = 1;
  v164 = AccessMode;
  if ( !a8 )
  {
    v189 = 1;
    GrantedAccess = 0;
    AccessStatus = 0;
    p_SubjectContext = 0LL;
    if ( (_BYTE)AccessMode )
    {
      if ( a10 == (struct _ACCESS_STATE *)-32LL )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = &a10->SubjectSecurityContext;
      }
      v20 = SeAccessCheck(
              SeMediumDaclSd,
              p_SubjectContext,
              0,
              0x20000u,
              0,
              0LL,
              (PGENERIC_MAPPING)&RtlpRestrictedMapping,
              AccessMode,
              &GrantedAccess,
              &AccessStatus) == 1;
    }
    else
    {
      v20 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
      SeReleaseSubjectContext(p_SubjectContext);
    v14 = v191;
    v38 = v20;
    v13 = a4;
    v157 = !v38;
    v16 = a9;
  }
  if ( !BugCheckParameter1 )
  {
    v28 = a2;
    if ( !a2->Length || *a2->Buffer != 92 )
      return -1073741765;
    PermanentSiloContext = PsGetPermanentSiloContext(v16, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v179);
    v27 = v179;
    if ( PermanentSiloContext < 0 )
      v27 = (unsigned __int64 *)ObpRootDirectoryObject;
    v179 = v27;
    Object = v27;
    if ( v27 )
      ObfReferenceObject(v27);
    if ( a2->Length != 2 )
    {
      v186 = a2;
      p_Name = &v13->Name;
      v187 = 0LL;
      SeSetLearningModeObjectInformation((__int64)v184);
      goto LABEL_51;
    }
    if ( v27 )
    {
      v30 = ObReferenceObjectByPointer(v27, 0, v13, a5);
      if ( v30 >= 0 )
        *a13 = v27;
      ObfDereferenceObject(v27);
      return v30;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, v13, a5);
      if ( result >= 0 )
        *a13 = a8;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1953261124, (__int64)&Object, 0LL, (__int64)&v182);
  v161 = result;
  if ( result < 0 )
    return result;
  if ( HIDWORD(v182) )
  {
    v174 &= HIDWORD(v182);
    if ( (a10->OriginalDesiredAccess & v174) != a10->OriginalDesiredAccess )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
  }
  v22 = Object;
  if ( a2->Length )
  {
    if ( *a2->Buffer == 92
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != IoFileObjectType )
    {
      ObfDereferenceObject(Object);
      return -1073741765;
    }
  }
  else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == ObpDirectoryObjectType )
  {
    v23 = ObReferenceObjectByPointer(Object, 0, a4, a5);
    v24 = v159;
    v25 = v23;
    if ( v23 >= 0 )
      v24 = v22;
    v159 = v24;
    ObfDereferenceObject(v22);
    *a13 = v159;
    return v25;
  }
  v26 = *a2;
  v159 = Object;
  v160 = v26;
  p_Name = &a4->Name;
  v186 = a2;
  v187 = BugCheckParameter1;
  SeSetLearningModeObjectInformation((__int64)v184);
  v27 = (unsigned __int64 *)v159;
  while ( 2 )
  {
    v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
LABEL_100:
    v53 = v27 - 6;
    v54 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)];
    ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v54->TypeInfo.ParseProcedure;
    if ( !ParseProcedure )
    {
      if ( v54 != ObpDirectoryObjectType )
        goto LABEL_346;
      v56 = v27;
      v169 = v27;
      if ( v160.Length && *v160.Buffer == 92 )
      {
        ++v160.Buffer;
        v160.Length -= 2;
      }
      for ( String1 = v160; v160.Length; v160.Length -= 2 )
      {
        if ( *v160.Buffer == 92 )
          break;
        ++v160.Buffer;
      }
      String1.Length -= v160.Length;
      if ( !String1.Length )
        goto LABEL_352;
      if ( (_BYTE)v164 && (a10->Flags & 1) == 0 )
      {
        v158 = ObpCheckTraverseAccess(v27, a10, a10);
        if ( !v158 )
        {
          v57 = v162;
          if ( v162 >= 0 )
            v57 = -1073741772;
          v162 = v57;
          if ( v160.Length || !v17 )
            goto LABEL_116;
          goto LABEL_122;
        }
        v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
        v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
      }
      if ( v160.Length )
        goto LABEL_123;
      if ( !v17 )
      {
        *(_DWORD *)(a11 + 32) = -1145368012;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v64 = KeAbPreAcquire((ULONG_PTR)(v27 + 37), 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 + 37, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v27 + 37, v64, (ULONG_PTR)(v27 + 37));
        if ( v64 )
          *(_BYTE *)(v64 + 26) |= 1u;
        v56 = (unsigned __int64 *)v169;
        v65 = v169;
        *(_DWORD *)(a11 + 32) = -572714444;
        ObfReferenceObject(v65);
        v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
        v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
        *(_QWORD *)a11 = v56;
        *(_WORD *)(a11 + 30) = 1;
LABEL_123:
        Buffer = String1.Buffer;
        v171 = v56;
        Length = String1.Length;
        v60 = String1.Length >> 1;
        if ( v60 < 4 )
        {
          v69 = 0;
        }
        else
        {
          v61 = 0LL;
          do
          {
            v62 = *(_QWORD *)Buffer;
            if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v66 = 4LL;
              do
              {
                v67 = (unsigned __int16)v62;
                if ( (unsigned __int16)v62 >= 0x61u )
                {
                  if ( (unsigned __int16)v62 <= 0x7Au )
                    v67 = (unsigned __int16)v62 - 32;
                  else
                    v67 = RtlUpcaseUnicodeChar(v62);
                }
                *(_QWORD *)&v68 = v62;
                *((_QWORD *)&v68 + 1) = v67;
                v62 = v68 >> 16;
                --v66;
              }
              while ( v66 );
            }
            else
            {
              v62 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            Buffer += 4;
            v60 -= 4;
            v61 = v62 + (v61 >> 1) + 3 * v61;
          }
          while ( v60 >= 4 );
          v52 = v163;
          v56 = (unsigned __int64 *)v169;
          v69 = v61 + HIDWORD(v61);
        }
        if ( v60 )
        {
          while ( 1 )
          {
            v70 = *Buffer++;
            --v60;
            v71 = (v69 >> 1) + 3 * v69;
            if ( v70 < 0x61 )
              goto LABEL_146;
            if ( v70 <= 0x7A )
              break;
            v69 = RtlUpcaseUnicodeChar(v70) + v71;
LABEL_147:
            if ( !v60 )
              goto LABEL_148;
          }
          v71 -= 32;
LABEL_146:
          v69 = v70 + v71;
          goto LABEL_147;
        }
LABEL_148:
        v72 = *(_BYTE *)(a11 + 30);
        *(_DWORD *)(a11 + 24) = v69;
        v73 = v69 % 0x25;
        *(_WORD *)(a11 + 28) = v73;
        v74 = &v56[(unsigned __int16)v73];
        if ( !v72 )
        {
          *(_DWORD *)(a11 + 32) = -1145368012;
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          v76 = v56 + 37;
          v77 = KeAbPreAcquire((ULONG_PTR)v76, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v76, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v76, v77, (ULONG_PTR)v76);
          if ( v77 )
            *(_BYTE *)(v77 + 26) |= 1u;
          v78 = v169;
          v79 = v169;
          *(_DWORD *)(a11 + 32) = -572714444;
          ObfReferenceObject(v79);
          v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
          v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
          *(_QWORD *)a11 = v78;
          *(_WORD *)(a11 + 30) = 1;
        }
        v80 = (__int64 *)*v74;
        if ( !*v74 )
        {
LABEL_183:
          if ( !v72 )
          {
            v92 = (signed __int64 *)((char *)v169 + 296);
            _m_prefetchw((char *)v169 + 296);
            v93 = *v92;
            if ( (*v92 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v94 = 0LL;
            else
              v94 = v93 - 16;
            if ( (v93 & 2) != 0 || (v98 = *v92, v98 != _InterlockedCompareExchange64(v92, v94, v93)) )
              ExfReleasePushLock(v92);
            KeAbPostRelease((ULONG_PTR)v92);
            v99 = *(void **)a11;
            *(_DWORD *)(a11 + 32) = -286387660;
            ObfDereferenceObject(v99);
            *(_QWORD *)a11 = 0LL;
            *(_WORD *)(a11 + 30) = 0;
            KeLeaveCriticalRegion();
            v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
            v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
          }
          v27 = 0LL;
LABEL_201:
          if ( !v189 )
            goto LABEL_253;
          v100 = v171;
          while ( 2 )
          {
            v101 = *((_DWORD *)v100 + 86);
            v102 = 0LL;
            if ( (v101 & 4) != 0 )
            {
              if ( (v101 & 0x10) == 0 || v157 )
              {
                v102 = (unsigned __int64 *)*((_QWORD *)v100 + 39);
                goto LABEL_222;
              }
            }
            else
            {
              CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
              v104 = KeGetCurrentThread();
              --v104->SpecialApcDisable;
              v105 = (unsigned __int64 *)(CurrentServerSiloGlobals + 120);
              v106 = KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL, 0);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)v105, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx(v105, v106, (ULONG_PTR)v105);
              if ( v106 )
                *(_BYTE *)(v106 + 26) |= 1u;
              v107 = *((_QWORD *)v100 + 38);
              if ( v107 )
                v102 = *(unsigned __int64 **)(v107 + 8);
              _m_prefetchw(v105);
              v108 = *v105;
              if ( (*v105 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v109 = 0LL;
              else
                v109 = v108 - 16;
              if ( (v108 & 2) != 0
                || (v110 = *v105, v110 != _InterlockedCompareExchange64((volatile signed __int64 *)v105, v109, v108)) )
              {
                ExfReleasePushLock(v105);
              }
              KeAbPostRelease((ULONG_PTR)v105);
              v111 = KeGetCurrentThread();
              v112 = v111->SpecialApcDisable + 1;
              v111->SpecialApcDisable = v112;
              if ( !v112 && ($2B8565053CDC740D4E4887693DD8AC9E *)v111->ApcState.ApcListHead[0].Flink != &v111->152 )
                KiCheckForKernelApcDelivery((__int64)v111);
LABEL_222:
              if ( v102 )
              {
                if ( *(_BYTE *)(a11 + 30) )
                {
                  ObfReferenceObject(v100);
                  ObpUnlockDirectory((__int64)v100, a11);
                  ObpLockDirectoryShared(a11, v102);
                  ObfDereferenceObject(v100);
                }
                v113 = *(_BYTE *)(a11 + 30);
                v114 = &v102[*(unsigned __int16 *)(a11 + 28)];
                if ( !v113 )
                {
                  *(_DWORD *)(a11 + 32) = -1145368012;
                  v115 = KeGetCurrentThread();
                  --v115->KernelApcDisable;
                  v116 = KeAbPreAcquire((ULONG_PTR)(v102 + 37), 0LL, 0);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v102 + 37, 17LL, 0LL) )
                    ExfAcquirePushLockSharedEx(v102 + 37, v116, (ULONG_PTR)(v102 + 37));
                  if ( v116 )
                    *(_BYTE *)(v116 + 26) |= 1u;
                  *(_DWORD *)(a11 + 32) = -572714444;
                  ObfReferenceObject(v102);
                  *(_QWORD *)a11 = v102;
                  *(_WORD *)(a11 + 30) = 1;
                }
                v117 = *v114;
                if ( *v114 )
                {
                  v118 = *(_DWORD *)(a11 + 24);
                  while ( *(_DWORD *)(v117 + 16) != v118
                       || !RtlEqualUnicodeString(
                             &String1,
                             (PCUNICODE_STRING)(*(_QWORD *)(v117 + 8)
                                              - 48LL
                                              - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(v117 + 8) - 48LL + 26) & 3]
                                              + 8),
                             (v191 & 0x40) != 0) )
                  {
                    v114 = (unsigned __int64 *)v117;
                    v117 = *(_QWORD *)v117;
                    if ( !v117 )
                      goto LABEL_236;
                  }
                  v27 = *(unsigned __int64 **)(v117 + 8);
                  ObfReferenceObject(v27);
                  if ( !v113 )
                  {
                    _m_prefetchw(v102 + 37);
                    v119 = v102[37];
                    if ( (v119 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v120 = 0LL;
                    else
                      v120 = v119 - 16;
                    if ( (v119 & 2) != 0
                      || (v121 = v102[37],
                          v121 != _InterlockedCompareExchange64((volatile signed __int64 *)v102 + 37, v120, v119)) )
                    {
                      ExfReleasePushLock(v102 + 37);
                    }
                    KeAbPostRelease((ULONG_PTR)(v102 + 37));
                    v122 = *(void **)a11;
                    *(_DWORD *)(a11 + 32) = -286387660;
                    ObfDereferenceObject(v122);
                    *(_QWORD *)a11 = 0LL;
                    *(_WORD *)(a11 + 30) = 0;
                    KeLeaveCriticalRegion();
                    v114 = 0LL;
                  }
                  v123 = *(void **)(a11 + 8);
                  if ( v123 )
                    ObfDereferenceObject(v123);
                  *(_QWORD *)(a11 + 8) = v27;
                  *(_QWORD *)(a11 + 16) = v114;
                  break;
                }
LABEL_236:
                if ( !v113 )
                  ObpUnlockDirectory((__int64)v102, a11);
                v27 = 0LL;
                v100 = v102;
LABEL_251:
                if ( !v102 )
                {
LABEL_252:
                  v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
                  v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
                  goto LABEL_253;
                }
                continue;
              }
            }
            break;
          }
          v100 = v102;
          if ( v27 )
            goto LABEL_252;
          goto LABEL_251;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v80 + 4) == *(_DWORD *)(a11 + 24) )
          {
            v81 = Length;
            v82 = v80[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v80[1] - 48 + 26) & 3];
            if ( Length == *(unsigned __int16 *)(v82 + 8) )
            {
              v83 = *(_QWORD **)(v82 + 16);
              v84 = String1.Buffer;
              v85 = (wchar_t *)((char *)String1.Buffer + Length);
              if ( (unsigned __int64)Length >= 8 )
              {
                do
                {
                  if ( *(_QWORD *)v84 != *v83 )
                    break;
                  v81 -= 8;
                  if ( !v81 )
                    goto LABEL_175;
                  v84 += 4;
                  ++v83;
                }
                while ( (unsigned __int64)v81 >= 8 );
              }
              if ( (v191 & 0x40) != 0 )
              {
                if ( v84 >= v85 )
                  goto LABEL_175;
                v86 = (char *)v83 - (char *)v84;
                while ( 1 )
                {
                  v87 = *v84;
                  v88 = *(wchar_t *)((char *)v84 + v86);
                  if ( v87 != v88 )
                  {
                    if ( v87 >= 0x61 )
                    {
                      if ( v87 > 0x7A )
                        v87 = (unsigned __int16)(v87
                                               + *(_WORD *)(v52
                                                          + 2LL
                                                          * ((v87 & 0xF)
                                                           + *(unsigned __int16 *)(v52
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v87 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(v52 + 2LL * BYTE1(v87)))))));
                      else
                        v87 -= 32;
                    }
                    if ( v88 >= 0x61 )
                    {
                      if ( v88 > 0x7A )
                        v88 = (unsigned __int16)(v88
                                               + *(_WORD *)(v52
                                                          + 2LL
                                                          * ((v88 & 0xF)
                                                           + *(unsigned __int16 *)(v52
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v88 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(v52 + 2LL * BYTE1(v88)))))));
                      else
                        v88 -= 32;
                    }
                    if ( v87 != v88 )
                      break;
                  }
                  if ( ++v84 >= v85 )
                    goto LABEL_175;
                }
              }
              else
              {
                if ( v84 >= v85 )
                {
LABEL_175:
                  v27 = (unsigned __int64 *)v80[1];
                  ObfReferenceObject(v27);
                  if ( !v72 )
                  {
                    v89 = (signed __int64 *)((char *)v169 + 296);
                    _m_prefetchw((char *)v169 + 296);
                    v90 = *v89;
                    if ( (*v89 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v91 = 0LL;
                    else
                      v91 = v90 - 16;
                    if ( (v90 & 2) != 0 || (v95 = *v89, v95 != _InterlockedCompareExchange64(v89, v91, v90)) )
                      ExfReleasePushLock(v89);
                    KeAbPostRelease((ULONG_PTR)v89);
                    v96 = *(void **)a11;
                    *(_DWORD *)(a11 + 32) = -286387660;
                    ObfDereferenceObject(v96);
                    *(_QWORD *)a11 = 0LL;
                    *(_WORD *)(a11 + 30) = 0;
                    KeLeaveCriticalRegion();
                    v74 = 0LL;
                  }
                  v97 = *(void **)(a11 + 8);
                  if ( v97 )
                    ObfDereferenceObject(v97);
                  v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
                  v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
                  *(_QWORD *)(a11 + 8) = v27;
                  *(_QWORD *)(a11 + 16) = v74;
                  if ( !v27 )
                    goto LABEL_201;
LABEL_253:
                  v159 = v27;
                  if ( v158 )
                  {
                    if ( !v27 )
                      goto LABEL_324;
                    v17 = a8;
                    if ( !v160.Length )
                    {
                      v124 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v27 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v27 - 48) >> 8)] + 144);
                      if ( !v124 || v124 != ObpParseSymbolicLinkEx && a8 )
                      {
                        v58 = ObReferenceObjectByPointer(v27, 0, a4, a5);
                        goto LABEL_117;
                      }
                    }
                    goto LABEL_100;
                  }
                  if ( v27 )
                  {
LABEL_116:
                    v58 = v162;
                    goto LABEL_117;
                  }
LABEL_324:
                  if ( v160.Length )
                  {
                    v58 = -1073741766;
                    goto LABEL_354;
                  }
                  if ( !a8 )
                  {
                    v58 = -1073741772;
                    goto LABEL_354;
                  }
                  v146 = v169;
                  v147 = 4;
                  v148 = v164;
                  if ( a4 == ObpDirectoryObjectType )
                    v147 = 8;
                  LOBYTE(PreviouslyGrantedAccess) = 0;
                  if ( !ObCheckCreateObjectAccess(
                          (__int64)v169,
                          v147,
                          a10,
                          (__int64)&String1,
                          PreviouslyGrantedAccess,
                          v164,
                          &v161) )
                  {
                    v58 = v161;
                    if ( v161 >= 0 )
                      v58 = -1073741772;
                    goto LABEL_354;
                  }
                  v149 = v146[80];
                  if ( v149 == -1
                    || a4 != MmSectionObjectType && a4 != ObpSymbolicLinkObjectType
                    || v149 == (unsigned int)PsGetCurrentProcessSessionId()
                    || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v148)
                    || (unsigned __int8)ObpIsUnsecureName(&String1) )
                  {
                    v150 = String1.Length;
                    PoolWithTag = ExAllocatePoolWithTag(PagedPool, String1.Length, 0x6D4E624Fu);
                    if ( PoolWithTag )
                    {
                      if ( (unsigned __int8)ObpInsertDirectoryEntry(v146, a8) )
                      {
                        memmove(PoolWithTag, String1.Buffer, v150);
                        v152 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                        v153 = (void *)*((_QWORD *)v152 + 2);
                        if ( v153 )
                          ExFreePoolWithTag(v153, 0);
                        v154 = String1.Length;
                        v58 = 0;
                        *((_WORD *)v152 + 4) = String1.Length;
                        *((_WORD *)v152 + 5) = v154;
                        *((_QWORD *)v152 + 2) = PoolWithTag;
                        v159 = a8;
                        goto LABEL_358;
                      }
                      ExFreePoolWithTag(PoolWithTag, 0);
                    }
                    v58 = -1073741670;
                    goto LABEL_354;
                  }
LABEL_353:
                  v58 = -1073741790;
                  goto LABEL_354;
                }
                while ( *v84 == *(unsigned __int16 *)v83 )
                {
                  ++v84;
                  v83 = (_QWORD *)((char *)v83 + 2);
                  if ( v84 >= v85 )
                    goto LABEL_175;
                }
              }
            }
          }
          v74 = (unsigned __int64 *)v80;
          v80 = (__int64 *)*v80;
          if ( !v80 )
            goto LABEL_183;
        }
      }
LABEL_122:
      ObpLockDirectoryExclusive(a11, (__int64)v27);
      v52 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
      v163 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
      goto LABEL_123;
    }
    if ( ParseProcedure == ObpParseSymbolicLinkEx )
    {
      v125 = a11;
    }
    else
    {
      if ( v17 )
      {
LABEL_346:
        v58 = -1073741788;
        goto LABEL_354;
      }
      ObfReferenceObject(v27);
      v125 = a11;
      if ( *(_BYTE *)(a11 + 30) )
        ObpUnlockDirectory(*(_QWORD *)a11, a11);
      v126 = *(void **)(a11 + 8);
      if ( v126 )
      {
        ObfDereferenceObject(v126);
        *(_QWORD *)(a11 + 8) = 0LL;
      }
      v27 = (unsigned __int64 *)v159;
    }
    if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v53 + 24) ^ (unsigned __int64)BYTE1(v53)]
                   + 67) & 1) != 0 )
      v127 = ((__int64 (__fastcall *)(unsigned __int64 *, struct _OBJECT_TYPE *, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, UNICODE_STRING *, __int64, __int64, __int16 *, PVOID *))ParseProcedure)(
               v27,
               a4,
               a10,
               v164,
               v191,
               a2,
               &v160,
               a6,
               a7,
               v173,
               &v159);
    else
      v127 = ((__int64 (__fastcall *)(unsigned __int64 *, struct _OBJECT_TYPE *, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, UNICODE_STRING *, __int64, __int64, PVOID *))ParseProcedure)(
               v27,
               a4,
               a10,
               v164,
               v191,
               a2,
               &v160,
               a6,
               a7,
               &v159);
    v161 = v127;
    v58 = v127;
    if ( ParseProcedure != ObpParseSymbolicLinkEx )
      ObfDereferenceObject(v53 + 6);
    if ( (a10->OriginalDesiredAccess & v174) != a10->OriginalDesiredAccess )
      goto LABEL_353;
    if ( v58 != 260 && v58 != 872 )
    {
      if ( v58 < 0 )
        goto LABEL_354;
      if ( !v159 )
      {
LABEL_349:
        v58 = -1073741772;
        goto LABEL_354;
      }
LABEL_117:
      if ( v58 < 0 )
      {
LABEL_354:
        if ( *(_BYTE *)(a11 + 30) )
          ObpUnlockDirectory(*(_QWORD *)a11, a11);
        v155 = *(void **)(a11 + 8);
        if ( v155 )
        {
          ObfDereferenceObject(v155);
          *(_QWORD *)(a11 + 8) = 0LL;
        }
      }
LABEL_358:
      if ( P )
        ObfDereferenceDeviceMap(P);
      if ( Object )
        ObfDereferenceObject(Object);
      SeClearLearningModeObjectInformation();
      if ( v58 < 0 )
      {
        result = v58;
        *a13 = 0LL;
      }
      else
      {
        if ( a12 )
        {
          if ( v174 != -1 )
            *a12 = v174;
        }
        *a13 = v159;
        return v58;
      }
      return result;
    }
    v14 = v191;
    if ( (v191 & 0x1000) != 0 && v58 != 872 )
    {
      v58 = -1073740533;
      goto LABEL_354;
    }
    if ( !--v170 )
      goto LABEL_349;
    v28 = a2;
    if ( !a2->Length || *a2->Buffer != 92 )
    {
LABEL_352:
      v58 = -1073741773;
      goto LABEL_354;
    }
    ObfDereferenceObject(Object);
    if ( v58 == 872 )
    {
      v27 = (unsigned __int64 *)ObpRootDirectoryObject;
    }
    else
    {
      v128 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v180);
      v27 = v180;
      if ( v128 < 0 )
        v27 = (unsigned __int64 *)ObpRootDirectoryObject;
      v180 = v27;
    }
    Object = v27;
    ObfReferenceObject(v27);
    v129 = P;
    if ( P )
    {
      v130 = *((_DWORD *)P + 6);
      if ( v130 == 1 )
      {
LABEL_290:
        ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)v129 + 8));
        v133 = KeGetCurrentThread();
        --v133->SpecialApcDisable;
        v134 = (unsigned __int64 *)(ServerSiloGlobals + 120);
        v135 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(ServerSiloGlobals + 120), 0LL, 0);
        v136 = v135;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v134, 0LL) )
          ExfAcquirePushLockExclusiveEx(v134, v135, (ULONG_PTR)v134);
        if ( v136 )
          v136[26] |= 1u;
        v130 = _InterlockedExchangeAdd((volatile signed __int32 *)v129 + 6, 0xFFFFFFFF);
        if ( v130 == 1 )
        {
          *(_QWORD *)(*(_QWORD *)v129 + 304LL) = 0LL;
          _m_prefetchw(v134);
          v137 = *v134;
          if ( (*v134 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v138 = 0LL;
          else
            v138 = v137 - 16;
          if ( (v137 & 2) != 0
            || (v139 = *v134, v139 != _InterlockedCompareExchange64((volatile signed __int64 *)v134, v138, v137)) )
          {
            ExfReleasePushLock(v134);
          }
          KeAbPostRelease((ULONG_PTR)v134);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v140 = (void *)*((_QWORD *)v129 + 8);
          if ( v140 )
            ObfDereferenceObjectWithTag(v140, 0x6D44624Fu);
          ZwClose(*((HANDLE *)v129 + 2));
          ObfDereferenceObject(*(PVOID *)v129);
          ExFreePoolWithTag(v129, 0x6D44624Fu);
LABEL_312:
          v27 = (unsigned __int64 *)Object;
          v14 = v191;
          P = 0LL;
          goto LABEL_313;
        }
        _m_prefetchw(v134);
        v141 = *v134;
        if ( (*v134 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v142 = 0LL;
        else
          v142 = v141 - 16;
        if ( (v141 & 2) != 0
          || (v143 = *v134, v143 != _InterlockedCompareExchange64((volatile signed __int64 *)v134, v142, v141)) )
        {
          ExfReleasePushLock(v134);
        }
        KeAbPostRelease((ULONG_PTR)v134);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      else
      {
        while ( 1 )
        {
          v131 = _InterlockedCompareExchange((volatile signed __int32 *)v129 + 6, v130 - 1, v130);
          v38 = v130 == v131;
          v130 = v131;
          if ( v38 )
            break;
          if ( v131 == 1 )
            goto LABEL_290;
        }
      }
      if ( v130 <= 0 )
        __fastfail(0xEu);
      goto LABEL_312;
    }
LABEL_313:
    if ( *(_BYTE *)(v125 + 30) )
      ObpUnlockDirectory(*(_QWORD *)v125, v125);
    v144 = *(void **)(v125 + 8);
    if ( v144 )
    {
      ObfDereferenceObject(v144);
      *(_QWORD *)(v125 + 8) = 0LL;
    }
LABEL_51:
    v31 = v28->Buffer;
    if ( ((unsigned __int8)v31 & 7) != 0 )
      goto LABEL_97;
    v32 = (v14 & 0x800) != 0;
    if ( v28->Length >= 8u && *(_QWORD *)v31 == ObpDosDevicesShortNamePrefix )
    {
      if ( a4 == (struct _OBJECT_TYPE *)IoFileObjectType )
        v32 |= ObpUseSystemDeviceMap(v28);
      v33 = KeGetCurrentThread();
      v34 = 0LL;
      P = 0LL;
      v35 = 0LL;
      Process = (__int64)v33->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v38 = ProcessServerSilo == PsGetCurrentServerSilo();
      v39 = !v38;
      if ( (*(_DWORD *)(&v33[1].SwapListEntry + 1) & 8) == 0 || v32 )
      {
        if ( !v38 )
          goto LABEL_68;
      }
      else
      {
        if ( !v38 )
        {
LABEL_68:
          v41 = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
          v42 = KeGetCurrentThread();
          --v42->SpecialApcDisable;
          v43 = KeAbPreAcquire((ULONG_PTR)(v41 + 15), 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v41 + 15, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v41 + 15, v43, (ULONG_PTR)(v41 + 15));
          if ( v43 )
            *(_BYTE *)(v43 + 26) |= 1u;
          if ( v39 )
            v34 = (volatile signed __int32 *)*v41;
          else
            v34 = *(volatile signed __int32 **)(Process + 1072);
          P = (PVOID)v34;
          if ( v34 )
            _InterlockedIncrement(v34 + 6);
          _m_prefetchw(v41 + 15);
          v44 = v41[15];
          if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v45 = 0LL;
          else
            v45 = v44 - 16;
          if ( (v44 & 2) != 0
            || (v46 = v41[15], v46 != _InterlockedCompareExchange64((volatile signed __int64 *)v41 + 15, v45, v44)) )
          {
            ExfReleasePushLock(v41 + 15);
          }
          KeAbPostRelease((ULONG_PTR)(v41 + 15));
          v47 = KeGetCurrentThread();
          v48 = v47->SpecialApcDisable + 1;
          v47->SpecialApcDisable = v48;
          if ( !v48 && ($2B8565053CDC740D4E4887693DD8AC9E *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
            KiCheckForKernelApcDelivery((__int64)v47);
          goto LABEL_86;
        }
        v40 = PsReferenceImpersonationTokenEx((__int64)v33, 1, v168, &v167, &v181, 0LL);
        v35 = v40;
        if ( v40 )
        {
          if ( *((_QWORD *)v40 + 3) == 999LL )
          {
            v39 = 1;
            goto LABEL_68;
          }
          if ( (int)SeGetTokenDeviceMap(v40, &v183) >= 0 )
          {
            v34 = v183;
            P = (PVOID)v183;
            if ( v183 )
            {
              _InterlockedIncrement(v183 + 6);
              goto LABEL_86;
            }
          }
        }
      }
      if ( *(_QWORD *)(Process + 1072) || (int)ObSetCurrentProcessDeviceMap() >= 0 )
        goto LABEL_68;
LABEL_86:
      if ( v35 )
        ObfDereferenceObject(v35);
      if ( v34 && *(_QWORD *)v34 )
      {
        v49 = *(__m128i *)a2;
        *(_QWORD *)&v160.Length = *(_QWORD *)&a2->Length;
        v160.Buffer = (wchar_t *)(_mm_srli_si128(v49, 8).m128i_u64[0] + 8);
        v160.Length -= 8;
        v27 = *(unsigned __int64 **)v34;
LABEL_98:
        v17 = a8;
        v159 = v27;
        continue;
      }
      v27 = (unsigned __int64 *)Object;
      v28 = a2;
LABEL_97:
      v160 = *v28;
      goto LABEL_98;
    }
    break;
  }
  if ( v28->Length != 6 )
    goto LABEL_97;
  if ( *(_DWORD *)v31 != *(_DWORD *)L"\\??" )
    goto LABEL_97;
  if ( v31[2] != 63 )
    goto LABEL_97;
  v50 = (PVOID *)ObpReferenceDeviceMap(v32);
  P = v50;
  v51 = v50;
  if ( !v50 || !*v50 )
    goto LABEL_97;
  v145 = ObReferenceObjectByPointer(*v50, 0, a4, a5);
  if ( v145 >= 0 )
  {
    if ( a12 && v174 != -1 )
      *a12 = v174;
    *a13 = *v51;
  }
  ObfDereferenceDeviceMap(v51);
  ObfDereferenceObject(v27);
  SeClearLearningModeObjectInformation();
  return v145;
}
