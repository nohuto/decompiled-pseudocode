/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1404FB458
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1400DE9DC (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1404FB384 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x14055C5B0 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     ObIsKernelHandle @ 0x140131C00 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140218F78 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v7; // bl
  PVOID v8; // r14
  _KPROCESS *v9; // r15
  _DWORD *p_LockNV; // rsi
  __int64 v11; // r8
  int v12; // edi
  NTSTATUS result; // eax
  __int64 v14; // rsi
  _KPROCESS *v15; // rax
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h]
  unsigned __int64 v18; // [rsp+50h] [rbp-39h]
  PVOID v19; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v20[48]; // [rsp+60h] [rbp-29h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = a3;
  v18 = a2;
  Object = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( !Handle )
  {
    v11 = 1LL;
    goto LABEL_31;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[193] & 0x10000) == 0 )
        return -1073741799;
      v11 = *((_QWORD *)p_LockNV + 128) + 2968LL;
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, 0, 0x66506D4Du, &Object, 0LL) >= 0 )
    {
      p_LockNV = Object;
      if ( CurrentThread->ApcState.Process != Object )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v20);
        v7 = 1;
      }
      goto LABEL_15;
    }
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &v19, 0LL);
    v8 = v19;
    if ( result < 0 )
      return result;
    v14 = *((_QWORD *)v19 + 3);
    v15 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(v14);
    v9 = v15;
    if ( !v15 )
    {
LABEL_29:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession(v15, (__int64)v20) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_29;
    }
    v11 = v14 + 2968;
LABEL_31:
    p_LockNV = Object;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  v11 = (__int64)(p_LockNV + 318);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, v11, a4);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
  if ( v9 )
  {
    MmDetachSession((__int64)v9, (struct _KTHREAD *)v20);
    ObfDereferenceObject(v9);
  }
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL || Handle == (char *)-2LL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v8 )
    {
      ObfDereferenceObject(v8);
    }
  }
  return v12;
}
