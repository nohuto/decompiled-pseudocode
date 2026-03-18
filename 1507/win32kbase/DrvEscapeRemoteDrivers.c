/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00787B0
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     DrvGetDisplayDriverNames @ 0x1C0064AB0 (DrvGetDisplayDriverNames.c)
 *     HDXDrvEscape @ 0x1C0078960 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r12
  unsigned int v8; // r13d
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // r14
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v16; // rbx
  int v17; // ebp
  unsigned __int16 *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v27; // [rsp+60h] [rbp+8h]

  v6 = 0LL;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 32), a4, a5, a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v13 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_17;
  while ( 1 )
  {
    v14 = 32 * (v13 + 1LL);
    v27 = *(_QWORD *)(*(_QWORD *)(v14 + a1) + 2600LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v27);
    v16 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    if ( ++v13 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_15;
  }
  v17 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool();
    v16 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v18 = *(unsigned __int16 **)&v16[4 * v17 + 4];
    v19 = a3 - (_QWORD)v18;
    do
    {
      v20 = *(unsigned __int16 *)((char *)v18 + v19);
      v21 = *v18 - v20;
      if ( v21 )
        break;
      ++v18;
    }
    while ( v20 );
    if ( !v21 && (*(_DWORD *)(v27 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(v14 + a1);
      v8 = HDXDrvEscape(v6, a4, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v17 >= *v16 )
      goto LABEL_13;
  }
LABEL_15:
  if ( v16 )
    Win32FreePool();
LABEL_17:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v12);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  v25 = WdLogNewEntry5_WdTrace(v23, v22, v24);
  *(_QWORD *)(v25 + 24) = v6;
  WdLogEvent5_WdTrace(v25);
  return v8;
}
