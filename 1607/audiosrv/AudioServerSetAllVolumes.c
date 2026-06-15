/*
 * XREFs of AudioServerSetAllVolumes @ 0x180009310
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x1800095B0 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *a1, unsigned int a2, const float *a3)
{
  __int64 (*v3)(void); // rax
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 152LL);
  if ( (char *)v3 == (char *)CVADServer::SetAllVolumes )
    v4 = CVADServer::SetAllVolumes(a1, a2, a3);
  else
    v4 = v3();
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetAllVolumes", 0xD54u, v4);
  return v5;
}
