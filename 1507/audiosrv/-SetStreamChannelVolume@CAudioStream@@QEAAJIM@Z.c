/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180082B38
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x18008C060 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  v4 = a2;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qdg(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x34u,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this,
      a2,
      a3);
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) )
  {
    *(float *)(*((_QWORD *)this + 13) + 4 * v4) = a3;
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 120LL))(this);
    return 0LL;
  }
  else
  {
    if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x40) != 0 && *(_BYTE *)(v5 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v5 + 16), 0x35u, (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, -2147024809);
    return 2147942487LL;
  }
}
