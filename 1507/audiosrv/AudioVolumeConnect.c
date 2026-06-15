/*
 * XREFs of AudioVolumeConnect @ 0x18002CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall AudioVolumeConnect(__int64 a1, const wchar_t *a2, struct CVolumeStrip **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rcx
  int DeviceVolumeStrip; // eax
  unsigned int v7; // ebx
  struct CVolumeStrip *v8; // rdi
  struct CVolumeStrip *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      22LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      a2);
  }
  v5 = g_pVolumeProvider;
  *a3 = 0LL;
  v10 = 0LL;
  DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v5, a2, &v10);
  v7 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        24LL,
        &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
        (unsigned int)DeviceVolumeStrip);
    }
  }
  else
  {
    v8 = v10;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        23LL,
        &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
        v10);
    }
    *a3 = v8;
  }
  return v7;
}
