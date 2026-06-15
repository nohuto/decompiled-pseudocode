/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18009DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  return (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, struct StreamCategoryPolicyVolumes *, char *, char *))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 16LL))(
           *((_QWORD *)this + 5) + 16LL,
           a2,
           a3,
           (char *)a3 + 4,
           (char *)a3 + 16);
}
