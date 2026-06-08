/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x1C0003A68
 * Callers:
 *     ProcLibTracePccCapChange @ 0x1C0003A44 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x1C0006EC0 (PccInitiateExecuteCallback.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 *     AcpiCStateNotifyWorker @ 0x1C001D1E0 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C001D9A0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001DB10 (AcpiTStateNotifyWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001524 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4)
{
  int ProcessorNumber; // eax
  ULONG v9; // r9d
  struct _PROCESSOR_NUMBER v11; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int8 *p_Number; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, a2);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v11);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v9 = 2;
      UserData.Ptr = (unsigned __int64)&v11;
      p_Number = &v11.Number;
      UserData.Size = 2;
      v14 = 1;
      if ( a4 && a3 )
      {
        v18 = 0;
        v9 = 3;
        v16 = a4;
        v17 = a3;
      }
      LOBYTE(ProcessorNumber) = EtwWrite(ProcLibEtwHandle, a2, 0LL, v9, &UserData);
    }
  }
  return ProcessorNumber;
}
