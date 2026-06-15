/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 * Callees:
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x180002690 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180015F70 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800160A0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180019AF0 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?IsConnectedToLazyStreamGroup@CSaDeviceProxy@@UEAA_NXZ @ 0x180022AA0 (-IsConnectedToLazyStreamGroup@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x180022AB0 (-IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ @ 0x180022AC0 (-IsLockedToPeriodicity@CSaDeviceProxy@@UEAA_NXZ.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180022EE0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180024350 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA?AV?$shared_ptr@USaDeviceReevaluationContext@@@0@XZ @ 0x18007798C (--$make_shared@USaDeviceReevaluationContext@@$$V@std@@YA-AV-$shared_ptr@USaDeviceReevaluationCon.c)
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x180079650 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct IStreamGroupProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 (__fastcall *v5)(CAudioStream *, struct IAudioSessionInfo **); // rax
  int SessionInfo; // eax
  __int64 (__fastcall *v7)(CAudioSession *, struct IAudioProcess **); // rax
  int v8; // eax
  CAudioSession *v9; // rbx
  __int64 (__fastcall *v10)(CAudioStream *); // rax
  __int64 UniqueStreamIdentifier; // rax
  const unsigned __int16 *(__fastcall *v12)(CAudioSession *); // rax
  __int64 Identifier; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rdx
  __int64 (__fastcall *v16)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rax
  CSaDeviceProxy *v17; // rbx
  bool (__fastcall *v18)(CSaDeviceProxy *__hidden); // rax
  bool IsLockedToFormat; // al
  bool (__fastcall *v20)(CSaDeviceProxy *__hidden); // rax
  bool IsLockedToPeriodicity; // al
  bool (__fastcall *v22)(CSaDeviceProxy *__hidden); // rax
  __int64 (__fastcall *v23)(CSharedStreamGroupProxy *__hidden, struct IAudioStreamInfo *); // rax
  unsigned int v24; // eax
  unsigned int v25; // esi
  CSaDeviceProxy *v26; // rbx
  bool (__fastcall *v27)(CSaDeviceProxy *__hidden); // rax
  bool v28; // al
  bool (__fastcall *v29)(CSaDeviceProxy *__hidden); // rax
  bool v30; // al
  bool v31; // r14
  bool (__fastcall *v32)(CSaDeviceProxy *__hidden); // rax
  bool v33; // al
  void (*v34)(void); // rax
  void **v36; // rbx
  __int64 v37; // rax
  void *v38; // rcx
  const unsigned __int16 *v39; // r15
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r14
  CAudioResourceManager *v42; // r14
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned __int16 **v44; // [rsp+20h] [rbp-128h]
  unsigned __int64 *v45; // [rsp+28h] [rbp-120h]
  unsigned int v46; // [rsp+30h] [rbp-118h]
  bool v47; // [rsp+40h] [rbp-108h]
  bool IsConnectedToLazyStreamGroup; // [rsp+41h] [rbp-107h]
  CSaDeviceProxy *v49; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-F8h] BYREF
  CAudioSession *v51; // [rsp+58h] [rbp-F0h] BYREF
  struct IAudioProcess *v52; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-E0h] BYREF
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp-D8h] BYREF
  CAudioResourceManager *v55; // [rsp+78h] [rbp-D0h]
  _DWORD v56[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+88h] [rbp-C0h]
  void **v58; // [rsp+90h] [rbp-B8h] BYREF
  std::_Ref_count_base *v59; // [rsp+98h] [rbp-B0h]
  __int64 v60; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-98h] BYREF
  int v62; // [rsp+B8h] [rbp-90h]
  int v63; // [rsp+BCh] [rbp-8Ch]
  void *v64; // [rsp+C0h] [rbp-88h]
  int v65; // [rsp+C8h] [rbp-80h]
  int v66; // [rsp+CCh] [rbp-7Ch]
  __int64 *v67; // [rsp+D0h] [rbp-78h]
  __int64 v68; // [rsp+D8h] [rbp-70h]
  const WCHAR *v69; // [rsp+E0h] [rbp-68h]
  int v70; // [rsp+E8h] [rbp-60h]
  int v71; // [rsp+ECh] [rbp-5Ch]
  unsigned int *v72; // [rsp+F0h] [rbp-58h]
  __int64 v73; // [rsp+F8h] [rbp-50h]

  v60 = -2LL;
  v55 = this;
  v51 = 0LL;
  v52 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioSessionInfo **))(*(_QWORD *)a3 + 24LL);
  if ( v5 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(a3, &v51);
  else
    SessionInfo = v5(a3, &v51);
  if ( SessionInfo >= 0 && v51 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v51 + 24LL);
    v8 = v7 == CAudioSession::GetProcess ? CAudioSession::GetProcess(v51, &v52) : v7(v51, &v52);
    if ( v8 >= 0 )
    {
      v9 = v51;
      if ( v51 )
      {
        if ( dword_1800CA040 > 4u )
        {
          v10 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a3 + 72LL);
          if ( v10 == CAudioStream::GetUniqueStreamIdentifier )
          {
            UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a3);
          }
          else
          {
            UniqueStreamIdentifier = v10(a3);
            v9 = v51;
          }
          v53 = UniqueStreamIdentifier;
          v67 = &v53;
          v68 = 8LL;
          v12 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 64LL);
          if ( v12 == CAudioSession::GetIdentifier )
            Identifier = (__int64)CAudioSession::GetIdentifier(v9);
          else
            Identifier = (__int64)v12(v9);
          v14 = (const WCHAR *)Identifier;
          v15 = &pwsz;
          LODWORD(Identifier) = 0;
          if ( v14 )
          {
            v15 = v14;
            Identifier = -1LL;
            do
              ++Identifier;
            while ( v14[Identifier] );
          }
          v69 = v15;
          v70 = 2 * Identifier + 2;
          v71 = 0;
          v50 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v52 + 40LL))(v52);
          v72 = &v50;
          v73 = 4LL;
          v56[0] = ((unsigned int)&unk_1800A83AC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v56[1] = 4;
          v57 = 0LL;
          v61 = (unsigned __int64)off_1800CA048;
          v62 = *(unsigned __int16 *)off_1800CA048;
          v63 = 2;
          v64 = &unk_1800A83B7;
          v65 = 64;
          v66 = 1;
          EtwEventWriteTransfer(qword_1800CA060, v56, 0LL, 0LL, 5, &v61);
        }
      }
    }
  }
  v49 = 0LL;
  v16 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)a2 + 176LL);
  if ( v16 == CBaseStreamGroupProxy::GetConnectedSaDevice )
    CBaseStreamGroupProxy::GetConnectedSaDevice(a2, &v49);
  else
    v16(a2, &v49);
  v17 = v49;
  if ( v49 )
  {
    v18 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v49 + 152LL);
    if ( v18 == CSaDeviceProxy::IsLockedToFormat )
    {
      IsLockedToFormat = CSaDeviceProxy::IsLockedToFormat(v49);
    }
    else
    {
      IsLockedToFormat = v18(v49);
      v17 = v49;
    }
    v47 = 1;
    if ( !IsLockedToFormat )
    {
      v20 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v17 + 120LL);
      if ( v20 == CSaDeviceProxy::IsLockedToPeriodicity )
      {
        IsLockedToPeriodicity = CSaDeviceProxy::IsLockedToPeriodicity(v17);
      }
      else
      {
        IsLockedToPeriodicity = v20(v17);
        v17 = v49;
      }
      if ( !IsLockedToPeriodicity )
        v47 = 0;
    }
    if ( v17 )
    {
      v22 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v17 + 128LL);
      if ( v22 == CSaDeviceProxy::IsConnectedToLazyStreamGroup )
        IsConnectedToLazyStreamGroup = CSaDeviceProxy::IsConnectedToLazyStreamGroup(v17);
      else
        IsConnectedToLazyStreamGroup = v22(v17);
      goto LABEL_31;
    }
  }
  else
  {
    v47 = 0;
  }
  IsConnectedToLazyStreamGroup = 0;
