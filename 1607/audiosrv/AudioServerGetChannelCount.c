/*
 * XREFs of AudioServerGetChannelCount @ 0x180006DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180009710 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *a1, unsigned int *a2)
{
  __int64 (*v2)(void); // rax
  int ChannelCount; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 128LL);
  if ( (char *)v2 == (char *)CVADServer::GetChannelCount )
    ChannelCount = CVADServer::GetChannelCount(a1, a2);
  else
    ChannelCount = v2();
  v4 = ChannelCount;
  if ( ChannelCount < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 0xCDBu, ChannelCount);
  return v4;
}
