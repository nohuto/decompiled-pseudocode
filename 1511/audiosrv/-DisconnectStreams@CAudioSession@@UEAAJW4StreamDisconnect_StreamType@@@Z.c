/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800727E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x18002FA1C (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180065E90 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18007D90C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // r15
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 i; // r14
  CAudioStream **v7; // rbx
  ATL::CAtlException *v9; // [rsp+40h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v10; // [rsp+48h] [rbp-70h] BYREF
  char v11; // [rsp+50h] [rbp-68h]
  CAudioStream **v12; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  int v15; // [rsp+70h] [rbp-48h]

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)(a1 + 32));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDEu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
  }
  for ( i = 0LL; i < *(_QWORD *)(v3 + 88); ++i )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8 * i) + 104LL) )
    {
      if ( v2 == -1 )
        goto LABEL_33;
      if ( v2 == 1 )
      {
        if ( i >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8 * i) + 40LL) )
          goto LABEL_33;
      }
      if ( !v2 )
      {
        if ( i >= *(_QWORD *)(v3 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8 * i) + 41LL) )
        {
LABEL_33:
          try
          {
            if ( i >= *(_QWORD *)(v3 + 88) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
              &v12,
              (_QWORD *)(*(_QWORD *)(v3 + 80) + 8 * i));
          }
          catch ( ATL::CAtlException *v9 )
          {
            if ( *(_DWORD *)v9 == -1073741571 )
              _resetstkoflw();
            v4 = 0LL;
            v3 = a1;
            v2 = a2;
          }
          if ( i >= *(_QWORD *)(v3 + 88) )
            ATL::AtlThrowImpl(-2147024809);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 80) + 8 * i) + 64LL))(*(_QWORD *)(*(_QWORD *)(v3 + 80) + 8 * i));
          v5 = v13;
        }
      }
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  if ( v5 )
  {
    do
    {
      v7 = v12;
      CAudioStream::RemoteDisconnect(v12[v4]);
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v7[v4] + 72LL))(v7[v4]);
      ++v4;
    }
    while ( v4 < v5 );
  }
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)&v12);
  return 0LL;
}
