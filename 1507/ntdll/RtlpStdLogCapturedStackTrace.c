/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x1800E4FA8
 * Callers:
 *     RtlStdLogStackTrace @ 0x1800E49E0 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpStdGetSpaceForTrace @ 0x1800E4EB4 (RtlpStdGetSpaceForTrace.c)
 *     RtlpStdLockAcquire @ 0x1800E4F68 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800E4F88 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v7; // rbx
  _RTL_SRWLOCK *v8; // r14
  __int64 i; // rbx
  __int64 SpaceForTrace; // rax
  __int16 v11; // cx
  __int64 v12; // rcx
  __int16 v13; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v7 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v8 = (_RTL_SRWLOCK *)(a1 + 8 * v7);
  RtlpStdLockAcquire(v8 + 92);
  for ( i = *(_QWORD *)(a1 + 8 * v7 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove((void *)(SpaceForTrace + 16), (const void *)(a2 + 16), v4);
  v11 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v11;
  v12 = 16LL * (a3 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(v12 + a1 + 728);
  *(_QWORD *)(v12 + a1 + 728) = i;
LABEL_8:
  v13 = *(_WORD *)(i + 8);
  if ( (v13 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FF;
LABEL_11:
  RtlpStdLockRelease(v8 + 92);
  return i;
}
