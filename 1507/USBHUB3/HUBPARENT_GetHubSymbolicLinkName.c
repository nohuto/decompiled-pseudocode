/*
 * XREFs of HUBPARENT_GetHubSymbolicLinkName @ 0x1C0006070
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall HUBPARENT_GetHubSymbolicLinkName(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 256);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 176));
  return result;
}
