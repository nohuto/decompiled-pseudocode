/*
 * XREFs of PspQueryWorkingSetWatch @ 0x14063F290
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
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
  int v9; // r13d
  PVOID v10; // rcx
  __int64 v11; // rbx
  int v12; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r14
  signed __int32 v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // r9d
  __int64 i; // r8
  __int64 v19; // rdx
  __int64 j; // rdx
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
    v10 = Object[0];
    v11 = *((_QWORD *)Object[0] + 122);
    if ( !v11 )
    {
      v12 = -1073741823;
LABEL_35:
      ObfDereferenceObjectWithTag(v10, 0x79517350u);
      return v12;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    v14 = 0LL;
    --CurrentThread->KernelApcDisable;
    _m_prefetchw((const void *)v11);
    v15 = _InterlockedOr((volatile signed __int32 *)v11, 1u);
    if ( (v15 & 1) != 0 )
    {
      v12 = -2147483622;
LABEL_34:
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v10 = Object[0];
      goto LABEL_35;
    }
    v16 = (unsigned __int16)v15 >> 1;
    if ( (unsigned __int16)v15 >> 1 )
    {
      if ( (v15 & 0x7FFF0000) != 0 )
        KeWaitForGate(v11 + 16, 0);
      v17 = v9 * (v16 + 1);
      if ( a4 >= v17 )
      {
        _m_prefetchw((const void *)(v11 + 8));
        v14 = *(_QWORD *)(v11 + 8);
        if ( a2 == 42 )
        {
          Object[1] = a3;
          for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
          {
            v19 = 4LL * (unsigned int)i;
            *(_OWORD *)&a3[v19] = *(_OWORD *)(v11 + 24 * i + 40);
            a3[v19 + 2] = *(_QWORD *)(v11 + 24 * i + 56);
            a3[v19 + 3] = 0LL;
          }
          a3 += 4 * (unsigned int)i;
          a3[2] = 0LL;
          a3[3] = 0LL;
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
          {
            *(_OWORD *)a3 = *(_OWORD *)(v11 + 24 * j + 40);
            a3 += 2;
          }
        }
        *a3 = 0LL;
        a3[1] = v14;
        if ( a5 )
          *a5 = v17;
      }
      else
      {
        v12 = -1073741789;
        if ( a5 )
          *a5 = v17;
      }
      if ( v12 >= 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), -v14);
        *(_DWORD *)v11 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      v12 = -2147483622;
    }
    _interlockedbittestandreset((volatile signed __int32 *)v11, 0);
    goto LABEL_34;
  }
  return result;
}
