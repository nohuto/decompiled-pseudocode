/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x140094830
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x140094784 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140095C70 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140096AF4 (KiRemoveThreadFromSharedReadyQueue.c)
 */

int __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  struct _KPRCB *CurrentPrcb; // rbp
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  char v10; // bl
  __int64 v11; // r8
  volatile signed __int64 *v12; // r10
  int v13; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int64 *v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = 0LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = KiAcquireThreadStateLock(a1, &v15, (volatile signed __int32 **)&v14);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v8) = v7;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v9 = v15;
  v10 = v7;
  result = KeUpdateThreadSchedulingProperties(a1, v8, v15);
  v12 = v14;
  if ( v10 == 1 && v14 && (*(_DWORD *)(a1 + 120) & 0x1000) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = KiRemoveThreadFromSharedReadyQueue(v14, a1, (unsigned int)*(char *)(a1 + 195));
    v9 = v15;
    *(_BYTE *)(a1 + 388) = 7;
  }
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    v12 = v14;
  }
  if ( v12 )
    _InterlockedAnd64(v12, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( CurrentPrcb )
    return KiDeferredReadyThread((__int64)CurrentPrcb, a1, v11);
  return result;
}
