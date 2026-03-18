/*
 * XREFs of ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C003281C
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::SendWnfNotificationToProcess(
        struct VIDMM_PROCESS *a1,
        struct _WNF_STATE_NAME *a2,
        void *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS updated; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+18h] BYREF

  ProcessHandle = a2;
  v3 = *((_QWORD *)a1 + 4);
  ProcessHandle = 0LL;
  ClientId = 0LL;
  if ( *(_BYTE *)(v3 + 312) )
    ClientId.UniqueProcess = (HANDLE)*((_QWORD *)g_pVidMmSystemProcess + 1);
  else
    ClientId.UniqueProcess = (HANDLE)*((_QWORD *)a1 + 1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  updated = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( updated < 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
    *(_QWORD *)(v11 + 24) = ClientId.UniqueProcess;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_TRIM_NOTIFICATION, a3, 24LL);
    if ( updated == -1073741431 )
      updated = 0;
    ZwClose(ProcessHandle);
  }
  return (unsigned int)updated;
}
