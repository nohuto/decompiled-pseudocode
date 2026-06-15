/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x1800193B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  float v6; // xmm0_4

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      (char *)this - 8);
  }
  v4 = 0LL;
  *a2 = 0.0;
  if ( *((_DWORD *)this + 18) )
  {
    v5 = *((_QWORD *)this + 12);
    do
    {
      v6 = *(float *)(v5 + 4 * v4);
      if ( v6 > *a2 )
        *a2 = v6;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 18) );
  }
  return 0LL;
}
