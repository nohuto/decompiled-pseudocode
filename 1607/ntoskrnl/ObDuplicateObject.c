/*
 * XREFs of ObDuplicateObject @ 0x1404EFB40
 * Callers:
 *     PspPropagateHandle @ 0x14045B6BC (PspPropagateHandle.c)
 *     NtDuplicateObject @ 0x1404EF990 (NtDuplicateObject.c)
 *     PspCopyAndFixupParameters @ 0x1404FE1F8 (PspCopyAndFixupParameters.c)
 *     DbgkpOpenHandles @ 0x1406185C4 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObpFilterOperation @ 0x1400CF5B4 (ObpFilterOperation.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     ObpGrantAccess @ 0x140404638 (ObpGrantAccess.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1404B1840 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     ObpPostInterceptHandleDuplicate @ 0x140667140 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14068DD7C (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1406A1698 (EtwTraceDuplicateHandle.c)
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
  unsigned int v10; // edi
  char v11; // r14
  ACCESS_MASK v12; // r12d
  int v13; // esi
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rax
  ACCESS_MASK v17; // r13d
  int v18; // edi
  __int64 v19; // rsi
  int v20; // eax
  __int64 ClientToken; // r12
  struct _ACCESS_STATE *v22; // rsi
  ULONG_PTR v23; // r13
  int v24; // ebx
  bool v25; // zf
  struct _EX_RUNDOWN_REF *v26; // r14
  __int64 v27; // r14
  ULONG_PTR v28; // rdi
  int v29; // esi
  struct _EX_RUNDOWN_REF *v31; // rcx
  __int64 v32; // rbx
  void *v33; // r8
  char v34; // al
  ULONG_PTR v35; // r14
  struct _EX_RUNDOWN_REF *v36; // r14
  void **v37; // rdx
  char v38; // al
  unsigned __int8 v39; // [rsp+40h] [rbp-C0h]
  char v40; // [rsp+41h] [rbp-BFh]
  ACCESS_MASK v41; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  _QWORD v50[2]; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  ACCESS_MASK v52; // [rsp+9Ch] [rbp-64h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  _BYTE v54[56]; // [rsp+A8h] [rbp-58h] BYREF
  struct _ACCESS_STATE v55; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56[28]; // [rsp+180h] [rbp+80h] BYREF

  v46 = a3;
  Handle = a2;
  BugCheckParameter1 = (ULONG_PTR)a1;
  if ( (a6 & 0x200) != 0 && !a8 )
    v46 = (ULONG_PTR)PsInitialSystemProcess;
  v10 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v11 = a7;
  v12 = AccessMask;
  v13 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = ObReferenceProcessHandleTable(a1);
  if ( v14 )
  {
    v42 = ObpReferenceProcessObjectByHandle(
            (_DWORD)Handle,
            (_DWORD)a1,
            v14,
            a8,
            1850237519,
            (__int64)&Object,
            (__int64)&v51,
            (__int64)&v48);
    if ( (v42 & 0x80000000) != 0 )
    {
      ExReleaseRundownProtection(a1 + 92);
      return v42;
    }
    v15 = v51;
    if ( (v51 & 4) == 0 )
      v48 = 0;
    if ( !v46 )
    {
      v25 = (v11 & 1) == 0;
      v35 = BugCheckParameter1;
      if ( v25 )
      {
        v24 = -1073741811;
      }
      else
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v54);
        NtClose(Handle);
        KiUnstackDetachProcess((struct _KTHREAD *)v54, 0);
        v24 = v42;
      }
      v31 = (struct _EX_RUNDOWN_REF *)(v35 + 736);
      goto LABEL_52;
    }
    v16 = ObReferenceProcessHandleTable(v46);
    v53 = v16;
    if ( v16 )
    {
      v39 = v16 == ObpKernelHandleTable;
      v17 = v52;
      if ( v13 )
      {
        v12 = v52;
        AccessMask = v52;
      }
      if ( (v11 & 4) != 0 )
        v18 = v15;
      else
        v18 = v15 & 0xC | v10;
      if ( (v11 & 8) != 0 )
        v18 |= 8u;
      v47 = (__int64)Object - 48;
      v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
      v49 = v19;
      if ( (v12 & 0xF0000000) != 0 )
      {
        RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v19 + 76));
        v12 = AccessMask;
      }
      v20 = v12 & (*(_DWORD *)(v19 + 92) | 0x1000000);
      ClientToken = 0LL;
      v41 = v20;
      v22 = 0LL;
      v40 = 0;
      if ( (~v17 & v20) != 0 )
      {
        if ( (v15 & 8) != 0
          || (v32 = v49,
              *(__int64 (__fastcall **)(void *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v49 + 152) != SeDefaultObjectMethod) )
        {
          v23 = v46;
          v24 = -1073741790;
LABEL_24:
          v25 = (v11 & 1) == 0;
          v26 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
          if ( !v25 )
          {
            KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v54);
            NtClose(Handle);
            KiUnstackDetachProcess((struct _KTHREAD *)v54, 0);
          }
          if ( v24 < 0 )
          {
            if ( v22 )
              SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v22);
          }
          else
          {
            if ( v22 && v22->GenerateOnClose )
            {
              v18 |= 4u;
              v48 = *((_DWORD *)v22->AuxData + 7);
            }
            v50[1] = v50;
            v50[0] = v50;
            if ( !ObpFilterOperation(v49) )
            {
LABEL_29:
              v27 = ExCreateHandleEx(v53, v47, v41, v18, (__int64)&v48);
              if ( v27 )
              {
                if ( v22 )
                {
                  v33 = 0LL;
                  v34 = *(_BYTE *)(v47 + 26);
                  if ( (v34 & 0x20) != 0 )
                  {
                    v37 = (void **)(v47 - ObpInfoMaskToOffset[v34 & 0x3F]);
                    if ( v37 )
                      v33 = *v37;
                  }
                  SeAuditHandleCreation((__int64)v22, (void *)v27, v33);
                }
                if ( (v18 & 4) != 0 )
                {
                  if ( v22 )
                  {
                    ClientToken = (__int64)v22->SubjectSecurityContext.ClientToken;
                    if ( !ClientToken )
                      ClientToken = (__int64)v22->SubjectSecurityContext.PrimaryToken;
                  }
                  v38 = SeAuditingWithTokenForSubcategory(124, ClientToken);
                  v28 = BugCheckParameter1;
                  if ( v38 )
                    SeAuditHandleDuplication(Handle, v27, BugCheckParameter1, v23);
                  goto LABEL_33;
                }
              }
              else
              {
                ObpDecrementHandleCount((_KPROCESS *)v23, v47);
                ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                v24 = -1073741670;
              }
              v28 = BugCheckParameter1;
LABEL_33:
              if ( v39 )
                v27 |= 0xFFFFFFFF80000000uLL;
              if ( a4 )
                *a4 = v27;
              if ( v22 )
                SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v22);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v28 + 736));
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v23 + 736));
              v29 = (int)Object;
              if ( (_QWORD *)v50[0] != v50 )
                ObpPostInterceptHandleDuplicate((_DWORD)Object, v39, v24, v41, (__int64)v50);
              if ( (xmmword_1403AA2D0 & 0x40) != 0 && v24 >= 0 )
                EtwTraceDuplicateHandle((_DWORD)Handle, v27, v29, *(_DWORD *)(v28 + 744), *(_DWORD *)(v23 + 744), v49);
              return (unsigned int)v24;
            }
            v42 = v41;
            v24 = ObpPreInterceptHandleDuplicate((__int64)Object, v39, (int *)&v42, (__int64)v26, v23, (__int64)v50);
            if ( v24 >= 0 )
            {
              if ( !v39 )
                v41 = v42;
              goto LABEL_29;
            }
            ObpDecrementHandleCount((_KPROCESS *)v23, v47);
            if ( v22 )
              SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v22);
          }
          ExReleaseRundownProtection(v26 + 92);
          v31 = (struct _EX_RUNDOWN_REF *)(v23 + 736);
LABEL_52:
          ExReleaseRundownProtection(v31);
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return (unsigned int)v24;
        }
        v23 = v46;
        if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v46 )
        {
          KiStackAttachProcess((_KPROCESS *)v46, 0, (__int64)v54);
          v40 = 1;
        }
        SeCreateAccessState(&v55, v56, v41, (GENERIC_MAPPING *)(v32 + 76));
        v22 = &v55;
        v24 = ObpGrantAccess(2, (char *)Object, &v55, a8, v18, &v41);
        if ( v24 < 0 )
        {
LABEL_22:
          if ( v40 )
            KiUnstackDetachProcess((struct _KTHREAD *)v54, 0);
          goto LABEL_24;
        }
      }
      else
      {
        v23 = v46;
      }
      v24 = ObpIncrementHandleCountEx(2u, (__int64)&v41, (struct _KPROCESS *)v23, (__int64)Object, a8, v18, 0LL);
      goto LABEL_22;
    }
    v25 = (v11 & 1) == 0;
    v36 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
    if ( !v25 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v54);
      NtClose(Handle);
      KiUnstackDetachProcess((struct _KTHREAD *)v54, 0);
    }
    ExReleaseRundownProtection(v36 + 92);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  }
  return 3221225738LL;
}
