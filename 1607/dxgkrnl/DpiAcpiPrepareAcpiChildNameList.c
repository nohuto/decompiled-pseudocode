/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C00F732C
 * Callers:
 *     DpiAcpiGetAcpiChildName @ 0x1C00F72F4 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiExposeInfo @ 0x1C00F7A9C (DpiAcpiExposeInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C019B654 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  NTSTATUS Status; // ebx
  ULONG OutputBufferLength; // ebx
  __int64 v9; // rsi
  PVOID PoolWithTag; // rax
  IRP *v11; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  PVOID v14; // rax
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  int v36[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v37; // [rsp+74h] [rbp-4Dh]
  int v38; // [rsp+7Ch] [rbp-45h]
  struct _KEVENT Event; // [rsp+80h] [rbp-41h] BYREF
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  int InputBuffer; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v42; // [rsp+ACh] [rbp-15h]
  int v43; // [rsp+B4h] [rbp-Dh]
  int v44; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v45; // [rsp+BCh] [rbp-5h]
  __int64 v46; // [rsp+C4h] [rbp+3h]
  int v47; // [rsp+CCh] [rbp+Bh]
  int OutputBuffer; // [rsp+D0h] [rbp+Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+D4h] [rbp+13h]
  __int64 v50; // [rsp+DCh] [rbp+1Bh]

  result = 0LL;
  InputBuffer = 0;
  v42 = 0LL;
  v43 = 0;
  OutputBuffer = 0;
  NumberOfBytes = 0LL;
  v50 = 0LL;
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  v38 = 0;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  if ( *(_QWORD *)(a1 + 3104) && *(_QWORD *)(a1 + 3096) )
    return result;
  if ( *(_DWORD *)(a1 + 3088) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer = 1214866753;
  LODWORD(v42) = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v3,
         &InputBuffer,
         0x10u,
         &OutputBuffer,
         0x14u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v4 )
    goto LABEL_24;
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v22 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v12 = v22;
    if ( v22 )
    {
LABEL_33:
      v23 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v23 + 24) = v12;
LABEL_45:
      WdLogEvent5_WdError(v23);
LABEL_19:
      if ( (int)v12 < 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v24 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v24 + 24) = Status;
    WdLogEvent5_WdError(v24);
LABEL_35:
    LODWORD(v12) = -1072431089;
    goto LABEL_27;
  }
  if ( OutputBuffer != 1198089537 || (OutputBufferLength = NumberOfBytes, (unsigned int)NumberOfBytes < 0x14) )
  {
    LODWORD(v12) = -1072431089;
    v23 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v23 + 24) = -1072431089LL;
    goto LABEL_45;
  }
  v9 = (unsigned int)NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
  *(_QWORD *)(a1 + 3096) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_25:
    v18 = -1073741801LL;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v11 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          &InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3096),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
  {
LABEL_24:
    v18 = -1073741670LL;
LABEL_26:
    LODWORD(v12) = v18;
    v19 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdLowResource(v19);
    goto LABEL_27;
  }
  LODWORD(v12) = IofCallDriver(v3, v11);
  if ( (_DWORD)v12 == 259 )
  {
    v25 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v12 = v25;
    if ( !v25 )
    {
      LODWORD(v12) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_33;
  }
LABEL_12:
  v13 = *(_DWORD **)(a1 + 3096);
  if ( *v13 != 1198089537 || !v13[1] || IoStatusBlock.Information != v9 )
    goto LABEL_35;
  *(_DWORD *)(a1 + 3088) = 0;
  v14 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v13[1], 0x74727044u);
  *(_QWORD *)(a1 + 3104) = v14;
  if ( !v14 )
    goto LABEL_25;
  v15 = *(_QWORD *)(a1 + 3096);
  v16 = 1;
  v17 = v15 + 8;
  if ( *(_DWORD *)(v15 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v17 += *(unsigned int *)(v17 + 4) + 8LL;
    if ( (*(_BYTE *)v17 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v16 >= *(_DWORD *)(*(_QWORD *)(a1 + 3096) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v17 + 8));
  v26 = *(_QWORD *)(a1 + 24);
  qmemcpy(v36, "AeiC_ADR", 8);
  v28 = DpiAcpiEvalAcpiMethodEx(v26, (int)&DestinationString, (int)v36, v27, &v44, 0x18u, 1);
  v12 = v28;
  if ( v28 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = v12;
    WdLogEvent5_WdWarning(v33);
    LODWORD(v12) = 0;
    goto LABEL_18;
  }
  if ( v44 == 1114596673 && HIDWORD(v45) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 3104) + 16LL * *(unsigned int *)(a1 + 3088)) = HIDWORD(v46);
    *(_QWORD *)(*(_QWORD *)(a1 + 3104) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3088))++ + 8) = v17 + 8;
    goto LABEL_18;
  }
  LODWORD(v12) = -1072431089;
  v34 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v34 + 24) = -1072431089LL;
  WdLogEvent5_WdError(v34);
LABEL_27:
  *(_DWORD *)(a1 + 3088) = -1;
  v20 = *(void **)(a1 + 3104);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 3104) = 0LL;
  }
  v21 = *(void **)(a1 + 3096);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 3096) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v12;
}
