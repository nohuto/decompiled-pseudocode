/*
 * XREFs of RtlGuardRestoreContext @ 0x180087030
 * Callers:
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180036724 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AE0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpValidateUserCallTarget @ 0x1800967F0 (LdrpValidateUserCallTarget.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rdi

  if ( !ExceptionRecord )
  {
LABEL_2:
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] && !RtlGuardIsValidStackPointer((void *)ContextRecord->Rsp) )
      __fastfail(0xDu);
    goto LABEL_4;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
        goto LABEL_4;
      LdrpValidateUserCallTarget(ExceptionRecord->ExceptionInformation[0]);
    }
    goto LABEL_2;
  }
  v4 = ExceptionRecord->ExceptionInformation[0];
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] && !RtlGuardIsValidStackPointer(*(void **)(v4 + 16)) )
    __fastfail(0xDu);
  RtlGuardCheckLongJumpTarget(*(PVOID *)(v4 + 80), 0, 0LL);
LABEL_4:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