LABEL_31:
  v23 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 96LL);
  if ( v23 == CSharedStreamGroupProxy::DestroyStream )
    v24 = CSharedStreamGroupProxy::DestroyStream(a2, a3);
  else
    v24 = v23(a2, a3);
  v25 = v24;
  v50 = v24;
  v26 = v49;
  if ( v49 )
  {
    v27 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v49 + 152LL);
    if ( v27 == CSaDeviceProxy::IsLockedToFormat )
    {
      v28 = CSaDeviceProxy::IsLockedToFormat(v49);
    }
    else
    {
      v28 = v27(v49);
      v26 = v49;
    }
    v31 = 1;
    if ( !v28 )
    {
      v29 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v26 + 120LL);
      if ( v29 == CSaDeviceProxy::IsLockedToPeriodicity )
      {
        v30 = CSaDeviceProxy::IsLockedToPeriodicity(v26);
      }
      else
      {
        v30 = v29(v26);
        v26 = v49;
      }
      if ( !v30 )
        v31 = 0;
    }
    if ( v26 )
    {
      v32 = *(bool (__fastcall **)(CSaDeviceProxy *__hidden))(*(_QWORD *)v26 + 128LL);
      if ( v32 == CSaDeviceProxy::IsConnectedToLazyStreamGroup )
      {
        v33 = CSaDeviceProxy::IsConnectedToLazyStreamGroup(v26);
      }
      else
      {
        v33 = v32(v26);
        v26 = v49;
      }
      goto LABEL_44;
    }
  }
  else
  {
    v31 = 0;
  }
  v33 = 0;
