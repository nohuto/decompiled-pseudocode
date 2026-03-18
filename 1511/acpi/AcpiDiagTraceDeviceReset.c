/*
 * XREFs of AcpiDiagTraceDeviceReset @ 0x1C00345C8
 * Callers:
 *     AcpiDeviceReset @ 0x1C0079C30 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C001768C (AMLIGetNameSpaceObjectPath.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     RtlStringCchLengthA @ 0x1C0034DB4 (RtlStringCchLengthA.c)
 */

void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  unsigned __int16 v4; // ax
  unsigned __int16 *Buffer; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r8
  __int64 v8; // rcx
  unsigned __int16 v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  int *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  char psz[128]; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+148h] [rbp+48h] BYREF
  int v22; // [rsp+150h] [rbp+50h] BYREF

  v22 = a3;
  v21 = a2;
  v3 = *(__int64 **)(a1 + 704);
  if ( v3 )
  {
    LODWORD(pcchLength) = 128;
    if ( (int)AMLIGetNameSpaceObjectPath(v3, psz, &pcchLength) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( RtlStringCchLengthA(psz, 0x80uLL, &pcchLength) < 0 )
      {
        v4 = 512;
        v9 = 512;
      }
      else
      {
        v4 = pcchLength;
        v9 = pcchLength;
      }
      DestinationString.Buffer = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (v4 + 1), 0x53706341u);
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        v6 = v9;
        v7 = 0;
        DestinationString.MaximumLength = 2 * (v9 + 1);
        for ( DestinationString.Length = DestinationString.MaximumLength - 2; v7 < v9; Buffer = DestinationString.Buffer )
        {
          v8 = v7++;
          Buffer[v8] = psz[v8];
          v6 = v9;
        }
        Buffer[v6] = 0;
        UserData.Ptr = (unsigned __int64)&v9;
        v13 = DestinationString.Buffer;
        *(_QWORD *)&UserData.Size = 2LL;
        v14 = 2 * v9;
        v16 = &v21;
        v18 = &v22;
        v17 = 2LL;
        v15 = 0;
        v19 = 4LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_RESET, 0LL, 4u, &UserData);
        if ( DestinationString.Buffer )
          ExFreePoolWithTag(DestinationString.Buffer, 0);
      }
    }
  }
}
