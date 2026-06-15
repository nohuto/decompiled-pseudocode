/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18001D820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v4; // rdx
  float v5; // xmm0_4

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      49LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      (char *)this - 8);
  }
  v4 = 0LL;
  for ( *a2 = 0.0; (unsigned int)v4 < *((_DWORD *)this + 18); v4 = (unsigned int)(v4 + 1) )
  {
    v5 = *(float *)(*((_QWORD *)this + 12) + 4 * v4);
    if ( v5 > *a2 )
      *a2 = v5;
  }
  return 0LL;
}
