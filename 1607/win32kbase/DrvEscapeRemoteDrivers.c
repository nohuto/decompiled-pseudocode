/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C0088D80
 * Callers:
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     DrvGetDisplayDriverNames @ 0x1C00691C0 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HDXDrvEscape @ 0x1C0088F30 (HDXDrvEscape.c)
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
  unsigned int v12; // esi
  __int64 v13; // r14
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v15; // rbx
  int v16; // ebp
  unsigned __int16 *v17; // rax
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+60h] [rbp+8h]

  v6 = 0LL;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 32), a4, a5, a6);
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v12 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_17;
  while ( 1 )
  {
    v13 = 32 * (v12 + 1LL);
    v24 = *(_QWORD *)(*(_QWORD *)(v13 + a1) + 2600LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v24);
    v15 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    if ( ++v12 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_15;
  }
  v16 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool();
    v15 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v17 = *(unsigned __int16 **)&v15[4 * v16 + 4];
    v18 = a3 - (_QWORD)v17;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v17 + v18);
      v20 = *v17 - v19;
      if ( v20 )
        break;
      ++v17;
    }
    while ( v19 );
    if ( !v20 && (*(_DWORD *)(v24 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(v13 + a1);
      v8 = HDXDrvEscape(v6, a4, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v16 >= *v15 )
      goto LABEL_13;
  }
LABEL_15:
  if ( v15 )
    Win32FreePool();
LABEL_17:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  v22 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v22 + 24) = v6;
  WdLogEvent5_WdTrace(v22);
  return v8;
}
