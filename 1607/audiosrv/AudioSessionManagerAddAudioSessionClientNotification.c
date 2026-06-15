/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x180063270
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // ebx

  v1 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 112LL))(*(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
  {
    v2 = -2147024891;
LABEL_4:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddAudioSessionClientNotification", 2095, v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 120LL))(*v1, v1[1]);
  if ( v2 < 0 )
    goto LABEL_4;
  return (unsigned int)v2;
}
