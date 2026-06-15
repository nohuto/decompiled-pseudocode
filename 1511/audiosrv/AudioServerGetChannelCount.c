/*
 * XREFs of AudioServerGetChannelCount @ 0x180038D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180021FC0 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *a1, unsigned int *a2)
{
  __int64 (__fastcall *v2)(CVADServer *, unsigned int *); // rdi
  int ChannelCount; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CVADServer *, unsigned int *))(*(_QWORD *)a1 + 128LL);
  if ( v2 == CVADServer::GetChannelCount )
    ChannelCount = CVADServer::GetChannelCount(a1, a2);
  else
    ChannelCount = v2(a1, a2);
  v4 = ChannelCount;
  if ( ChannelCount < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      87LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)ChannelCount);
  }
  return v4;
}
