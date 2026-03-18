/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C00D0A30
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C00CF980 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C00D09EC (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C0171A00 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r15
  int v4; // r12d
  IRP *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  NTSTATUS Status; // edi
  ULONG OutputBufferLength; // edi
  __int64 v13; // rsi
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  IRP *v19; // rax
  __int64 v20; // rdi
  _DWORD *v21; // rax
  PVOID v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r14
  _QWORD *v26; // rax
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  NTSTATUS v30; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  NTSTATUS v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  int v42[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v43; // [rsp+74h] [rbp-4Dh]
  int v44; // [rsp+7Ch] [rbp-45h]
  struct _KEVENT Event; // [rsp+80h] [rbp-41h] BYREF
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  int InputBuffer; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v48; // [rsp+ACh] [rbp-15h]
  int v49; // [rsp+B4h] [rbp-Dh]
  int v50; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v51; // [rsp+BCh] [rbp-5h]
  __int64 v52; // [rsp+C4h] [rbp+3h]
  int v53; // [rsp+CCh] [rbp+Bh]
  int OutputBuffer; // [rsp+D0h] [rbp+Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+D4h] [rbp+13h]
  __int64 v56; // [rsp+DCh] [rbp+1Bh]

  result = 0LL;
  InputBuffer = 0;
  v48 = 0LL;
  v49 = 0;
  OutputBuffer = 0;
  NumberOfBytes = 0LL;
  v56 = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v44 = 0;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  if ( *(_QWORD *)(a1 + 1960) && *(_QWORD *)(a1 + 1952) )
    return result;
  if ( *(_DWORD *)(a1 + 1944) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  v4 = 1;
  InputBuffer = 1214866753;
  LODWORD(v48) = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v3,
         &InputBuffer,
         0x10u,
         &OutputBuffer,
         0x14u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v5 )
    goto LABEL_24;
  Status = IofCallDriver(v3, v5);
  if ( Status == 259 )
  {
    v30 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v20 = v30;
    if ( v30 )
    {
LABEL_33:
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v31[4] = KeWaitForSingleObject;
      v31[5] = v20;
LABEL_45:
      v31[3] = DpiAcpiPrepareAcpiChildNameList;
      WdLogEvent5_WdError(v31);
LABEL_19:
      if ( (int)v20 < 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v32[5] = Status;
    v32[3] = DpiAcpiPrepareAcpiChildNameList;
    v32[4] = 0LL;
    WdLogEvent5_WdError(v32);
LABEL_35:
    LODWORD(v20) = -1072431089;
    goto LABEL_27;
  }
  if ( OutputBuffer != 1198089537 || (OutputBufferLength = NumberOfBytes, (unsigned int)NumberOfBytes < 0x14) )
  {
    LODWORD(v20) = -1072431089;
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v31[4] = 0LL;
    v31[5] = -1072431089LL;
    goto LABEL_45;
  }
  v13 = (unsigned int)NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
  *(_QWORD *)(a1 + 1952) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_25:
    v25 = -1073741801LL;
    LODWORD(v20) = -1073741801;
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    v27 = ExAllocatePoolWithTag;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v19 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          &InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 1952),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v19 )
  {
LABEL_24:
    v25 = -1073741670LL;
    LODWORD(v20) = -1073741670;
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    v27 = IoBuildDeviceIoControlRequest;
LABEL_26:
    v26[3] = DpiAcpiPrepareAcpiChildNameList;
    v26[4] = v27;
    v26[5] = v25;
    WdLogEvent5_WdLowResource(v26);
    goto LABEL_27;
  }
  LODWORD(v20) = IofCallDriver(v3, v19);
  if ( (_DWORD)v20 == 259 )
  {
    v33 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v20 = v33;
    if ( !v33 )
    {
      LODWORD(v20) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_33;
  }
LABEL_12:
  v21 = *(_DWORD **)(a1 + 1952);
  if ( *v21 != 1198089537 || !v21[1] || IoStatusBlock.Information != v13 )
    goto LABEL_35;
  *(_DWORD *)(a1 + 1944) = 0;
  v22 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v21[1], 0x74727044u);
  *(_QWORD *)(a1 + 1960) = v22;
  if ( !v22 )
    goto LABEL_25;
  v23 = *(_QWORD *)(a1 + 1952);
  v24 = v23 + 8;
  if ( *(_DWORD *)(v23 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v24 += *(unsigned int *)(v24 + 4) + 8LL;
    if ( (*(_BYTE *)v24 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v4 >= *(_DWORD *)(*(_QWORD *)(a1 + 1952) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v24 + 8));
  qmemcpy(v42, "AeiC_ADR", 8);
  v34 = DpiAcpiEvalAcpiMethodEx(*(_QWORD *)(a1 + 24), (int)&DestinationString, (int)v42, 24, &v50, 0x18u, 1);
  v20 = v34;
  if ( v34 < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = DpiAcpiPrepareAcpiChildNameList;
    *(_QWORD *)(v39 + 32) = v20;
    WdLogEvent5_WdWarning(v39);
    LODWORD(v20) = 0;
    goto LABEL_18;
  }
  if ( v50 == 1114596673 && HIDWORD(v51) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 1960) + 16LL * *(unsigned int *)(a1 + 1944)) = HIDWORD(v52);
    *(_QWORD *)(*(_QWORD *)(a1 + 1960) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 1944))++ + 8) = v24 + 8;
    goto LABEL_18;
  }
  LODWORD(v20) = -1072431089;
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v36);
  v40[3] = DpiAcpiPrepareAcpiChildNameList;
  v40[4] = 0LL;
  v40[5] = -1072431089LL;
  WdLogEvent5_WdError(v40);
LABEL_27:
  *(_DWORD *)(a1 + 1944) = -1;
  v28 = *(void **)(a1 + 1960);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(a1 + 1960) = 0LL;
  }
  v29 = *(void **)(a1 + 1952);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(a1 + 1952) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v20;
}
