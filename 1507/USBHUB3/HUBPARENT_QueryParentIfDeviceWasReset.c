/*
 * XREFs of HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0006094
 * Callers:
 *     HUBHSM_CheckingIfResetByParent @ 0x1C0006B30 (HUBHSM_CheckingIfResetByParent.c)
 * Callees:
 *     HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x1C000CE18 (HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_QueryParentIfDeviceWasReset(__int64 a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-98h]
  __int128 v5; // [rsp+60h] [rbp-58h]

  v4 = *(_OWORD *)(a1 + 168);
  v5 = *(_OWORD *)(a1 + 232);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(a1 + 224))(*((_QWORD *)&v4 + 1)) )
  {
    v2 = 2057;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v5)(*((_QWORD *)&v4 + 1)) )
      HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(a1);
  }
  else
  {
    return 2041;
  }
  return v2;
}
