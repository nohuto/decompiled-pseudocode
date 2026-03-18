/*
 * XREFs of DpSpbResourceIoControl @ 0x1C019D2F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C019D738 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpSpbResourceIoControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PVOID InputBuffer,
        ULONG OutputBufferLength,
        PVOID OutputBuffer,
        void *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  char v9; // r14
  ULONG IoControlCode; // r13d
  __int64 InputBufferLength; // rbp
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  PVOID Ptr; // rdx
  struct _EX_RUNDOWN_REF *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  NTSTATUS v19; // eax
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0LL;
  v9 = 0;
  IoControlCode = a3;
  InputBufferLength = (unsigned int)a4;
  if ( !InputBuffer && (_DWORD)a4 )
  {
    v12 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = InputBufferLength;
LABEL_4:
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    v12 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = OutputBufferLength;
    goto LABEL_4;
  }
  if ( !IoStatusBlock )
  {
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v21);
  if ( (int)result >= 0 )
  {
    Ptr = a8;
    v16 = v21;
    if ( !a8 )
    {
      Ptr = v21[7].Ptr;
      v9 = 1;
    }
    LODWORD(v18) = ZwDeviceIoControlFile(
                     v21[5].Ptr,
                     Ptr,
                     0LL,
                     0LL,
                     IoStatusBlock,
                     IoControlCode,
                     InputBuffer,
                     InputBufferLength,
                     OutputBuffer,
                     OutputBufferLength);
    if ( (_DWORD)v18 == 259 )
    {
      if ( !v9 )
        goto LABEL_21;
      v19 = KeWaitForSingleObject(v16[8].Ptr, Executive, 0, 0, 0LL);
      v18 = v19;
      if ( v19 )
      {
        v20 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v20 + 24) = v18;
LABEL_20:
        WdLogEvent5_WdError(v20);
        goto LABEL_21;
      }
      LODWORD(v18) = IoStatusBlock->Status;
    }
    if ( (int)v18 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v20 + 24) = (int)v18;
      goto LABEL_20;
    }
LABEL_21:
    ExReleaseRundownProtection(v16 + 3);
    return (unsigned int)v18;
  }
  return result;
}
