/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x180081EBC
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18008AA60 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = a2;
  v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x32u,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this,
      a2);
    v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 13) + 4 * v4);
  }
  else
  {
    if ( (struct _GUID *)v6 != &WPP_GLOBAL_Control && (*(_BYTE *)(v6 + 28) & 0x40) != 0 && *(_BYTE *)(v6 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v6 + 16), 0x33u, (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, -2147024809);
    return 2147942487LL;
  }
  return result;
}
