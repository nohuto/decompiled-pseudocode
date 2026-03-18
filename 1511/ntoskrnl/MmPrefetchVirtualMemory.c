/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1404B70E8
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x140001DD4 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1404B7048 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ObIsKernelHandle @ 0x140107604 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_1401D6A98 @ 0x1401D6A98 (sub_1401D6A98.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v7; // bl
  PVOID v8; // r14
  void *v9; // r15
  _DWORD *p_LockNV; // rsi
  __int64 v11; // r8
  int v12; // edi
  NTSTATUS result; // eax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h]
  unsigned __int64 v18; // [rsp+50h] [rbp-39h]
  PVOID v19; // [rsp+58h] [rbp-31h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+60h] [rbp-29h] BYREF

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
    goto LABEL_17;
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
        KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v20);
        v7 = 1;
      }
      goto LABEL_15;
    }
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &v19, 0LL);
    v8 = v19;
    if ( result < 0 )
      return result;
    v14 = *((_QWORD *)v19 + 3);
    v15 = sub_1401D6A98(v14);
    v9 = v15;
    if ( !v15 )
    {
LABEL_30:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v15) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_30;
    }
    v11 = v14 + 2968;
LABEL_17:
    p_LockNV = Object;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  v11 = (__int64)(p_LockNV + 320);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, v11, a4);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v20, 0LL);
  if ( v9 )
  {
    MmDetachSession((__int64)v9, (__int64)&v20);
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
