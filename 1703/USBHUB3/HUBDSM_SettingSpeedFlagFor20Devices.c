/*
 * XREFs of HUBDSM_SettingSpeedFlagFor20Devices @ 0x1C001A170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall HUBDSM_SettingSpeedFlagFor20Devices(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  int v3; // ebx
  __int16 v4; // dx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 1440) & 0xFF00;
  v4 = *(_WORD *)(*(_QWORD *)(v1 + 8) + 184LL);
  if ( (v4 & 0x400) != 0 )
  {
    v5 = 256;
    _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 0x2000u);
  }
  else
  {
    v5 = (v4 & 0x200) != 0 ? 1024 : 512;
  }
  *(_BYTE *)(v1 + 1441) = 0;
  *(_DWORD *)(v1 + 1440) |= v5;
  if ( v3 )
  {
    if ( v5 != v3 )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x25u,
        (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
        v3,
        v5);
      if ( v3 == 256 )
        return 4065;
    }
  }
  return v2;
}
