/*
 * XREFs of PfSnGetCompletedTrace @ 0x140544D6C
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140544AD4 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(volatile void *a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int8 v13; // si
  signed __int32 v14; // eax
  unsigned int v15; // esi
  unsigned __int8 v17; // bl
  signed __int32 v18; // eax

  v5 = 1;
  v6 = KeAbPreAcquire((ULONG_PTR)&dword_140353658, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&dword_140353658, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&dword_140353658, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_140353660 = (__int64)KeGetCurrentThread();
  dword_140353688 = CurrentIrql;
  dword_140353694 = 2;
  v10 = (unsigned int *)qword_140353648;
  if ( qword_140353648 == &qword_140353648 )
  {
    v15 = -2147483622;
  }
  else
  {
    v11 = *((_DWORD *)qword_140353648 + 6);
    if ( v11 > a2 )
    {
      *a3 = v11;
      v15 = -1073741789;
    }
    else
    {
      v12 = *(_QWORD *)qword_140353648;
      if ( *((PVOID **)qword_140353648 + 1) != &qword_140353648 || *(PVOID *)(v12 + 8) != qword_140353648 )
        __fastfail(3u);
      qword_140353648 = *(PVOID *)qword_140353648;
      *(_QWORD *)(v12 + 8) = &qword_140353648;
      --dword_140353690;
      qword_140353660 = 0LL;
      v13 = dword_140353688;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
      if ( v14 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v14);
      __writecr8(v13);
      KeAbPostRelease((ULONG_PTR)&dword_140353658);
      v5 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, a2, 8u);
      memmove((void *)a1, v10 + 4, v10[6]);
      *a3 = v10[6];
      ExFreePoolWithTag(v10, 0);
      v15 = 0;
    }
  }
  if ( v5 )
  {
    qword_140353660 = 0LL;
    v17 = dword_140353688;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
    if ( v18 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v18);
    __writecr8(v17);
    KeAbPostRelease((ULONG_PTR)&dword_140353658);
  }
  return v15;
}
