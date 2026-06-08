/*
 * XREFs of PepNotifyQueryPlatformIdleStates @ 0x1C0015090
 * Callers:
 *     InitPep @ 0x1C0014AD8 (InitPep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepNotifyQueryPlatformIdleStates(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (int)PoFxProcessorNotification(*(_QWORD *)(a1 + 1056), 16LL, &v3) >= 0 )
    dword_1C000DE98 = v3;
  return ((__int64 (__fastcall *)(_QWORD))qword_1C000DC20)(*(_QWORD *)(a1 + 1056));
}
