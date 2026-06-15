/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001A1E0
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013044 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800160A0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001A160 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, char a2, float a3, __int64 a4, bool a5)
{
  char v5; // di
  __int64 v6; // r15
  float v9; // xmm6_4
  char *v10; // rdx
  int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15; // di
  float v16; // xmm6_4
  _BOOL8 (__fastcall *v17)(CAudioStream *); // rax
  CAudioStream *v18; // rcx
  BOOL IsCaptureStream; // eax
  char v20; // al
  float v21; // xmm0_4
  unsigned int v22; // edi
  CAudioSession *v24; // rcx
  __int64 (__fastcall *v25)(CAudioSession *, unsigned int *); // rax
  int v26; // eax
  __int64 (__fastcall *v27)(CAudioStream *); // rax
  CAudioStream *v28; // rcx
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v30; // rcx
  __int64 (*v31)(void); // rax
  const WCHAR *Identifier; // rax
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  const WCHAR *v38; // rax
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  unsigned int v41[2]; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v42; // [rsp+40h] [rbp-99h] BYREF
  char v43[4]; // [rsp+48h] [rbp-91h] BYREF
  float v44; // [rsp+4Ch] [rbp-8Dh]
  char v45; // [rsp+50h] [rbp-89h]
  float v46; // [rsp+54h] [rbp-85h]
  __int64 v47; // [rsp+58h] [rbp-81h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-71h] BYREF
  float *v49; // [rsp+88h] [rbp-51h]
  __int64 v50; // [rsp+90h] [rbp-49h]
  __int64 *v51; // [rsp+98h] [rbp-41h]
  __int64 v52; // [rsp+A0h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-31h] BYREF
  unsigned int *v54; // [rsp+B8h] [rbp-21h]
  __int64 v55; // [rsp+C0h] [rbp-19h]
  char v56; // [rsp+140h] [rbp+67h] BYREF
  float v57; // [rsp+148h] [rbp+6Fh] BYREF

  v57 = a3;
  v56 = a2;
  v5 = 0;
  v6 = 0LL;
  v41[0] = 0;
  v9 = FLOAT_1_0;
  if ( this )
    v10 = (char *)this + 8;
  else
    v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, char *, char *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          v10,
          v43);
  if ( v11 < 0 )
    goto LABEL_45;
  v12 = *((_QWORD *)this + 8);
  v13 = *(_QWORD *)(v12 + 864);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v12 + 864));
  v14 = *(_QWORD *)(v12 + 864);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 176LL))(v14) )
  {
    v5 = v43[0];
    v9 = v44;
    v6 = v47;
  }
  v15 = v45 | v5;
  v16 = v9 * v46;
  v17 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)this + 1) + 56LL);
  v18 = (CAudioStream *)((char *)this + 8);
  if ( v17 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v18);
  else
    IsCaptureStream = v17(v18);
  if ( IsCaptureStream && v16 != 0.0 )
    v16 = FLOAT_1_0;
  v20 = v15 | v56;
  v21 = v57 * v16;
  v56 |= v15;
  v57 = v57 * v16;
  if ( a4 < v6 )
    a4 = v6;
  if ( v20 == *((_BYTE *)this + 92) )
  {
    v22 = v41[0];
  }
  else
  {
    v35 = *((_QWORD *)this + 8);
    v22 = 1;
    *((_BYTE *)this + 92) = v20;
    if ( v35 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 120LL))(v35, v41) >= 0
        && dword_1800CA040 > 4u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
      {
        v50 = 1LL;
        v49 = (float *)&v56;
        v36 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 72LL))((char *)this + 8);
        v37 = *((_QWORD *)this + 8);
        v42 = v36;
        v51 = &v42;
        v52 = 8LL;
        v38 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 64LL))(v37);
        TlgCreateWsz(&pDesc, v38);
        v55 = 4LL;
        v54 = v41;
        TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A80D3, v39, v40, 6u, &pData);
      }
      v21 = v57;
    }
  }
  if ( v21 != *((float *)this + 22) )
  {
    v24 = (CAudioSession *)*((_QWORD *)this + 8);
    v22 = 1;
    *((float *)this + 22) = v21;
    if ( v24 )
    {
      v25 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v24 + 120LL);
      v26 = v25 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v24, v41) : v25(v24, v41);
      if ( v26 >= 0 && dword_1800CA040 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x400000000000uLL) )
      {
        v50 = 4LL;
        v49 = &v57;
        v27 = *(__int64 (__fastcall **)(CAudioStream *))(*((_QWORD *)this + 1) + 72LL);
        v28 = (CAudioStream *)((char *)this + 8);
        if ( v27 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v28);
        else
          UniqueStreamIdentifier = v27(v28);
        v30 = (CAudioSession *)*((_QWORD *)this + 8);
        v42 = UniqueStreamIdentifier;
        v51 = &v42;
        v52 = 8LL;
        v31 = *(__int64 (**)(void))(*(_QWORD *)v30 + 64LL);
        if ( (char *)v31 == (char *)CAudioSession::GetIdentifier )
          Identifier = CAudioSession::GetIdentifier(v30);
        else
          Identifier = (const WCHAR *)v31();
        TlgCreateWsz(&pDesc, Identifier);
        v55 = 4LL;
        v54 = v41;
        TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8074, v33, v34, 6u, &pData);
      }
    }
  }
  *((_QWORD *)this + 12) = a4;
  if ( v22 && a5 )
    v11 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 128LL))(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v11 < 0 )
LABEL_45:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetPolicyVolume", 0x623u, v11);
  return (unsigned int)v11;
}
