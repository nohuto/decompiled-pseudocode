/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x18003D210
 * Callers:
 *     TppWorkPost @ 0x18003CDE4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEE0 (TpPostWork.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 */

NTSTATUS __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *ThreadInformation, int a2)
{
  NTSTATUS result; // eax

  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 3) == 3 )
    return -1073741584;
  if ( a2 == 2 )
    return ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, ThreadInformation, 8u, 0LL);
  result = 0;
  *ThreadInformation = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  return result;
}
