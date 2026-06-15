/*
 * XREFs of ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18005B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180050464 (--1-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180050510 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?Add@?$CAtlArray@PEAXV?$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z @ 0x18005A4F4 (-Add@-$CAtlArray@PEAXV-$CElementTraits@PEAX@ATL@@@ATL@@QEAA_KPEAX@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSession::DisconnectStreamsForResource(CAudioSession *this, __int64 a2)
{
  CAudioSession *v2; // rdi
  int i; // r14d
  __int64 v4; // rcx
  int j; // r14d
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // r12d
  unsigned __int64 k; // r14
  __int64 *v10; // r15
  unsigned __int64 m; // r14
  __int64 *v13; // r15
  unsigned __int64 n; // rdi
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // rbx
  __int64 bAlertable; // [rsp+20h] [rbp-F8h]
  BOOL v21; // [rsp+30h] [rbp-E8h]
  int v22; // [rsp+38h] [rbp-E0h]
  LPCRITICAL_SECTION v23; // [rsp+40h] [rbp-D8h] BYREF
  char v24; // [rsp+48h] [rbp-D0h]
  void *Block; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  int v28; // [rsp+68h] [rbp-B0h]
  LPCRITICAL_SECTION v29; // [rsp+70h] [rbp-A8h] BYREF
  char v30; // [rsp+78h] [rbp-A0h]
  HANDLE *lpHandles; // [rsp+80h] [rbp-98h] BYREF
  DWORD nCount[2]; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  int v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  ATL::CAtlException *v36; // [rsp+A8h] [rbp-70h] BYREF
  ATL::CAtlException *v37; // [rsp+B0h] [rbp-68h] BYREF
  ATL::CAtlException *v38; // [rsp+B8h] [rbp-60h] BYREF
  ATL::CAtlException *v39; // [rsp+C0h] [rbp-58h] BYREF
  ATL::CAtlException *v40; // [rsp+C8h] [rbp-50h] BYREF
  ATL::CAtlException *v41; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+20h] BYREF

  v35 = -2LL;
  v2 = this;
  Block = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  lpHandles = 0LL;
  *(_QWORD *)nCount = 0LL;
  v33 = 0LL;
  v34 = 0;
  v22 = 0;
  v21 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xADu, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 0LL);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v23, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 256));
  for ( i = *((_QWORD *)v2 + 38) - 1; ; --i )
  {
    LODWORD(v49) = i;
    if ( i < 0 )
      break;
    if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
      ATL::AtlThrowImpl(-2147024809);
    v4 = *(_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2) )
    {
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v29, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 112));
      try
      {
        if ( (unsigned __int64)i >= *((_QWORD *)v2 + 38) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          (_QWORD *)v2 + 19,
          (_QWORD *)(*((_QWORD *)v2 + 37) + 8LL * i));
      }
      catch ( ATL::CAtlException *v36 )
      {
        v17 = v36;
        if ( *(_DWORD *)v36 == -1073741571 )
          _o__resetstkoflw();
        if ( *(int *)v17 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(bAlertable) = *(_DWORD *)v17;
            WPP_SF_SD(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xAEu,
              (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
              0LL,
              bAlertable);
          }
          v2 = this;
          i = (int)v49;
          goto LABEL_22;
        }
        v2 = this;
        i = (int)v49;
      }
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((_QWORD *)v2 + 37, i);
LABEL_22:
      if ( v30 )
        ATL::CCritSecLock::Unlock(&v29);
      continue;
    }
  }
  if ( v24 )
    ATL::CCritSecLock::Unlock(&v23);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v29, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32));
  for ( j = *((_QWORD *)v2 + 11) - 1; j >= 0; --j )
  {
    if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v6 = *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, a2) )
    {
      if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
        ATL::AtlThrowImpl(-2147024809);
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j) + 344LL) )
        ++v22;
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v23, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 112));
      try
      {
        if ( (unsigned __int64)j >= *((_QWORD *)v2 + 11) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(
          (_QWORD *)v2 + 19,
          (_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * j));
      }
      catch ( ATL::CAtlException *v37 )
      {
        if ( *(_DWORD *)v37 == -1073741571 )
          _o__resetstkoflw();
        v2 = this;
      }
      if ( v24 )
        ATL::CCritSecLock::Unlock(&v23);
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((_QWORD *)v2 + 10, j);
    }
  }
  v7 = *((_DWORD *)v2 + 82) == v22;
  *((_DWORD *)v2 + 82) -= v22;
  if ( v7 )
    v21 = v22 != 0;
  if ( v30 )
    ATL::CCritSecLock::Unlock(&v29);
  if ( v21 )
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v2 - 2) + 88LL))((__int64)v2 - 16, 0LL);
  v8 = CAudioSession::DisconnectStreamList((CAudioSession *)((char *)v2 - 16));
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v23, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 112));
  for ( k = 0LL; k < *((_QWORD *)v2 + 20); ++k )
  {
    v10 = *(__int64 **)(*((_QWORD *)v2 + 19) + 8 * k);
    v49 = v10;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v49);
    }
    catch ( ATL::CAtlException *v38 )
    {
      if ( *(_DWORD *)v38 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v10 = v49;
    }
    v8 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v10[57]);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v18 = v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v8 = *(_DWORD *)v18;
      v10 = v49;
    }
    (*(void (__fastcall **)(__int64 *))(*v10 + 64))(v10);
  }
  if ( v24 )
    ATL::CCritSecLock::Unlock(&v23);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v23, (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 184));
  for ( m = 0LL; m < *((_QWORD *)v2 + 29); ++m )
  {
    v13 = *(__int64 **)(*((_QWORD *)v2 + 28) + 8 * m);
    v49 = v13;
    try
    {
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add(&Block, &v49);
    }
    catch ( ATL::CAtlException *v40 )
    {
      if ( *(_DWORD *)v40 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v13 = v49;
    }
    v8 = 0;
    try
    {
      ATL::CAtlArray<void *,ATL::CElementTraits<void *>>::Add(&lpHandles, v13[57]);
    }
    catch ( ATL::CAtlException *v41 )
    {
      v19 = v41;
      if ( *(_DWORD *)v41 == -1073741571 )
        _o__resetstkoflw();
      v2 = this;
      v8 = *(_DWORD *)v19;
      v13 = v49;
    }
    (*(void (__fastcall **)(__int64 *))(*v13 + 64))(v13);
  }
  if ( v24 )
    ATL::CCritSecLock::Unlock(&v23);
  if ( *(_QWORD *)nCount )
    WaitForMultipleObjectsEx(nCount[0], lpHandles, 1, 0x3E8u, 0);
  for ( n = 0LL; n < v26; ++n )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + n) + 72LL))(*((_QWORD *)Block + n));
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  v26 = 0LL;
  v27 = 0LL;
  if ( lpHandles )
    free(lpHandles);
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(&Block);
  return v8;
}
