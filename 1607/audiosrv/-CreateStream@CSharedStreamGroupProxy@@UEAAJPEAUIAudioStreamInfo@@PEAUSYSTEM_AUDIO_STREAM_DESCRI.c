/*
 * XREFs of ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180024440
 * Callers:
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023D90 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A110 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001A130 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A140 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075AE0 (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075B28 (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z @ 0x180075B78 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  bool (__fastcall *v9)(CAudioStream *); // rax
  bool IsFormatSensitiveClient; // al
  signed int v11; // esi
  bool (__fastcall *v12)(CAudioStream *); // rax
  bool IsStrictPeriodicityClient; // al
  bool v14; // r8
  bool (__fastcall *v15)(CAudioStream *); // rax
  bool v16; // al
  bool v17; // r8
  bool (__fastcall *v18)(CAudioStream *); // rax
  bool IsLazyPeriodicityClient; // al
  bool v20; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // r14
  void *v25; // [rsp+68h] [rbp+10h] BYREF

  v9 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 128LL);
  if ( v9 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v9(a2);
  if ( !IsFormatSensitiveClient )
    goto LABEL_4;
  if ( *((_DWORD *)this + 31) )
    goto LABEL_4;
  v22 = *((_QWORD *)this + 9);
  if ( !v22 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 152LL))(v22) )
    goto LABEL_4;
  v23 = *((_QWORD *)this + 9);
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v23 + 104LL))(v23, &v25);
  if ( v11 >= 0 )
    v11 = (unsigned int)CompareWaveFormat(
                          *((const struct tWAVEFORMATEX **)v25 + 3),
                          *((const struct tWAVEFORMATEX **)this + 4)) == 0
        ? 0x88890029
        : 0;
  v24 = v25;
  if ( v25 )
  {
    CoTaskMemFree(*((LPVOID *)v25 + 3));
    *((_QWORD *)v24 + 3) = 0LL;
    CoTaskMemFree(*((LPVOID *)v24 + 2));
    *((_QWORD *)v24 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v24);
    *(_QWORD *)v24 = 0LL;
    operator delete(v24, (const struct std::nothrow_t *)0x68);
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
      v12 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 120LL);
      if ( v12 == CAudioStream::IsStrictPeriodicityClient )
        IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
      else
        IsStrictPeriodicityClient = v12(a2);
      if ( IsStrictPeriodicityClient )
        CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(this, 1, v14);
      v15 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 128LL);
      if ( v15 == CAudioStream::IsFormatSensitiveClient )
        v16 = CAudioStream::IsFormatSensitiveClient(a2);
      else
        v16 = v15(a2);
      if ( v16 )
        CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, 1, v17);
      v18 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 136LL);
      if ( v18 == CAudioStream::IsLazyPeriodicityClient )
        IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
      else
        IsLazyPeriodicityClient = v18(a2);
      if ( IsLazyPeriodicityClient )
        CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(this, 1, v20);
    }
  }
  return (unsigned int)v11;
}
