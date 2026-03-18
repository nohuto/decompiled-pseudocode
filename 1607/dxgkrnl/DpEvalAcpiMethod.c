/*
 * XREFs of DpEvalAcpiMethod @ 0x1C0191EC0
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     DpiAcpiGetAcpiChildName @ 0x1C00F72F4 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C019B654 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        int a2,
        int *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  struct _STRING *p_DestinationString; // rdx
  int *v8; // rdi
  __int64 v9; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  IRP *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  const char *AcpiChildName; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // r9d
  char v31; // [rsp+58h] [rbp-29h]
  char v32; // [rsp+59h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  int v36; // [rsp+D8h] [rbp+57h]
  ULONG InputBufferLength; // [rsp+F0h] [rbp+6Fh]

  InputBufferLength = a4;
  v36 = a1;
  LODWORD(p_DestinationString) = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v32 = 0;
  v8 = a3;
  v31 = 0;
  LODWORD(v9) = 0;
  DestinationString.Length = 0;
  AttachedDeviceReference = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  if ( !a1 )
    goto LABEL_2;
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 || *(_DWORD *)(v13 + 16) != 1953656900 || *(_DWORD *)(v13 + 20) != 2 )
  {
    v27 = -1073741811LL;
    goto LABEL_48;
  }
  if ( KeGetCurrentIrql() )
  {
    v11 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 28LL) >= 0x2003u )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 0LL, a3);
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    goto LABEL_4;
  }
  if ( !*(_BYTE *)(v13 + 1141) )
  {
    LODWORD(v9) = -1073741637;
    v15 = WdLogNewEntry5_WdWarning(a1, 0LL, a3, a4);
    *(_QWORD *)(v15 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    return (unsigned int)v9;
  }
  if ( !a3 || !(_DWORD)a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_2;
  v16 = *a3;
  if ( *a3 == 1634885968 )
  {
    v31 = 1;
    *a3 = 1130980673;
    goto LABEL_19;
  }
  if ( v16 == 543451477 )
  {
    *a3 = 1130980673;
    AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v13, a2);
    if ( !AcpiChildName )
      goto LABEL_46;
    RtlInitAnsiString(&DestinationString, AcpiChildName);
    LODWORD(a1) = v36;
    p_DestinationString = &DestinationString;
    LODWORD(a3) = (_DWORD)v8;
LABEL_25:
    LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                    a1,
                    (int)p_DestinationString,
                    (int)a3,
                    a4,
                    OutputBuffer,
                    OutputBufferLength,
                    1);
    return (unsigned int)v9;
  }
  if ( v16 == 2017818181 )
  {
    if ( a2 != -1 )
    {
LABEL_2:
      v11 = -1073741811LL;
LABEL_3:
      LODWORD(v9) = v11;
LABEL_4:
      v12 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v9;
    }
    *a3 = 1130980673;
    goto LABEL_25;
  }
LABEL_19:
  if ( a2 == -1 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v13 + 24));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v17 = IoBuildDeviceIoControlRequest(
            0x32C004u,
            AttachedDeviceReference,
            v8,
            InputBufferLength,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( !v17 )
    {
      LODWORD(v9) = -1073741670;
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v19);
      goto LABEL_50;
    }
    LODWORD(v9) = IofCallDriver(AttachedDeviceReference, v17);
    if ( (_DWORD)v9 == 259 )
    {
      v24 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v24;
      if ( v24 )
      {
        v25 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v25 + 24) = v9;
LABEL_49:
        WdLogEvent5_WdError(v25);
        goto LABEL_50;
      }
      LODWORD(v9) = IoStatusBlock.Status;
    }
    if ( (int)v9 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(a1, v21, v22, v23);
      *(_QWORD *)(v26 + 24) = (int)v9;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_50;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_50:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v9;
    }
    v27 = -1072431089LL;
LABEL_48:
    LODWORD(v9) = v27;
    v25 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v25 + 24) = v27;
    goto LABEL_49;
  }
  KeWaitForSingleObject((PVOID)(v13 + 3224), Executive, 0, 0, 0LL);
  v28 = *(_QWORD *)(v13 + 3112);
  if ( v28 )
  {
    while ( *(_DWORD *)v28 )
    {
      if ( *(_DWORD *)(v28 + 24) == a2 )
      {
        v32 = 1;
        RtlInitAnsiString(&DestinationString, *(PCSZ *)(v28 + 112));
        LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                        v36,
                        (int)&DestinationString,
                        (int)v8,
                        v29,
                        OutputBuffer,
                        OutputBufferLength,
                        v31);
        break;
      }
      v28 += 120LL;
      if ( !v28 )
        break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v13 + 3224), 0);
  if ( !v32 )
  {
LABEL_46:
    v11 = -1073741810LL;
    goto LABEL_3;
  }
  return (unsigned int)v9;
}
