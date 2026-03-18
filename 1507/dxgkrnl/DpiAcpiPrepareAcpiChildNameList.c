/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C00D4AA0
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C00D4360 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C00D4A5C (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C016D1F0 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r15
  int v4; // r12d
  IRP *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS Status; // edi
  ULONG OutputBufferLength; // edi
  __int64 v10; // rsi
  PVOID PoolWithTag; // rax
  __int64 v12; // rcx
  IRP *v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  PVOID v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r14
  _QWORD *v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  NTSTATUS v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  NTSTATUS v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
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
  if ( *(_QWORD *)(a1 + 1920) && *(_QWORD *)(a1 + 1912) )
    return result;
  if ( *(_DWORD *)(a1 + 1904) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  v4 = 1;
  InputBuffer = 1214866753;
  LODWORD(v42) = 1;
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
    v24 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v14 = v24;
    if ( v24 )
    {
LABEL_33:
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v25[4] = KeWaitForSingleObject;
      v25[5] = v14;
LABEL_45:
      v25[3] = DpiAcpiPrepareAcpiChildNameList;
      WdLogEvent5_WdError(v25);
LABEL_19:
      if ( (int)v14 < 0 )
        goto LABEL_27;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v26[5] = Status;
    v26[3] = DpiAcpiPrepareAcpiChildNameList;
    v26[4] = 0LL;
    WdLogEvent5_WdError(v26);
LABEL_35:
    LODWORD(v14) = -1072431089;
    goto LABEL_27;
  }
  if ( OutputBuffer != 1198089537 || (OutputBufferLength = NumberOfBytes, (unsigned int)NumberOfBytes < 0x14) )
  {
    LODWORD(v14) = -1072431089;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v25[4] = 0LL;
    v25[5] = -1072431089LL;
    goto LABEL_45;
  }
  v10 = (unsigned int)NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
  *(_QWORD *)(a1 + 1912) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_25:
    v19 = -1073741801LL;
    LODWORD(v14) = -1073741801;
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v21 = ExAllocatePoolWithTag;
    goto LABEL_26;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v13 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          &InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 1912),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v13 )
  {
LABEL_24:
    v19 = -1073741670LL;
    LODWORD(v14) = -1073741670;
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6);
    v21 = IoBuildDeviceIoControlRequest;
LABEL_26:
    v20[3] = DpiAcpiPrepareAcpiChildNameList;
    v20[4] = v21;
    v20[5] = v19;
    WdLogEvent5_WdLowResource(v20);
    goto LABEL_27;
  }
  LODWORD(v14) = IofCallDriver(v3, v13);
  if ( (_DWORD)v14 == 259 )
  {
    v27 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v14 = v27;
    if ( !v27 )
    {
      LODWORD(v14) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_33;
  }
LABEL_12:
  v15 = *(_DWORD **)(a1 + 1912);
  if ( *v15 != 1198089537 || !v15[1] || IoStatusBlock.Information != v10 )
    goto LABEL_35;
  *(_DWORD *)(a1 + 1904) = 0;
  v16 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v15[1], 0x74727044u);
  *(_QWORD *)(a1 + 1920) = v16;
  if ( !v16 )
    goto LABEL_25;
  v17 = *(_QWORD *)(a1 + 1912);
  v18 = v17 + 8;
  if ( *(_DWORD *)(v17 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v18 += *(unsigned int *)(v18 + 4) + 8LL;
    if ( (*(_BYTE *)v18 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v4 >= *(_DWORD *)(*(_QWORD *)(a1 + 1912) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v18 + 8));
  qmemcpy(v36, "AeiC_ADR", 8);
  v28 = DpiAcpiEvalAcpiMethodEx(*(_QWORD *)(a1 + 24), (int)&DestinationString, (int)v36, 24, &v44, 0x18u, 1);
  v14 = v28;
  if ( v28 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = DpiAcpiPrepareAcpiChildNameList;
    *(_QWORD *)(v33 + 32) = v14;
    WdLogEvent5_WdWarning(v33);
    LODWORD(v14) = 0;
    goto LABEL_18;
  }
  if ( v44 == 1114596673 && HIDWORD(v45) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 1920) + 16LL * *(unsigned int *)(a1 + 1904)) = HIDWORD(v46);
    *(_QWORD *)(*(_QWORD *)(a1 + 1920) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 1904))++ + 8) = v18 + 8;
    goto LABEL_18;
  }
  LODWORD(v14) = -1072431089;
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v30);
  v34[3] = DpiAcpiPrepareAcpiChildNameList;
  v34[4] = 0LL;
  v34[5] = -1072431089LL;
  WdLogEvent5_WdError(v34);
LABEL_27:
  *(_DWORD *)(a1 + 1904) = -1;
  v22 = *(void **)(a1 + 1920);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 1920) = 0LL;
  }
  v23 = *(void **)(a1 + 1912);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    *(_QWORD *)(a1 + 1912) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v14;
}
