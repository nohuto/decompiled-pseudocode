/*
 * XREFs of AudioServerGetChannelCount @ 0x180031670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x1800144A0 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *a1, unsigned int *a2)
{
  __int64 (__fastcall *v2)(CVADServer *, unsigned int *); // rdi
  int ChannelCount; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CVADServer *, unsigned int *))(*(_QWORD *)a1 + 96LL);
  if ( v2 == CVADServer::GetChannelCount )
    ChannelCount = CVADServer::GetChannelCount(a1, a2);
  else
    ChannelCount = v2(a1, a2);
  v4 = ChannelCount;
  if ( ChannelCount < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      93LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)ChannelCount);
  }
  return v4;
}
