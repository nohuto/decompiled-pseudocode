/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C00174F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C0018748 (-GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _DWORD *a2, _DWORD *a3)
{
  int FrameStatistics; // ebx
  DirectComposition::CConnection *DefaultConnection; // r15
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+70h] [rbp+8h]
  int v12; // [rsp+88h] [rbp+20h]

  FrameStatistics = 0;
  if ( !a1 )
    FrameStatistics = -1073741811;
  if ( FrameStatistics >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      FrameStatistics = -1073741790;
    if ( FrameStatistics >= 0 )
    {
      FrameStatistics = DirectComposition::CConnection::GetFrameStatistics(
                          DefaultConnection,
                          (struct DCOMPOSITION_FRAME_STATISTICS *)v9);
      v11 = DirectComposition::CConnection::s_minSafeFeatureLevel;
      v12 = DirectComposition::CConnection::s_maxHardwareFeatureLevel;
      DirectComposition::CConnection::Release(DefaultConnection);
      if ( FrameStatistics >= 0 )
      {
        if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = v9[0];
        *(_OWORD *)(a1 + 16) = v9[1];
        *(_QWORD *)(a1 + 32) = v10;
        if ( a2 )
        {
          if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a2 = v11;
        }
        if ( a3 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = v12;
        }
      }
    }
  }
  return (unsigned int)FrameStatistics;
}
