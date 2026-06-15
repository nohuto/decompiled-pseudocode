/*
 * XREFs of ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180077DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180005D34 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006755C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800675F4 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x180077940 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamsForResource(CAudioSession *this, __int64 a2)
{
  CAudioSession *v2; // rsi
  int v3; // r13d
  int v4; // r12d
  int i; // r15d
  _QWORD *v6; // rcx
  bool v7; // zf
  unsigned int v8; // ebx
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+40h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v12; // [rsp+48h] [rbp-70h] BYREF
  char v13; // [rsp+50h] [rbp-68h]
  __int64 *v14[3]; // [rsp+58h] [rbp-60h] BYREF
  int v15; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+D0h] [rbp+18h]

  v2 = this;
  memset(v14, 0, sizeof(v14));
  v15 = 0;
  v3 = 0;
  v18 = 0;
  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xE0u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      0LL);
  }
  for ( i = *((_QWORD *)v2 + 11) - 1; i >= 0; --i )
  {
    if ( (unsigned __int64)i >= *((_QWORD *)v2 + 11) )
      ATL::AtlThrowImpl(-2147024809);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 10) + 8LL * i) + 56LL))(
           *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * i),
           a2) )
    {
      try
      {
        if ( (unsigned __int64)i >= *((_QWORD *)v2 + 11) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          v14,
          (_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * i));
      }
      catch ( ATL::CAtlException *v11 )
      {
        v10 = (int *)v11;
        if ( *(_DWORD *)v11 == -1073741571 )
          _resetstkoflw();
        if ( *v10 < 0 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_SD(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0xE1u,
              (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
              0LL);
          }
          v2 = this;
          v3 = v18;
          v4 = 0;
          continue;
        }
        v2 = this;
        v3 = v18;
        v4 = 0;
      }
      v6 = (_QWORD *)((char *)v2 + 80);
      if ( (unsigned __int64)i >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      if ( *(_BYTE *)(*(_QWORD *)(*v6 + 8LL * i) + 192LL) )
        v18 = ++v3;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v6, i);
    }
  }
  v7 = *((_DWORD *)v2 + 46) == v3;
  *((_DWORD *)v2 + 46) -= v3;
  if ( v7 && v3 )
    v4 = 1;
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v2 - 2) + 88LL))((__int64)v2 - 16, 0LL);
  v8 = CAudioSession::DisconnectStreamList((__int64)v2 - 16, v14);
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)v14);
  return v8;
}
