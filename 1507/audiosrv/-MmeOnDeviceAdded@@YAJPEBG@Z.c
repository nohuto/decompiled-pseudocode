/*
 * XREFs of ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800938D8
 * Callers:
 *     s_mmeNotifyDeviceAdded @ 0x180093B50 (s_mmeNotifyDeviceAdded.c)
 * Callees:
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceAdded(const unsigned __int16 *a1)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Au,
      (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids,
      a1);
  }
  return 0LL;
}
