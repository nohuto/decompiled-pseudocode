/*
 * XREFs of PopPpmHeteroPolicyCallback @ 0x1405AF588
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PopPpmHeteroPolicyCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // edi
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  LOWORD(v7[0]) = 0;
  v4 = *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    v5 = *a2;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( v5 == PpmHeteroPolicy )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      v7[0] |= 0x20u;
      PpmHeteroPolicy = v5;
      PpmReapplyPerfPolicy(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
