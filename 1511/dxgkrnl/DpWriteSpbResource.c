/*
 * XREFs of DpWriteSpbResource @ 0x1C0173990
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C0173CBC (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpWriteSpbResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        void *a6,
        PIO_STATUS_BLOCK a7)
{
  char v7; // bp
  __int64 Length; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r14
  __int64 v13; // rax
  PVOID Ptr; // rdx
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  _QWORD *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v7 = 0;
  Length = (unsigned int)a3;
  if ( !a4 && (_DWORD)a3 )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3, 0LL);
    *(_QWORD *)(v10 + 24) = &DpWriteSpbResource;
    *(_QWORD *)(v10 + 32) = Length;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_QWORD *)(v13 + 24) = &DpWriteSpbResource;
    WdLogEvent5_WdWarning(v13);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpWriteSpbResource, 0, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    Ptr = a6;
    v15 = v19;
    if ( !a6 )
    {
      Ptr = v19[7].Ptr;
      v7 = 1;
    }
    LODWORD(Length) = ZwWriteFile(v19[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, Length, ByteOffset, 0LL);
    if ( (_DWORD)Length == 259 )
    {
      if ( !v7 )
        goto LABEL_17;
      v17 = KeWaitForSingleObject(v15[8].Ptr, Executive, 0, 0, 0LL);
      Length = v17;
      if ( v17 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v18[4] = KeWaitForSingleObject;
        v18[5] = Length;
LABEL_16:
        v18[3] = &DpWriteSpbResource;
        WdLogEvent5_WdError(v18);
        goto LABEL_17;
      }
      LODWORD(Length) = IoStatusBlock->Status;
    }
    if ( (int)Length < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v18[4] = ZwWriteFile;
      v18[5] = (int)Length;
      goto LABEL_16;
    }
LABEL_17:
    ExReleaseRundownProtection(v15 + 3);
    return (unsigned int)Length;
  }
  return result;
}
