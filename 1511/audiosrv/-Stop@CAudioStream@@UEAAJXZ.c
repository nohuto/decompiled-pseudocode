/*
 * XREFs of ?Stop@CAudioStream@@UEAAJXZ @ 0x1800203A0
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026CB0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800072E0 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  __int64 (__fastcall *v2)(CSharedStreamGroupProxy *, __int64); // rsi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *, __int64))(**((_QWORD **)this + 7) + 112LL);
  if ( v2 == CSharedStreamGroupProxy::StopStream )
    v3 = CSharedStreamGroupProxy::StopStream(*((CSharedStreamGroupProxy **)this + 7), *((_QWORD *)this + 6));
  else
    v3 = v2(*((CSharedStreamGroupProxy **)this + 7), *((_QWORD *)this + 6));
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)v3);
    }
  }
  else
  {
    *((_BYTE *)this + 184) = 0;
  }
  return v4;
}
