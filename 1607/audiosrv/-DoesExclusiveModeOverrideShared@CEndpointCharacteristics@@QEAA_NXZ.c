/*
 * XREFs of ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x18001DA60
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEndpointCharacteristics::DoesExclusiveModeOverrideShared(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  bool v2; // bl
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  v2 = 1;
  if ( v1 )
  {
    pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllowPreemption,
           &pvar) >= 0
      && (((_WORD)pvar - 11) & 0xFFF7) == 0 )
    {
      v2 = (_WORD)v5 != 0;
    }
    PropVariantClear(&pvar);
  }
  return v2;
}
