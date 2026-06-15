/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001DEC0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800266A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2, unsigned int a3)
{
  unsigned int v3; // esi
  bool v4; // zf
  __int64 v6; // r15
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64); // rdi
  unsigned int updated; // eax

  v3 = 0;
  v4 = !g_UseNewGraphBuilder;
  v6 = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 5);
  if ( !v4 )
  {
    v9 = *((_QWORD *)this + 7);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = v6;
    if ( v6 )
    {
      *((_DWORD *)this + 47) = a3;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 168LL);
      if ( v10 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
        updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority(v6, 0LL, a3, 0xFFFFFFFFLL);
      else
        updated = v10(v6, 0LL, a3, 0xFFFFFFFFLL);
      v3 = updated;
    }
  }
  *((_QWORD *)a2 + 7) = 0LL;
  return v3;
}
