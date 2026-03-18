/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00A19F0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 *     VidSchInitializeAdapter @ 0x1C006B220 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchIsWorkerThread @ 0x1C0002000 (VidSchIsWorkerThread.c)
 *     VidSchiGetSchedulerStatus @ 0x1C0007F28 (VidSchiGetSchedulerStatus.c)
 *     VidSchControlVSyncAdapter @ 0x1C0040A40 (VidSchControlVSyncAdapter.c)
 *     VidSchTerminateDevice @ 0x1C0040DE0 (VidSchTerminateDevice.c)
 *     VidSchTerminateContext @ 0x1C00410C0 (VidSchTerminateContext.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0069BF8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00A26DC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rbx
  unsigned int i; // ebx
  struct _VIDSCH_CONTEXT *v7; // rcx
  unsigned int j; // ebx
  struct _VIDSCH_CONTEXT *v9; // rcx
  char *v10; // rcx
  unsigned int k; // ebx
  __int64 v12; // rsi
  struct _VIDSCH_CONTEXT *v13; // rcx
  struct _VIDSCH_CONTEXT *v14; // rcx
  char *v15; // rcx
  __int64 v16; // rcx
  unsigned int m; // esi
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  struct _VIDSCH_CONTEXT *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
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
        VidSchFlushAdapter(a1, 15LL);
        v5 = (void *)*((_QWORD *)a1 + 17);
        ObfReferenceObject(v5);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v5);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 15LL);
      if ( *((_DWORD *)a1 + 485) )
      {
        *((_DWORD *)a1 + 485) = 1;
        VidSchControlVSyncAdapter((__int64)a1, 3LL, 0);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 500) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    if ( *((_QWORD *)a1 + 29) )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 14); ++i )
      {
        v7 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 29) + 8LL * i);
        if ( v7 )
          VidSchTerminateContext(v7, v3);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 29), 0);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    if ( *((_QWORD *)a1 + 28) )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 14); ++j )
      {
        v9 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 28) + 8LL * j);
        if ( v9 )
          VidSchTerminateContext(v9, v3);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 28), 0);
      *((_QWORD *)a1 + 28) = 0LL;
    }
    v10 = (char *)*((_QWORD *)a1 + 27);
    if ( v10 )
    {
      VidSchTerminateDevice(v10, v3);
      *((_QWORD *)a1 + 27) = 0LL;
    }
    for ( k = 0; k < *((_DWORD *)a1 + 15); ++k )
    {
      v12 = *((_QWORD *)a1 + k + 51);
      if ( v12 )
      {
        v13 = *(struct _VIDSCH_CONTEXT **)(v12 + 32);
        if ( v13 )
        {
          VidSchTerminateContext(v13, v3);
          *(_QWORD *)(v12 + 32) = 0LL;
        }
      }
    }
    v14 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 26);
    if ( v14 )
    {
      VidSchTerminateContext(v14, v3);
      *((_QWORD *)a1 + 26) = 0LL;
    }
    v15 = (char *)*((_QWORD *)a1 + 25);
    if ( v15 )
    {
      VidSchTerminateDevice(v15, v3);
      *((_QWORD *)a1 + 25) = 0LL;
    }
    v16 = *((_QWORD *)a1 + 19);
    if ( v16 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v16, v3, 0LL, 0LL);
    }
    for ( m = 0; m < *((_DWORD *)a1 + 15); *((_QWORD *)a1 + v18 + 51) = 0LL )
    {
      v18 = m;
      v19 = (_QWORD *)*((_QWORD *)a1 + m + 51);
      v20 = (struct _VIDSCH_CONTEXT *)v19[27];
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20, 0);
        v19[27] = 0LL;
      }
      v21 = (void *)v19[23];
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      v22 = (void *)v19[25];
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      ExFreePoolWithTag(v19, 0);
      ++m;
    }
    v23 = 0;
    for ( *((_DWORD *)a1 + 64) = 2; v23 < *((_DWORD *)a1 + 10); ++v23 )
    {
      v24 = (void *)*((_QWORD *)a1 + v23 + 371);
      if ( v24 )
      {
        ExFreePoolWithTag(v24, 0);
        *((_QWORD *)a1 + v23 + 371) = 0LL;
      }
      v25 = (void *)*((_QWORD *)a1 + v23 + 688);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *((_QWORD *)a1 + v23 + 688) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2672));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 264));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1232));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1128));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1024));
    v26 = (void *)*((_QWORD *)a1 + 17);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v26);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}
