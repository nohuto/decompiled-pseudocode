/*
 * XREFs of ?Start@CAudioStream@@UEAAJXZ @ 0x18001DCF0
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180029A40 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Start(CAudioStream *this)
{
  __int64 (__fastcall *v2)(CSharedStreamGroupProxy *__hidden, unsigned __int64); // rdi
  int started; // eax
  unsigned int v4; // ebx

  if ( g_UseNewGraphBuilder )
  {
    v2 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, unsigned __int64))(**((_QWORD **)this + 8) + 104LL);
    if ( v2 == CSharedStreamGroupProxy::StartStream )
      started = CSharedStreamGroupProxy::StartStream(*((CSharedStreamGroupProxy **)this + 8), *((_QWORD *)this + 7));
    else
      started = v2(*((CSharedStreamGroupProxy **)this + 8), *((_QWORD *)this + 7));
  }
  else
  {
    started = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 64LL))(
                *((_QWORD *)this + 6),
                *((_QWORD *)this + 7));
  }
  v4 = started;
  if ( started < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        22LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        (unsigned int)started);
    }
  }
  else
  {
    *((_BYTE *)this + 192) = 1;
  }
  return v4;
}
