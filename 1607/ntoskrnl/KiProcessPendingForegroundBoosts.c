/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1400C8A54
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiApplyForegroundBoostThread @ 0x1400C8BFC (KiApplyForegroundBoostThread.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 *v12; // r8
  bool v13; // di
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_14030E518);
  v7 = (__int64 *)qword_14030E508;
  if ( (__int64 *)qword_14030E508 != &qword_14030E508 )
  {
    do
    {
      v8 = v7 - 179;
      v9 = v6 - *((_DWORD *)v7 - 2);
      v7 = (__int64 *)*v7;
      if ( v9 < 2 )
      {
        if ( v9 > v5 )
          v5 = v9;
      }
      else
      {
        v10 = v8 + 179;
        v11 = v8[179];
        v12 = (__int64 *)v8[180];
        if ( *(__int64 **)(v11 + 8) != v8 + 179 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *v10 = v4;
        v4 = v8 + 179;
        v8[180] = 0LL;
        _InterlockedAdd16((volatile signed __int16 *)v8 + 710, 1u);
      }
    }
    while ( v7 != &qword_14030E508 );
    v7 = (__int64 *)qword_14030E508;
  }
  v13 = v7 != &qword_14030E508;
  KxReleaseSpinLock(&qword_14030E518);
  if ( v13 )
  {
    v18[1] = -1LL;
    v18[0] = 0LL;
    KeSetTimer2(&KiForegroundState, -150000LL * (2 - v5), 0LL, v18, v16, v17);
  }
  while ( v4 )
  {
    v14 = v4;
    v4 = (_QWORD *)*v4;
    v15 = v14 - 179;
    LODWORD(v16) = 0;
    v15[179] = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v15 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( v15[8] );
    }
    KiApplyForegroundBoostThread(v15, &v17);
    v15[8] = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)v15 + 710, 0xFFFFu);
  }
  KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v17);
}
