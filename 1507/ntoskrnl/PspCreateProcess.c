/*
 * XREFs of PspCreateProcess @ 0x14055AE78
 * Callers:
 *     NtCreateProcessEx @ 0x14055AE00 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspCreateObjectHandle @ 0x140421204 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     SeQuerySigningPolicy @ 0x14050B2FC (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14050B78C (PspReferenceTokenForNewProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        int a2,
        __int64 a3,
        PVOID a4,
        unsigned int a5,
        HANDLE Handle,
        void *a7,
        void *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  PVOID v12; // rsi
  int inserted; // ebx
  char v14; // r9
  char v15; // cl
  char v16; // r15
  int v17; // eax
  int v18; // r12d
  PVOID v19; // r14
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS result; // eax
  int v23; // eax
  int v24; // eax
  char v25; // [rsp+70h] [rbp-238h] BYREF
  char v26; // [rsp+71h] [rbp-237h] BYREF
  char v27[6]; // [rsp+72h] [rbp-236h] BYREF
  PVOID Object; // [rsp+78h] [rbp-230h] BYREF
  int v29; // [rsp+80h] [rbp-228h]
  int v30; // [rsp+84h] [rbp-224h] BYREF
  int v31; // [rsp+88h] [rbp-220h]
  PVOID v32; // [rsp+90h] [rbp-218h] BYREF
  PVOID v33; // [rsp+98h] [rbp-210h] BYREF
  PVOID v34; // [rsp+A0h] [rbp-208h]
  HANDLE v35; // [rsp+A8h] [rbp-200h]
  _QWORD *v36; // [rsp+B0h] [rbp-1F8h]
  PVOID v37; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v38[400]; // [rsp+D0h] [rbp-1D8h] BYREF

  v31 = a2;
  v36 = a1;
  v35 = a7;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (a5 & 0xFFFF6840) != 0
    || (BYTE2(CurrentThread->ApcState.Process[2].ReadyListHead.Blink) & 7) != 0 && PreviousMode )
  {
    return -1073741811;
  }
  memset(v38, 0, sizeof(v38));
  v38[388] = PreviousMode;
  if ( a3 )
  {
    if ( PreviousMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v38[384] = v23;
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 24);
    }
    if ( PreviousMode )
      v24 = v23 & 0xDF2;
    else
      v24 = v23 & 0x10FF2;
    *(_DWORD *)&v38[384] = v24;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, PreviousMode, &v37, 0LL);
    v12 = v37;
    v34 = v37;
    if ( result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
    v34 = 0LL;
  }
  if ( !a4 )
  {
    Object = 0LL;
LABEL_9:
    inserted = PspReferenceTokenForNewProcess((struct _KPROCESS *)a4, a8, PreviousMode, &v32);
    if ( inserted < 0 )
      goto LABEL_25;
    if ( a4 )
    {
      if ( v12 )
      {
        v25 = 0;
        inserted = SeQuerySigningPolicy(v32, 0LL, 0LL, 0LL, &v26, v27, &v25);
        if ( inserted >= 0 )
        {
          v15 = v26;
          v16 = 1;
          if ( (unsigned __int8)v26 <= 1u )
          {
            v14 = v25;
            if ( !v25 )
            {
LABEL_14:
              v17 = PspAllocateProcess(
                      (ULONG_PTR)a4,
                      PreviousMode,
                      (volatile signed __int32 *)a3,
                      v14,
                      v15,
                      v27[0],
                      v12,
                      v32,
                      a5,
                      0LL,
                      a8 != 0LL,
                      (__int64)&v30,
                      &v33);
              inserted = v17;
              if ( v17 >= 0 )
              {
                v18 = v17;
                v29 = v17;
                if ( v30 )
                  v16 = 3;
                v19 = v33;
                inserted = PspInsertProcess((char *)v33, (__int64)a4, v31, a5, v35, v16, 0LL, (__int64)v38);
                if ( inserted >= 0 )
                {
                  inserted = PspCreateObjectHandle(v19, (__int64)v38, (struct _OBJECT_TYPE *)PsProcessType);
                  if ( inserted >= 0 )
                  {
                    *v36 = *(_QWORD *)&v38[392];
                    inserted = v18;
                  }
                  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v38);
                }
                if ( inserted < 0 )
                  PspRundownSingleProcess((ULONG_PTR)v19, 0LL, v20, v21);
                ObfDereferenceObjectWithTag(v19, 0x72437350u);
              }
              goto LABEL_24;
            }
          }
          inserted = -1073741637;
        }
LABEL_24:
        ObfDereferenceObject(v32);
LABEL_25:
        if ( a4 )
          ObfDereferenceObjectWithTag(a4, 0x72437350u);
        goto LABEL_27;
      }
      v14 = *((_BYTE *)a4 + 1714);
      v25 = v14;
      v27[0] = *((_BYTE *)a4 + 1713);
      v15 = *((_BYTE *)a4 + 1712);
    }
    else
    {
      v14 = 98;
      v25 = 98;
      v15 = 30;
      v27[0] = 28;
    }
    v16 = 1;
    v26 = v15;
    goto LABEL_14;
  }
  inserted = ObReferenceObjectByHandleWithTag(
               a4,
               0x80u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    a4 = Object;
    goto LABEL_9;
  }
LABEL_27:
  if ( v12 )
    ObfDereferenceObject(v12);
  return inserted;
}
