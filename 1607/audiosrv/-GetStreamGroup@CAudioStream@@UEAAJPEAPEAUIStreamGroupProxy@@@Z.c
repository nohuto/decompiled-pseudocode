/*
 * XREFs of ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180018570
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetStreamGroup(CAudioStream *this, struct IStreamGroupProxy **a2)
{
  struct IStreamGroupProxy *v2; // rcx

  v2 = (struct IStreamGroupProxy *)*((_QWORD *)this + 6);
  *a2 = v2;
  (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
