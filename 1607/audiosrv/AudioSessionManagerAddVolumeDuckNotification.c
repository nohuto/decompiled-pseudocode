/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x180029D40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  RPC_STATUS v6; // eax
  unsigned int Pid; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( !v6 )
  {
    if ( !g_DuckingManager )
      return v5;
    v6 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
    goto LABEL_4;
  }
  if ( v6 <= 0 )
  {
LABEL_4:
    v5 = v6;
    goto LABEL_5;
  }
  v5 = (unsigned __int16)v6 | 0x80070000;
LABEL_5:
  if ( (v5 & 0x80000000) != 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddVolumeDuckNotification", 2125, v5);
  return v5;
}
