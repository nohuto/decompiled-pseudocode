/*
 * XREFs of ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18001FF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetMaxStreamChannelVolume(CAudioStream *this, float *a2)
{
  __int64 v4; // rdx
  float v5; // xmm0_4

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45LL,
      &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      (char *)this - 8);
  }
  v4 = 0LL;
  for ( *a2 = 0.0; (unsigned int)v4 < *((_DWORD *)this + 16); v4 = (unsigned int)(v4 + 1) )
  {
    v5 = *(float *)(*((_QWORD *)this + 11) + 4 * v4);
    if ( v5 > *a2 )
      *a2 = v5;
  }
  return 0LL;
}
