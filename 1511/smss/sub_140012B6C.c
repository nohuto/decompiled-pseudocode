/*
 * XREFs of sub_140012B6C @ 0x140012B6C
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140006ED0 @ 0x140006ED0 (sub_140006ED0.c)
 *     sub_14000BC10 @ 0x14000BC10 (sub_14000BC10.c)
 *     sub_140012BFC @ 0x140012BFC (sub_140012BFC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140012B6C(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 OldValue; // [rsp+68h] [rbp+20h] BYREF

  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, Response);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
}
