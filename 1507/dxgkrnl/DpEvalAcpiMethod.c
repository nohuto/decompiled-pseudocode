/*
 * XREFs of DpEvalAcpiMethod @ 0x1C0165AC0
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     DpiAcpiGetAcpiChildName @ 0x1C00D4A5C (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C016D1F0 (DpiAcpiEvalAcpiMethodEx.c)
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
  int *v8; // rsi
  __int64 v9; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  IRP *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  const char *AcpiChildName; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  NTSTATUS v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  char v32; // [rsp+58h] [rbp-29h]
  char v33; // [rsp+59h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  int v37; // [rsp+D8h] [rbp+57h]
  ULONG InputBufferLength; // [rsp+F0h] [rbp+6Fh]

  InputBufferLength = a4;
  v37 = a1;
  LODWORD(p_DestinationString) = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v33 = 0;
  v8 = a3;
  v32 = 0;
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
    v29 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    v27 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
  {
    v11 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 28LL) >= 0x2003u )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 0LL, a3);
      v14[6] = 0LL;
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = DpEvalAcpiMethod;
      v14[7] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    goto LABEL_3;
  }
  if ( !*(_BYTE *)(v13 + 1060) )
  {
    LODWORD(v9) = -1073741637;
    v15 = WdLogNewEntry5_WdWarning(a1, 0LL, a3, a4);
    *(_QWORD *)(v15 + 24) = DpEvalAcpiMethod;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    return (unsigned int)v9;
  }
  if ( !a3 || !(_DWORD)a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_2;
  v16 = *a3;
  if ( *a3 == 1634885968 )
  {
    v32 = 1;
    *a3 = 1130980673;
    goto LABEL_20;
  }
  if ( v16 == 543451477 )
  {
    *a3 = 1130980673;
    AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v13, a2);
    if ( !AcpiChildName )
      goto LABEL_47;
    RtlInitAnsiString(&DestinationString, AcpiChildName);
    LODWORD(a4) = InputBufferLength;
    p_DestinationString = &DestinationString;
    LODWORD(a1) = v37;
    LODWORD(a3) = (_DWORD)v8;
LABEL_26:
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
    if ( a2 == -1 )
    {
      *a3 = 1130980673;
      goto LABEL_26;
    }
LABEL_2:
    v11 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdError(a1);
LABEL_3:
    v12[3] = DpEvalAcpiMethod;
    v12[4] = 0LL;
LABEL_4:
    v12[5] = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v9;
  }
LABEL_20:
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
      v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18);
      v19[4] = IoBuildDeviceIoControlRequest;
      v19[3] = DpEvalAcpiMethod;
      v19[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v19);
      goto LABEL_51;
    }
    LODWORD(v9) = IofCallDriver(AttachedDeviceReference, v17);
    if ( (_DWORD)v9 == 259 )
    {
      v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v26;
      if ( v26 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v27[4] = KeWaitForSingleObject;
        v27[5] = v9;
LABEL_50:
        v27[3] = DpEvalAcpiMethod;
        WdLogEvent5_WdError(v27);
        goto LABEL_51;
      }
      LODWORD(v9) = IoStatusBlock.Status;
    }
    if ( (int)v9 < 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v28 + 32) = (int)v9;
      *(_QWORD *)(v28 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdWarning(v28);
      goto LABEL_51;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_51:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v9;
    }
    v29 = -1072431089LL;
    LODWORD(v9) = -1072431089;
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v23);
LABEL_49:
    v27[5] = v29;
    v27[4] = 0LL;
    goto LABEL_50;
  }
  KeWaitForSingleObject((PVOID)(v13 + 2040), Executive, 0, 0, 0LL);
  v30 = *(_QWORD *)(v13 + 1928);
  if ( v30 )
  {
    while ( *(_DWORD *)v30 )
    {
      if ( *(_DWORD *)(v30 + 24) == a2 )
      {
        v33 = 1;
        RtlInitAnsiString(&DestinationString, *(PCSZ *)(v30 + 112));
        LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                        v37,
                        (int)&DestinationString,
                        (int)v8,
                        InputBufferLength,
                        OutputBuffer,
                        OutputBufferLength,
                        v32);
        break;
      }
      v30 += 120LL;
      if ( !v30 )
        break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v13 + 2040), 0);
  if ( !v33 )
  {
LABEL_47:
    v11 = -1073741810LL;
    LODWORD(v9) = -1073741810;
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v12[4] = 0LL;
    v12[3] = DpEvalAcpiMethod;
    goto LABEL_4;
  }
  return (unsigned int)v9;
}
