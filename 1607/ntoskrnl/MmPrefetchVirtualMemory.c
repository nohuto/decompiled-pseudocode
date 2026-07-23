/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1404D760C
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1400B4E74 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1404D77A0 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiGetSessionVm @ 0x1400BECF0 (MiGetSessionVm.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObIsKernelHandle @ 0x1401271E4 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1401E858C (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v7; // bl
  PVOID v8; // r14
  void *v9; // r15
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _QWORD *v14; // rax
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  PVOID v16; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  _BYTE v19[48]; // [rsp+60h] [rbp-29h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = a3;
  v18 = a2;
  Object = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_17;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[193] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, 0, 0x66506D4Du, &Object, 0LL) >= 0 )
    {
      p_LockNV = Object;
      if ( CurrentThread->ApcState.Process != Object )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v19);
        v7 = 1;
      }
      goto LABEL_15;
    }
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &v16, 0LL);
    v8 = v16;
    if ( result < 0 )
      return result;
    v14 = MiLockAndSelectSessionAttachProcess(*((_QWORD *)v16 + 3));
    v9 = v14;
    if ( !v14 )
    {
LABEL_30:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v14) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_30;
    }
    SessionVm = MiGetSessionVm();
LABEL_17:
    p_LockNV = Object;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 320);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, SessionVm, a4);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  if ( v9 )
  {
    MmDetachSession((__int64)v9, (__int64)v19);
    ObfDereferenceObject(v9);
  }
  if ( Handle == (char *)-2LL || (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
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
