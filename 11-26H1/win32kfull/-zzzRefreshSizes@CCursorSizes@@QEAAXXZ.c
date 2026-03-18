/*
 * XREFs of ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC
 * Callers:
 *     EditionzzzUpdateCursorSizes @ 0x1401BF9F0 (EditionzzzUpdateCursorSizes.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1401BFAA4 (--0CCursorSizes@@QEAA@XZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x140152C84 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     GetCursorSizeFromIndex @ 0x1401BFD2C (GetCursorSizeFromIndex.c)
 *     ?DeferMonitorIcoCurCreation@@YAXXZ @ 0x1401BFD60 (-DeferMonitorIcoCurCreation@@YAXXZ.c)
 *     ?ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z @ 0x14029A43C (-ReloadCursorSizes@Cursor@InputTraceLogging@@SAXI_N@Z.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x14029A4BC (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 */

void __fastcall CCursorSizes::zzzRefreshSizes(CCursorSizes *this)
{
  char v2; // r12
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  __int128 v5; // xmm0
  _DWORD *v6; // r14
  __int128 v7; // xmm1
  __int64 v8; // rsi
  INT CursorSizeFromIndex; // eax
  INT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  unsigned int *v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r8d
  unsigned int *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rdi
  __int64 UserSessionState; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-88h]
  unsigned int v26[4]; // [rsp+28h] [rbp-80h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  unsigned int v29[4]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v30; // [rsp+60h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp-38h]

  v2 = 0;
  v3 = *(_DWORD *)UPDWORDPointer(8232LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 64, 0LL);
  *((_QWORD *)this + 9) = PsGetCurrentThreadId();
  v4 = 0;
  v5 = *(_OWORD *)((char *)this + 24);
  v25 = *((_DWORD *)this + 1);
  v6 = (_DWORD *)((char *)this + 24);
  v7 = *(_OWORD *)((char *)this + 40);
  *((_DWORD *)this + 1) = v3;
  v8 = 5LL;
  *(_OWORD *)v26 = v5;
  v28 = *((_QWORD *)this + 7);
  v27 = v7;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v4);
    v10 = EngMulDiv(CursorSizeFromIndex, v3, 32);
    ++v4;
    *v6 = 0;
    v6[1] = v10;
    v6 += 2;
  }
  while ( v4 < 5 );
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 56968) + 104LL); i; i = *(_QWORD *)(v14 + 56) )
    *((_DWORD *)this
    + 2 * (unsigned int)GetCursorSizesIndexFromDpi(*(unsigned __int16 *)(*(_QWORD *)(i + 40) + 64LL))
    + 6) = 1;
  v15 = *(_OWORD *)((char *)this + 40);
  *(_OWORD *)v29 = *(_OWORD *)((char *)this + 24);
  v31 = *((_QWORD *)this + 7);
  v30 = v15;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v3 != v25 )
    InputTraceLogging::Cursor::UpdateBaseSize(v3);
  v16 = v29;
  v17 = 5LL;
  do
  {
    v18 = *v16;
    v19 = v26;
    v20 = 5LL;
    do
    {
      if ( v18 && *v19 && v16[1] == v19[1] )
      {
        v18 = 0;
        *v19 = 0;
      }
      v19 += 2;
      --v20;
    }
    while ( v20 );
    *v16 = v18;
    v16 += 2;
    --v17;
  }
  while ( v17 );
  v21 = 0LL;
  do
  {
    if ( v26[v21] )
    {
      v23 = v26[v21 + 1];
      InputTraceLogging::Cursor::ReloadCursorSizes(v23, 0);
      _CleanupUnneededSystemCursorSizes((struct tagCURSOR *)v23, v24);
    }
    if ( v29[v21] )
    {
      v2 = 1;
      InputTraceLogging::Cursor::ReloadCursorSizes(v29[v21 + 1], 1);
    }
    v21 += 2LL;
    --v8;
  }
  while ( v8 );
  if ( v2 )
    DeferMonitorIcoCurCreation();
  UserSessionState = W32GetUserSessionState(v16, v19);
  CCursorSizes::zzzUpdateGlobalCursorSize(
    this,
    (const struct tagPOINT *)(*(_QWORD *)(UserSessionState + 19904) + 4960LL),
    1);
}
