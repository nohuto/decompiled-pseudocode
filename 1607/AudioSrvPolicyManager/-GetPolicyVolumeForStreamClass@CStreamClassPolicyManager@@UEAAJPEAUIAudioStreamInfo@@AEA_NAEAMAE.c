/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A564 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001D080 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamInfo *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  int PBMRelatedAudioStreamCategory; // ebx
  struct IAudioProcess *v9; // rbx
  unsigned int v10; // eax
  const unsigned __int16 *v11; // rsi
  struct IAudioProcess *v12; // rbx
  int v13; // edi
  DWORD v14; // eax
  struct IAudioProcess *v16; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+28h] BYREF

  v17[1] = -2LL;
  v17[0] = 0LL;
  v16 = 0LL;
  PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
                                    a2,
                                    v17);
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess **))(*(_QWORD *)v17[0] + 24LL))(
                                      v17[0],
                                      &v16);
    if ( PBMRelatedAudioStreamCategory >= 0 )
    {
      v9 = v16;
      v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
      PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v9, v10, &v18);
      if ( PBMRelatedAudioStreamCategory >= 0 )
      {
        v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 72LL))(v17[0]);
        v12 = v16;
        v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 104LL))(v16);
        v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 48LL))(v12);
        PBMRelatedAudioStreamCategory = TsSessionIdGetPolicyVolumeForStreamClass(v14, v11, v18, v13, a3, a4, a5);
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
