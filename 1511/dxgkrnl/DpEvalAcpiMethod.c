/*
 * XREFs of DpEvalAcpiMethod @ 0x1C0169FF0
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     DpiAcpiGetAcpiChildName @ 0x1C00D09EC (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C0171A00 (DpiAcpiEvalAcpiMethodEx.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  const char *AcpiChildName; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  NTSTATUS v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  char v35; // [rsp+58h] [rbp-29h]
  char v36; // [rsp+59h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  int v40; // [rsp+D8h] [rbp+57h]
  ULONG InputBufferLength; // [rsp+F0h] [rbp+6Fh]

  InputBufferLength = a4;
  v40 = a1;
  LODWORD(p_DestinationString) = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v36 = 0;
  v8 = a3;
  v35 = 0;
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
    v32 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1);
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
  if ( !*(_BYTE *)(v13 + 1093) )
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
    v35 = 1;
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
    LODWORD(a1) = v40;
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
      v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      v22[4] = IoBuildDeviceIoControlRequest;
      v22[3] = DpEvalAcpiMethod;
      v22[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v22);
      goto LABEL_51;
    }
    LODWORD(v9) = IofCallDriver(AttachedDeviceReference, v17);
    if ( (_DWORD)v9 == 259 )
    {
      v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v29;
      if ( v29 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v30[4] = KeWaitForSingleObject;
        v30[5] = v9;
LABEL_50:
        v30[3] = DpEvalAcpiMethod;
        WdLogEvent5_WdError(v30);
        goto LABEL_51;
      }
      LODWORD(v9) = IoStatusBlock.Status;
    }
    if ( (int)v9 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v31 + 32) = (int)v9;
      *(_QWORD *)(v31 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdWarning(v31);
      goto LABEL_51;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_51:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v9;
    }
    v32 = -1072431089LL;
    LODWORD(v9) = -1072431089;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v26);
LABEL_49:
    v30[5] = v32;
    v30[4] = 0LL;
    goto LABEL_50;
  }
  KeWaitForSingleObject((PVOID)(v13 + 2080), Executive, 0, 0, 0LL);
  v33 = *(_QWORD *)(v13 + 1968);
  if ( v33 )
  {
    while ( *(_DWORD *)v33 )
    {
      if ( *(_DWORD *)(v33 + 24) == a2 )
      {
        v36 = 1;
        RtlInitAnsiString(&DestinationString, *(PCSZ *)(v33 + 112));
        LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                        v40,
                        (int)&DestinationString,
                        (int)v8,
                        InputBufferLength,
                        OutputBuffer,
                        OutputBufferLength,
                        v35);
        break;
      }
      v33 += 120LL;
      if ( !v33 )
        break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v13 + 2080), 0);
  if ( !v36 )
  {
LABEL_47:
    v11 = -1073741810LL;
    LODWORD(v9) = -1073741810;
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v12[4] = 0LL;
    v12[3] = DpEvalAcpiMethod;
    goto LABEL_4;
  }
  return (unsigned int)v9;
}
