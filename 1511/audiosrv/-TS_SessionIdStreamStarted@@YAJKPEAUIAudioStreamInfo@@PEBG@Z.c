/*
 * XREFs of ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002EDEC
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall TS_SessionIdStreamStarted(DWORD a1, struct IAudioStreamInfo *a2, const unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  _QWORD *v7; // rax
  struct TSSession *v8; // rcx
  __int64 v9; // rdi
  int v11; // eax
  struct TSSession *v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_a039a10251cf52648c3361a61631dc40_Traceguids, a1);
  }
  v12 = 0LL;
  v7 = qword_1800E68A0;
  while ( v7 )
  {
    v8 = (struct TSSession *)v7[2];
    v7 = (_QWORD *)*v7;
    if ( a1 == *(_DWORD *)v8 )
      goto LABEL_8;
  }
  v11 = TsSessionCreate(a1, 0LL, &v12);
  if ( !v11 )
  {
    v8 = v12;
LABEL_8:
    v9 = *((_QWORD *)v8 + 39);
    if ( !v9 )
      goto LABEL_9;
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *, const unsigned __int16 *))(*(_QWORD *)v9 + 24LL))(
            *((_QWORD *)v8 + 39),
            a2,
            a3);
    goto LABEL_16;
  }
  if ( v11 > 0 )
  {
    v4 = (unsigned __int16)v11 | 0x80070000;
    goto LABEL_9;
  }
LABEL_16:
  v4 = v11;
LABEL_9:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (v4 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_a039a10251cf52648c3361a61631dc40_Traceguids, v4);
  }
  return v4;
}
