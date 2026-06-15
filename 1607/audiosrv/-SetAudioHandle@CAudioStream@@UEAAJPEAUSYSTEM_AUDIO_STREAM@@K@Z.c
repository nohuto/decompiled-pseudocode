/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180019A40
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v7; // rcx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, __int64); // rax
  unsigned int updated; // eax

  v4 = *((_QWORD *)a2 + 8);
  v5 = 0;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 85) = a3;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 192LL);
    if ( v9 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
      updated = CBaseStreamGroupProxy::UpdateStreamResourcePriority(v4, 0LL, a3, 0xFFFFFFFFLL);
    else
      updated = v9(v4, 0LL, a3, 0xFFFFFFFFLL);
    v5 = updated;
  }
  *((_QWORD *)a2 + 8) = 0LL;
  return v5;
}
