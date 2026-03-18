/*
 * XREFs of ObpLookupObjectName @ 0x14040E3D0
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObpUnlockDirectory @ 0x1400428A0 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140043230 (SeClearLearningModeObjectInformation.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PsGetProcessSilo @ 0x140079730 (PsGetProcessSilo.c)
 *     PsEqualCurrentServerSilo @ 0x140079760 (PsEqualCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpIsUnsecureName @ 0x1403B4E10 (ObpIsUnsecureName.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1404AA9B4 (ObpInsertDirectoryEntry.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        HANDLE Handle,
        __int64 a2,
        int a3,
        struct _OBJECT_TYPE *a4,
        unsigned __int8 a5,
        void *a6,
        _SECURITY_QUALITY_OF_SERVICE *a7,
        char *a8,
        __int64 a9,
        _ACCESS_STATE *a10,
        __int64 a11,
        PVOID *a12)
{
  __int16 v14; // r13
  bool v17; // zf
  KPROCESSOR_MODE v18; // cl
  int v19; // edx
  char IsSandboxedToken; // al
  NTSTATUS result; // eax
  char *v22; // r14
  NTSTATUS v23; // ebx
  char *v24; // rax
  __m128i v25; // xmm0
  char *v26; // r10
  __int64 v27; // rbx
  PVOID v28; // rsi
  NTSTATUS v29; // ebx
  __int64 v30; // rcx
  bool v31; // di
  struct _KTHREAD *v32; // r14
  void *v33; // r13
  __int64 Process; // r15
  __int64 ProcessSilo; // rax
  void *ServerSiloForSilo; // rax
  void *v37; // rbx
  bool v38; // si
  __int64 v39; // rax
  volatile signed __int32 *v40; // r14
  struct _KTHREAD *v41; // rax
  unsigned __int64 *v42; // rbx
  __int64 v43; // rdi
  signed __int64 v44; // rax
  signed __int64 v45; // rcx
  unsigned __int64 v46; // rtt
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  __m128i v49; // xmm0
  _WORD *v50; // rdx
  __int16 v51; // r8
  PVOID *v52; // rax
  PVOID *v53; // r14
  __m128i v54; // xmm0
  char v55; // r13
  char *v56; // rdi
  struct _OBJECT_TYPE *v57; // rax
  int (__fastcall *ParseProcedure)(void *, void *, _ACCESS_STATE *, char, unsigned int, _UNICODE_STRING *, _UNICODE_STRING *, void *, _SECURITY_QUALITY_OF_SERVICE *, void **); // rsi
  __int64 v59; // r14
  KPROCESSOR_MODE v60; // si
  int v61; // ecx
  NTSTATUS v62; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v64; // rbx
  char *v65; // rax
  NTSTATUS (__fastcall *v66)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, _QWORD *); // rcx
  void *v67; // rcx
  char v68; // di
  PVOID v69; // r14
  PVOID v70; // r14
  signed __int32 v71; // ebx
  signed __int32 v72; // eax
  struct _KTHREAD *v73; // rax
  unsigned __int64 *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rbx
  signed __int64 v77; // rax
  signed __int64 v78; // rcx
  unsigned __int64 v79; // rtt
  signed __int64 v80; // rax
  signed __int64 v81; // rcx
  unsigned __int64 v82; // rtt
  void *v83; // rcx
  NTSTATUS v84; // ebx
  __int64 v85; // rdx
  char *v86; // rdi
  signed __int64 *v87; // rbx
  signed __int64 v88; // rax
  signed __int64 v89; // rcx
  signed __int64 v90; // rtt
  void *v91; // rcx
  void *v92; // rcx
  int v93; // edi
  unsigned int v94; // esi
  PVOID PoolWithTag; // rdi
  char *v96; // rbx
  void *v97; // rcx
  __int16 v98; // ax
  int Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  int v101; // [rsp+50h] [rbp-B0h] BYREF
  char v102; // [rsp+54h] [rbp-ACh]
  char *v103; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  PVOID v105; // [rsp+68h] [rbp-98h]
  int v106; // [rsp+70h] [rbp-90h]
  __m128i v107; // [rsp+80h] [rbp-80h] BYREF
  char v108; // [rsp+90h] [rbp-70h] BYREF
  char v109; // [rsp+91h] [rbp-6Fh] BYREF
  int v110; // [rsp+94h] [rbp-6Ch]
  int v111; // [rsp+98h] [rbp-68h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v113; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v114; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v115; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v117; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v118; // [rsp+D8h] [rbp-28h] BYREF
  char v119[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v120[16]; // [rsp+E8h] [rbp-18h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+F8h] [rbp-8h]
  __int64 v122; // [rsp+100h] [rbp+0h]
  HANDLE v123; // [rsp+108h] [rbp+8h]
  char v124; // [rsp+180h] [rbp+80h]
  int v126; // [rsp+190h] [rbp+90h]
  char v128; // [rsp+1D0h] [rbp+D0h]

  v126 = a3;
  v14 = a3;
  P = 0LL;
  v110 = 64;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v17 = ObpCaseInsensitive == 0;
  v124 = 0;
  v102 = 0;
  *a12 = 0LL;
  v101 = 0;
  v106 = 0;
  v128 = 1;
  v103 = 0LL;
  if ( !v17 && (a4->TypeInfo.ObjectTypeFlags & 1) != 0 )
  {
    v14 = a3 | 0x40;
    v126 = a3 | 0x40;
  }
  v18 = a5;
  v19 = a5;
  if ( (v14 & 0x400) != 0 )
    v19 = 1;
  v111 = v19;
  if ( !a8 )
  {
    v102 = 1;
    IsSandboxedToken = RtlIsSandboxedToken(&a10->SubjectSecurityContext);
    v18 = a5;
    v124 = IsSandboxedToken;
  }
  if ( !Handle )
  {
    v27 = a2;
    if ( *(_WORD *)a2 && **(_WORD **)(a2 + 8) == 92 )
    {
      if ( PsIsHostSilo(a9) )
      {
        v28 = ObpRootDirectoryObject;
        v105 = ObpRootDirectoryObject;
        v115 = ObpRootDirectoryObject;
        if ( ObpRootDirectoryObject )
          ObfReferenceObject(ObpRootDirectoryObject);
      }
      else if ( (int)PsGetSiloObjectByPointer(a9, &ObpDirectoryObjectType, &v115) >= 0 )
      {
        v28 = v115;
        v105 = v115;
      }
      else
      {
        v28 = 0LL;
        v105 = 0LL;
        v115 = 0LL;
      }
      if ( a9 && !v28 )
        return -1073741766;
      if ( *(_WORD *)a2 != 2 )
      {
        v122 = a2;
        p_Name = &a4->Name;
        v123 = 0LL;
        SeSetLearningModeObjectInformation((__int64)v120);
        goto LABEL_42;
      }
      if ( v28 )
      {
        v29 = ObReferenceObjectByPointer(v28, 0, a4, a5);
        if ( v29 >= 0 )
          *a12 = v28;
        ObfDereferenceObject(v28);
        return v29;
      }
      else if ( a8 )
      {
        result = ObReferenceObjectByPointer(a8, 0, a4, a5);
        if ( result >= 0 )
          *a12 = a8;
      }
      else
      {
        return -1073741811;
      }
      return result;
    }
    return -1073741765;
  }
  result = ObReferenceObjectByHandle(Handle, 0, 0LL, v18, &v118, 0LL);
  v22 = (char *)v118;
  v105 = v118;
  v101 = result;
  if ( result < 0 )
    return result;
  if ( *(_WORD *)a2 )
  {
    if ( **(_WORD **)(a2 + 8) == 92
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v118 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v118 - 48) >> 8)] != IoFileObjectType )
    {
      ObfDereferenceObject(v118);
      return -1073741765;
    }
  }
  else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v118 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v118 - 48) >> 8)] == ObpDirectoryObjectType )
  {
    v23 = ObReferenceObjectByPointer(v118, 0, a4, a5);
    v24 = v103;
    if ( v23 >= 0 )
      v24 = v22;
    v103 = v24;
    ObfDereferenceObject(v22);
    *a12 = v103;
    return v23;
  }
  v25 = *(__m128i *)a2;
  v103 = (char *)v118;
  v107 = v25;
  v122 = a2;
  v123 = Handle;
  p_Name = &a4->Name;
  SeSetLearningModeObjectInformation((__int64)v120);
  v26 = v103;
LABEL_94:
  v51 = v107.m128i_i16[0];
  v50 = (_WORD *)v107.m128i_i64[1];
  while ( 2 )
  {
    v55 = v128;
    while ( 1 )
    {
      v56 = v26 - 48;
      v57 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v26 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v26 - 48) >> 8)];
      ParseProcedure = v57->TypeInfo.ParseProcedure;
      if ( ParseProcedure )
        break;
      if ( v57 != ObpDirectoryObjectType )
        goto LABEL_230;
      v59 = (__int64)v26;
      if ( v51 && *v50 == 92 )
      {
        ++v50;
        v51 -= 2;
        v107.m128i_i64[1] = (__int64)v50;
        v107.m128i_i16[0] = v51;
      }
      *(__m128i *)Src = v107;
      if ( v51 )
      {
        do
        {
          if ( *v50 == 92 )
            break;
          ++v50;
          v17 = v51 == 2;
          v51 -= 2;
          v107.m128i_i64[1] = (__int64)v50;
          v107.m128i_i16[0] = v51;
        }
        while ( !v17 );
      }
      LOWORD(Src[0]) -= v51;
      if ( !LOWORD(Src[0]) )
        goto LABEL_244;
      v60 = v111;
      if ( (_BYTE)v111 && (a10->Flags & 1) == 0 )
      {
        v128 = ObpCheckTraverseAccess(v26, v50, a10);
        v55 = v128;
        if ( !v128 )
        {
          v61 = v106;
          if ( v106 >= 0 )
            v61 = -1073741772;
          v106 = v61;
          if ( v107.m128i_i16[0] || !a8 )
            goto LABEL_112;
LABEL_116:
          ObpLockDirectoryExclusive(a11, v59);
          goto LABEL_122;
        }
        v51 = v107.m128i_i16[0];
      }
      if ( v51 )
        goto LABEL_122;
      if ( a8 )
        goto LABEL_116;
      *(_DWORD *)(a11 + 32) = -1145368012;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v64 = KeAbPreAcquire(v59 + 296, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 296), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v59 + 296), v64, v59 + 296);
      if ( v64 )
        *(_BYTE *)(v64 + 26) |= 1u;
      *(_DWORD *)(a11 + 32) = -572714444;
      ObfReferenceObject((PVOID)v59);
      *(_QWORD *)a11 = v59;
      *(_WORD *)(a11 + 30) = 1;
LABEL_122:
      v65 = (char *)ObpLookupDirectoryEntryEx((PVOID)v59, v124, a11);
      v103 = v65;
      v26 = v65;
      if ( !v55 )
      {
        if ( v65 )
        {
LABEL_112:
          v62 = v106;
          v101 = v106;
          goto LABEL_233;
        }
LABEL_199:
        if ( v107.m128i_i16[0] )
        {
LABEL_200:
          v62 = -1073741766;
          v101 = -1073741766;
          goto LABEL_207;
        }
        if ( a8 )
        {
          v85 = 4LL;
          if ( a4 == ObpDirectoryObjectType )
            v85 = 8LL;
          LOBYTE(HandleInformation) = v60;
          LOBYTE(Object) = 0;
          if ( (unsigned __int8)ObCheckCreateObjectAccess(v59, v85, a10, Src, Object, HandleInformation, &v101) )
          {
            v93 = *(_DWORD *)(v59 + 320);
            if ( v93 != -1
              && (a4 == MmSectionObjectType || a4 == ObpSymbolicLinkObjectType)
              && v93 != (unsigned int)PsGetCurrentProcessSessionId()
              && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v60)
              && !ObpIsUnsecureName((PCUNICODE_STRING)Src, (v126 & 0x40) != 0) )
            {
              v62 = -1073741790;
              v101 = -1073741790;
              goto LABEL_207;
            }
            v94 = LOWORD(Src[0]);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
            if ( PoolWithTag )
            {
              if ( (unsigned __int8)ObpInsertDirectoryEntry((PVOID)v59, a8) )
              {
                memmove(PoolWithTag, Src[1], v94);
                v96 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                v97 = (void *)*((_QWORD *)v96 + 2);
                if ( v97 )
                  ExFreePoolWithTag(v97, 0);
                v98 = (__int16)Src[0];
                *((_QWORD *)v96 + 2) = PoolWithTag;
                v86 = 0LL;
                *((_WORD *)v96 + 4) = v98;
                *((_WORD *)v96 + 5) = v98;
                v62 = 0;
                v103 = a8;
                goto LABEL_235;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            v62 = -1073741670;
            v101 = -1073741670;
            goto LABEL_207;
          }
          v62 = v101;
          if ( v101 >= 0 )
            goto LABEL_206;
LABEL_207:
          v86 = 0LL;
          if ( *(_BYTE *)(a11 + 30) )
          {
            v87 = (signed __int64 *)(*(_QWORD *)a11 + 296LL);
            _m_prefetchw(v87);
            v88 = *v87;
            v89 = *v87 - 16;
            if ( (*v87 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v89 = 0LL;
            if ( (v88 & 2) != 0 || (v90 = *v87, v90 != _InterlockedCompareExchange64(v87, v89, v88)) )
              ExfReleasePushLock(v87);
            KeAbPostRelease((ULONG_PTR)v87);
            v91 = *(void **)a11;
            *(_DWORD *)(a11 + 32) = -286387660;
            ObfDereferenceObject(v91);
            *(_QWORD *)a11 = 0LL;
            *(_WORD *)(a11 + 30) = 0;
            KeLeaveCriticalRegion();
            v62 = v101;
          }
          v92 = *(void **)(a11 + 8);
          if ( v92 )
          {
            ObfDereferenceObject(v92);
            *(_QWORD *)(a11 + 8) = 0LL;
          }
LABEL_235:
          if ( P )
            ObfDereferenceDeviceMap(P);
          if ( v105 )
            ObfDereferenceObject(v105);
          SeClearLearningModeObjectInformation();
          if ( v62 >= 0 )
            v86 = v103;
          *a12 = v86;
          return v62;
        }
        goto LABEL_206;
      }
      if ( !v65 )
        goto LABEL_199;
      v51 = v107.m128i_i16[0];
      if ( v107.m128i_i16[0] )
      {
        v50 = (_WORD *)v107.m128i_i64[1];
      }
      else
      {
        v66 = *(NTSTATUS (__fastcall **)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, _QWORD *))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v65 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v65 - 48) >> 8)] + 144);
        if ( !v66 )
          goto LABEL_197;
        if ( v66 == ObpParseSymbolicLink )
        {
          v50 = (_WORD *)v107.m128i_i64[1];
        }
        else
        {
          if ( a8 )
          {
LABEL_197:
            v62 = ObReferenceObjectByPointer(v65, 0, a4, a5);
            v101 = v62;
            goto LABEL_233;
          }
          v50 = (_WORD *)v107.m128i_i64[1];
        }
      }
    }
    if ( (char *)ParseProcedure != (char *)ObpParseSymbolicLink )
    {
      if ( a8 )
      {
LABEL_230:
        v62 = -1073741788;
        v101 = -1073741788;
        goto LABEL_207;
      }
      ObfReferenceObject(v26);
      if ( *(_BYTE *)(a11 + 30) )
        ObpUnlockDirectory(*(_QWORD *)a11, a11);
      v67 = *(void **)(a11 + 8);
      if ( v67 )
      {
        ObfDereferenceObject(v67);
        v26 = v103;
        *(_QWORD *)(a11 + 8) = 0LL;
      }
      else
      {
        v26 = v103;
      }
    }
    v14 = v126;
    v101 = ParseProcedure(
             v26,
             a4,
             a10,
             v111,
             v126,
             (_UNICODE_STRING *)a2,
             (_UNICODE_STRING *)&v107,
             a6,
             a7,
             (void **)&v103);
    v62 = v101;
    if ( (char *)ParseProcedure != (char *)ObpParseSymbolicLink )
      ObfDereferenceObject(v56 + 48);
    if ( v101 != 260 && v101 != 872 )
    {
      if ( v101 < 0 )
        goto LABEL_207;
      if ( v103 )
      {
LABEL_233:
        if ( v62 < 0 )
          goto LABEL_207;
        v86 = 0LL;
        goto LABEL_235;
      }
LABEL_206:
      v101 = -1073741772;
      v62 = -1073741772;
      goto LABEL_207;
    }
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v56[24] ^ (unsigned __int64)BYTE1(v56)] == ObpSymbolicLinkObjectType )
      v68 = v103[28] & 1;
    else
      v68 = 0;
    if ( (v126 & 0x1000) != 0 )
    {
      if ( v101 != 872 )
      {
        if ( !v68 )
        {
          v62 = -1073740533;
          v101 = -1073740533;
          goto LABEL_207;
        }
        goto LABEL_148;
      }
LABEL_149:
      v69 = v105;
      if ( v105 != ObpRootDirectoryObject )
      {
        ObfDereferenceObject(v105);
        v69 = ObpRootDirectoryObject;
        v105 = ObpRootDirectoryObject;
        ObfReferenceObject(ObpRootDirectoryObject);
      }
    }
    else
    {
LABEL_148:
      if ( v101 == 872 )
        goto LABEL_149;
      v69 = v105;
    }
    if ( !--v110 )
      goto LABEL_206;
    v27 = a2;
    if ( !*(_WORD *)a2 || **(_WORD **)(a2 + 8) != 92 )
    {
LABEL_244:
      v62 = -1073741773;
      v101 = -1073741773;
      goto LABEL_207;
    }
    ObfDereferenceObject(v69);
    if ( v68 )
    {
      v28 = ObpRootDirectoryObject;
      v105 = ObpRootDirectoryObject;
      ObfReferenceObject(ObpRootDirectoryObject);
    }
    else
    {
      if ( PsIsHostSilo(a9) )
      {
        v28 = ObpRootDirectoryObject;
        v105 = ObpRootDirectoryObject;
        v114 = ObpRootDirectoryObject;
        if ( ObpRootDirectoryObject )
          ObfReferenceObject(ObpRootDirectoryObject);
      }
      else if ( (int)PsGetSiloObjectByPointer(a9, &ObpDirectoryObjectType, &v114) >= 0 )
      {
        v28 = v114;
        v105 = v114;
      }
      else
      {
        v28 = 0LL;
        v105 = 0LL;
        v114 = 0LL;
      }
      if ( a9 && !v28 )
        goto LABEL_200;
    }
    v70 = P;
    if ( P )
    {
      v71 = *((_DWORD *)P + 6);
      if ( v71 == 1 )
      {
LABEL_169:
        PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v116);
        v73 = KeGetCurrentThread();
        --v73->SpecialApcDisable;
        v74 = (unsigned __int64 *)(v116 + 120);
        v75 = KeAbPreAcquire(v116 + 120, 0LL, 0LL);
        v76 = v75;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v74, 0LL) )
          ExfAcquirePushLockExclusiveEx(v74, v75, (ULONG_PTR)v74);
        if ( v76 )
          *(_BYTE *)(v76 + 26) |= 1u;
        v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v70 + 6, 0xFFFFFFFF);
        if ( v71 == 1 )
        {
          *(_QWORD *)(*(_QWORD *)v70 + 304LL) = 0LL;
          _m_prefetchw(v74);
          v77 = *v74;
          v78 = *v74 - 16;
          if ( (*v74 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v78 = 0LL;
          if ( (v77 & 2) != 0
            || (v79 = *v74, v79 != _InterlockedCompareExchange64((volatile signed __int64 *)v74, v78, v77)) )
          {
            ExfReleasePushLock(v74);
          }
          KeAbPostRelease((ULONG_PTR)v74);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          ZwClose(*((HANDLE *)v70 + 2));
          ObfDereferenceObject(*(PVOID *)v70);
          ExFreePoolWithTag(v70, 0);
        }
        else
        {
          _m_prefetchw(v74);
          v80 = *v74;
          v81 = *v74 - 16;
          if ( (*v74 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v81 = 0LL;
          if ( (v80 & 2) != 0
            || (v82 = *v74, v82 != _InterlockedCompareExchange64((volatile signed __int64 *)v74, v81, v80)) )
          {
            ExfReleasePushLock(v74);
          }
          KeAbPostRelease((ULONG_PTR)v74);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        if ( v116 )
          PsDereferenceMonitorContextServerSilo(v116);
      }
      else
      {
        while ( 1 )
        {
          v72 = _InterlockedCompareExchange((volatile signed __int32 *)v70 + 6, v71 - 1, v71);
          v17 = v71 == v72;
          v71 = v72;
          if ( v17 )
            break;
          if ( v72 == 1 )
            goto LABEL_169;
        }
      }
      if ( v71 <= 0 )
        __fastfail(0xEu);
      v27 = a2;
      P = 0LL;
    }
    if ( *(_BYTE *)(a11 + 30) )
      ObpUnlockDirectory(*(_QWORD *)a11, a11);
    v83 = *(void **)(a11 + 8);
    if ( v83 )
    {
      ObfDereferenceObject(v83);
      *(_QWORD *)(a11 + 8) = 0LL;
    }
LABEL_42:
    v30 = *(_QWORD *)(v27 + 8);
    if ( (v30 & 7) != 0 )
      goto LABEL_93;
    v31 = (v14 & 0x800) != 0;
    if ( *(_WORD *)v27 >= 8u && *(_QWORD *)v30 == ObpDosDevicesShortNamePrefix )
    {
      v32 = KeGetCurrentThread();
      v33 = 0LL;
      P = 0LL;
      Process = (__int64)v32->Process;
      ProcessSilo = PsGetProcessSilo(Process);
      ServerSiloForSilo = (void *)PspGetServerSiloForSilo(ProcessSilo);
      v37 = ServerSiloForSilo;
      if ( ServerSiloForSilo )
        ObfReferenceObject(ServerSiloForSilo);
      v38 = !PsEqualCurrentServerSilo((__int64)v37);
      if ( v37 )
        ObfDereferenceObject(v37);
      if ( (*((_DWORD *)&v32[1].SwapListEntry + 3) & 8) == 0 || v31 )
      {
        if ( !v38 )
        {
          v40 = 0LL;
          goto LABEL_61;
        }
      }
      else
      {
        if ( v38 )
          goto LABEL_63;
        v39 = PsReferenceImpersonationTokenEx(
                (_DWORD)v32,
                1,
                (unsigned int)&v108,
                (unsigned int)&v109,
                (__int64)v119,
                0LL);
        v33 = (void *)v39;
        if ( !v39 )
          goto LABEL_60;
        if ( *(_QWORD *)(v39 + 24) == 999LL )
        {
          v38 = 1;
          goto LABEL_63;
        }
        if ( (int)SeGetTokenDeviceMap(v39, &v117) >= 0 )
        {
          v40 = v117;
          P = (PVOID)v117;
          if ( v117 )
          {
            _InterlockedIncrement(v117 + 6);
LABEL_82:
            if ( v33 )
              ObfDereferenceObject(v33);
            if ( v40 && *(_QWORD *)v40 )
            {
              v49 = *(__m128i *)a2;
              v107.m128i_i64[0] = *(_QWORD *)a2;
              v50 = (_WORD *)(_mm_srli_si128(v49, 8).m128i_u64[0] + 8);
              v51 = v107.m128i_i16[0] - 8;
              v107.m128i_i64[1] = (__int64)v50;
              v107.m128i_i16[0] -= 8;
              v26 = *(char **)v40;
              v103 = *(char **)v40;
              continue;
            }
            v27 = a2;
LABEL_93:
            v54 = *(__m128i *)v27;
            v26 = (char *)v105;
            v103 = (char *)v105;
            v107 = v54;
            goto LABEL_94;
          }
        }
        else
        {
LABEL_60:
          v40 = (volatile signed __int32 *)P;
        }
LABEL_61:
        if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
          goto LABEL_82;
      }
LABEL_63:
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v113);
      v41 = KeGetCurrentThread();
      --v41->SpecialApcDisable;
      v42 = v113 + 15;
      v43 = KeAbPreAcquire((ULONG_PTR)(v113 + 15), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v42, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v42, v43, (ULONG_PTR)v42);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      if ( v38 )
        v40 = (volatile signed __int32 *)*v113;
      else
        v40 = *(volatile signed __int32 **)(Process + 1072);
      P = (PVOID)v40;
      if ( v40 )
        _InterlockedIncrement(v40 + 6);
      _m_prefetchw(v42);
      v44 = *v42;
      if ( (*v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v45 = 0LL;
      else
        v45 = v44 - 16;
      if ( (v44 & 2) != 0
        || (v46 = *v42, v46 != _InterlockedCompareExchange64((volatile signed __int64 *)v42, v45, v44)) )
      {
        ExfReleasePushLock(v42);
      }
      KeAbPostRelease((ULONG_PTR)v42);
      v47 = KeGetCurrentThread();
      v48 = v47->SpecialApcDisable + 1;
      v47->SpecialApcDisable = v48;
      if ( !v48 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
        KiCheckForKernelApcDelivery((__int64)v47);
      PsDereferenceMonitorContextServerSilo((__int64)v113);
      goto LABEL_82;
    }
    break;
  }
  if ( *(_WORD *)v27 != 6 )
    goto LABEL_93;
  if ( *(_DWORD *)v30 != *(_DWORD *)L"\\??" )
    goto LABEL_93;
  if ( *(_WORD *)(v30 + 4) != 63 )
    goto LABEL_93;
  v52 = (PVOID *)ObpReferenceDeviceMap(v31);
  P = v52;
  v53 = v52;
  if ( !v52 || !*v52 )
    goto LABEL_93;
  v84 = ObReferenceObjectByPointer(*v52, 0, a4, a5);
  if ( v84 >= 0 )
    *a12 = *v53;
  ObfDereferenceDeviceMap(v53);
  ObfDereferenceObject(v28);
  SeClearLearningModeObjectInformation();
  return v84;
}
