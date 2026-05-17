/*
 * XREFs of RtlGuardRestoreContext @ 0x180087040
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180036734 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AF0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpValidateUserCallTarget @ 0x180096800 (LdrpValidateUserCallTarget.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rdi

  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( qword_180163310 && !RtlGuardIsValidStackPointer((void *)ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      if ( !qword_180163310 )
        goto LABEL_4;
      LdrpValidateUserCallTarget(ExceptionRecord->ExceptionInformation[0]);
    }
    goto LABEL_2;
  }
  v4 = ExceptionRecord->ExceptionInformation[0];
  if ( qword_180163310 && !RtlGuardIsValidStackPointer(*(void **)(v4 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(void **)(v4 + 80), 0, 0LL);
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
