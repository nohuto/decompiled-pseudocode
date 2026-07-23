/*
 * XREFs of PspQueryWorkingSetWatch @ 0x14067DAC4
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1404D3730 (ExIsRestrictedCaller.c)
 */

NTSTATUS __fastcall PspQueryWorkingSetWatch(
        HANDLE Handle,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        KPROCESSOR_MODE AccessMode)
{
  NTSTATUS result; // eax
  int v9; // r13d
  __int64 j; // rdx
  __int64 i; // r8
  __int64 v12; // r9
  PVOID v13; // rcx
  __int64 v14; // rbx
  int v15; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v17; // r14
  signed __int32 v18; // eax
  unsigned int v19; // r15d
  PVOID Object[3]; // [rsp+68h] [rbp-40h] BYREF

  if ( a2 == 42 )
  {
    if ( (a4 & 0x1F) != 0 )
      return -1073741820;
    v9 = 32;
  }
  else
  {
    v9 = 16;
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
    v13 = Object[0];
    v14 = *((_QWORD *)Object[0] + 122);
    if ( !v14 )
    {
      v15 = -1073741823;
LABEL_35:
      ObfDereferenceObjectWithTag(v13, 0x79517350u);
      return v15;
    }
    CurrentThread = KeGetCurrentThread();
    v15 = 0;
    v17 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v14);
    v18 = _InterlockedOr((volatile signed __int32 *)v14, 1u);
    if ( (v18 & 1) != 0 )
    {
      v15 = -2147483622;
LABEL_34:
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, j, i, v12);
      v13 = Object[0];
      goto LABEL_35;
    }
    v19 = (unsigned __int16)v18 >> 1;
    if ( (unsigned __int16)v18 >> 1 )
    {
      if ( (v18 & 0x7FFF0000) != 0 )
        KeWaitForGate(v14 + 16, 0);
      v12 = v9 * (v19 + 1);
      if ( a4 >= (unsigned int)v12 )
      {
        _m_prefetchw((const void *)(v14 + 8));
        v17 = *(_QWORD *)(v14 + 8);
        if ( a2 == 42 )
        {
          Object[1] = a3;
          for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
          {
            j = 32LL * (unsigned int)i;
            *(_OWORD *)((char *)a3 + j) = *(_OWORD *)(v14 + 24 * i + 40);
            *(_QWORD *)((char *)a3 + j + 16) = *(_QWORD *)(v14 + 24 * i + 56);
            *(_QWORD *)((char *)a3 + j + 24) = 0LL;
          }
          a3 += 4 * (unsigned int)i;
          a3[2] = 0LL;
          a3[3] = 0LL;
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < v19; j = (unsigned int)(j + 1) )
          {
            *(_OWORD *)a3 = *(_OWORD *)(v14 + 24 * j + 40);
            a3 += 2;
          }
        }
        *a3 = 0LL;
        a3[1] = v17;
        if ( a5 )
          *a5 = v12;
      }
      else
      {
        v15 = -1073741789;
        if ( a5 )
          *a5 = v12;
      }
      if ( v15 >= 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8), -v17);
        *(_DWORD *)v14 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      v15 = -2147483622;
    }
    _interlockedbittestandreset((volatile signed __int32 *)v14, 0);
    goto LABEL_34;
  }
  return result;
}
