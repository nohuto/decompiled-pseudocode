/*
 * XREFs of AcpiDiagTraceAmlEvaluation @ 0x1C00421FC
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0042C98 (AcpiDiagTraceIsAmlTracingEnabled.c)
 *     RtlStringCchLengthA @ 0x1C0043104 (RtlStringCchLengthA.c)
 */

void __fastcall AcpiDiagTraceAmlEvaluation(STRSAFE_PCNZCH psz, unsigned __int8 a2)
{
  POOL_TYPE v4; // r11d
  unsigned __int16 v5; // ax
  wchar_t *Buffer; // rdx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r8
  __int64 v9; // rcx
  unsigned __int16 v10; // [rsp+30h] [rbp-19h] BYREF
  __int16 v11; // [rsp+34h] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-11h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  wchar_t *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  __int16 *v18; // [rsp+70h] [rbp+27h]
  __int64 v19; // [rsp+78h] [rbp+2Fh]

  if ( (unsigned __int8)AcpiDiagTraceIsAmlTracingEnabled() && psz && *psz )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v5 = RtlStringCchLengthA(psz, 0x200uLL, &pcchLength) < 0 ? v4 : pcchLength;
    v10 = v5;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(v4, 2LL * (v5 + 1), 0x53706341u);
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Buffer )
    {
      v7 = v10;
      v8 = 0;
      DestinationString.MaximumLength = 2 * (v10 + 1);
      for ( DestinationString.Length = DestinationString.MaximumLength - 2; v8 < v10; Buffer = DestinationString.Buffer )
      {
        v9 = v8++;
        Buffer[v9] = psz[v9];
        v7 = v10;
      }
      Buffer[v7] = 0;
      UserData.Ptr = (unsigned __int64)&v10;
      v15 = DestinationString.Buffer;
      *(_QWORD *)&UserData.Size = 2LL;
      v16 = 2 * v10;
      v11 = a2;
      v18 = &v11;
      v19 = 2LL;
      v17 = 0;
      EtwWrite(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 3u, &UserData);
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0);
    }
  }
}
