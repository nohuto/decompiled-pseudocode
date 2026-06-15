/*
 * XREFs of AudioSessionGetVolume @ 0x180029110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x18000EB60 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetVolume(CServerAudioSessionControl **a1, float *a2)
{
  CServerAudioSessionControl *v2; // rcx
  __int64 (*v3)(void); // rax
  int Volume; // eax
  unsigned int v5; // ebx

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 280LL);
  if ( (char *)v3 == (char *)CServerAudioSessionControl::GetVolume )
    Volume = CServerAudioSessionControl::GetVolume(v2, a2);
  else
    Volume = v3();
  v5 = Volume;
  if ( Volume < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetVolume", 2000, Volume);
  return v5;
}
