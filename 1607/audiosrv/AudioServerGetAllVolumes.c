/*
 * XREFs of AudioServerGetAllVolumes @ 0x180009360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x1800094B0 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(CVADServer *a1, unsigned int a2, float *a3)
{
  __int64 (*v3)(void); // rax
  int AllVolumes; // eax
  unsigned int v5; // ebx

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v3 == (char *)CVADServer::GetAllVolumes )
    AllVolumes = CVADServer::GetAllVolumes(a1, a2, a3);
  else
    AllVolumes = v3();
  v5 = AllVolumes;
  if ( AllVolumes < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 0xD7Du, AllVolumes);
  return v5;
}
