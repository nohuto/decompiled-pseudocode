/*
 * XREFs of ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180023ABC
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001D9C8 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014AFC (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::Stop(SingleViewExperienceTelemetry::Show *this, int a2)
{
  int *v2; // rbx
  int v4; // eax
  int *v5; // rbx
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // r10
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // rcx
  const unsigned __int16 *v14; // rdx
  void *v15; // rcx
  void *v16; // r9
  void *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  void *v22; // rcx
  void *v23; // rdx
  const unsigned __int16 *v24; // rcx
  void *v25; // rcx
  const struct _TlgProvider_t *v26; // rax
  const struct _TlgProvider_t *v27; // rbx
  int v28; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v38; // [rsp+88h] [rbp-80h]
  int v39; // [rsp+90h] [rbp-78h]
  int v40; // [rsp+94h] [rbp-74h]
  int *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  int *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  void *v48; // [rsp+C8h] [rbp-40h]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  int *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v53; // [rsp+E8h] [rbp-20h]
  int v54; // [rsp+F0h] [rbp-18h]
  int v55; // [rsp+F4h] [rbp-14h]
  __int64 *v56; // [rsp+F8h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v58; // [rsp+108h] [rbp+0h]
  int v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+114h] [rbp+Ch]
  void *v61; // [rsp+118h] [rbp+10h]
  int v62; // [rsp+120h] [rbp+18h]
  int v63; // [rsp+124h] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v66; // [rsp+138h] [rbp+30h]
  int v67; // [rsp+140h] [rbp+38h]
  int v68; // [rsp+144h] [rbp+3Ch]
  void *v69; // [rsp+148h] [rbp+40h]
  int v70; // [rsp+150h] [rbp+48h]
  int v71; // [rsp+154h] [rbp+4Ch]
  int *v72; // [rsp+158h] [rbp+50h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+168h] [rbp+60h] BYREF
  PSRWLOCK *v75; // [rsp+188h] [rbp+80h]
  __int64 v76; // [rsp+190h] [rbp+88h]
  __int64 *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  int *v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  int v81; // [rsp+1F0h] [rbp+E8h] BYREF

  v81 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v6 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v5 )
  {
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v7 = SingleViewExperienceLogging::Provider();
    v8 = v7;
    if ( *(_DWORD *)v7 > 5u
      && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v9 = &word_1800359D5;
      v10 = (const unsigned __int16 *)*((_QWORD *)v5 + 6);
      v32 = v5[1];
      v36 = &v32;
      LODWORD(v11) = 0;
      v37 = 4LL;
      v12 = &word_1800359D5;
      if ( v10 )
      {
        v12 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v5 + 15);
      v39 = v11 + 1;
      v41 = v5 + 14;
      LODWORD(v11) = 0;
      v38 = v12;
      v14 = &word_1800359D5;
      v40 = 0;
      v42 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (void *)*((_QWORD *)v5 + 2);
      v16 = &unk_1800359D8;
      v43 = v14;
      v44 = v11 + 1;
      v17 = &unk_1800359D8;
      v33 = *v5;
      v46 = &v33;
      LODWORD(v11) = 0;
      v45 = 0;
      v47 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)v15 + v11) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v5 + 8);
      v49 = 2 * v11 + 2;
      v34 = v5[6];
      v51 = &v34;
      LODWORD(v11) = 0;
      v48 = v17;
      v19 = &word_1800359D5;
      v50 = 0;
      v52 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v5 + 10);
      v54 = v11 + 1;
      LODWORD(v30) = v5[18];
      v56 = &v30;
      LODWORD(v11) = 0;
      v53 = v19;
      v21 = &word_1800359D5;
      v55 = 0;
      v57 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (void *)*((_QWORD *)v5 + 11);
      v59 = v11 + 1;
      LODWORD(v11) = 0;
      v58 = v21;
      v23 = &unk_1800359D8;
      v60 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)v22 + v11) );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v5 + 13);
      v62 = 2 * v11 + 2;
      LODWORD(SRWLock) = v5[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v61 = v23;
      v63 = 0;
      v65 = 4LL;
      if ( v24 )
      {
        v9 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v25 = (void *)*((_QWORD *)v5 + 14);
      v67 = v11 + 1;
      LODWORD(v11) = 0;
      v66 = v9;
      v68 = 0;
      if ( v25 )
      {
        v16 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)v25 + v11) );
      }
      v69 = v16;
      v70 = 2 * v11 + 2;
      v71 = 0;
      v72 = &v81;
      v73 = 4LL;
      TlgWrite(v8, &unk_180043C06, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v26 = SingleViewExperienceLogging::Provider();
    v27 = v26;
    if ( *(_DWORD *)v26 > 5u
      && (*((_QWORD *)v26 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x200000000000LL) == *((_QWORD *)v26 + 3) )
    {
      v28 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v75 = &SRWLock;
      LODWORD(SRWLock) = v28;
      v76 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v78 = 4LL;
      LODWORD(v30) = CurrentThreadId;
      v80 = 4LL;
      v77 = &v30;
      v79 = &v81;
      TlgWrite(v27, &unk_180043D13, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v74);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::Show *)((char *)this + 8));
}
