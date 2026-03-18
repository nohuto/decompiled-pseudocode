/*
 * XREFs of ObpLookupObjectName @ 0x140491C10
 * Callers:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E550 (SeClearLearningModeObjectInformation.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpIsUnsecureName @ 0x1404091F4 (ObpIsUnsecureName.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PsReferenceImpersonationTokenEx @ 0x140486000 (PsReferenceImpersonationTokenEx.c)
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x14053A340 (ObpInsertDirectoryEntry.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 *     ObpUseSystemDeviceMap @ 0x1406ABC54 (ObpUseSystemDeviceMap.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        HANDLE Handle,
        __int64 a2,
        int a3,
        struct _OBJECT_TYPE *a4,
        KPROCESSOR_MODE a5,
        void *a6,
        _SECURITY_QUALITY_OF_SERVICE *a7,
        char *a8,
        _ACCESS_STATE *a9,
        __int64 a10,
        PVOID *a11)
{
  __int64 v11; // r15
  volatile signed __int32 *v12; // rsi
  PVOID *v14; // rcx
  bool v15; // zf
  KPROCESSOR_MODE v16; // cl
  unsigned __int8 v17; // r12
  bool IsSandboxedToken; // al
  NTSTATUS result; // eax
  PVOID v20; // r14
  char *v21; // rdx
  __m128i v22; // xmm0
  char *v23; // r10
  NTSTATUS v24; // ebx
  PVOID v25; // rax
  NTSTATUS v26; // ebx
  __m128i *v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int8 v30; // bl
  struct _KTHREAD *v31; // rcx
  void *v32; // r14
  char v33; // si
  void *v34; // rax
  volatile signed __int32 *v35; // rsi
  struct _KTHREAD *v36; // rax
  unsigned __int64 *v37; // rbx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // r9
  signed __int64 v42; // rax
  signed __int64 v43; // rcx
  unsigned __int64 v44; // rtt
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  __m128i v47; // xmm0
  _WORD *v48; // r8
  __int64 v49; // rdx
  PVOID *v50; // rax
  PVOID *v51; // rsi
  __m128i v52; // xmm0
  char *v53; // rdi
  struct _OBJECT_TYPE *v54; // rax
  int (__fastcall *ParseProcedure)(void *, void *, _ACCESS_STATE *, char, unsigned int, _UNICODE_STRING *, _UNICODE_STRING *, void *, _SECURITY_QUALITY_OF_SERVICE *, void **); // rsi
  unsigned __int64 *v56; // rsi
  __int64 v57; // r9
  char *v58; // r14
  ULONG_PTR v59; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rbx
  struct _KTHREAD *v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r9
  NTSTATUS (__fastcall *v67)(unsigned __int16 *, POBJECT_TYPE, __int64, unsigned __int8, int, __int64, unsigned __int16 *, int, int, _QWORD *); // rcx
  __int64 v68; // rdx
  __int64 *v69; // rbx
  signed __int64 v70; // rax
  signed __int64 v71; // rcx
  __int64 v72; // rtt
  void *v73; // rcx
  struct _KTHREAD *v74; // rcx
  __int16 v75; // ax
  void *v76; // rcx
  NTSTATUS v77; // ebx
  PVOID v78; // r14
  __int64 v79; // r9
  __int64 v80; // rdx
  signed __int32 v81; // ebx
  signed __int32 v82; // eax
  struct _KTHREAD *v83; // rax
  unsigned __int64 *v84; // rdi
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rbx
  signed __int64 v90; // rax
  signed __int64 v91; // rcx
  unsigned __int64 v92; // rtt
  struct _KTHREAD *v93; // rcx
  __int16 v94; // ax
  signed __int64 v95; // rax
  signed __int64 v96; // rcx
  unsigned __int64 v97; // rtt
  struct _KTHREAD *v98; // rcx
  __int16 v99; // ax
  __int64 *v100; // rbx
  signed __int64 v101; // rax
  signed __int64 v102; // rcx
  __int64 v103; // rtt
  void *v104; // rcx
  struct _KTHREAD *v105; // rcx
  __int16 v106; // ax
  void *v107; // rcx
  NTSTATUS v108; // ebx
  __int64 v109; // rdx
  PVOID v110; // rdi
  __int64 *v111; // rbx
  signed __int64 v112; // rax
  signed __int64 v113; // rcx
  __int64 v114; // rtt
  void *v115; // rcx
  struct _KTHREAD *v116; // rcx
  __int16 v117; // ax
  void *v118; // rcx
  int v119; // edi
  char *v120; // rbx
  unsigned int v121; // r14d
  PVOID PoolWithTag; // rdi
  char *v123; // rbx
  void *v124; // rcx
  __int16 v125; // ax
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  int v128; // [rsp+50h] [rbp-B0h] BYREF
  char v129; // [rsp+54h] [rbp-ACh]
  PVOID v130; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v131; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  __m128i v133; // [rsp+70h] [rbp-90h] BYREF
  char v134[4]; // [rsp+80h] [rbp-80h] BYREF
  int v135; // [rsp+84h] [rbp-7Ch]
  PVOID v136; // [rsp+88h] [rbp-78h]
  void *Src[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v138; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v139; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v140; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v141; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v142; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v143; // [rsp+C8h] [rbp-38h] BYREF
  int v144; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v145; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v146[16]; // [rsp+E0h] [rbp-20h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+F0h] [rbp-10h]
  __int64 v148; // [rsp+F8h] [rbp-8h]
  HANDLE v149; // [rsp+100h] [rbp+0h]
  char v150; // [rsp+170h] [rbp+70h]
  int v152; // [rsp+180h] [rbp+80h]

  v152 = a3;
  v11 = a10;
  v12 = 0LL;
  v136 = 0LL;
  v14 = a11;
  P = 0LL;
  *(_WORD *)(a10 + 30) = 0;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)v11 = 0LL;
  *(_DWORD *)(v11 + 32) = -60876;
  v15 = ObpCaseInsensitive == 0;
  v135 = 64;
  v150 = 0;
  v129 = 0;
  *v14 = 0LL;
  v128 = 0;
  v130 = 0LL;
  if ( !v15 && (a4->TypeInfo.ObjectTypeFlags & 1) != 0 )
  {
    a3 |= 0x40u;
    v152 = a3;
  }
  v16 = a5;
  v17 = a5;
  if ( (a3 & 0x400) != 0 )
    v17 = 1;
  if ( !a8 )
  {
    v129 = 1;
    IsSandboxedToken = RtlIsSandboxedToken(&a9->SubjectSecurityContext, v17);
    v16 = a5;
    v150 = IsSandboxedToken;
  }
  if ( !Handle )
  {
    if ( PsGetSiloObject((void *)0xFFFFFFFFFFFFFFFFLL, (__int64)&ObpDirectoryObjectType, (__int64)&v141, (__int64)a4) >= 0 )
    {
      v20 = v141;
      v131 = v141;
    }
    else
    {
      v20 = ObpRootDirectoryObject;
      v131 = ObpRootDirectoryObject;
      v141 = ObpRootDirectoryObject;
      if ( ObpRootDirectoryObject )
        ObfReferenceObject(ObpRootDirectoryObject);
    }
    if ( *(_WORD *)a2 && **(_WORD **)(a2 + 8) == 92 )
    {
      if ( *(_WORD *)a2 != 2 )
      {
        v27 = (__m128i *)a2;
        p_Name = &a4->Name;
        v148 = a2;
        v149 = 0LL;
        SeSetLearningModeObjectInformation((__int64)v146);
        goto LABEL_34;
      }
      if ( v20 )
      {
        v26 = ObReferenceObjectByPointer(v20, 0, a4, a5);
        if ( v26 >= 0 )
          *a11 = v20;
        ObfDereferenceObject(v20);
        return v26;
      }
      else if ( a8 )
      {
        result = ObReferenceObjectByPointer(a8, 0, a4, a5);
        if ( result >= 0 )
          *a11 = a8;
      }
      else
      {
        return -1073741811;
      }
      return result;
    }
    if ( !v20 )
      return -1073741765;
LABEL_257:
    ObfDereferenceObject(v20);
    return -1073741765;
  }
  result = ObReferenceObjectByHandle(Handle, 0, 0LL, v16, &v145, 0LL);
  v20 = v145;
  v131 = v145;
  v128 = result;
  if ( result < 0 )
    return result;
  v21 = (char *)v145 - 48;
  if ( !*(_WORD *)a2 )
  {
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v21[24] ^ (unsigned __int64)BYTE1(v21)] == ObpDirectoryObjectType )
    {
      v24 = ObReferenceObjectByPointer(v145, 0, a4, a5);
      v25 = v130;
      if ( v24 >= 0 )
        v25 = v20;
      v130 = v25;
      ObfDereferenceObject(v20);
      *a11 = v130;
      return v24;
    }
    goto LABEL_13;
  }
  if ( **(_WORD **)(a2 + 8) == 92
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v21[24] ^ (unsigned __int64)BYTE1(v21)] != IoFileObjectType )
  {
    goto LABEL_257;
  }
LABEL_13:
  v22 = *(__m128i *)a2;
  v130 = v145;
  v133 = v22;
  p_Name = &a4->Name;
  v148 = a2;
  v149 = Handle;
  SeSetLearningModeObjectInformation((__int64)v146);
  v23 = (char *)v130;
  while ( 2 )
  {
    v49 = v133.m128i_u16[0];
    v48 = (_WORD *)v133.m128i_i64[1];
    while ( 1 )
    {
      while ( 1 )
      {
        v53 = v23 - 48;
        v54 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v23 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8)];
        ParseProcedure = v54->TypeInfo.ParseProcedure;
        if ( ParseProcedure )
          break;
        if ( v54 != ObpDirectoryObjectType )
          goto LABEL_241;
        v56 = (unsigned __int64 *)v23;
        if ( (_WORD)v49 && *v48 == 92 )
        {
          ++v48;
          LOWORD(v49) = v49 - 2;
          v133.m128i_i64[1] = (__int64)v48;
          v133.m128i_i16[0] = v49;
        }
        *(__m128i *)Src = v133;
        if ( (_WORD)v49 )
        {
          do
          {
            if ( *v48 == 92 )
              break;
            ++v48;
            v15 = (_WORD)v49 == 2;
            LOWORD(v49) = v49 - 2;
            v133.m128i_i64[1] = (__int64)v48;
            v133.m128i_i16[0] = v49;
          }
          while ( !v15 );
        }
        LOWORD(Src[0]) -= v49;
        if ( !LOWORD(Src[0]) )
          goto LABEL_240;
        if ( !(_WORD)v49 )
          goto LABEL_96;
        if ( v17 && (a9->Flags & 1) == 0 )
        {
          if ( !(unsigned __int8)ObpCheckTraverseAccess(v23, v49, a9) )
            goto LABEL_210;
          LOWORD(v49) = v133.m128i_i16[0];
        }
        if ( (_WORD)v49 )
        {
          v58 = a8;
        }
        else
        {
LABEL_96:
          ObfReferenceObject(v56);
          v58 = a8;
          v59 = (ULONG_PTR)(v56 + 37);
          v136 = v56;
          if ( a8 )
          {
            *(_DWORD *)(v11 + 32) = -1431694796;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v61 = KeAbPreAcquire(v59, 0LL, 0LL, v57);
            v63 = v61;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v56 + 74, 0LL) )
              ExfAcquirePushLockExclusiveEx(v56 + 37, v61, (ULONG_PTR)(v56 + 37), v62);
            if ( v63 )
              *(_BYTE *)(v63 + 26) |= 1u;
            *(_DWORD *)(v11 + 32) = -859041228;
            ObfReferenceObject(v56);
            *(_QWORD *)v11 = v56;
            *(_WORD *)(v11 + 30) = 257;
          }
          else
          {
            *(_DWORD *)(v11 + 32) = -1145368012;
            v64 = KeGetCurrentThread();
            --v64->KernelApcDisable;
            v65 = KeAbPreAcquire(v59, 0LL, 0LL, v57);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v56 + 37, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v56 + 37, v65, (ULONG_PTR)(v56 + 37), v66);
            if ( v65 )
              *(_BYTE *)(v65 + 26) |= 1u;
            *(_DWORD *)(v11 + 32) = -572714444;
            ObfReferenceObject(v56);
            *(_QWORD *)v11 = v56;
            *(_WORD *)(v11 + 30) = 1;
          }
        }
        v130 = (PVOID)ObpLookupDirectoryEntryEx(v56, v150, v11);
        v23 = (char *)v130;
        if ( !v130 )
        {
          if ( v133.m128i_i16[0] )
          {
            v77 = -1073741766;
            goto LABEL_212;
          }
          if ( v58 )
          {
            v109 = 4LL;
            if ( a4 == ObpDirectoryObjectType )
              v109 = 8LL;
            LOBYTE(HandleInformation) = v17;
            LOBYTE(Object) = 0;
            if ( !(unsigned __int8)ObCheckCreateObjectAccess(v56, v109, a9, Src, Object, HandleInformation, &v128) )
            {
LABEL_210:
              v77 = v128;
              if ( v128 >= 0 )
                goto LABEL_211;
LABEL_213:
              v110 = 0LL;
              if ( *(_BYTE *)(v11 + 30) )
              {
                v111 = (__int64 *)(*(_QWORD *)v11 + 296LL);
                _m_prefetchw(v111);
                v112 = *v111;
                v113 = *v111 - 16;
                if ( (*v111 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v113 = 0LL;
                if ( (v112 & 2) != 0 || (v114 = *v111, v114 != _InterlockedCompareExchange64(v111, v113, v112)) )
                  ExfReleasePushLock(v111, v49);
                KeAbPostRelease((ULONG_PTR)v111);
                v115 = *(void **)v11;
                *(_DWORD *)(v11 + 32) = -286387660;
                ObfDereferenceObject(v115);
                *(_QWORD *)v11 = 0LL;
                *(_WORD *)(v11 + 30) = 0;
                v116 = KeGetCurrentThread();
                v117 = v116->KernelApcDisable + 1;
                v116->KernelApcDisable = v117;
                if ( !v117
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)v116->ApcState.ApcListHead[0].Flink != &v116->152
                  && !v116->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
                v77 = v128;
              }
              v118 = *(void **)(v11 + 8);
              if ( v118 )
              {
                ObfDereferenceObject(v118);
                *(_QWORD *)(v11 + 8) = 0LL;
              }
LABEL_246:
              if ( v136 )
                ObfDereferenceObject(v136);
              if ( P )
                ObfDereferenceDeviceMap(P);
              if ( v131 )
                ObfDereferenceObject(v131);
              SeClearLearningModeObjectInformation();
              if ( v77 >= 0 )
                v110 = v130;
              *a11 = v110;
              return v77;
            }
            v119 = *((_DWORD *)v56 + 80);
            v120 = v58 - 48;
            if ( v119 == -1
              || a4 != MmSectionObjectType && a4 != ObpSymbolicLinkObjectType
              || v119 == (unsigned int)PsGetCurrentProcessSessionId()
              || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v17)
              || ObpIsUnsecureName((PCUNICODE_STRING)Src, (v152 & 0x40) != 0) )
            {
              v121 = LOWORD(Src[0]);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
              if ( PoolWithTag )
              {
                if ( (unsigned __int8)ObpInsertDirectoryEntry(v56, a8) )
                {
                  memmove(PoolWithTag, Src[1], v121);
                  v123 = &v120[-ObpInfoMaskToOffset[v120[26] & 3]];
                  v124 = (void *)*((_QWORD *)v123 + 2);
                  if ( v124 )
                    ExFreePoolWithTag(v124, 0);
                  v125 = (__int16)Src[0];
                  *((_QWORD *)v123 + 2) = PoolWithTag;
                  v110 = 0LL;
                  *((_WORD *)v123 + 4) = v125;
                  *((_WORD *)v123 + 5) = v125;
                  v77 = 0;
                  v130 = a8;
                  goto LABEL_246;
                }
                ExFreePoolWithTag(PoolWithTag, 0);
              }
              v77 = -1073741670;
            }
            else
            {
              v77 = -1073741790;
            }
LABEL_212:
            v128 = v77;
            goto LABEL_213;
          }
LABEL_211:
          v77 = -1073741772;
          goto LABEL_212;
        }
        v49 = v133.m128i_u16[0];
        if ( v133.m128i_i16[0] )
        {
          v48 = (_WORD *)v133.m128i_i64[1];
        }
        else
        {
          if ( v17 && (a9->Flags & 1) == 0 && !(unsigned __int8)ObpCheckTraverseAccess(v56, v133.m128i_u16[0], a9) )
            goto LABEL_210;
          ObfDereferenceObject(v136);
          v23 = (char *)v130;
          v136 = 0LL;
          v67 = *(NTSTATUS (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, __int64, unsigned __int8, int, __int64, unsigned __int16 *, int, int, _QWORD *))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v130 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v130 - 48) >> 8)] + 144);
          if ( !v67 )
            goto LABEL_203;
          if ( v67 == ObpParseSymbolicLink )
          {
            v48 = (_WORD *)v133.m128i_i64[1];
            v49 = v133.m128i_u16[0];
          }
          else
          {
            if ( v58 )
            {
LABEL_203:
              v77 = ObReferenceObjectByPointer(v130, 0, a4, a5);
              v128 = v77;
              goto LABEL_244;
            }
            v48 = (_WORD *)v133.m128i_i64[1];
            v49 = v133.m128i_u16[0];
          }
        }
      }
      if ( (char *)ParseProcedure != (char *)ObpParseSymbolicLink )
      {
        if ( a8 )
        {
LABEL_241:
          v77 = -1073741788;
          goto LABEL_212;
        }
        ObfReferenceObject(v23);
        if ( *(_BYTE *)(v11 + 30) )
        {
          v69 = (__int64 *)(*(_QWORD *)v11 + 296LL);
          _m_prefetchw(v69);
          v70 = *v69;
          if ( (*v69 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v71 = 0LL;
          else
            v71 = v70 - 16;
          if ( (v70 & 2) != 0 || (v72 = *v69, v72 != _InterlockedCompareExchange64(v69, v71, v70)) )
            ExfReleasePushLock(v69, v68);
          KeAbPostRelease((ULONG_PTR)v69);
          v73 = *(void **)v11;
          *(_DWORD *)(v11 + 32) = -286387660;
          ObfDereferenceObject(v73);
          *(_QWORD *)v11 = 0LL;
          *(_WORD *)(v11 + 30) = 0;
          v74 = KeGetCurrentThread();
          v75 = v74->KernelApcDisable + 1;
          v74->KernelApcDisable = v75;
          if ( !v75
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v74->ApcState.ApcListHead[0].Flink != &v74->152
            && !v74->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v76 = *(void **)(v11 + 8);
        if ( v76 )
        {
          ObfDereferenceObject(v76);
          *(_QWORD *)(v11 + 8) = 0LL;
        }
        v23 = (char *)v130;
      }
      v128 = ParseProcedure(v23, a4, a9, v17, v152, (_UNICODE_STRING *)a2, (_UNICODE_STRING *)&v133, a6, a7, &v130);
      v77 = v128;
      if ( (char *)ParseProcedure != (char *)ObpParseSymbolicLink )
        ObfDereferenceObject(v53 + 48);
      if ( v128 == 260 )
      {
        v78 = v131;
      }
      else
      {
        if ( v128 != 872 )
        {
          if ( v128 < 0 )
            goto LABEL_213;
          if ( !v130 )
            goto LABEL_211;
LABEL_244:
          if ( v77 < 0 )
            goto LABEL_213;
          v110 = 0LL;
          goto LABEL_246;
        }
        v78 = v131;
        if ( v131 != ObpRootDirectoryObject )
        {
          ObfDereferenceObject(v131);
          v78 = ObpRootDirectoryObject;
          v131 = ObpRootDirectoryObject;
          ObfReferenceObject(ObpRootDirectoryObject);
        }
      }
      if ( !--v135 )
        goto LABEL_211;
      if ( !*(_WORD *)a2 || **(_WORD **)(a2 + 8) != 92 )
      {
LABEL_240:
        v77 = -1073741773;
        goto LABEL_212;
      }
      ObfDereferenceObject(v78);
      if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v53[24] ^ (unsigned __int64)BYTE1(v53)] != ObpSymbolicLinkObjectType )
      {
        if ( PsGetSiloObject((void *)0xFFFFFFFFFFFFFFFFLL, (__int64)&ObpDirectoryObjectType, (__int64)&v139, v79) < 0 )
        {
          v20 = ObpRootDirectoryObject;
          v139 = ObpRootDirectoryObject;
LABEL_153:
          v131 = v20;
          if ( v20 )
            ObfReferenceObject(v20);
          goto LABEL_157;
        }
        v20 = v139;
LABEL_156:
        v131 = v20;
        goto LABEL_157;
      }
      if ( (*((_DWORD *)v130 + 7) & 1) == 0 )
      {
        if ( PsGetSiloObject((void *)0xFFFFFFFFFFFFFFFFLL, (__int64)&ObpDirectoryObjectType, (__int64)&v142, v79) < 0 )
        {
          v20 = ObpRootDirectoryObject;
          v142 = ObpRootDirectoryObject;
          goto LABEL_153;
        }
        v20 = v142;
        goto LABEL_156;
      }
      v20 = ObpRootDirectoryObject;
      v131 = ObpRootDirectoryObject;
      ObfReferenceObject(ObpRootDirectoryObject);
LABEL_157:
      v12 = (volatile signed __int32 *)P;
      if ( P )
      {
        v81 = *((_DWORD *)P + 6);
        if ( v81 == 1 )
        {
LABEL_161:
          PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v140, v28);
          v83 = KeGetCurrentThread();
          --v83->SpecialApcDisable;
          v84 = (unsigned __int64 *)(v140 + 120);
          v86 = KeAbPreAcquire(v140 + 120, 0LL, 0LL, v85);
          v89 = v86;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v84, 0LL) )
            ExfAcquirePushLockExclusiveEx(v84, v86, (ULONG_PTR)v84, v88);
          if ( v89 )
            *(_BYTE *)(v89 + 26) |= 1u;
          v81 = _InterlockedExchangeAdd(v12 + 6, 0xFFFFFFFF);
          if ( v81 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)v12 + 304LL) = 0LL;
            _m_prefetchw(v84);
            v90 = *v84;
            v91 = *v84 - 16;
            if ( (*v84 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v91 = 0LL;
            if ( (v90 & 2) != 0
              || (v92 = *v84, v92 != _InterlockedCompareExchange64((volatile signed __int64 *)v84, v91, v90)) )
            {
              ExfReleasePushLock(v84, 0LL);
            }
            KeAbPostRelease((ULONG_PTR)v84);
            v93 = KeGetCurrentThread();
            v94 = v93->SpecialApcDisable + 1;
            v93->SpecialApcDisable = v94;
            if ( !v94 && ($CD287064E7C9F7953DE243E927CFCB99 *)v93->ApcState.ApcListHead[0].Flink != &v93->152 )
              KiCheckForKernelApcDelivery();
            ZwClose(*((HANDLE *)v12 + 2));
            ObfDereferenceObject(*(PVOID *)v12);
            ExFreePoolWithTag((PVOID)v12, 0);
          }
          else
          {
            _m_prefetchw(v84);
            v95 = *v84;
            if ( (*v84 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v96 = 0LL;
            else
              v96 = v95 - 16;
            if ( (v95 & 2) != 0
              || (v97 = *v84, v97 != _InterlockedCompareExchange64((volatile signed __int64 *)v84, v96, v95)) )
            {
              ExfReleasePushLock(v84, v87);
            }
            KeAbPostRelease((ULONG_PTR)v84);
            v98 = KeGetCurrentThread();
            v99 = v98->SpecialApcDisable + 1;
            v98->SpecialApcDisable = v99;
            if ( !v99 && ($CD287064E7C9F7953DE243E927CFCB99 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
              KiCheckForKernelApcDelivery();
          }
          if ( v140 )
            PsDereferenceMonitorContextServerSilo(v140);
        }
        else
        {
          while ( 1 )
          {
            v82 = _InterlockedCompareExchange(v12 + 6, v81 - 1, v81);
            v15 = v81 == v82;
            v81 = v82;
            if ( v15 )
              break;
            if ( v82 == 1 )
              goto LABEL_161;
          }
        }
        if ( v81 <= 0 )
          __fastfail(0xEu);
        v12 = 0LL;
        P = 0LL;
      }
      if ( *(_BYTE *)(v11 + 30) )
      {
        v100 = (__int64 *)(*(_QWORD *)v11 + 296LL);
        _m_prefetchw(v100);
        v101 = *v100;
        v102 = *v100 - 16;
        if ( (*v100 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v102 = (signed __int64)v12;
        if ( (v101 & 2) != 0 || (v103 = *v100, v103 != _InterlockedCompareExchange64(v100, v102, v101)) )
          ExfReleasePushLock(v100, v80);
        KeAbPostRelease((ULONG_PTR)v100);
        v104 = *(void **)v11;
        *(_DWORD *)(v11 + 32) = -286387660;
        ObfDereferenceObject(v104);
        *(_QWORD *)v11 = v12;
        *(_WORD *)(v11 + 30) = 0;
        v105 = KeGetCurrentThread();
        v106 = v105->KernelApcDisable + 1;
        v105->KernelApcDisable = v106;
        if ( !v106
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v105->ApcState.ApcListHead[0].Flink != &v105->152
          && !v105->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v107 = *(void **)(v11 + 8);
      v27 = (__m128i *)a2;
      if ( v107 )
      {
        ObfDereferenceObject(v107);
        *(_QWORD *)(v11 + 8) = v12;
      }
LABEL_34:
      v29 = v27->m128i_i64[1];
      if ( (v29 & 7) != 0 )
        goto LABEL_79;
      v30 = (v152 & 0x800) != 0;
      if ( v27->m128i_i16[0] < 8u || *(_QWORD *)v29 != ObpDosDevicesShortNamePrefix )
        break;
      if ( a4 == (struct _OBJECT_TYPE *)IoFileObjectType )
        v30 |= ObpUseSystemDeviceMap(v27);
      v31 = KeGetCurrentThread();
      P = (PVOID)v12;
      v32 = 0LL;
      v33 = 0;
      if ( (*((_DWORD *)&v31[1].SwapListEntry + 3) & 8) != 0 && !v30 )
      {
        v34 = PsReferenceImpersonationTokenEx((__int64)v31, 1, v134, (bool *)&a10, &v144, 0LL);
        v32 = v34;
        if ( v34 )
        {
          if ( *((_QWORD *)v34 + 3) == 999LL )
          {
            v33 = 1;
            goto LABEL_49;
          }
          if ( (int)SeGetTokenDeviceMap((__int64)v34, &v143) >= 0 )
          {
            P = (PVOID)v143;
            if ( v143 )
            {
              v35 = v143;
              _InterlockedIncrement(v143 + 6);
              goto LABEL_69;
            }
          }
        }
      }
      if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[8]
        && (int)ObSetCurrentProcessDeviceMap() < 0 )
      {
        v35 = (volatile signed __int32 *)P;
        goto LABEL_69;
      }
LABEL_49:
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v138, v28);
      v36 = KeGetCurrentThread();
      --v36->SpecialApcDisable;
      v37 = v138 + 15;
      v40 = KeAbPreAcquire((ULONG_PTR)(v138 + 15), 0LL, 0LL, v38);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v37, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v37, v40, (ULONG_PTR)v37, v41);
      if ( v40 )
        *(_BYTE *)(v40 + 26) |= 1u;
      if ( v33 == 1 )
        v35 = (volatile signed __int32 *)*v138;
      else
        v35 = (volatile signed __int32 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[8];
      P = (PVOID)v35;
      if ( v35 )
        _InterlockedIncrement(v35 + 6);
      _m_prefetchw(v37);
      v42 = *v37;
      if ( (*v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v43 = 0LL;
      else
        v43 = v42 - 16;
      if ( (v42 & 2) != 0
        || (v44 = *v37, v44 != _InterlockedCompareExchange64((volatile signed __int64 *)v37, v43, v42)) )
      {
        ExfReleasePushLock(v37, v39);
      }
      KeAbPostRelease((ULONG_PTR)v37);
      v45 = KeGetCurrentThread();
      v46 = v45->SpecialApcDisable + 1;
      v45->SpecialApcDisable = v46;
      if ( !v46 && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
        KiCheckForKernelApcDelivery();
      PsDereferenceMonitorContextServerSilo((__int64)v138);
      v27 = (__m128i *)a2;
LABEL_69:
      if ( v32 )
        ObfDereferenceObject(v32);
      if ( !v35 || !*(_QWORD *)v35 )
        goto LABEL_79;
      v47 = *v27;
      v133.m128i_i64[0] = v27->m128i_i64[0];
      v49 = v133.m128i_u16[0];
      v48 = (_WORD *)(_mm_srli_si128(v47, 8).m128i_u64[0] + 8);
      LOWORD(v49) = v133.m128i_i16[0] - 8;
      v133.m128i_i64[1] = (__int64)v48;
      v133.m128i_i16[0] -= 8;
      v23 = *(char **)v35;
      v130 = *(PVOID *)v35;
    }
    if ( v27->m128i_i16[0] != 6
      || *(_DWORD *)v29 != *(_DWORD *)L"\\??"
      || *(_WORD *)(v29 + 4) != 63
      || (v50 = (PVOID *)ObpReferenceDeviceMap(v30), P = v50, (v51 = v50) == 0LL)
      || !*v50 )
    {
LABEL_79:
      v52 = *v27;
      v23 = (char *)v131;
      v130 = v131;
      v133 = v52;
      continue;
    }
    break;
  }
  v108 = ObReferenceObjectByPointer(*v50, 0, a4, a5);
  if ( v108 >= 0 )
    *a11 = *v51;
  ObfDereferenceDeviceMap(v51);
  ObfDereferenceObject(v20);
  SeClearLearningModeObjectInformation();
  return v108;
}
