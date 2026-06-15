/*
 * XREFs of ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008D5B8
 * Callers:
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180007380 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007450 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  int v2; // r8d
  __int64 v3; // rsi
  int v4; // eax

  v2 = *((_DWORD *)this + 31);
  v3 = *((_QWORD *)this + 9);
  v4 = v2 + a2;
  *((_DWORD *)this + 31) = v2 + a2;
  if ( v3 && v2 != v4 && (!v2 || !v4) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v3 + 128LL))(v3, this);
}
