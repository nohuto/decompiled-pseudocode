/*
 * XREFs of PspCreateProcess @ 0x1404C3BAC
 * Callers:
 *     NtCreateProcessEx @ 0x1404C3B34 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     PspReferenceTokenForNewProcess @ 0x140448388 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x14044869C (SeQuerySigningPolicy.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  NTSTATUS result; // eax
  int v21; // eax
  int v22; // eax
  char v23; // [rsp+70h] [rbp-238h] BYREF
  char v24; // [rsp+71h] [rbp-237h] BYREF
  char v25[6]; // [rsp+72h] [rbp-236h] BYREF
  PVOID Object; // [rsp+78h] [rbp-230h] BYREF
  int v27; // [rsp+80h] [rbp-228h]
  int v28; // [rsp+84h] [rbp-224h] BYREF
  int v29; // [rsp+88h] [rbp-220h]
  PVOID v30; // [rsp+90h] [rbp-218h] BYREF
  PVOID v31; // [rsp+98h] [rbp-210h] BYREF
  PVOID v32; // [rsp+A0h] [rbp-208h]
  HANDLE v33; // [rsp+A8h] [rbp-200h]
  _QWORD *v34; // [rsp+B0h] [rbp-1F8h]
  PVOID v35; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v36[400]; // [rsp+D0h] [rbp-1D8h] BYREF

  v29 = a2;
  v34 = a1;
  v33 = a7;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (a5 & 0xFFFF6840) != 0 || (BYTE2(CurrentThread->ApcState.Process[2].SwapListEntry.Next) & 7) != 0 && PreviousMode )
    return -1073741811;
  memset(v36, 0, sizeof(v36));
  v36[388] = PreviousMode;
  if ( a3 )
  {
    if ( PreviousMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v36[384] = v21;
    }
    else
    {
      v21 = *(_DWORD *)(a3 + 24);
    }
    if ( PreviousMode )
      v22 = v21 & 0x1DF2;
    else
      v22 = v21 & 0x11FF2;
    *(_DWORD *)&v36[384] = v22;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, PreviousMode, &v35, 0LL);
    v12 = v35;
    v32 = v35;
    if ( result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
    v32 = 0LL;
  }
  if ( !a4 )
  {
    Object = 0LL;
LABEL_9:
    inserted = PspReferenceTokenForNewProcess((struct _KPROCESS *)a4, a8, PreviousMode, &v30);
    if ( inserted < 0 )
      goto LABEL_25;
    if ( a4 )
    {
      if ( v12 )
      {
        v23 = 0;
        inserted = SeQuerySigningPolicy(v30, 0LL, 0LL, 0LL, &v24, v25, &v23);
        if ( inserted >= 0 )
        {
          v15 = v24;
          v16 = 1;
          if ( (unsigned __int8)v24 <= 1u )
          {
            v14 = v23;
            if ( !v23 )
            {
LABEL_14:
              v17 = PspAllocateProcess(
                      (ULONG_PTR)a4,
                      PreviousMode,
                      (_QWORD *)a3,
                      v14,
                      v15,
                      v25[0],
                      v12,
                      v30,
                      a5,
                      0LL,
                      a8 != 0LL,
                      (__int64)&v28,
                      &v31);
              inserted = v17;
              if ( v17 >= 0 )
              {
                v18 = v17;
                v27 = v17;
                if ( v28 )
                  v16 = 3;
                v19 = v31;
                inserted = PspInsertProcess((char *)v31, (__int64)a4, v29, a5, v33, v16, 0LL, (__int64)v36);
                if ( inserted >= 0 )
                {
                  inserted = PspCreateObjectHandle(v19, (__int64)v36, (struct _OBJECT_TYPE *)PsProcessType);
                  if ( inserted >= 0 )
                  {
                    *v34 = *(_QWORD *)&v36[392];
                    inserted = v18;
                  }
                  SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)v36);
                }
                if ( inserted < 0 )
                  PspRundownSingleProcess((ULONG_PTR)v19, 0);
                ObfDereferenceObjectWithTag(v19, 0x72437350u);
              }
              goto LABEL_24;
            }
          }
          inserted = -1073741637;
        }
LABEL_24:
        ObfDereferenceObject(v30);
LABEL_25:
        if ( a4 )
          ObfDereferenceObjectWithTag(a4, 0x72437350u);
        goto LABEL_27;
      }
      v14 = *((_BYTE *)a4 + 1722);
      v23 = v14;
      v25[0] = *((_BYTE *)a4 + 1721);
      v15 = *((_BYTE *)a4 + 1720);
    }
    else
    {
      v14 = 98;
      v23 = 98;
      v15 = 30;
      v25[0] = 28;
    }
    v16 = 1;
    v24 = v15;
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
