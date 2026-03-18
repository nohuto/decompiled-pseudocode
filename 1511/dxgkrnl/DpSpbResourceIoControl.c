/*
 * XREFs of DpSpbResourceIoControl @ 0x1C01737C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C0173CBC (DpiValidateSpbResource.c)
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
  char v9; // r15
  __int64 InputBufferLength; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  PVOID Ptr; // rdx
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  NTSTATUS v18; // eax
  _QWORD *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // [rsp+50h] [rbp-38h] BYREF
  ULONG IoControlCode; // [rsp+A0h] [rbp+18h]

  IoControlCode = a3;
  v20 = 0LL;
  v9 = 0;
  InputBufferLength = (unsigned int)a4;
  if ( !InputBuffer && (_DWORD)a4 )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 32) = InputBufferLength;
LABEL_4:
    *(_QWORD *)(v11 + 24) = &DpSpbResourceIoControl;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 32) = OutputBufferLength;
    goto LABEL_4;
  }
  if ( !IoStatusBlock )
  {
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_QWORD *)(v13 + 24) = &DpSpbResourceIoControl;
    WdLogEvent5_WdWarning(v13);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v20);
  if ( (int)result >= 0 )
  {
    Ptr = a8;
    v15 = v20;
    if ( !a8 )
    {
      Ptr = v20[7].Ptr;
      v9 = 1;
    }
    LODWORD(v17) = ZwDeviceIoControlFile(
                     v20[5].Ptr,
                     Ptr,
                     0LL,
                     0LL,
                     IoStatusBlock,
                     IoControlCode,
                     InputBuffer,
                     InputBufferLength,
                     OutputBuffer,
                     OutputBufferLength);
    if ( (_DWORD)v17 == 259 )
    {
      if ( !v9 )
        goto LABEL_21;
      v18 = KeWaitForSingleObject(v15[8].Ptr, Executive, 0, 0, 0LL);
      v17 = v18;
      if ( v18 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v19[4] = KeWaitForSingleObject;
        v19[5] = v17;
LABEL_20:
        v19[3] = &DpSpbResourceIoControl;
        WdLogEvent5_WdError(v19);
        goto LABEL_21;
      }
      LODWORD(v17) = IoStatusBlock->Status;
    }
    if ( (int)v17 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v19[4] = ZwDeviceIoControlFile;
      v19[5] = (int)v17;
      goto LABEL_20;
    }
LABEL_21:
    ExReleaseRundownProtection(v15 + 3);
    return (unsigned int)v17;
  }
  return result;
}
