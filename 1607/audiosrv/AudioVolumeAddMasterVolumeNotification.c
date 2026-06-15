/*
 * XREFs of AudioVolumeAddMasterVolumeNotification @ 0x180029CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017DF0 (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioVolumeAddMasterVolumeNotification(CVolumeStrip **a1)
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
  if ( v3 < 0 || (v3 = CVolumeStrip::AddVolumeClientNotification(v1, Pid), v3 < 0) )
    AudSrvTraceLoggingErrorHelper("AudioVolumeAddMasterVolumeNotification", 690, v3);
  return (unsigned int)v3;
}
