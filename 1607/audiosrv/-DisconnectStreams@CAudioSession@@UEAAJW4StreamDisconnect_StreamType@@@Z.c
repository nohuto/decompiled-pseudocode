/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x18005B070
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180050510 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rsi
  ATL::CAtlException *v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v9; // [rsp+38h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v10; // [rsp+40h] [rbp-48h] BYREF
  char v11; // [rsp+48h] [rbp-40h]
  LPCRITICAL_SECTION v12; // [rsp+50h] [rbp-38h] BYREF
  char v13; // [rsp+58h] [rbp-30h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)(a1 + 32));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xABu, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 0LL);
  }
  v5 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v5) = v5 - 1;
    if ( (int)v5 < 0 )
      break;
    if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 120LL) )
    {
      if ( v2 == -1 )
        goto LABEL_19;
      if ( v2 == 1 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 40LL) )
          goto LABEL_19;
      }
      if ( !v2 )
      {
        if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5) + 41LL) )
        {
LABEL_19:
          ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)(v3 + 112));
          v4 = 0;
          try
          {
            if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(v3 + 88) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
              (_QWORD *)(v3 + 152),
              (_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v5));
          }
          catch ( ATL::CAtlException *v9 )
          {
            v7 = v9;
            if ( *(_DWORD *)v9 == -1073741571 )
              _o__resetstkoflw();
            v4 = *(_DWORD *)v7;
            if ( *(int *)v7 < 0
              && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v8) = *(_DWORD *)v7;
              WPP_SF_SD(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xACu,
                (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
                0LL,
                v8);
            }
            v2 = a2;
            v3 = a1;
          }
          ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(
            (_QWORD *)(v3 + 80),
            (int)v5);
          if ( v11 )
            ATL::CCritSecLock::Unlock(&v10);
        }
      }
    }
  }
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
  CAudioSession::DisconnectStreamList((CAudioSession *)(v3 - 16));
  return v4;
}
