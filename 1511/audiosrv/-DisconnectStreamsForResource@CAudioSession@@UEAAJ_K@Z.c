/*
 * XREFs of ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180072AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x18002FA1C (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180065E90 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     ?Add@?$CAtlArray@PEAXV?$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z @ 0x1800719C8 (-Add@-$CAtlArray@PEAXV-$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSession::DisconnectStreamsForResource(CAudioSession *this, __int64 a2)
{
  CAudioSession *v2; // r14
  int i; // r12d
  int v4; // r12d
  _QWORD *v5; // rcx
  bool v6; // zf
  unsigned int v7; // r13d
  unsigned __int64 j; // rdi
  __int64 *v9; // r12
  unsigned __int64 k; // rdi
  __int64 *v11; // r12
  unsigned __int64 m; // r14
  int *v14; // rbx
  int *v15; // rbx
  ATL::CAtlException *v16; // rbx
  ATL::CAtlException *v17; // rbx
  BOOL v18; // [rsp+30h] [rbp-F8h]
  int v19; // [rsp+38h] [rbp-F0h]
  LPCRITICAL_SECTION v20; // [rsp+40h] [rbp-E8h] BYREF
  char v21; // [rsp+48h] [rbp-E0h]
  void *Block; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-D0h]
  __int64 v24; // [rsp+60h] [rbp-C8h]
  int v25; // [rsp+68h] [rbp-C0h]
  HANDLE *lpHandles; // [rsp+70h] [rbp-B8h] BYREF
  DWORD nCount[2]; // [rsp+78h] [rbp-B0h]
  __int64 v28; // [rsp+80h] [rbp-A8h]
  int v29; // [rsp+88h] [rbp-A0h]
  __int64 *v30[3]; // [rsp+90h] [rbp-98h] BYREF
  int v31; // [rsp+A8h] [rbp-80h]
  ATL::CAtlException *v32; // [rsp+B0h] [rbp-78h] BYREF
  ATL::CAtlException *v33; // [rsp+B8h] [rbp-70h] BYREF
  ATL::CAtlException *v34; // [rsp+C0h] [rbp-68h] BYREF
  ATL::CAtlException *v35; // [rsp+C8h] [rbp-60h] BYREF
  ATL::CAtlException *v36; // [rsp+D0h] [rbp-58h] BYREF
  ATL::CAtlException *v37[10]; // [rsp+D8h] [rbp-50h] BYREF
  __int64 *v40; // [rsp+148h] [rbp+20h] BYREF

  v37[1] = (ATL::CAtlException *)-2LL;
  v2 = this;
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  Block = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  lpHandles = 0LL;
  *(_QWORD *)nCount = 0LL;
  v28 = 0LL;
  v29 = 0;
  v19 = 0;
  v18 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xE0u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 256));
  for ( i = *((_QWORD *)v2 + 38) - 1; ; --i )
  {
    LODWORD(v40) = i;
    if ( i < 0 )
      break;
    if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
      ATL::AtlThrowImpl(-2147024809);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 37) + 8LL * i) + 56LL))(
           *(_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i),
           a2) )
    {
      try
      {
        if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          v30,
          (_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i));
      }
      catch ( ATL::CAtlException *v33 )
      {
        v14 = (int *)v33;
        if ( *(_DWORD *)v33 == -1073741571 )
          _resetstkoflw();
        if ( *v14 < 0 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xE1u,
              (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
              0LL);
          }
          v2 = this;
          i = (int)v40;
          continue;
        }
        v2 = this;
        i = (int)v40;
      }
      if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
        ATL::AtlThrowImpl(-2147024809);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 37) + 8LL * i) + 64LL))(*(_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i));
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((_QWORD *)v2 + 37, i);
    }
  }
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32));
  v4 = *((_QWORD *)v2 + 11) - 1;
  while ( 2 )
  {
    LODWORD(v40) = v4;
    if ( v4 >= 0 )
    {
      if ( (unsigned __int64)v4 >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v2 + 10) + 8LL * v4) + 56LL))(
              *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * v4),
              a2) )
        goto LABEL_50;
      try
      {
        if ( (unsigned __int64)v4 >= *((_QWORD *)v2 + 11) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          v30,
          (_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * v4));
      }
      catch ( ATL::CAtlException *v34 )
      {
        v15 = (int *)v34;
        if ( *(_DWORD *)v34 == -1073741571 )
          _resetstkoflw();
        if ( *v15 < 0 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xE2u,
              (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
              0LL);
          }
          v2 = this;
          v4 = (int)v40;
LABEL_50:
          --v4;
          continue;
        }
        v2 = this;
        v4 = (int)v40;
      }
      if ( (unsigned __int64)v4 >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 10) + 8LL * v4) + 64LL))(*(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * v4));
      v5 = (_QWORD *)((char *)v2 + 80);
      if ( (unsigned __int64)v4 >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      if ( *(_BYTE *)(*(_QWORD *)(*v5 + 8LL * v4) + 184LL) )
        ++v19;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v5, v4);
      goto LABEL_50;
    }
    break;
  }
  v6 = *((_DWORD *)v2 + 82) == v19;
  *((_DWORD *)v2 + 82) -= v19;
  if ( v6 )
    v18 = v19 != 0;
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  if ( v18 )
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v2 - 2) + 88LL))((__int64)v2 - 16, 0LL);
  v7 = CAudioSession::DisconnectStreamList((__int64)v2 - 16, v30);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 112));
  for ( j = 0LL; j < *((_QWORD *)v2 + 20); ++j )
  {
    v9 = *(__int64 **)(*((_QWORD *)v2 + 19) + 8 * j);
    v40 = v9;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v40);
    }
    catch ( ATL::CAtlException *v36 )
    {
      if ( *(_DWORD *)v36 == -1073741571 )
        _resetstkoflw();
      v2 = this;
      v9 = v40;
    }
    v7 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v9[35]);
    }
    catch ( ATL::CAtlException *v32 )
    {
      v16 = v32;
      if ( *(_DWORD *)v32 == -1073741571 )
        _resetstkoflw();
      v2 = this;
      v7 = *(_DWORD *)v16;
      v9 = v40;
    }
    (*(void (__fastcall **)(__int64 *))(*v9 + 64))(v9);
  }
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v20, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 184));
  for ( k = 0LL; k < *((_QWORD *)v2 + 29); ++k )
  {
    v11 = *(__int64 **)(*((_QWORD *)v2 + 28) + 8 * k);
    v40 = v11;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v40);
    }
    catch ( ATL::CAtlException *v37 )
    {
      if ( *(_DWORD *)v37[0] == -1073741571 )
        _resetstkoflw();
      v2 = this;
      v11 = v40;
    }
    v7 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v11[35]);
    }
    catch ( ATL::CAtlException *v35 )
    {
      v17 = v35;
      if ( *(_DWORD *)v35 == -1073741571 )
        _resetstkoflw();
      v2 = this;
      v7 = *(_DWORD *)v17;
      v11 = v40;
    }
    (*(void (__fastcall **)(__int64 *))(*v11 + 64))(v11);
  }
  if ( v21 )
    ATL::CCritSecLock::Unlock(&v20);
  if ( *(_QWORD *)nCount )
    WaitForMultipleObjectsEx(nCount[0], lpHandles, 1, 0x3E8u, 0);
  for ( m = 0LL; m < v23; ++m )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + m) + 72LL))(*((_QWORD *)Block + m));
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( lpHandles )
    free(lpHandles);
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(&Block);
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)v30);
  return v7;
}
