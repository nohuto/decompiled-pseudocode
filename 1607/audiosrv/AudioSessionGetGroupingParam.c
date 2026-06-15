/*
 * XREFs of AudioSessionGetGroupingParam @ 0x18002A060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x18000EF40 (-GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetGroupingParam(CServerAudioSessionControl **a1, struct _GUID *a2)
{
  CServerAudioSessionControl *v2; // rcx
  __int64 (*v3)(void); // rax
  int GroupingParam; // eax
  unsigned int v5; // ebx

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 216LL);
  if ( (char *)v3 == (char *)CServerAudioSessionControl::GetGroupingParam )
    GroupingParam = CServerAudioSessionControl::GetGroupingParam(v2, a2);
  else
    GroupingParam = v3();
  v5 = GroupingParam;
  if ( GroupingParam < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetGroupingParam", 1929, GroupingParam);
  return v5;
}
