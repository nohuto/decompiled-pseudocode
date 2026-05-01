/*
 * XREFs of RmpGpuMonitorInitialize @ 0x18001A0B0
 * Callers:
 *     RmpEnforcerContextInitialize @ 0x180019ED8 (RmpEnforcerContextInitialize.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpGpuMonitorInitialize(__int64 a1, __int64 a2, __int64 a3, struct _TP_CLEANUP_GROUP **a4)
{
  struct _TP_CLEANUP_GROUP *ThreadpoolCleanupGroup; // rax
  struct _TP_CLEANUP_GROUP *v6; // rdi
  PTP_TIMER v7; // rsi
  unsigned int LastError; // ebx
  _TP_CALLBACK_ENVIRON_V3 pcbe; // [rsp+20h] [rbp-50h] BYREF

  memset(&pcbe.Pool, 0, 52);
  pcbe.Version = 3;
  pcbe.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
  pcbe.Size = 72;
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  v6 = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    pcbe.CleanupGroupCancelCallback = 0LL;
    pcbe.CleanupGroup = ThreadpoolCleanupGroup;
    v7 = CreateThreadpoolTimer(RmpGpuMonitorTimerCallback, 0LL, &pcbe);
    if ( v7 )
    {
      memset_0(a4, 0, 0x40uLL);
      *((_DWORD *)a4 + 5) = -1;
      *a4 = v6;
      v6 = 0LL;
      *((_DWORD *)a4 + 4) = -500000;
      *((_DWORD *)a4 + 12) = 50;
      *((_BYTE *)a4 + 56) = 5;
      a4[1] = v7;
      LastError = 0;
    }
    else if ( (int)GetLastError() > 0 )
    {
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    }
    else
    {
      LastError = GetLastError();
    }
    if ( v6 )
      CloseThreadpoolCleanupGroup(v6);
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    return GetLastError();
  }
  return LastError;
}
