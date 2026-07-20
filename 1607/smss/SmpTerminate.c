/*
 * XREFs of SmpTerminate @ 0x14001371C
 * Callers:
 *     wmain @ 0x14000135C (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047B4 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x1400048FC (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x140007090 (SmpInitializeKnownDllsInternal.c)
 *     SmpCreateInitialSession @ 0x14000C4E0 (SmpCreateInitialSession.c)
 *     SmpUnhandledExceptionFilter @ 0x1400137AC (SmpUnhandledExceptionFilter.c)
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
