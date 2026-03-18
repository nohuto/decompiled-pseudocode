/*
 * XREFs of VidSchTerminateAdapter @ 0x1C008C0D0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006182C (VidSchiHandleControlEvent.c)
 *     VidSchInitializeAdapter @ 0x1C0063290 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C000AD90 (VidSchiGetSchedulerStatus.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     VidSchIsWorkerThread @ 0x1C0012180 (VidSchIsWorkerThread.c)
 *     VidSchTerminateDevice @ 0x1C0038790 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1C0038FB0 (VidSchControlVSyncAdapter.c)
 *     VidSchTerminateContext @ 0x1C003C380 (VidSchTerminateContext.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0061F4C (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C008CCC0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbx
  __int64 v10; // r9
  unsigned int i; // ebx
  struct _VIDSCH_CONTEXT *v12; // rcx
  char *v13; // rcx
  unsigned int j; // ebx
  __int64 v15; // rsi
  struct _VIDSCH_CONTEXT *v16; // rcx
  char *v17; // rcx
  __int64 v18; // rcx
  unsigned int k; // ebx
  __int64 v20; // rbp
  _QWORD *v21; // rsi
  struct _VIDSCH_CONTEXT *v22; // rcx
  unsigned int v23; // ebx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      if ( !VidSchIsWorkerThread(v4) )
      {
        VidSchFlushAdapter(a1, 15LL, v7, v8);
        v9 = (void *)*((_QWORD *)a1 + 16);
        ObfReferenceObject(v9);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v9);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 15LL, v7, v8);
      if ( *((_DWORD *)a1 + 477) )
      {
        *((_DWORD *)a1 + 477) = 1;
        VidSchControlVSyncAdapter((__int64)a1, 3LL, 0LL, v10);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 492) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    if ( *((_QWORD *)a1 + 25) )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 13); ++i )
      {
        v12 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 25) + 8LL * i);
        if ( v12 )
          VidSchTerminateContext(v12, v3, v5, v6);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 25), 0);
      *((_QWORD *)a1 + 25) = 0LL;
    }
    v13 = (char *)*((_QWORD *)a1 + 24);
    if ( v13 )
    {
      VidSchTerminateDevice(v13, v3, v5, v6);
      *((_QWORD *)a1 + 24) = 0LL;
    }
    for ( j = 0; j < *((_DWORD *)a1 + 14); ++j )
    {
      v15 = *((_QWORD *)a1 + j + 47);
      if ( v15 )
      {
        v16 = *(struct _VIDSCH_CONTEXT **)(v15 + 32);
        if ( v16 )
        {
          VidSchTerminateContext(v16, v3, v5, v6);
          *(_QWORD *)(v15 + 32) = 0LL;
        }
      }
    }
    v17 = (char *)*((_QWORD *)a1 + 23);
    if ( v17 )
    {
      VidSchTerminateDevice(v17, v3, v5, v6);
      *((_QWORD *)a1 + 23) = 0LL;
    }
    v18 = *((_QWORD *)a1 + 18);
    if ( v18 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v18, v3, 0LL, 0LL);
    }
    for ( k = 0; k < *((_DWORD *)a1 + 14); *((_QWORD *)a1 + v20 + 47) = 0LL )
    {
      v20 = k;
      v21 = (_QWORD *)*((_QWORD *)a1 + k + 47);
      v22 = (struct _VIDSCH_CONTEXT *)v21[22];
      if ( v22 )
      {
        VidSchiDecrementContextReference(v22, 0);
        v21[22] = 0LL;
      }
      ExFreePoolWithTag(v21, 0);
      ++k;
    }
    v23 = 0;
    for ( *((_DWORD *)a1 + 56) = 2; v23 < *((_DWORD *)a1 + 10); ++v23 )
    {
      v24 = (void *)*((_QWORD *)a1 + v23 + 324);
      if ( v24 )
      {
        ExFreePoolWithTag(v24, 0);
        *((_QWORD *)a1 + v23 + 324) = 0LL;
      }
      v25 = (void *)*((_QWORD *)a1 + v23 + 641);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *((_QWORD *)a1 + v23 + 641) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2312));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 232));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1200));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1096));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 992));
    v26 = (void *)*((_QWORD *)a1 + 16);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v26);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
