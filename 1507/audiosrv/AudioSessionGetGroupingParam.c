/*
 * XREFs of AudioSessionGetGroupingParam @ 0x180032700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x180018940 (-GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionGetGroupingParam(CServerAudioSessionControl **a1, struct _GUID *a2)
{
  __int64 (__fastcall *v2)(CServerAudioSessionControl *, struct _GUID *); // rdi
  int GroupingParam; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct _GUID *))(*(_QWORD *)*a1 + 216LL);
  if ( v2 == CServerAudioSessionControl::GetGroupingParam )
    GroupingParam = CServerAudioSessionControl::GetGroupingParam(*a1, a2);
  else
    GroupingParam = v2(*a1, a2);
  v4 = GroupingParam;
  if ( GroupingParam < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x46u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      GroupingParam);
  }
  return v4;
}
