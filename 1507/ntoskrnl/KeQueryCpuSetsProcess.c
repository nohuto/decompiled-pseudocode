/*
 * XREFs of KeQueryCpuSetsProcess @ 0x1402057A0
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     KiAcquireProcessLockShared @ 0x14020A50C (KiAcquireProcessLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, int a3, int a4)
{
  unsigned int v7; // r14d
  unsigned int MaximumGroupCount; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v7 = 20;
  if ( (*(_DWORD *)(a1 + 1716) & 0x200) != 0 )
  {
    MaximumGroupCount = KeQueryMaximumGroupCount();
    if ( a4 )
      v9 = *(_QWORD *)(a1 + 1936);
    else
      v9 = *(_QWORD *)(a1 + 1944);
  }
  else
  {
    MaximumGroupCount = 1;
    if ( a4 )
      v9 = a1 + 1936;
    else
      v9 = a1 + 1944;
  }
  KiAcquireProcessLockShared(a1, &v15);
  if ( MaximumGroupCount <= 0x14 )
    v7 = MaximumGroupCount;
  if ( v7 )
  {
    v10 = v9 - (_QWORD)a2;
    v11 = v7;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v10);
      ++a2;
      --v11;
    }
    while ( v11 );
  }
  v12 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
  }
  else
  {
    _InterlockedAnd(v12, 0xBFFFFFFF);
    _InterlockedDecrement(v12);
  }
  __writecr8((unsigned __int8)v15);
  return MaximumGroupCount;
}
