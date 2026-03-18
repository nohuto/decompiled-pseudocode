/*
 * XREFs of CiProcessCreate @ 0x1C000ADF0
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000A030 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 * Callees:
 *     memset @ 0x1C0002EC0 (memset.c)
 *     CiProcessComparer @ 0x1C000A170 (CiProcessComparer.c)
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiProcessCreate(_QWORD *a1)
{
  char *PoolWithQuotaTag; // rax
  char *v3; // rdi
  char *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  int v8; // eax
  _QWORD *v9; // rax
  __int64 result; // rax

  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x60uLL, 0x5073634Du);
  v3 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  memset(PoolWithQuotaTag, 0, 0x60uLL);
  *(_DWORD *)v3 = 1;
  *((_QWORD *)v3 + 4) = 1LL;
  *((_QWORD *)v3 + 10) = PsGetCurrentProcess();
  *((_QWORD *)v3 + 9) = v3 + 64;
  *((_QWORD *)v3 + 8) = v3 + 64;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  v4 = 0LL;
  CiSystemAcquirePushLock(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v5 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  LOBYTE(v6) = 0;
  v7 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_9:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v5, v6, v3 + 40);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v8 = CiProcessComparer(v7, (__int64)v5);
    if ( v8 > 0 )
    {
      v9 = (_QWORD *)v5[1];
      if ( !v9 )
      {
        v6 = 1LL;
        goto LABEL_9;
      }
      goto LABEL_13;
    }
    if ( v8 >= 0 )
      break;
    v9 = (_QWORD *)*v5;
    if ( !*v5 )
    {
      LOBYTE(v6) = 0;
      goto LABEL_9;
    }
LABEL_13:
    v5 = v9;
  }
  v4 = (char *)(v5 - 5);
  if ( _InterlockedIncrement64(v5 - 1) <= 1 )
    __fastfail(0xEu);
LABEL_10:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v4 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag(v3, 0x5073634Du);
    v3 = v4;
  }
  result = 0LL;
  *a1 = v3;
  return result;
}
