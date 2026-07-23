/*
 * XREFs of PspCreateProcess @ 0x1404CDA18
 * Callers:
 *     NtCreateProcessEx @ 0x1404CD99C (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14045BE54 (PspReferenceTokenForNewProcess.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspCreateObjectHandle @ 0x1404FA2C4 (PspCreateObjectHandle.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        HANDLE Handle,
        void *a7,
        void *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r13
  PVOID v12; // r15
  int MinimalProcess; // edi
  _DWORD *v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  char v17; // al
  char v18; // dl
  int v19; // eax
  int v20; // r13d
  char v21; // al
  PVOID v22; // r14
  NTSTATUS result; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  int Object; // [rsp+28h] [rbp-280h]
  char v30; // [rsp+70h] [rbp-238h] BYREF
  char v31; // [rsp+71h] [rbp-237h] BYREF
  char v32[2]; // [rsp+72h] [rbp-236h] BYREF
  int v33; // [rsp+74h] [rbp-234h]
  PVOID v34; // [rsp+78h] [rbp-230h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-228h]
  PVOID v36; // [rsp+88h] [rbp-220h] BYREF
  __int64 v37; // [rsp+90h] [rbp-218h]
  _QWORD *v38; // [rsp+98h] [rbp-210h]
  PVOID v39; // [rsp+A0h] [rbp-208h]
  PVOID v40; // [rsp+A8h] [rbp-200h] BYREF
  PVOID v41; // [rsp+B0h] [rbp-1F8h] BYREF
  int v42; // [rsp+B8h] [rbp-1F0h] BYREF
  HANDLE v43; // [rsp+C0h] [rbp-1E8h]
  _BYTE AccessState[400]; // [rsp+D0h] [rbp-1D8h] BYREF

  v35 = a2;
  v38 = a1;
  v43 = a7;
  v37 = (__int64)a8;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (a5 & 0xFFFF4040) != 0
    || (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 && PreviousMode )
  {
    return -1073741811;
  }
  if ( (a5 & 0x6000) == 0x4000 || (a5 & 0x2800) == 0x2000 )
    return -1073741811;
  v33 = a5 & 0x800;
  if ( (a5 & 0x800) != 0 )
  {
    if ( PreviousMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v26 = *(_QWORD *)(a3 + 16);
      if ( !v26
        || !*(_QWORD *)(v26 + 8)
        || !*(_WORD *)v26
        || *(_DWORD *)(a3 + 24)
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a7 || !a4 )
      return -1073741811;
  }
  memset(AccessState, 0, sizeof(AccessState));
  AccessState[388] = PreviousMode;
  if ( a3 )
  {
    if ( PreviousMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&AccessState[384] = v24;
    }
    else
    {
      v24 = *(_DWORD *)(a3 + 24);
    }
    if ( PreviousMode )
      v25 = v24 & 0x1DF2;
    else
      v25 = v24 & 0x11FF2;
    *(_DWORD *)&AccessState[384] = v25;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, PreviousMode, &v41, 0LL);
    v12 = v41;
    v39 = v41;
    if ( result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
    v39 = 0LL;
  }
  if ( !a4 )
  {
    v14 = 0LL;
    v36 = 0LL;
LABEL_12:
    MinimalProcess = PspReferenceTokenForNewProcess((struct _KPROCESS *)v14, a8, PreviousMode, &v34);
    if ( MinimalProcess < 0 )
      goto LABEL_29;
    v16 = (unsigned __int64)v34;
    if ( v14 )
    {
      if ( v12 )
      {
        v30 = 0;
        LOBYTE(v15) = 0;
        MinimalProcess = SeQuerySigningPolicy(v34, 0LL, 0LL, v15, &v31, v32, &v30);
        if ( MinimalProcess >= 0 )
        {
          v18 = v31;
          if ( (unsigned __int8)v31 <= 1u )
          {
            v17 = v30;
            if ( !v30 )
            {
LABEL_17:
              if ( v33 )
              {
                v27 = -v37;
                if ( a3 )
                  v28 = *(_QWORD *)(a3 + 16);
                else
                  v28 = 0LL;
                LOBYTE(Object) = 0;
                LOBYTE(v27) = v17;
                MinimalProcess = PsCreateMinimalProcess(v14, v28, v27, v16 & -(__int64)(v37 != 0), a5, Object, v38);
              }
              else
              {
                v19 = PspAllocateProcess(
                        v14,
                        PreviousMode,
                        (volatile signed __int32 *)a3,
                        v17,
                        v18,
                        v32[0],
                        (__int64)v12,
                        (void *)v16,
                        a5,
                        0LL,
                        v37 != 0,
                        (__int64)&v42,
                        &v40);
                MinimalProcess = v19;
                if ( v19 >= 0 )
                {
                  v20 = v19;
                  v33 = v19;
                  v21 = 1;
                  if ( v42 )
                    v21 = 3;
                  v22 = v40;
                  MinimalProcess = PspInsertProcess(
                                     (char *)v40,
                                     (__int64)v14,
                                     v35,
                                     a5,
                                     v43,
                                     v21,
                                     0LL,
                                     (struct _SECURITY_SUBJECT_CONTEXT *)AccessState);
                  if ( MinimalProcess >= 0 )
                  {
                    MinimalProcess = PspCreateObjectHandle(v22, AccessState, PsProcessType);
                    if ( MinimalProcess >= 0 )
                    {
                      *v38 = *(_QWORD *)&AccessState[392];
                      MinimalProcess = v20;
                    }
                    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)AccessState);
                  }
                  if ( MinimalProcess < 0 )
                    PspRundownSingleProcess((ULONG_PTR)v22, 0);
                  ObfDereferenceObjectWithTag(v22, 0x72437350u);
                }
              }
              goto LABEL_28;
            }
          }
          MinimalProcess = -1073741637;
        }
LABEL_28:
        ObfDereferenceObject((PVOID)v16);
LABEL_29:
        if ( v14 )
          ObfDereferenceObjectWithTag(v14, 0x72437350u);
        goto LABEL_31;
      }
      v17 = *((_BYTE *)v14 + 1738);
      v30 = v17;
      v32[0] = *((_BYTE *)v14 + 1737);
      v18 = *((_BYTE *)v14 + 1736);
    }
    else
    {
      v17 = 114;
      v30 = 114;
      v18 = 30;
      v32[0] = 28;
    }
    v31 = v18;
    goto LABEL_17;
  }
  MinimalProcess = ObReferenceObjectByHandleWithTag(
                     a4,
                     0x80u,
                     (POBJECT_TYPE)PsProcessType,
                     PreviousMode,
                     0x72437350u,
                     &v36,
                     0LL);
  if ( MinimalProcess >= 0 )
  {
    v14 = v36;
    goto LABEL_12;
  }
LABEL_31:
  if ( v12 )
    ObfDereferenceObject(v12);
  return MinimalProcess;
}
