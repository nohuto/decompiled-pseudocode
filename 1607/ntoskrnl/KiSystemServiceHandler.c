/*
 * XREFs of KiSystemServiceHandler @ 0x14016F380
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 */

__int64 __fastcall KiSystemServiceHandler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID TargetFrame,
        struct _CONTEXT *ContextRecord,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _KTRAP_FRAME *TrapFrame; // rcx

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
        KiBugCheckDispatch(58LL, TargetFrame, ContextRecord, a4);
      TrapFrame = CurrentThread->TrapFrame;
      CurrentThread->TrapFrame = (_KTRAP_FRAME *)TrapFrame->TrapFrame;
      CurrentThread->PreviousMode = TrapFrame->PreviousMode;
    }
  }
  else
  {
    if ( &KiSystemServiceGdiTebAccess == ExceptionRecord->ExceptionAddress
      || &KiSystemServiceCopyStart <= ExceptionRecord->ExceptionAddress
      && &KiSystemServiceCopyEnd > ExceptionRecord->ExceptionAddress )
    {
      RtlUnwindEx(
        TargetFrame,
        &KiSystemServiceExit,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
    }
    if ( KeGetCurrentThread()->PreviousMode )
      KiBugCheckDispatch(
        59LL,
        (unsigned int)ExceptionRecord->ExceptionCode,
        ExceptionRecord->ExceptionAddress,
        ContextRecord);
  }
  return 1LL;
}
