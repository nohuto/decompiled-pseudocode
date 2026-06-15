/*
 * XREFs of AudioSessionSetGroupingParam @ 0x18003A610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x180015EE0 (-SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionSetGroupingParam(
        CServerAudioSessionControl **a1,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 (__fastcall *v3)(CServerAudioSessionControl *, const struct _GUID *, const struct _GUID *); // rdi

  v3 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, const struct _GUID *, const struct _GUID *))(*(_QWORD *)*a1 + 224LL);
  if ( v3 == CServerAudioSessionControl::SetGroupingParam )
    return CServerAudioSessionControl::SetGroupingParam(*a1, a2, a3);
  else
    return v3(*a1, a2, a3);
}
