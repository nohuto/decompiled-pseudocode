/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1C0171A00
 * Callers:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00D0A30 (DpiAcpiPrepareAcpiChildNameList.c)
 *     DpEvalAcpiMethod @ 0x1C0169FF0 (DpEvalAcpiMethod.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
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
  _QWORD *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  ULONG v15; // r12d
  SIZE_T v16; // r15
  _DWORD *PoolWithTag; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rsi
  struct _DEVICE_OBJECT *v25; // rsi
  IRP *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  NTSTATUS v36; // eax
  _QWORD *v37; // rax
  __int64 v38; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    LODWORD(v11) = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v12[4] = 0LL;
    v12[3] = DpiAcpiEvalAcpiMethodEx;
    v12[5] = -1073741811LL;
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
  v22 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v11) = -1073741801;
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    v23[3] = DpiAcpiEvalAcpiMethodEx;
    v23[4] = ExAllocatePoolWithTag;
    v23[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)v11;
  }
  memset(PoolWithTag, 0, v16);
  *v22 = 1181312321;
  if ( a2 )
  {
    memmove(v22 + 1, a2[1], *(unsigned __int16 *)a2);
    v24 = *(unsigned __int16 *)a2;
    *((_BYTE *)v22 + v24 + 4) = 46;
    v8 = (unsigned int)(v24 + 1);
  }
  *(_DWORD *)((char *)v22 + v8 + 4) = a3[1];
  *((_BYTE *)v22 + (unsigned int)(v8 + 4) + 4) = 0;
  v22[65] = a3[2];
  v22[66] = a3[3];
  if ( a7 )
    v14 = a3[2];
  memmove(v22 + 67, a3 + 4, v14);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v25 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v25);
  v26 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v25,
          v22,
          v15,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v26 )
  {
    LODWORD(v11) = IofCallDriver(v25, v26);
    if ( (_DWORD)v11 == 259 )
    {
      v36 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v11 = v36;
      if ( v36 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v37[4] = KeWaitForSingleObject;
        v37[5] = v11;
        goto LABEL_24;
      }
      LODWORD(v11) = IoStatusBlock.Status;
    }
    if ( (int)v11 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      *(_QWORD *)(v38 + 32) = (int)v11;
      *(_QWORD *)(v38 + 24) = DpiAcpiEvalAcpiMethodEx;
      WdLogEvent5_WdWarning(v38);
      goto LABEL_25;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
      goto LABEL_25;
    LODWORD(v11) = -1072431089;
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v37[4] = 0LL;
    v37[5] = -1072431089LL;
LABEL_24:
    v37[3] = DpiAcpiEvalAcpiMethodEx;
    WdLogEvent5_WdError(v37);
    goto LABEL_25;
  }
  LODWORD(v11) = -1073741670;
  v31 = (_QWORD *)WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
  v31[3] = DpiAcpiEvalAcpiMethodEx;
  v31[4] = IoBuildDeviceIoControlRequest;
  v31[5] = -1073741670LL;
  WdLogEvent5_WdLowResource(v31);
LABEL_25:
  if ( v25 )
    ObfDereferenceObject(v25);
  ExFreePoolWithTag(v22, 0);
  return (unsigned int)v11;
}
