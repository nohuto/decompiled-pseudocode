/*
 * XREFs of PpmEventPerfState @ 0x14012443C
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140124144 (PpmPerfApplyProcessorState.c)
 *     PpmEventProcessorPerfStateChange @ 0x14012438C (PpmEventProcessorPerfStateChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeGetProcessorNumberFromIndex @ 0x140091D8C (KeGetProcessorNumberFromIndex.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PpmEventPerfState(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG ProcIndex,
        int a3,
        int a4,
        char a5,
        char a6)
{
  _UNKNOWN **v6; // rax
  REGHANDLE v9; // rdi
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  int *v13; // [rsp+58h] [rbp-29h]
  int v14; // [rsp+60h] [rbp-21h]
  int v15; // [rsp+64h] [rbp-1Dh]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+74h] [rbp-Dh]
  unsigned __int8 *p_Number; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  char *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  char *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  int v29; // [rsp+E8h] [rbp+67h] BYREF
  int v30; // [rsp+F0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v30 = a4;
  v29 = a3;
  if ( PpmEtwRegistered )
  {
    v9 = PpmEtwHandle;
    LOBYTE(v6) = EtwEventEnabled(PpmEtwHandle, EventDescriptor);
    if ( (_BYTE)v6 )
    {
      KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (ULONGLONG)&v29;
      v13 = &v30;
      p_ProcNumber = &ProcNumber;
      p_Number = &ProcNumber.Number;
      v22 = &a5;
      v25 = &a6;
      UserData.Size = 4;
      v14 = 4;
      v23 = 4;
      v26 = 4;
      v17 = 2;
      v20 = 1;
      LOBYTE(v6) = EtwWrite(v9, EventDescriptor, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
