/*
 * XREFs of NtCreateEnclave @ 0x14062A184
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x14062379C (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  _OWORD *v11; // rbx
  PVOID PoolWithTag; // r14
  KPROCESSOR_MODE PreviousMode; // di
  _DWORD *v14; // rcx
  int v15; // ebx
  _QWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-B8h]
  PVOID Object[7]; // [rsp+68h] [rbp-B0h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v25; // [rsp+A0h] [rbp-78h] BYREF

  Handle = a1;
  Object[6] = a2;
  v22 = a3;
  v11 = (_OWORD *)a7;
  Object[1] = a9;
  v21 = 0LL;
  PoolWithTag = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v14 = a9;
    if ( (unsigned __int64)a9 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
  }
  if ( a6 == 1 && MiEnclaveRegions )
  {
    if ( (int)MiValidateZeroBits((ULONGLONG *)&v22) < 0 )
    {
      v15 = -1073741583;
      goto LABEL_32;
    }
    if ( !a4 )
    {
      v15 = -1073741582;
      goto LABEL_32;
    }
    if ( a5 > a4 )
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
    Object[2] = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      goto LABEL_32;
    }
    if ( PreviousMode == 1 )
    {
      v16 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = *v16;
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
      Object[0] = Process;
    }
    else
    {
      v15 = ObReferenceObjectByHandleWithTag(
              Handle,
              8u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              Object,
              0LL);
      if ( v15 < 0 )
        goto LABEL_32;
      Process = (_KPROCESS *)Object[0];
      KiStackAttachProcess((_KPROCESS *)Object[0], 0LL, (__int64)&v25);
    }
    v15 = MiCreateEnclave((char)Process, &v21, v22, a4, a5, (__int64)PoolWithTag);
    if ( Handle != (HANDLE)-1LL )
    {
      KiUnstackDetachProcess(&v25, 0LL);
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
