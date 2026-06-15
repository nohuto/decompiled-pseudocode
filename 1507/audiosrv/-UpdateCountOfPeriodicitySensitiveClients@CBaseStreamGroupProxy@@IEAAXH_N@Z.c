/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008FD94
 * Callers:
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180029A90 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029B60 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  int v2; // r8d
  __int64 v3; // rsi
  int v4; // eax

  v2 = *((_DWORD *)this + 32);
  v3 = *((_QWORD *)this + 10);
  v4 = v2 + a2;
  *((_DWORD *)this + 32) = v2 + a2;
  if ( v3 && v2 != v4 && (!v2 || !v4) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 112LL))(v3, this);
}
