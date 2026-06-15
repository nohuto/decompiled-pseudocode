/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014540
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019910 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x1800199E0 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001A160 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002890C (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rsi
  CAudioSession *v3; // rbx
  int v4; // edi
  unsigned int v5; // r15d
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  CAudioStream *v8; // rcx
  void (*v9)(void); // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  struct CAudioStream **v14; // rcx
  unsigned int (__fastcall *v15)(CAudioStream *__hidden); // rax
  int v16; // edi
  unsigned int v17; // r12d
  __int64 v18; // r14
  __int64 v19; // rcx
  struct CAudioStream *v20; // r14
  __int64 (*v21)(void); // rax
  int IsCaptureStream; // eax
  __int64 v23; // rdi
  int v24; // eax
  __int64 (__fastcall *v25)(CPerEndpointVolumeAudioSession *); // rax
  ATL::CAtlException *v27; // rbx
  __int64 v28; // rax
  const void *v29; // r9
  void *v30; // rcx
  ATL::CAtlException *v31; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v32; // [rsp+50h] [rbp-58h] BYREF
  char v33; // [rsp+58h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-48h] BYREF
  CAudioSession *v35; // [rsp+68h] [rbp-40h]
  struct CAudioStream *v36; // [rsp+70h] [rbp-38h]
  CAudioSession *v37; // [rsp+B0h] [rbp+8h] BYREF
  struct CAudioStream *v38; // [rsp+B8h] [rbp+10h]
  int v39; // [rsp+C0h] [rbp+18h]

  v38 = a2;
  v37 = this;
  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  v32 = (LPCRITICAL_SECTION)((char *)v3 + 48);
  v33 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v32);
  v4 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 272);
  LOBYTE(v35) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)v3 + 40) )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)v3 + 39);
      if ( *(struct CAudioStream **)(v7 + 8 * v6) == v2 )
        break;
      if ( ++v6 >= *((_QWORD *)v3 + 40) )
        goto LABEL_11;
    }
    if ( v6 >= *((_QWORD *)v3 + 40) )
      ATL::AtlThrowImpl(-2147024809);
    v8 = *(CAudioStream **)(v7 + 8 * v6);
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 72LL);
    if ( (char *)v9 == (char *)CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v8);
    else
      v9();
    v10 = v6 + 1;
    if ( v6 + 1 < v6 || v6 == -1LL || (v11 = *((_QWORD *)v3 + 40), v10 > v11) )
      ATL::AtlThrowImpl(-2147024809);
    v12 = v11 - v10;
    if ( v12 )
    {
      v28 = *((_QWORD *)v3 + 39);
      v29 = (const void *)(v28 + 8 * v10);
      v30 = (void *)(v28 + 8 * v6);
      if ( 8 * v12 )
      {
        if ( !v30 || !v29 )
        {
          *(_DWORD *)_o__errno(v30, v12) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v30, v29, 8 * v12);
      }
    }
    --*((_QWORD *)v3 + 40);
    v4 = 0;
  }
LABEL_11:
  if ( (_BYTE)v35 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 < 0 )
  {
    if ( !v33 )
    {
LABEL_71:
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
      goto LABEL_53;
    }
LABEL_70:
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v32);
    goto LABEL_71;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x42u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      v3,
      v2);
  }
  try
  {
    v13 = *((_QWORD *)v3 + 13);
    if ( v13 >= *((_QWORD *)v3 + 14)
      && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                             (char *)v3 + 96,
                             v13 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v14 = (struct CAudioStream **)(*((_QWORD *)v3 + 12) + 8 * v13);
    if ( v14 )
      *v14 = v2;
    ++*((_QWORD *)v3 + 13);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v27 = v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    v39 = *(_DWORD *)v27;
    v4 = v39;
    if ( v39 < 0 )
    {
      if ( !v33 )
        goto LABEL_71;
      goto LABEL_70;
    }
    v5 = 0;
    v3 = v37;
    v2 = v38;
  }
  v15 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 64LL);
  if ( v15 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v15(v2);
  v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 104LL))(g_PolicyManager);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 108) + 96LL))(*((_QWORD *)v3 + 108))
    && *((_DWORD *)v2 + 120) == v16 )
  {
    *((_DWORD *)v3 + 152) = 1;
  }
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 108) + 96LL))(*((_QWORD *)v3 + 108))
    && *((_DWORD *)v3 + 152) )
  {
    *((_DWORD *)v2 + 120) = v16;
  }
  ++*((_DWORD *)v3 + 22);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      67LL,
      &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((unsigned int *)v3 + 22));
  }
  v4 = 0;
  v38 = 0LL;
  v17 = *((_DWORD *)v2 + 87);
  LODWORD(v37) = -1;
  v18 = *((_QWORD *)v2 + 8);
  v19 = *(_QWORD *)(v18 + 864);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *(struct CAudioStream **)(v18 + 864);
  v38 = v20;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager) )
  {
    LODWORD(v37) = 0;
LABEL_43:
    if ( v5 != *((_DWORD *)v2 + 87) )
    {
      *((_DWORD *)v2 + 87) = v5;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v2 + 7) + 192LL))(
             *((_QWORD *)v2 + 7),
             1LL,
             v5,
             v17);
    }
    if ( v4 >= 0 )
      goto LABEL_46;
    goto LABEL_81;
  }
  v21 = *(__int64 (**)(void))(*((_QWORD *)v2 + 1) + 56LL);
  if ( (char *)v21 == (char *)CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)v2 + 8));
  else
    IsCaptureStream = v21();
  LOBYTE(v5) = IsCaptureStream != 0;
  v23 = *(_QWORD *)g_PolicyManager;
  v24 = (*(__int64 (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v20 + 120LL))(v20);
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, int, CAudioSession **))(v23 + 56))(
         g_PolicyManager,
         v5,
         *((unsigned int *)v2 + 120),
         *((unsigned __int8 *)v2 + 344),
         v24,
         &v37);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int)v37;
    goto LABEL_43;
  }
LABEL_81:
  AudSrvTraceLoggingErrorHelper("CAudioStream::UpdateStreamPriority", 0x481u, v4);
LABEL_46:
  if ( v20 )
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v33 )
    LeaveCriticalSection(v32);
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  lpCriticalSection = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  v35 = v3;
  v36 = v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)v3 + 624),
    (void (__fastcall ***)(_QWORD, volatile signed __int32 **))&lpCriticalSection);
  v25 = *(__int64 (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)v3 + 16LL);
  if ( v25 == CAudioSession::Release )
  {
    CAudioSession::Release(v3);
  }
  else if ( v25 == CPerEndpointVolumeAudioSession::Release )
  {
    CPerEndpointVolumeAudioSession::Release(v3);
  }
  else
  {
    v25(v3);
  }
  SetEvent(*((HANDLE *)v2 + 58));
LABEL_53:
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 0xD05u, v4);
  return (unsigned int)v4;
}
