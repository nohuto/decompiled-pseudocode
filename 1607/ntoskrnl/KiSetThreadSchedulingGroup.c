/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1400C6A60
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1400C69B4 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C6CB8 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400CCEEC (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 */

int __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  int result; // eax
  struct _KPRCB *CurrentPrcb; // rbp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // bl
  _SINGLE_LIST_ENTRY *v10; // r8
  __int64 v11; // r9
  volatile signed __int64 *v12; // r10
  int v13; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int64 *v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup();
  CurrentPrcb = 0LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = KiAcquireThreadStateLock(a1, &v15, &v14);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v7) = v6;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v8 = v15;
  v9 = v6;
  result = KeUpdateThreadSchedulingProperties(a1, v7, v15);
  v12 = v14;
  if ( v9 == 1 && v14 && (*(_DWORD *)(a1 + 120) & 0x1000) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = KiRemoveThreadFromSharedReadyQueue(v14, a1, (unsigned int)*(char *)(a1 + 195));
    v8 = v15;
    *(_BYTE *)(a1 + 388) = 7;
  }
  if ( v8 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    v12 = v14;
  }
  if ( v12 )
    _InterlockedAnd64(v12, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( CurrentPrcb )
    return KiDeferredReadyThread((__int64)CurrentPrcb, (_BYTE *)a1, v10, v11);
  return result;
}
