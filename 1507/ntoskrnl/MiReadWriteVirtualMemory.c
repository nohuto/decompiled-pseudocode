/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1404BD6B0
 * Callers:
 *     NtReadVirtualMemory @ 0x1404BD684 (NtReadVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x140548274 (NtWriteVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        HANDLE Handle,
        SIZE_T a2,
        unsigned __int64 a3,
        SIZE_T a4,
        ULONG64 a5,
        ACCESS_MASK DesiredAccess)
{
  int v7; // r13d
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  NTSTATUS v16; // ebx
  _KPROCESS *Process; // rcx
  PVOID v18; // r15
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  char v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF

  v7 = a3;
  v8 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v23 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = a2 + a4;
    if ( a2 + a4 < a2 )
      return 3221225477LL;
    v13 = a3 + a4;
    if ( v13 < a3 || v12 > (unsigned __int64)MmHighestUserAddress || v13 > (unsigned __int64)MmHighestUserAddress )
      return 3221225477LL;
    v14 = (_QWORD *)a5;
    if ( a5 )
    {
      v15 = (_QWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
      PreviousMode = v23;
    }
    else
    {
      PreviousMode = v23;
    }
  }
  else
  {
    v14 = (_QWORD *)a5;
  }
  v24 = 0LL;
  v16 = 0;
  if ( a4 )
  {
    v16 = ObReferenceObjectByHandleWithTag(
            Handle,
            DesiredAccess,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL);
    if ( v16 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v18 = Object;
      if ( !*((_QWORD *)Object + 90) || Process == Object || *((_QWORD *)Object + 132) )
      {
        if ( DesiredAccess == 16 )
        {
          v19 = v7;
          v20 = (int)Process;
          v21 = v8;
          LODWORD(Process) = (_DWORD)Object;
        }
        else
        {
          v19 = v8;
          v20 = (int)Object;
          v21 = v7;
        }
        v16 = MmCopyVirtualMemory((int)Process, v21, v20, v19, a4, v23, (__int64)&v24);
      }
      else
      {
        v16 = -1073741819;
      }
      ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
    }
  }
  if ( v14 )
    *v14 = v24;
  return (unsigned int)v16;
}
