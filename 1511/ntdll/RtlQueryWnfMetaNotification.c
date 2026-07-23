/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x180084750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A7A50 (NtQueryWnfStateNameInformation.c)
 */

NTSTATUS __fastcall RtlQueryWnfMetaNotification(
        PVOID InfoBuffer,
        WNF_STATE_NAME_INFORMATION a2,
        WNF_STATE_NAME a3,
        const void *a4)
{
  WNF_STATE_NAME StateName; // [rsp+30h] [rbp-18h] BYREF

  StateName = a3;
  return NtQueryWnfStateNameInformation(&StateName, a2, a4, InfoBuffer, 4u);
}
