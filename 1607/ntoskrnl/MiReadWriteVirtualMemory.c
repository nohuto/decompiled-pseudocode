/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1404EEBF0
 * Callers:
 *     NtWriteVirtualMemory @ 0x1404BF534 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x1404EEBD0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x14020EF78 (PsIsProcessLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     EtwTiLogReadWriteVm @ 0x1406A5CCC (EtwTiLogReadWriteVm.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  char PreviousMode; // al
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rdi
  int v15; // ebx
  _KPROCESS *Process; // r13
  PVOID v17; // rsi
  _KPROCESS *v18; // rcx
  int v19; // eax
  int v20; // edx
  char v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v21 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 + a4 < a2 || a3 + a4 < a3 || a2 + a4 > 0x7FFFFFFEFFFFLL || a3 + a4 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v11 = (_QWORD *)a5;
    if ( a5 )
    {
      v12 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
  }
  else
  {
    v11 = (_QWORD *)a5;
  }
  v14 = 0LL;
  v22 = 0LL;
  v15 = 0;
  if ( a4 )
  {
    v15 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            a6,
            (__int64)PsProcessType,
            PreviousMode,
            1834380621,
            Object,
            0LL,
            0LL);
    if ( v15 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v17 = Object[0];
      if ( !*((_QWORD *)Object[0] + 90) || Process == Object[0] || *((_QWORD *)Object[0] + 132) )
      {
        if ( a6 == 16 )
          v18 = (_KPROCESS *)Object[0];
        else
          v18 = Process;
        v19 = MmCopyVirtualMemory((ULONG_PTR)v18, a4, v21, (__int64)&v22);
        v14 = v22;
        v15 = v19;
      }
      else
      {
        v15 = -1073741819;
      }
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)v17, a6) )
        EtwTiLogReadWriteVm(v15, (_DWORD)Process, (_DWORD)v17, v20, v7, v14);
      ObfDereferenceObjectWithTag(v17, 0x6D566D4Du);
    }
  }
  if ( v11 )
    *v11 = v14;
  return (unsigned int)v15;
}
