/*
 * XREFs of ObDuplicateObject @ 0x1404243A0
 * Callers:
 *     NtDuplicateObject @ 0x1404241F0 (NtDuplicateObject.c)
 *     PspCopyAndFixupParameters @ 0x1404669F0 (PspCopyAndFixupParameters.c)
 *     PspUpdateCreateInfo @ 0x14050AE10 (PspUpdateCreateInfo.c)
 *     DbgkpOpenHandles @ 0x140667048 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1404D3D28 (ObpGrantAccess.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14053E504 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x140554E5C (SeAuditHandleCreation.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1406ACE74 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1406E379C (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        ULONG_PTR a1,
        void *a2,
        ULONG_PTR a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v10; // esi
  int v11; // edi
  char v12; // r12
  ACCESS_MASK v13; // r13d
  int v14; // r14d
  __int64 v15; // rax
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rax
  ACCESS_MASK v19; // edx
  int v20; // esi
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r13
  _BYTE *v24; // r14
  bool v25; // zf
  struct _EX_RUNDOWN_REF *v26; // r12
  int v27; // r12d
  char *v28; // rdi
  __int64 v29; // rbx
  ULONG_PTR v30; // rdi
  ULONG_PTR v31; // rsi
  unsigned __int64 v32; // rtt
  unsigned __int64 v33; // rtt
  struct _EX_RUNDOWN_REF *v35; // rbx
  unsigned __int64 v36; // rtt
  struct _EX_RUNDOWN_REF *v37; // rcx
  unsigned __int64 v38; // rtt
  __int64 v39; // rbx
  char v40; // al
  __int64 v41; // r8
  unsigned __int64 v42; // rtt
  unsigned __int64 v43; // rtt
  struct _EX_RUNDOWN_REF *v44; // rcx
  unsigned __int64 v45; // rtt
  unsigned __int64 v46; // rtt
  char *v47; // rdi
  char v48; // al
  struct _EX_RUNDOWN_REF *v49; // rcx
  unsigned __int64 v50; // rtt
  int v51; // [rsp+20h] [rbp-E0h]
  bool v52; // [rsp+40h] [rbp-C0h]
  char v53; // [rsp+41h] [rbp-BFh]
  unsigned int v54; // [rsp+44h] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  _QWORD v64[2]; // [rsp+88h] [rbp-78h] BYREF
  int v65; // [rsp+98h] [rbp-68h] BYREF
  ACCESS_MASK v66; // [rsp+9Ch] [rbp-64h]
  char *v67; // [rsp+A0h] [rbp-60h]
  _BYTE v68[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v69[160]; // [rsp+E0h] [rbp-20h] BYREF
  char v70[224]; // [rsp+180h] [rbp+80h] BYREF

  v57 = a3;
  Handle = a2;
  BugCheckParameter1 = a1;
  if ( (a6 & 0x200) != 0 && !a8 )
    v57 = (ULONG_PTR)PsInitialSystemProcess;
  v10 = a6 & 0xFFFFFDFF;
  v11 = 0;
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = AccessMask;
  v14 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v15 = ObReferenceProcessHandleTable(a1);
  if ( !v15 )
    return 3221225738LL;
  v59 = ObpReferenceProcessObjectByHandle(Handle, a1, v15, a8, 1850237519, &Object, &v65, &v62);
  v16 = v59;
  if ( v59 < 0 )
  {
    v49 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
    _m_prefetchw((const void *)(BugCheckParameter1 + 736));
    v50 = v49->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)v49, v50 - 2, v50) )
      ExfReleaseRundownProtection(v49);
    return (unsigned int)v16;
  }
  v17 = v65;
  if ( (v65 & 4) != 0 )
    v11 = v62;
  else
    v62 = 0;
  if ( !v57 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v68);
      NtClose(Handle);
      KiUnstackDetachProcess((struct _KTHREAD *)v68, 0);
      v16 = v59;
    }
    else
    {
      v16 = -1073741811;
    }
    v37 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
    _m_prefetchw((const void *)(BugCheckParameter1 + 736));
    v42 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v42 == _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v42 - 2, v42) )
      goto LABEL_60;
    goto LABEL_77;
  }
  v18 = ObReferenceProcessHandleTable(v57);
  v58 = v18;
  if ( !v18 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v68);
      NtClose(Handle);
      KiUnstackDetachProcess((struct _KTHREAD *)v68, 0);
    }
    _m_prefetchw((const void *)(BugCheckParameter1 + 736));
    v43 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v43 - 2, v43) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v52 = v18 == ObpKernelHandleTable;
  v19 = v66;
  if ( v14 )
  {
    v13 = v66;
    AccessMask = v66;
  }
  if ( (v12 & 4) != 0 )
    v20 = v17;
  else
    v20 = v17 & 0xC | v10;
  if ( (v12 & 8) != 0 )
    v20 |= 8u;
  v67 = (char *)Object - 48;
  v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  v63 = v21;
  if ( (v13 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v21 + 76));
    v19 = v66;
    v13 = AccessMask;
  }
  v22 = v13 & (*(_DWORD *)(v21 + 92) | 0x1000000);
  v23 = 0LL;
  v54 = v22;
  v24 = 0LL;
  v53 = 0;
  if ( (~v19 & v22) == 0 )
    goto LABEL_20;
  if ( (v17 & 8) != 0 || (v39 = v63, *(_UNKNOWN **)(v63 + 152) != &SeDefaultObjectMethod) )
  {
    v16 = -1073741790;
    v60 = -1073741790;
    goto LABEL_23;
  }
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v57 )
  {
    KiStackAttachProcess((_KPROCESS *)v57, 0, (__int64)v68);
    v53 = 1;
  }
  SeCreateAccessState(v69, v70, v54, v39 + 76);
  v24 = v69;
  v60 = ObpGrantAccess(2LL, Object, v69, a8, v20, &v54);
  v16 = v60;
  if ( v60 >= 0 )
  {
LABEL_20:
    v16 = ObpIncrementHandleCountEx(2, (unsigned int)&v54, v57, (_DWORD)Object, a8, v20, 0LL);
    v60 = v16;
  }
  if ( v53 )
    KiUnstackDetachProcess((struct _KTHREAD *)v68, 0);
LABEL_23:
  v25 = (v12 & 1) == 0;
  v26 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
  if ( !v25 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v68);
    NtClose(Handle);
    KiUnstackDetachProcess((struct _KTHREAD *)v68, 0);
  }
  if ( v16 < 0 )
  {
    if ( v24 )
      SeDeleteAccessState(v24);
    _m_prefetchw(&v26[92]);
    v36 = v26[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v36 != _InterlockedCompareExchange64((volatile signed __int64 *)&v26[92], v36 - 2, v36) )
      ExfReleaseRundownProtection(v26 + 92);
    v37 = (struct _EX_RUNDOWN_REF *)(v57 + 736);
    _m_prefetchw((const void *)(v57 + 736));
    v38 = v37->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v38 == _InterlockedCompareExchange64((volatile signed __int64 *)v37, v38 - 2, v38) )
      goto LABEL_60;
LABEL_77:
    ExfReleaseRundownProtection(v37);
LABEL_60:
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v16;
  }
  if ( v24 && v24[10] )
  {
    v20 |= 4u;
    v11 = *(_DWORD *)(*((_QWORD *)v24 + 9) + 28LL);
  }
  v64[1] = v64;
  v64[0] = v64;
  if ( (*(_BYTE *)(v63 + 66) & 0x40) == 0 || *(_QWORD *)(v63 + 200) == v63 + 200 )
  {
    v27 = v60;
    goto LABEL_29;
  }
  v35 = (struct _EX_RUNDOWN_REF *)v57;
  v59 = v54;
  v27 = ObpPreInterceptHandleDuplicate((_DWORD)Object, v52, (unsigned int)&v59, (_DWORD)v26, v57, (__int64)v64);
  if ( v27 >= 0 )
  {
    if ( !v52 )
      v54 = v59;
LABEL_29:
    v51 = v11;
    v28 = v67;
    v29 = ExCreateHandleEx(v58, (_DWORD)v67, v54, v20, v51);
    if ( v29 )
    {
      if ( v24 )
      {
        v40 = v28[26];
        v41 = 0LL;
        if ( (v40 & 0x20) != 0 )
        {
          v47 = &v28[-ObpInfoMaskToOffset[v40 & 0x3F]];
          if ( v47 )
            v41 = *(_QWORD *)v47;
        }
        SeAuditHandleCreation(v24, v29, v41);
      }
      if ( (v20 & 4) != 0 )
      {
        if ( v24 )
        {
          v23 = *((_QWORD *)v24 + 4);
          if ( !v23 )
            v23 = *((_QWORD *)v24 + 6);
        }
        v48 = SeAuditingWithTokenForSubcategory(123LL, v23);
        v30 = v57;
        v31 = BugCheckParameter1;
        if ( v48 )
          SeAuditHandleDuplication(Handle, v29, BugCheckParameter1, v57);
        goto LABEL_34;
      }
      v30 = v57;
    }
    else
    {
      v30 = v57;
      ObpDecrementHandleCount(v57);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      v27 = -1073741670;
    }
    v31 = BugCheckParameter1;
LABEL_34:
    if ( v52 )
      v29 |= 0xFFFFFFFF80000000uLL;
    if ( a4 )
      *a4 = v29;
    if ( v24 )
      SeDeleteAccessState(v24);
    _m_prefetchw((const void *)(v31 + 736));
    v32 = *(_QWORD *)(v31 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 736), v32 - 2, v32) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v31 + 736));
    _m_prefetchw((const void *)(v30 + 736));
    v33 = *(_QWORD *)(v30 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 736), v33 - 2, v33) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v30 + 736));
    if ( (_QWORD *)v64[0] != v64 )
      ObpPostInterceptHandleDuplicate((_DWORD)Object, v52, v27, v54, (__int64)v64);
    if ( (xmmword_1403D1290 & 0x40) != 0 && v27 >= 0 )
      EtwTraceDuplicateHandle((_DWORD)Handle, v29, (_DWORD)Object, *(_DWORD *)(v31 + 744), *(_DWORD *)(v30 + 744), v63);
    return (unsigned int)v27;
  }
  ObpDecrementHandleCount((ULONG_PTR)v35);
  if ( v24 )
    SeDeleteAccessState(v24);
  v44 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 736);
  _m_prefetchw((const void *)(BugCheckParameter1 + 736));
  v45 = v44->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v45 != _InterlockedCompareExchange64((volatile signed __int64 *)v44, v45 - 2, v45) )
    ExfReleaseRundownProtection(v44);
  _m_prefetchw(&v35[92]);
  v46 = v35[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)&v35[92], v46 - 2, v46) )
    ExfReleaseRundownProtection(v35 + 92);
  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  return (unsigned int)v27;
}
