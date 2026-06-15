/*
 * XREFs of ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007450
 * Callers:
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007B10 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180020D30 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180020D40 (-IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008D5B8 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x18008D620 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  bool (__fastcall *v9)(CAudioStream *__hidden); // rbx
  bool IsFormatSensitiveClient; // al
  signed int v11; // ebx
  bool (__fastcall *v12)(CAudioStream *__hidden); // rdi
  bool IsPeriodicitySensitiveClient; // al
  bool v14; // r8
  bool (__fastcall *v15)(CAudioStream *__hidden); // rdi
  bool v16; // al
  bool v17; // r8
  __int64 v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  void *v22; // [rsp+58h] [rbp+10h] BYREF

  v9 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 120LL);
  if ( v9 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v9(a2);
  if ( !IsFormatSensitiveClient )
    goto LABEL_4;
  if ( *((_DWORD *)this + 31) )
    goto LABEL_4;
  v19 = *((_QWORD *)this + 9);
  if ( !v19 || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 136LL))(*((_QWORD *)this + 9)) )
    goto LABEL_4;
  v20 = *((_QWORD *)this + 9);
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v20 + 104LL))(v20, &v22);
  if ( v11 >= 0 )
    v11 = (unsigned int)CompareWaveFormat(
                          *((const struct tWAVEFORMATEX **)v22 + 3),
                          *((const struct tWAVEFORMATEX **)this + 4)) == 0
        ? 0x88890029
        : 0;
  v21 = v22;
  if ( v22 )
  {
    CoTaskMemFree(*((LPVOID *)v22 + 3));
    *((_QWORD *)v21 + 3) = 0LL;
    CoTaskMemFree(*((LPVOID *)v21 + 2));
    *((_QWORD *)v21 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v21);
    *(_QWORD *)v21 = 0LL;
    operator delete(v21);
  }
  if ( v11 >= 0 )
  {
LABEL_4:
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 8) + 32LL))(
            *((_QWORD *)this + 8),
            a3,
            a4,
            a5);
    if ( v11 >= 0 )
    {
      v12 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 112LL);
      if ( v12 == CAudioStream::IsPeriodicitySensitiveClient )
        IsPeriodicitySensitiveClient = CAudioStream::IsPeriodicitySensitiveClient(a2);
      else
        IsPeriodicitySensitiveClient = v12(a2);
      if ( IsPeriodicitySensitiveClient )
        CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, 1, v14);
      v15 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 120LL);
      if ( v15 == CAudioStream::IsFormatSensitiveClient )
        v16 = CAudioStream::IsFormatSensitiveClient(a2);
      else
        v16 = v15(a2);
      if ( v16 )
        CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, 1, v17);
    }
  }
  return (unsigned int)v11;
}
