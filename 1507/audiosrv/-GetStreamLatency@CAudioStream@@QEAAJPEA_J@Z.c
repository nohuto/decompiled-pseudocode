/*
 * XREFs of ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x180081F7C
 * Callers:
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18008AC20 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetStreamLatency(CAudioStream *this, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( g_UseNewGraphBuilder )
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 8) + 128LL))(
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 7),
           a2);
  else
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 6) + 40LL))(
           *((_QWORD *)this + 6),
           *((_QWORD *)this + 7),
           a2);
  v3 = v2;
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      v2);
  }
  return v3;
}
