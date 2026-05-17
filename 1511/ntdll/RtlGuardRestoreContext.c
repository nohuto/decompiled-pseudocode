/*
 * XREFs of RtlGuardRestoreContext @ 0x18007D980
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800A8BC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180036938 (RtlGuardIsValidStackPointer.c)
 *     LdrpValidateUserCallTarget @ 0x180095400 (LdrpValidateUserCallTarget.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( qword_1801552F0 && !RtlGuardIsValidStackPointer((void *)ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_3;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      if ( !qword_1801552F0 )
        goto LABEL_3;
      LdrpValidateUserCallTarget(ExceptionRecord->ExceptionInformation[0]);
    }
    goto LABEL_2;
  }
  if ( qword_1801552F0 && !RtlGuardIsValidStackPointer(*(void **)(ExceptionRecord->ExceptionInformation[0] + 16)) )
    __fastfail(0xDu);
LABEL_3:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
