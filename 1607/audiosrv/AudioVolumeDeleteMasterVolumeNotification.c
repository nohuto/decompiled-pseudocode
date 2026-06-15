/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x18002A100
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017DA0 (-DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rdi
  RPC_STATUS v2; // eax
  int v3; // ebx
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v3 = v2;
  if ( v2 > 0 )
    v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v3 < 0 || (v3 = CVolumeStrip::DeleteVolumeClientNotification(v1, Pid), v3 < 0) )
    AudSrvTraceLoggingErrorHelper("AudioVolumeDeleteMasterVolumeNotification", 722, v3);
  return (unsigned int)v3;
}
