/*
 * XREFs of AudioServerStopStream @ 0x180004A50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStopStream(_DWORD *a1, __int64 a2)
{
  int v3; // eax
  int v4; // edi

  v3 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, 2LL);
  a1[70] = 0;
  v4 = v3;
  UpdateOffloadPowerRequest();
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStopStream", 0xC52u, v4);
  return (unsigned int)v4;
}
