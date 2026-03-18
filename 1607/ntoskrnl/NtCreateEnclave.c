/*
 * XREFs of NtCreateEnclave @ 0x14065F8F8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x140658DCC (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x14065EF30 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateEnclave(
        void *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  _OWORD *v11; // rdi
  _OWORD *PoolWithTag; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *Process; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-B8h]
  __int64 v24; // [rsp+68h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-A8h]
  _DWORD *v26; // [rsp+78h] [rbp-A0h]
  _OWORD *v27; // [rsp+88h] [rbp-90h]
  unsigned __int64 *v28; // [rsp+90h] [rbp-88h]
  _BYTE v29[48]; // [rsp+A8h] [rbp-70h] BYREF

  v23 = a4;
  Handle = a1;
  v28 = a2;
  v24 = a3;
  v11 = (_OWORD *)a7;
  v26 = a9;
  v21 = 0LL;
  PoolWithTag = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v14 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( a6 == 1 && qword_140326A98 )
  {
    if ( (int)MiValidateZeroBits((ULONGLONG *)&v24) < 0 )
    {
      v15 = -1073741583;
      goto LABEL_32;
    }
    if ( !a4 )
    {
      v15 = -1073741582;
      goto LABEL_32;
    }
    if ( a5 > v23 )
    {
      v15 = -1073741581;
      goto LABEL_32;
    }
    if ( a8 != 4096 )
    {
      v15 = -1073741820;
      goto LABEL_32;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      goto LABEL_32;
    }
    if ( PreviousMode == 1 )
    {
      v16 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      if ( (a7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v21 = *a2;
    v17 = PoolWithTag;
    v18 = 32LL;
    do
    {
      *v17 = *v11;
      v17[1] = v11[1];
      v17[2] = v11[2];
      v17[3] = v11[3];
      v17[4] = v11[4];
      v17[5] = v11[5];
      v17[6] = v11[6];
      v17 += 8;
      *(v17 - 1) = v11[7];
      v11 += 8;
      --v18;
    }
    while ( v18 );
    if ( Handle == (HANDLE)-1LL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      Object = Process;
    }
    else
    {
      v15 = ObReferenceObjectByHandleWithTag(
              Handle,
              8u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL);
      if ( v15 < 0 )
        goto LABEL_32;
      Process = Object;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v29);
    }
    v15 = MiCreateEnclave((char)Process, &v21, v24, v23, a5, (__int64)PoolWithTag);
    if ( Handle != (HANDLE)-1LL )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
  }
  else
  {
    v15 = -1073741637;
  }
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 >= 0 )
    *a2 = v21;
  if ( a9 )
    *a9 = 0;
  return (unsigned int)v15;
}
