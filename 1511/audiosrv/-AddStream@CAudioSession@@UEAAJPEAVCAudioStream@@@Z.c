/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800270A0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180071AA0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?GetCommunicationsCategory@CWindowsPolicyManager@@UEAAKXZ @ 0x18001B3B0 (-GetCommunicationsCategory@CWindowsPolicyManager@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180020580 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?IsPackagedApp@CProcess@@UEAAHXZ @ 0x180028C30 (-IsPackagedApp@CProcess@@UEAAHXZ.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002FA3C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // r15
  CAudioSession *v3; // r14
  int v4; // edi
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  CAudioStream *v9; // rdi
  __int64 (__fastcall *v10)(CAudioStream *); // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  errno_t v14; // eax
  unsigned __int64 v15; // rdi
  struct CAudioStream **v16; // rcx
  __int64 (__fastcall *v17)(CAudioStream *); // rbx
  __int64 (__fastcall *v18)(CWindowsPolicyManager *); // rbx
  int CommunicationsCategory; // eax
  int v20; // ebx
  CProcess *v21; // rdi
  __int64 (__fastcall *v22)(CProcess *__hidden); // rsi
  int IsPackagedApp; // eax
  CProcess *v24; // rdi
  __int64 (__fastcall *v25)(CProcess *__hidden); // rsi
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  int v30; // eax
  __int64 (__fastcall *v31)(CAudioSession *); // rbx
  ATL::CAtlException *v33; // rbx
  ATL::CAtlException *v34; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-58h] BYREF
  CAudioSession *v36; // [rsp+48h] [rbp-50h]
  struct CAudioStream *v37; // [rsp+50h] [rbp-48h]
  CAudioSession *v38; // [rsp+A0h] [rbp+8h] BYREF
  struct CAudioStream *v39; // [rsp+A8h] [rbp+10h]
  __int64 v40; // [rsp+B0h] [rbp+18h]
  __int64 v41; // [rsp+B8h] [rbp+20h]

  v39 = a2;
  v38 = this;
  v2 = a2;
  v3 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v4 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 272);
  LOBYTE(v36) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)v3 + 40) )
  {
    v7 = *((_QWORD *)v3 + 40);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024809);
    while ( 1 )
    {
      v8 = *((_QWORD *)v3 + 39);
      if ( *(struct CAudioStream **)(v8 + 8 * v6) == v2 )
        break;
      if ( ++v6 >= v7 )
        goto LABEL_26;
    }
    if ( v6 >= v7 )
      ATL::AtlThrowImpl(-2147024809);
    v9 = *(CAudioStream **)(v8 + 8 * v6);
    v10 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v9 + 72LL);
    if ( v10 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v9);
    else
      v10(v9);
    v11 = v6 + 1;
    if ( v6 + 1 < v6 || v6 == -1LL || (v12 = *((_QWORD *)v3 + 40), v11 > v12) )
      ATL::AtlThrowImpl(-2147024809);
    v13 = v12 - v11;
    if ( v13 )
    {
      v14 = memmove_s(
              (void *const)(*((_QWORD *)v3 + 39) + 8 * v6),
              8 * v13,
              (const void *const)(*((_QWORD *)v3 + 39) + 8 * v11),
              8 * v13);
      if ( v14 )
      {
        if ( v14 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v14 == 22 || v14 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v14 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
    }
    --*((_QWORD *)v3 + 40);
    v4 = 0;
  }
LABEL_26:
  if ( (_BYTE)v36 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 < 0 )
    goto LABEL_83;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 100LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v3, v2);
  }
  try
  {
    v15 = *((_QWORD *)v3 + 13);
    if ( v15 >= *((_QWORD *)v3 + 14)
      && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(
                             (char *)v3 + 96,
                             v15 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v16 = (struct CAudioStream **)(*((_QWORD *)v3 + 12) + 8 * v15);
    if ( v16 )
      *v16 = v2;
    ++*((_QWORD *)v3 + 13);
  }
  catch ( ATL::CAtlException *v34 )
  {
    v33 = v34;
    if ( *(_DWORD *)v34 == -1073741571 )
      _resetstkoflw();
    LODWORD(v40) = *(_DWORD *)v33;
    v4 = v40;
    v3 = v38;
    if ( (int)v40 >= 0 )
    {
      v5 = 0;
      v2 = v39;
      goto LABEL_41;
    }
LABEL_83:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 48));
    goto LABEL_84;
  }
