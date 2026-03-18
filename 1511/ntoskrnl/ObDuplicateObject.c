/*
 * XREFs of ObDuplicateObject @ 0x1404246E0
 * Callers:
 *     NtDuplicateObject @ 0x1404240F0 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x140448334 (PspPropagateHandle.c)
 *     PspCopyAndFixupParameters @ 0x140464714 (PspCopyAndFixupParameters.c)
 *     DbgkpOpenHandles @ 0x1405EE8E0 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ObpFilterOperation @ 0x14007A018 (ObpFilterOperation.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     ObpGrantAccess @ 0x1404705B8 (ObpGrantAccess.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140482A4C (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1404BD7B8 (SeAuditHandleCreation.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14062F014 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14064E610 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1406607E8 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        struct _EX_RUNDOWN_REF *a1,
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
  char v12; // r15
  ACCESS_MASK v13; // r13d
  int v14; // r14d
  unsigned __int64 Count; // r8
  int v16; // ebx
  int v17; // ebx
  _KPROCESS *v18; // r9
  __int64 v19; // rax
  ACCESS_MASK v20; // edx
  int v21; // esi
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r13
  _BYTE *v25; // r14
  bool v26; // zf
  int v27; // r15d
  int v28; // r15d
  char *v29; // rdi
  __int64 v30; // rbx
  ULONG_PTR v31; // rdi
  ULONG_PTR v32; // rsi
  int v33; // r14d
  struct _EX_RUNDOWN_REF *v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // rcx
  __int64 v37; // rbx
  char v38; // al
  __int64 v39; // r8
  char *v40; // rdi
  char v41; // al
  int v42; // [rsp+20h] [rbp-E0h]
  bool v43; // [rsp+40h] [rbp-C0h]
  char v44; // [rsp+41h] [rbp-BFh]
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v48; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  PEX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h] BYREF
  ACCESS_MASK v53; // [rsp+7Ch] [rbp-84h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  _QWORD v55[2]; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  char *v57; // [rsp+A0h] [rbp-60h]
  PEX_RUNDOWN_REF v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  $D4FCF91253F76F57393CBFE908971F67 v60; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v61[160]; // [rsp+F0h] [rbp-10h] BYREF
  char v62[224]; // [rsp+190h] [rbp+90h] BYREF

  v48 = a3;
  Handle = a2;
  BugCheckParameter1 = (ULONG_PTR)a1;
  if ( (a6 & 0x200) != 0 && !a8 )
    v48 = (ULONG_PTR)PsInitialSystemProcess;
  v10 = a6 & 0xFFFFFDFF;
  v11 = 0;
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = AccessMask;
  v14 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  RunRef = a1 + 92;
  if ( !ExAcquireRundownProtection(a1 + 92) )
    return 3221225738LL;
  Count = a1[131].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection_0(RunRef);
    return 3221225738LL;
  }
  v45 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          (_DWORD)a1,
          Count,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v52,
          (__int64)&v56);
  v16 = v45;
  if ( v45 < 0 )
  {
    ExReleaseRundownProtection_0(RunRef);
    return (unsigned int)v16;
  }
  v17 = v52;
  if ( (v52 & 4) != 0 )
    v11 = v56;
  if ( !v48 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v60);
      NtClose(Handle);
      KiUnstackDetachProcess(&v60, 0LL);
      v16 = v45;
    }
    else
    {
      v16 = -1073741811;
    }
    v36 = RunRef;
LABEL_57:
    ExReleaseRundownProtection_0(v36);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v16;
  }
  v58 = (PEX_RUNDOWN_REF)(v48 + 736);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v48 + 736)) )
  {
LABEL_72:
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v60);
      NtClose(Handle);
      KiUnstackDetachProcess(&v60, 0LL);
    }
    ExReleaseRundownProtection_0(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v18 = (_KPROCESS *)v48;
  v19 = *(_QWORD *)(v48 + 1048);
  v59 = v19;
  if ( !v19 )
  {
    ExReleaseRundownProtection_0(v58);
    goto LABEL_72;
  }
  v43 = v19 == ObpKernelHandleTable;
  v20 = v53;
  if ( v14 )
  {
    v13 = v53;
    AccessMask = v53;
  }
  if ( (v12 & 4) != 0 )
    v21 = v17;
  else
    v21 = v17 & 0xC | v10;
  if ( (v12 & 8) != 0 )
    v21 |= 8u;
  v57 = (char *)Object - 48;
  v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  v54 = v22;
  if ( (v13 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v22 + 76));
    v20 = v53;
    v18 = (_KPROCESS *)v48;
    v13 = AccessMask;
  }
  v23 = v13 & (*(_DWORD *)(v22 + 92) | 0x1000000);
  v24 = 0LL;
  v46 = v23;
  v25 = 0LL;
  v44 = 0;
  if ( (~v20 & v23) == 0 )
    goto LABEL_22;
  if ( (v17 & 8) != 0 || (v37 = v54, *(_UNKNOWN **)(v54 + 152) != &SeDefaultObjectMethod) )
  {
    v16 = -1073741790;
    v45 = -1073741790;
    goto LABEL_25;
  }
  if ( KeGetCurrentThread()->ApcState.Process != v18 )
  {
    KiStackAttachProcess(v18, 0LL, (__int64)&v60);
    v44 = 1;
  }
  SeCreateAccessState(v61, v62, v46, v37 + 76);
  v25 = v61;
  v45 = ObpGrantAccess(2LL, Object, v61, a8, v21, &v46);
  v16 = v45;
  if ( v45 >= 0 )
  {
LABEL_22:
    v16 = ObpIncrementHandleCountEx(2u, (__int64)&v46, v48, (__int64)Object, a8, v21, 0LL);
    v45 = v16;
  }
  if ( v44 )
    KiUnstackDetachProcess(&v60, 0LL);
LABEL_25:
  v26 = (v12 & 1) == 0;
  v27 = BugCheckParameter1;
  if ( !v26 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v60);
    NtClose(Handle);
    KiUnstackDetachProcess(&v60, 0LL);
  }
  if ( v16 < 0 )
  {
    if ( v25 )
      SeDeleteAccessState(v25);
    ExReleaseRundownProtection_0(RunRef);
    v36 = v58;
    goto LABEL_57;
  }
  if ( v25 && v25[10] )
  {
    v21 |= 4u;
    v11 = *(_DWORD *)(*((_QWORD *)v25 + 9) + 28LL);
  }
  v55[1] = v55;
  v55[0] = v55;
  if ( !ObpFilterOperation(v54) )
  {
    v28 = v45;
    goto LABEL_31;
  }
  v35 = (struct _EX_RUNDOWN_REF *)v48;
  v45 = v46;
  v28 = ObpPreInterceptHandleDuplicate((_DWORD)Object, v43, (unsigned int)&v45, v27, v48, (__int64)v55);
  if ( v28 >= 0 )
  {
    if ( !v43 )
      v46 = v45;
LABEL_31:
    v42 = v11;
    v29 = v57;
    v30 = ExCreateHandleEx(v59, (_DWORD)v57, v46, v21);
    if ( v30 )
    {
      if ( v25 )
      {
        v38 = v29[26];
        v39 = 0LL;
        if ( (v38 & 0x20) != 0 )
        {
          v40 = &v29[-ObpInfoMaskToOffset[v38 & 0x3F]];
          if ( v40 )
            v39 = *(_QWORD *)v40;
        }
        SeAuditHandleCreation(v25, v30, v39);
      }
      if ( (v21 & 4) != 0 )
      {
        if ( v25 )
        {
          v24 = *((_QWORD *)v25 + 4);
          if ( !v24 )
            v24 = *((_QWORD *)v25 + 6);
        }
        v41 = SeAuditingWithTokenForSubcategory(123, v24);
        v31 = v48;
        v32 = BugCheckParameter1;
        if ( v41 )
          SeAuditHandleDuplication(Handle, v30, BugCheckParameter1, v48, v42);
        goto LABEL_36;
      }
      v31 = v48;
    }
    else
    {
      v31 = v48;
      ObpDecrementHandleCount(v48);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      v28 = -1073741670;
    }
    v32 = BugCheckParameter1;
LABEL_36:
    if ( v43 )
      v30 |= 0xFFFFFFFF80000000uLL;
    if ( a4 )
      *a4 = v30;
    if ( v25 )
      SeDeleteAccessState(v25);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v32 + 736));
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v31 + 736));
    v33 = (int)Object;
    if ( (_QWORD *)v55[0] != v55 )
      ObpPostInterceptHandleDuplicate((_DWORD)Object, v43, v28, v46, (__int64)v55);
    if ( (xmmword_140382290 & 0x40) != 0 && v28 >= 0 )
      EtwTraceDuplicateHandle((_DWORD)Handle, v30, v33, *(_DWORD *)(v32 + 744), *(_DWORD *)(v31 + 744), v54);
    return (unsigned int)v28;
  }
  ObpDecrementHandleCount((ULONG_PTR)v35);
  if ( v25 )
    SeDeleteAccessState(v25);
  ExReleaseRundownProtection_0(RunRef);
  ExReleaseRundownProtection_0(v35 + 92);
  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  return (unsigned int)v28;
}
