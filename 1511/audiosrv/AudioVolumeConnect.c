/*
 * XREFs of AudioVolumeConnect @ 0x180038CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall AudioVolumeConnect(__int64 a1, const unsigned __int16 *a2, struct CVolumeStrip **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rcx
  int DeviceVolumeStrip; // eax
  unsigned int v7; // ebx
  struct CVolumeStrip *v8; // rdi
  struct CVolumeStrip *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, a2);
  }
  v5 = g_pVolumeProvider;
  *a3 = 0LL;
  v10 = 0LL;
  DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v5, a2, (PCNZWCH **)&v10);
  v7 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
        (unsigned int)DeviceVolumeStrip);
    }
  }
  else
  {
    v8 = v10;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, v10);
    }
    *a3 = v8;
  }
  return v7;
}