LABEL_44:
  if ( v47 && !v31 || IsConnectedToLazyStreamGroup && v33 )
  {
    std::make_shared<SaDeviceReevaluationContext,>(&v58);
    v36 = v58;
    if ( v58 )
    {
      v37 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 48LL))(a2);
      v39 = (const unsigned __int16 *)v37;
      v40 = -1LL;
      do
        ++v40;
      while ( *(_WORD *)(v37 + 2 * v40) );
      *v36 = 0LL;
      v41 = v40 + 1;
      if ( v40 + 1 >= v40 )
      {
        *v36 = 0LL;
        if ( is_mul_ok(v41, 2uLL)
          && CTCoAllocPolicy::Alloc(v38, (v41 * (unsigned __int128)2uLL) >> 64, 2 * v41, v36) >= 0 )
        {
          StringCchCopyNExW((unsigned __int16 *)*v36, v40 + 1, v39, v40, v44, v45, v46);
          v42 = v55;
          ThreadpoolTimer = CreateThreadpoolTimer(
                              CAudioResourceManager::ReevaluateSaDevicesForEndpoint,
                              (char *)v55 - 8,
                              0LL);
          if ( ThreadpoolTimer )
          {
            v36[1] = ThreadpoolTimer;
            pftDueTime = (struct _FILETIME)-100000000LL;
            SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
            try
            {
              std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back((char *)v42 + 80, &v58);
            }
            catch ( std::bad_alloc )
            {
              v25 = v50;
            }
          }
        }
      }
    }
    if ( v59 )
      std::_Ref_count_base::_Decref(v59);
    v26 = v49;
  }
  if ( v26 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v52 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v51 )
  {
    v34 = *(void (**)(void))(*(_QWORD *)v51 + 16LL);
    if ( (char *)v34 == (char *)CAudioSession::Release )
    {
      CAudioSession::Release(v51);
    }
    else if ( (char *)v34 == (char *)CPerEndpointVolumeAudioSession::Release )
    {
      CPerEndpointVolumeAudioSession::Release(v51);
    }
    else
    {
      v34();
    }
  }
  return v25;
}
