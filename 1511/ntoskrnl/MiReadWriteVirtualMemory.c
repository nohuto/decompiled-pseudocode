/*
 * XREFs of MiReadWriteVirtualMemory @ 0x14047AA60
 * Callers:
 *     NtReadVirtualMemory @ 0x14047AA40 (NtReadVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1404B4884 (NtWriteVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        HANDLE Handle,
        size_t a2,
        size_t a3,
        size_t a4,
        ULONG64 a5,
        ACCESS_MASK DesiredAccess)
{
  int v7; // r13d
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // al
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  NTSTATUS v14; // edi
  _KPROCESS *Process; // rcx
  PVOID v16; // r15
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  char v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF

  v7 = a3;
  v8 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v21 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 + a4 < a2
      || a4 + a3 < a3
      || a2 + a4 > (unsigned __int64)MmHighestUserAddress
      || a4 + a3 > (unsigned __int64)MmHighestUserAddress )
    {
      return 3221225477LL;
    }
    v12 = (_QWORD *)a5;
    if ( a5 )
    {
      v13 = (_QWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
    }
  }
  else
  {
    v12 = (_QWORD *)a5;
  }
  v22 = 0LL;
  v14 = 0;
  if ( a4 )
  {
    v14 = ObReferenceObjectByHandleWithTag(
            Handle,
            DesiredAccess,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL);
    if ( v14 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v16 = Object;
      if ( !*((_QWORD *)Object + 90) || Process == Object || *((_QWORD *)Object + 132) )
      {
        if ( DesiredAccess == 16 )
        {
          v17 = v7;
          v18 = (int)Process;
          v19 = v8;
          LODWORD(Process) = (_DWORD)Object;
        }
        else
        {
          v17 = v8;
          v18 = (int)Object;
          v19 = v7;
        }
        v14 = MmCopyVirtualMemory((int)Process, v19, v18, v17, a4, v21, (__int64)&v22);
      }
      else
      {
        v14 = -1073741819;
      }
      ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
    }
  }
  if ( v12 )
    *v12 = v22;
  return (unsigned int)v14;
}
