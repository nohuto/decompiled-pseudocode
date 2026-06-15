/*
 * XREFs of ?Start@CAudioStream@@UEAAJXZ @ 0x180020410
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026EA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180007330 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Start(CAudioStream *this)
{
  __int64 (__fastcall *v2)(CSharedStreamGroupProxy *, __int64); // rsi
  int started; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *, __int64))(**((_QWORD **)this + 7) + 104LL);
  if ( v2 == CSharedStreamGroupProxy::StartStream )
    started = CSharedStreamGroupProxy::StartStream(*((CSharedStreamGroupProxy **)this + 7), *((_QWORD *)this + 6));
  else
    started = v2(*((CSharedStreamGroupProxy **)this + 7), *((_QWORD *)this + 6));
  v4 = started;
  if ( started < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)started);
    }
  }
  else
  {
    *((_BYTE *)this + 184) = 1;
  }
  return v4;
}
