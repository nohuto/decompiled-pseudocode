/*
 * XREFs of ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001BF20
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TS_SessionIdStreamStarted(DWORD SessionId, struct IAudioStreamInfo *a2, const unsigned __int16 *a3)
{
  signed int v4; // ebx
  int v7; // eax
  __int64 v8; // rcx
  struct TSSession *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, SessionId);
  }
  v7 = TsSessionFromSessionId(SessionId, 1, 0LL, &v10);
  if ( v7 )
  {
    v4 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v4 = v7;
  }
  else
  {
    v8 = *((_QWORD *)v10 + 39);
    if ( v8 )
      v4 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, const unsigned __int16 *))(*(_QWORD *)v8 + 24LL))(
             v8,
             a2,
             a3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x30u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v4);
    }
    AudPolicyLogError("TS_SessionIdStreamStarted", 2542, v4);
  }
  return (unsigned int)v4;
}
