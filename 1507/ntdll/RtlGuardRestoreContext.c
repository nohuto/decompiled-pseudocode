/*
 * XREFs of RtlGuardRestoreContext @ 0x1800718D0
 * Callers:
 *     KiUserExceptionDispatcher @ 0x180095830 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180015560 (RtlGuardIsValidStackPointer.c)
 *     LdrpValidateUserCallTarget @ 0x180083C50 (LdrpValidateUserCallTarget.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] && !RtlGuardIsValidStackPointer((void *)ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_3;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
        goto LABEL_3;
      LdrpValidateUserCallTarget(ExceptionRecord->ExceptionInformation[0]);
    }
    goto LABEL_2;
  }
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9]
    && !RtlGuardIsValidStackPointer(*(void **)(ExceptionRecord->ExceptionInformation[0] + 16)) )
  {
    __fastfail(0xDu);
  }
LABEL_3:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
