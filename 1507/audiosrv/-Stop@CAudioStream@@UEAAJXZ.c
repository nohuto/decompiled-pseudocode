/*
 * XREFs of ?Stop@CAudioStream@@UEAAJXZ @ 0x18001DC70
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800299F0 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::Stop(CAudioStream *this)
{
  __int64 (__fastcall *v2)(CSharedStreamGroupProxy *__hidden, unsigned __int64); // rdi
  int v3; // eax
  unsigned int v4; // ebx

  if ( g_UseNewGraphBuilder )
  {
    v2 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, unsigned __int64))(**((_QWORD **)this + 8) + 112LL);
    if ( v2 == CSharedStreamGroupProxy::StopStream )
      v3 = CSharedStreamGroupProxy::StopStream(*((CSharedStreamGroupProxy **)this + 8), *((_QWORD *)this + 7));
    else
      v3 = v2(*((CSharedStreamGroupProxy **)this + 8), *((_QWORD *)this + 7));
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 72LL))(
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 7));
  }
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        23LL,
        &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        (unsigned int)v3);
    }
  }
  else
  {
    *((_BYTE *)this + 192) = 0;
  }
  return v4;
}
