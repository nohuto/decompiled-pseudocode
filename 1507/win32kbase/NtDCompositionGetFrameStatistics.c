/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C00227B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C002336C (-GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v5; // rdi
  int v6; // ebx
  DirectComposition::CConnection *DefaultConnection; // rsi
  unsigned int v8; // edx
  int FrameStatistics; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+24h] [rbp-54h]
  _OWORD v12[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+98h] [rbp+20h]

  v5 = a1;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= (unsigned __int64)W32UserProbeAddress )
      a1 = (unsigned __int64)W32UserProbeAddress;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 39) = *(_BYTE *)(a1 + 39);
    v6 = 0;
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      v6 = -1073741790;
    if ( v6 >= 0 )
    {
      FrameStatistics = DirectComposition::CConnection::GetFrameStatistics(
                          DefaultConnection,
                          (struct DCOMPOSITION_FRAME_STATISTICS *)v12);
      v14 = DirectComposition::CConnection::s_minSafeFeatureLevel;
      v11 = DirectComposition::CConnection::s_maxHardwareFeatureLevel;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 && DefaultConnection )
        DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v8);
      v6 = FrameStatistics;
      if ( FrameStatistics >= 0 )
      {
        if ( v5 + 40 < v5 || v5 + 40 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)v5 = v12[0];
        *(_OWORD *)(v5 + 16) = v12[1];
        *(_QWORD *)(v5 + 32) = v13;
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = v14;
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = v11;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
