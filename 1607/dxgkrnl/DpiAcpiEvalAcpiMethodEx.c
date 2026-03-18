/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1C019B654
 * Callers:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00F732C (DpiAcpiPrepareAcpiChildNameList.c)
 *     DpEvalAcpiMethod @ 0x1C0191EC0 (DpEvalAcpiMethod.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  ULONG v15; // r12d
  SIZE_T v16; // r15
  _DWORD *PoolWithTag; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  struct _DEVICE_OBJECT *v22; // rsi
  IRP *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  NTSTATUS v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    LODWORD(v11) = -1073741811;
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  v13 = a3[2];
  v14 = 4;
  if ( v13 < 4 )
    v13 = 4;
  v15 = v13 + 268;
  v16 = v13 + 268;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x74727044u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v11) = -1073741801;
    v20 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v20);
    return (unsigned int)v11;
  }
  memset(PoolWithTag, 0, v16);
  *v19 = 1181312321;
  if ( a2 )
  {
    memmove(v19 + 1, a2[1], *(unsigned __int16 *)a2);
    v21 = *(unsigned __int16 *)a2;
    *((_BYTE *)v19 + v21 + 4) = 46;
    v8 = (unsigned int)(v21 + 1);
  }
  *(_DWORD *)((char *)v19 + v8 + 4) = a3[1];
  *((_BYTE *)v19 + (unsigned int)(v8 + 4) + 4) = 0;
  v19[65] = a3[2];
  v19[66] = a3[3];
  if ( a7 )
    v14 = a3[2];
  memmove(v19 + 67, a3 + 4, v14);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v22 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v22);
  v23 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v22,
          v19,
          v15,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v23 )
  {
    LODWORD(v11) = IofCallDriver(v22, v23);
    if ( (_DWORD)v11 == 259 )
    {
      v30 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v11 = v30;
      if ( v30 )
      {
        v31 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v31 + 24) = v11;
        goto LABEL_24;
      }
      LODWORD(v11) = IoStatusBlock.Status;
    }
    if ( (int)v11 < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 24) = (int)v11;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_25;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
      goto LABEL_25;
    LODWORD(v11) = -1072431089;
    v31 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v31 + 24) = -1072431089LL;
LABEL_24:
    WdLogEvent5_WdError(v31);
    goto LABEL_25;
  }
  LODWORD(v11) = -1073741670;
  v25 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v25 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v25);
LABEL_25:
  if ( v22 )
    ObfDereferenceObject(v22);
  ExFreePoolWithTag(v19, 0);
  return (unsigned int)v11;
}
