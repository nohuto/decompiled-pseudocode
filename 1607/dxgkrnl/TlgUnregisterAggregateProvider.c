/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C00353F8
 * Callers:
 *     DxgkUnload @ 0x1C0165770 (DxgkUnload.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C0010914 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0035000 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C00568E8 == RegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0057518, 0LL);
    v1 = &qword_1C0057FD8;
    if ( qword_1C0057FD8 )
    {
      while ( 1 )
      {
        v2 = *v1;
        if ( *(int **)(*v1 + 400) == &dword_1C00568C0 )
          break;
        v1 = (__int64 *)(v2 + 408);
        if ( !*(_QWORD *)(v2 + 408) )
          goto LABEL_9;
      }
      v0 = (_QWORD *)*v1;
      *v1 = *(_QWORD *)(v2 + 408);
      LookUpTableFlushComplete(v2);
      if ( !qword_1C0057FD8 )
      {
        EtwUnregister(qword_1C0056920);
        qword_1C0056920 = 0LL;
        dword_1C0056900 = 0;
      }
    }
LABEL_9:
    ExReleasePushLockExclusiveEx(&unk_1C0057518, 0LL);
    CancelTimerCallbacksAndDeleteTimer((__int64)v0, v3, v4);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C00568C0 = 0;
    DestroyAggregateSession(v0, v5, v6);
  }
  else
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C00568C0 = 0;
  }
}
