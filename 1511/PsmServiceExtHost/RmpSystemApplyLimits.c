/*
 * XREFs of RmpSystemApplyLimits @ 0x1800474FC
 * Callers:
 *     RmpEnforcementApplyLimits @ 0x1800400B4 (RmpEnforcementApplyLimits.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x180040168 (RmpEnforcementApplyLimitsProcessHost.c)
 */

NTSTATUS __fastcall RmpSystemApplyLimits(__int64 a1, _OWORD *a2)
{
  int v4; // ecx
  NTSTATUS result; // eax

  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 )
  {
    if ( v4 != 1 )
      return -1073741811;
    result = RmpEnforcementApplyLimitsProcessHost(a1, (__int64)a2);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)RmSvcGlobals + 10) + 32LL))(
               *((_QWORD *)RmSvcGlobals + 10),
               a1,
               a2);
  }
  if ( result >= 0 )
  {
    result = 0;
    *(_OWORD *)(a1 + 624) = *a2;
    *(_OWORD *)(a1 + 640) = a2[1];
    *(_OWORD *)(a1 + 656) = a2[2];
    *(_OWORD *)(a1 + 672) = a2[3];
    *(_OWORD *)(a1 + 688) = a2[4];
  }
  return result;
}
