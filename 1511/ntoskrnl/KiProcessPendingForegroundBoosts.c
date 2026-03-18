/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x140095818
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  int v18; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_1402E8B18);
  v7 = (__int64 *)qword_1402E8B08;
  if ( (__int64 *)qword_1402E8B08 != &qword_1402E8B08 )
  {
    do
    {
      v8 = v7 - 178;
      v9 = v6 - *((_DWORD *)v7 - 1);
      v7 = (__int64 *)*v7;
      if ( v9 < 2 )
      {
        if ( v9 > v5 )
          v5 = v9;
      }
      else
      {
        v10 = v8 + 178;
        v11 = v8[178];
        v12 = (__int64 *)v8[179];
        if ( *(__int64 **)(v11 + 8) != v8 + 178 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *v10 = v4;
        v4 = v8 + 178;
        v8[179] = 0LL;
        _InterlockedAdd16((volatile signed __int16 *)v8 + 708, 1u);
      }
    }
    while ( v7 != &qword_1402E8B08 );
    v7 = (__int64 *)qword_1402E8B08;
  }
  v13 = v7 != &qword_1402E8B08;
  KxReleaseSpinLock(&qword_1402E8B18);
  if ( v13 )
  {
    v20[1] = -1LL;
    v20[0] = 0LL;
    KeSetTimer2(KiForegroundState, -150000LL * (2 - v5), 0LL, (__int64)v20);
  }
  while ( v4 )
  {
    v16 = v4;
    v4 = (_QWORD *)*v4;
    v17 = v16 - 178;
    v18 = 0;
    v17[178] = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v17 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18, v14, v15);
      while ( v17[8] );
    }
    KiApplyForegroundBoostThread(v17, &v19);
    v17[8] = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)v17 + 708, 0xFFFFu);
  }
  KiReadyDeferredReadyList((__int64)KeGetCurrentPrcb(), &v19);
}
