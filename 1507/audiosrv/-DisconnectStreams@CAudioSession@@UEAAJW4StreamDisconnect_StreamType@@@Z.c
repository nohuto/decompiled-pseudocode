/*
 * XREFs of ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x180077B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180005D34 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800675F4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x1800827F4 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreams(__int64 a1, int a2)
{
  void (__fastcall *v2)(_QWORD); // rbx
  int v3; // r12d
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned int v6; // r13d
  unsigned __int64 i; // rsi
  CAudioStream **v8; // rbx
  void (__fastcall *v10)(_QWORD); // kr00_8
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+38h] [rbp-70h] BYREF
  LPCRITICAL_SECTION v13; // [rsp+40h] [rbp-68h] BYREF
  char v14; // [rsp+48h] [rbp-60h]
  CAudioStream **v15; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+C0h] [rbp+18h]

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)(a1 + 32));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xDEu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      0LL);
  }
  for ( i = 0LL; i < *(_QWORD *)(v4 + 88); ++i )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * i) + 112LL) )
    {
      if ( v3 == -1 )
        goto LABEL_17;
      if ( v3 == 1 )
      {
        if ( i >= *(_QWORD *)(v4 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * i) + 40LL) )
          goto LABEL_17;
      }
      if ( !v3 )
      {
        if ( i >= *(_QWORD *)(v4 + 88) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * i) + 41LL) )
        {
LABEL_17:
          v6 = 0;
          try
          {
            if ( i >= *(_QWORD *)(v4 + 88) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
              &v15,
              (_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * i));
          }
          catch ( ATL::CAtlException *v12 )
          {
            v10 = v2;
            v11 = v12;
            if ( *(_DWORD *)v12 == -1073741571 )
              _resetstkoflw();
            v21 = *(_DWORD *)v11;
            v2 = v10;
            v6 = v21;
            v5 = 0LL;
            if ( v21 < 0 )
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_SD(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0xDFu,
                  (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
                  0LL);
              }
              v4 = a1;
              v3 = a2;
              continue;
            }
            v4 = a1;
            v3 = a2;
          }
          if ( i >= *(_QWORD *)(v4 + 88) )
            ATL::AtlThrowImpl(-2147024809);
          v2 = *(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 80) + 8 * i) + 64LL);
          v2(*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8 * i));
        }
      }
    }
  }
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  while ( v5 < v16 )
  {
    v8 = v15;
    CAudioStream::RemoteDisconnect(v15[v5]);
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v8[v5] + 72LL))(v8[v5]);
    ++v5;
  }
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)&v15);
  return v6;
}
