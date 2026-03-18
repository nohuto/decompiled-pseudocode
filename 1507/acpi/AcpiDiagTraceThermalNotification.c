/*
 * XREFs of AcpiDiagTraceThermalNotification @ 0x1C001A524
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00344DC (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceThermalNotification(_DWORD *a1, __int64 a2, __int16 a3)
{
  REGHANDLE v6; // rcx
  char *v7; // r9
  __int64 v8; // r11
  unsigned int v9; // kr00_4
  unsigned int v10; // kr04_4
  __int64 v11; // r10
  unsigned int *v12; // r8
  unsigned int v13; // kr08_4
  unsigned int v14; // kr0C_4
  const EVENT_DESCRIPTOR *v15; // rdx
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *Buffer; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  unsigned int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  unsigned int *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  char v32; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v36; // [rsp+150h] [rbp+50h]
  int v37; // [rsp+158h] [rbp+58h]
  int v38; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v39[10]; // [rsp+160h] [rbp+60h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = AcpiDiagHandle;
  if ( !AcpiDiagHandle )
    goto LABEL_4;
  if ( a3 == 128 )
  {
    if ( !EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION) )
      goto LABEL_4;
    v6 = AcpiDiagHandle;
  }
  if ( (a3 != 129 || EtwEventEnabled(v6, &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION))
    && (unsigned __int16)(a3 - 128) <= 1u
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 704), &DestinationString, 1LL) >= 0 )
  {
    UserData.Reserved = 0;
    v25 = 0;
    v7 = &v32;
    v28 = 0;
    v8 = 10LL;
    v31 = 0;
    UserData.Ptr = (unsigned __int64)&v16;
    Buffer = DestinationString.Buffer;
    v16 = DestinationString.Length >> 1;
    v24 = 2 * (DestinationString.Length >> 1);
    v9 = a1[4];
    UserData.Size = 2;
    v26 = &v19;
    v19 = v9 / 0xA;
    v10 = a1[5];
    v27 = 4;
    v20 = v10 / 0xA;
    v11 = 0LL;
    v29 = &v20;
    v30 = 4;
    do
    {
      *(_DWORD *)v7 = 0;
      v12 = &v39[v11];
      *((_DWORD *)v7 - 1) = 4;
      *(_QWORD *)(v7 - 12) = v12;
      v13 = a1[v11 + 9];
      v11 = (unsigned int)(v11 + 1);
      v7 += 16;
      *v12 = v13 / 0xA;
      --v8;
    }
    while ( v8 );
    v35 = 0;
    v38 = 0;
    v33 = &v17;
    v17 = a1[7] / 0xAu;
    v14 = a1[19];
    v34 = 4;
    v36 = &v18;
    v18 = v14 / 0xA;
    v15 = &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION;
    v37 = 4;
    if ( a3 != 128 )
      v15 = &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION;
    EtwWrite(AcpiDiagHandle, v15, 0LL, 0x10u, &UserData);
  }
LABEL_4:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
