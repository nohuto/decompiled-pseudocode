/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0052024
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 * Callees:
 *     IsIsNativeSubSystemTypeSupported_0 @ 0x1C0002008 (IsIsNativeSubSystemTypeSupported_0.c)
 *     IsNativeSubSystemType_0 @ 0x1C0002010 (IsNativeSubSystemType_0.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  void *ProcessInheritedFromUniqueProcessId; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+70h] [rbp+17h] BYREF
  void *ProcessHandle; // [rsp+C8h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
    return 0LL;
  if ( (unsigned int)PsGetCurrentProcessSessionId(a1) )
  {
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_16;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && (int)IsIsNativeSubSystemTypeSupported_0() >= 0
        && !(unsigned int)IsNativeSubSystemType_0() )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_16:
        if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
          return 0;
      }
    }
  }
  return (unsigned int)InformationProcess;
}
