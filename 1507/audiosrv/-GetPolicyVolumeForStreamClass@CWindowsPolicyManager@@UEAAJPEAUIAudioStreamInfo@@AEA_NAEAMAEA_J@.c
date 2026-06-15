/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x1800217C0
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(CStreamClassPolicyManager *, struct IAudioStreamInfo *, bool *, float *, __int64 *); // rdi

  v5 = *((_QWORD *)this + 5);
  v6 = *(__int64 (__fastcall **)(CStreamClassPolicyManager *, struct IAudioStreamInfo *, bool *, float *, __int64 *))(*(_QWORD *)(v5 + 16) + 16LL);
  if ( v6 == CStreamClassPolicyManager::GetPolicyVolumeForStreamClass )
    return CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
             (CStreamClassPolicyManager *)(v5 + 16),
             a2,
             a3,
             a4,
             a5);
  else
    return v6((CStreamClassPolicyManager *)(v5 + 16), a2, a3, a4, a5);
}