LABEL_41:
  v17 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v2 + 64LL);
  if ( v17 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v17(v2);
  v18 = *(__int64 (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 112LL);
  if ( v18 == CWindowsPolicyManager::GetCommunicationsCategory )
    CommunicationsCategory = CWindowsPolicyManager::GetCommunicationsCategory(g_PolicyManager);
  else
    CommunicationsCategory = v18(g_PolicyManager);
  v20 = CommunicationsCategory;
  v21 = (CProcess *)*((_QWORD *)v3 + 108);
  v22 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v21 + 88LL);
  if ( v22 == CProcess::IsPackagedApp )
    IsPackagedApp = CProcess::IsPackagedApp(v21);
  else
    IsPackagedApp = v22(*((CProcess **)v3 + 108));
  if ( !IsPackagedApp && *((_DWORD *)v2 + 76) == v20 )
    *((_DWORD *)v3 + 152) = 1;
  if ( g_DuckingManager )
  {
    v24 = (CProcess *)*((_QWORD *)v3 + 108);
    v25 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v24 + 88LL);
    v26 = v25 == CProcess::IsPackagedApp ? CProcess::IsPackagedApp(v24) : v25(*((CProcess **)v3 + 108));
    if ( !v26 && *((_DWORD *)v3 + 152) )
      *((_DWORD *)v2 + 76) = v20;
  }
  ++*((_DWORD *)v3 + 22);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      101LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((unsigned int *)v3 + 22));
  }
  v4 = 0;
  v41 = 0LL;
  LODWORD(v39) = *((_DWORD *)v2 + 47);
  LODWORD(v38) = -1;
  v27 = *((_QWORD *)v2 + 8);
  v40 = v27;
  v28 = *(_QWORD *)(v27 + 864);
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    v27 = v40;
  }
  v40 = *(_QWORD *)(v27 + 864);
  v41 = v40;
  if ( !(*(unsigned int (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager) )
  {
    LODWORD(v38) = 0;
LABEL_70:
    if ( v5 != *((_DWORD *)v2 + 47) )
    {
      *((_DWORD *)v2 + 47) = v5;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v2 + 7) + 192LL))(
             *((_QWORD *)v2 + 7),
             1LL,
             v5,
             (unsigned int)v39);
    }
    if ( v4 >= 0 )
      goto LABEL_77;
    goto LABEL_73;
  }
  LOBYTE(v5) = (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v2 + 1) + 56LL))((__int64)v2 + 8) != 0;
  v29 = *(_QWORD *)g_PolicyManager;
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 112LL))(v40);
  v4 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD, _QWORD, int, CAudioSession **, __int64))(v29 + 56))(
         g_PolicyManager,
         v5,
         *((unsigned int *)v2 + 76),
         *((unsigned __int8 *)v2 + 184),
         v30,
         &v38,
         -2LL);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int)v38;
    goto LABEL_70;
  }
LABEL_73:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      44LL,
      &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      (unsigned int)v4);
  }
LABEL_77:
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 48));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  lpCriticalSection = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  v36 = v3;
  v37 = v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)v3 + 624),
    (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&lpCriticalSection);
  v31 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL);
  if ( v31 == CAudioSession::Release )
    CAudioSession::Release(v3);
  else
    v31(v3);
  SetEvent(*((HANDLE *)v2 + 36));
LABEL_84:
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      102LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (unsigned int)v4);
  }
  return (unsigned int)v4;
}
