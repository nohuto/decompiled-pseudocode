/*
 * XREFs of SmpTerminate @ 0x140013128
 * Callers:
 *     SmpCreateInitialSession @ 0x140002E30 (SmpCreateInitialSession.c)
 *     wmain @ 0x140004718 (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140007C5C (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008E30 (SmpInitializeKnownDllsInternal.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131B8 (SmpUnhandledExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpTerminate(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 OldValue; // [rsp+68h] [rbp+20h] BYREF

  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, Response);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
}
