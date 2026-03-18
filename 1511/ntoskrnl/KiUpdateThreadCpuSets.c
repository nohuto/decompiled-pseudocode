/*
 * XREFs of KiUpdateThreadCpuSets @ 0x1401C8A4C
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1401C8660 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401C8784 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 */

__int64 __fastcall KiUpdateThreadCpuSets(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // rdi
  char v6; // bl
  volatile signed __int64 *v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 116);
  v3 = 0LL;
  v12 = 0LL;
  if ( (v2 & 8) == 0 )
  {
    v6 = KiAcquireThreadStateLock(a1, &v12, (volatile signed __int32 **)&v13);
    KiComputeThreadAffinity(a1);
    v7 = v13;
    v11 = a2;
    v8 = v12;
    v9 = KiRescheduleThreadAfterAffinityChange(a1, a1 + 576, v6, v12, (__int64)v13, v11);
    if ( v8 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      v8 = v12;
      v7 = v13;
    }
    if ( v7 )
    {
      _InterlockedAnd64(v7, 0LL);
      v8 = v12;
    }
    return v8 & -(__int64)(v9 != 0);
  }
  return v3;
}
