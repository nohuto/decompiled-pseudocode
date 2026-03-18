/*
 * XREFs of PspQueryWorkingSetWatch @ 0x1406C039C
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 */

NTSTATUS __fastcall PspQueryWorkingSetWatch(
        HANDLE Handle,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        KPROCESSOR_MODE AccessMode)
{
  NTSTATUS result; // eax
  _DWORD *v9; // rdi
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v12; // r15
  signed __int32 v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // r9d
  unsigned int i; // r8d
  __int64 v17; // rdx
  unsigned int j; // edx
  __int16 v19; // ax
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object[3]; // [rsp+68h] [rbp-40h] BYREF

  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return -1073741820;
    v20 = 32;
  }
  else
  {
    v20 = 16;
  }
  if ( ExIsRestrictedCaller(AccessMode) )
    return -1073741790;
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             0x400u,
             (POBJECT_TYPE)PsProcessType,
             AccessMode,
             0x79517350u,
             Object,
             0LL);
  if ( result >= 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)Object[0] + 122);
    if ( !v9 )
    {
      v10 = -1073741823;
LABEL_38:
      ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
      return v10;
    }
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    v12 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw(v9);
    v13 = _InterlockedOr(v9, 1u);
    if ( (v13 & 1) != 0 )
    {
      v10 = -2147483622;
LABEL_34:
      v19 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v19;
      if ( !v19
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_38;
    }
    v14 = (unsigned __int16)v13 >> 1;
    if ( (unsigned __int16)v13 >> 1 )
    {
      if ( (v13 & 0x7FFF0000) != 0 )
        KeWaitForGate(v9 + 4, 0);
      v15 = v20 * (v14 + 1);
      if ( a4 >= v15 )
      {
        _m_prefetchw(v9 + 2);
        v12 = *((_QWORD *)v9 + 1);
        if ( a2 == 42 )
        {
          Object[1] = a3;
          for ( i = 0; i < v14; ++i )
          {
            v17 = 4LL * i;
            *(_OWORD *)&a3[v17] = *(_OWORD *)&v9[6 * i + 10];
            *(_OWORD *)&a3[v17 + 2] = *(unsigned __int64 *)&v9[6 * i + 14];
          }
          a3 += 4 * i;
          a3[2] = 0LL;
          a3[3] = 0LL;
        }
        else
        {
          for ( j = 0; j < v14; ++j )
          {
            *(_OWORD *)a3 = *(_OWORD *)&v9[6 * j + 10];
            a3 += 2;
          }
        }
        *a3 = 0LL;
        a3[1] = v12;
        if ( a5 )
          *a5 = v15;
      }
      else
      {
        v10 = -1073741789;
        if ( a5 )
          *a5 = v15;
      }
      if ( v10 >= 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 1, -v12);
        *v9 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      v10 = -2147483622;
    }
    _interlockedbittestandreset(v9, 0);
    goto LABEL_34;
  }
  return result;
}
