/*
 * XREFs of AcpiDiagTraceConstraintEvent @ 0x1C00332A8
 * Callers:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0032EEC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0033BD8 (AcpiDiagTracePassiveCoolingConstraint.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00344DC (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceConstraintEvent(
        __int64 a1,
        __int64 a2,
        const EVENT_DESCRIPTOR *a3,
        int a4,
        PEVENT_DATA_DESCRIPTOR a5)
{
  __int64 v8; // rcx
  PEVENT_DATA_DESCRIPTOR UserData; // rcx
  unsigned __int16 v10; // dx
  unsigned __int16 *Buffer; // rax
  unsigned __int16 *v12; // rax
  __int16 v13; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v14; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+88h] [rbp+28h] BYREF

  v16 = a4;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v14, 0LL);
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, a3) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 704), &v14, 1LL) >= 0 )
      {
        v8 = *(_QWORD *)(a2 + 704);
        LOWORD(v16) = v14.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v8, &DestinationString, 1LL) >= 0 )
        {
          UserData = a5;
          v10 = DestinationString.Length >> 1;
          v13 = DestinationString.Length >> 1;
          a5->Reserved = 0;
          UserData->Ptr = (unsigned __int64)&v16;
          Buffer = v14.Buffer;
          UserData->Size = 2;
          UserData[1].Reserved = 0;
          UserData[1].Ptr = (unsigned __int64)Buffer;
          UserData[1].Size = 2 * (unsigned __int16)v16;
          UserData[2].Reserved = 0;
          UserData[2].Ptr = (unsigned __int64)&v13;
          v12 = DestinationString.Buffer;
          UserData[2].Size = 2;
          UserData[3].Reserved = 0;
          UserData[3].Ptr = (unsigned __int64)v12;
          UserData[3].Size = 2 * v10;
          EtwWrite(AcpiDiagHandle, a3, 0LL, 5u, UserData);
        }
      }
    }
  }
  if ( v14.Buffer )
    ExFreePoolWithTag(v14.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
