/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800CA2F0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A8AE0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180049CE0 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
 */

LONG __fastcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, _CONTEXT *a2)
{
  __int64 (__fastcall *v4)(_EXCEPTION_POINTERS *); // rax
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v8; // ecx
  unsigned __int16 *Buffer; // rax
  void *Rip; // rax
  NTSTATUS v11; // eax
  __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  ULONGLONG RegHandle; // [rsp+28h] [rbp-D8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]

  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = a2;
  v4 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&Flags);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      UserData.Reserved = 0;
      v12 = Length >> 1;
      UserData.Ptr = (unsigned __int64)&v12;
      UserData.Size = 2;
      v8 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v19 = 0;
      v18 = v8;
      v17 = Buffer;
      EtwEventWrite(RegHandle, &FatalUserCallbackException, 2u, &UserData);
      EtwNotificationUnregister(RegHandle, 0LL);
    }
    Rip = (void *)a2->Rip;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionAddress = Rip;
    LODWORD(Rip) = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = (unsigned int)Rip;
    ExceptionRecord.ExceptionRecord = a1;
    v11 = ZwRaiseException(&ExceptionRecord, a2, 0);
    RtlRaiseStatus(v11);
  }
  return result;
}
