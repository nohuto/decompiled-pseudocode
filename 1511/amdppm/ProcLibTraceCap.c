/*
 * XREFs of ProcLibTraceCap @ 0x1C0012FDC
 * Callers:
 *     CapLogWorker @ 0x1C0012540 (CapLogWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00018D4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceCap(__int64 a1, int a2, int a3, int a4, char a5, PCEVENT_DESCRIPTOR EventDescriptor)
{
  const EVENT_DESCRIPTOR *v6; // rdi
  int ProcessorNumber; // eax
  struct _PROCESSOR_NUMBER v10[4]; // [rsp+38h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-29h]
  int v13; // [rsp+60h] [rbp-21h]
  int v14; // [rsp+64h] [rbp-1Dh]
  int *v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+74h] [rbp-Dh]
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  char *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  int v27; // [rsp+E0h] [rbp+5Fh] BYREF
  int v28; // [rsp+E8h] [rbp+67h] BYREF
  int v29; // [rsp+F0h] [rbp+6Fh] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v6 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, EventDescriptor);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, v10);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      UserData.Ptr = (unsigned __int64)v10;
      p_Number = &v10[0].Number;
      v15 = &v27;
      v18 = &v28;
      v21 = &v29;
      v24 = &a5;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      UserData.Size = 2;
      v13 = 1;
      LOBYTE(ProcessorNumber) = EtwWrite(ProcLibEtwHandle, v6, 0LL, 6u, &UserData);
    }
  }
  return ProcessorNumber;
}
