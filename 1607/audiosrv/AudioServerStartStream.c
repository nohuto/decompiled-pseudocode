/*
 * XREFs of AudioServerStartStream @ 0x180004DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStartStream(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, 2LL);
  UpdateOffloadPowerRequest();
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStartStream", 0xC31u, v2);
  return (unsigned int)v2;
}
