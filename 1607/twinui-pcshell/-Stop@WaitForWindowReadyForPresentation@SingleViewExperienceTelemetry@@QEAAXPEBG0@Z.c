/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180023624
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_013c46c4876e793d779fba5076862f22_::operator() @ 0x18001E058 (_lambda_013c46c4876e793d779fba5076862f22_--operator().c)
 *     ??1?$ScopeExitFn@V_lambda_835f32be7c34f9eebe0c7b9d899ddfb3_@@@details@wil@@QEAA@XZ @ 0x18001ED18 (--1-$ScopeExitFn@V_lambda_835f32be7c34f9eebe0c7b9d899ddfb3_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014AFC (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int *v3; // rax
  int v7; // r9d
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // r11
  const unsigned __int16 *v12; // r10
  const unsigned __int16 *v13; // rdx
  __int64 v14; // rax
  const unsigned __int16 *v15; // r8
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // r8
  void *v18; // rdx
  const unsigned __int16 *v19; // r9
  void *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r8
  void *v25; // rdx
  void *v26; // r8
  const unsigned __int16 *v27; // rdx
  void *v28; // rdx
  void *v29; // r8
  const unsigned __int16 *v30; // rdx
  const struct _TlgProvider_t *v31; // rax
  const struct _TlgProvider_t *v32; // rbx
  int v33; // ecx
  const unsigned __int16 *v34; // r9
  __int64 v35; // rax
  const unsigned __int16 *v36; // rdx
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  int *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  void *v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  int *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v60; // [rsp+E0h] [rbp-20h]
  int v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  int *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  void *v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v73; // [rsp+130h] [rbp+30h]
  int v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+13Ch] [rbp+3Ch]
  void *v76; // [rsp+140h] [rbp+40h]
  int v77; // [rsp+148h] [rbp+48h]
  int v78; // [rsp+14Ch] [rbp+4Ch]
  const unsigned __int16 *v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  const unsigned __int16 *v82; // [rsp+160h] [rbp+60h]
  int v83; // [rsp+168h] [rbp+68h]
  int v84; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+170h] [rbp+70h] BYREF
  PSRWLOCK *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  int *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  const unsigned __int16 *v90; // [rsp+1B0h] [rbp+B0h]
  int v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1BCh] [rbp+BCh]
  const unsigned __int16 *v93; // [rsp+1C0h] [rbp+C0h]
  int v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+1CCh] [rbp+CCh]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || (v8 = v3 + 20, v7 != v3[21]) )
    v8 = 0LL;
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v9 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v8 )
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = SingleViewExperienceLogging::Provider();
    v11 = v10;
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v12 = &word_1800359D5;
      v13 = (const unsigned __int16 *)*((_QWORD *)v8 + 6);
      v39 = v8[1];
      v43 = &v39;
      LODWORD(v14) = 0;
      v44 = 4LL;
      v15 = &word_1800359D5;
      if ( v13 )
      {
        v15 = v13;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v13 + v14) );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v8 + 15);
      v46 = v14 + 1;
      v48 = v8 + 14;
      LODWORD(v14) = 0;
      v45 = v15;
      v17 = &word_1800359D5;
      v47 = 0;
      v49 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v16 + v14) );
      }
      v18 = (void *)*((_QWORD *)v8 + 2);
      v19 = (const unsigned __int16 *)&unk_1800359D8;
      v50 = v17;
      v51 = v14 + 1;
      v20 = &unk_1800359D8;
      v40 = *v8;
      v53 = &v40;
      LODWORD(v14) = 0;
      v52 = 0;
      v54 = 4LL;
      if ( v18 )
      {
        v20 = v18;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v18 + v14) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v8 + 8);
      v56 = 2 * v14 + 2;
      v41 = v8[6];
      v58 = &v41;
      LODWORD(v14) = 0;
      v55 = v20;
      v22 = &word_1800359D5;
      v57 = 0;
      v59 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v21 + v14) );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v8 + 10);
      v61 = v14 + 1;
      v37 = v8[18];
      v63 = &v37;
      LODWORD(v14) = 0;
      v60 = v22;
      v24 = &word_1800359D5;
      v62 = 0;
      v64 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v23 + v14) );
      }
      v25 = (void *)*((_QWORD *)v8 + 11);
      v66 = v14 + 1;
      LODWORD(v14) = 0;
      v65 = v24;
      v26 = &unk_1800359D8;
      v67 = 0;
      if ( v25 )
      {
        v26 = v25;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v25 + v14) );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v8 + 13);
      v69 = 2 * v14 + 2;
      LODWORD(SRWLock) = v8[24];
      p_SRWLock = &SRWLock;
      LODWORD(v14) = 0;
      v68 = v26;
      v70 = 0;
      v72 = 4LL;
      if ( v27 )
      {
        v12 = v27;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v27 + v14) );
      }
      v28 = (void *)*((_QWORD *)v8 + 14);
      v74 = v14 + 1;
      LODWORD(v14) = 0;
      v73 = v12;
      v29 = &unk_1800359D8;
      v75 = 0;
      if ( v28 )
      {
        v29 = v28;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v28 + v14) );
      }
      v76 = v29;
      v77 = 2 * v14 + 2;
      LODWORD(v14) = 0;
      v78 = 0;
      v30 = (const unsigned __int16 *)&unk_1800359D8;
      if ( a2 )
      {
        v30 = a2;
        v14 = -1LL;
        do
          ++v14;
        while ( a2[v14] );
      }
      v79 = v30;
      v80 = 2 * v14 + 2;
      LODWORD(v14) = 0;
      v81 = 0;
      if ( a3 )
      {
        v19 = a3;
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
      }
      v82 = v19;
      v83 = 2 * v14 + 2;
      v84 = 0;
      TlgWrite(v11, &unk_180043A75, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v31 = SingleViewExperienceLogging::Provider();
    v32 = v31;
    if ( *(_DWORD *)v31 > 5u
      && (*((_QWORD *)v31 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v31 + 3) & 0x200000000000LL) == *((_QWORD *)v31 + 3) )
    {
      v33 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v86 = &SRWLock;
      LODWORD(SRWLock) = v33;
      v87 = 4LL;
      LODWORD(v35) = GetCurrentThreadId();
      v89 = 4LL;
      v37 = v35;
      v88 = &v37;
      v34 = (const unsigned __int16 *)&unk_1800359D8;
      LODWORD(v35) = 0;
      v36 = (const unsigned __int16 *)&unk_1800359D8;
      if ( a2 )
      {
        v36 = a2;
        v35 = -1LL;
        do
          ++v35;
        while ( a2[v35] );
      }
      v90 = v36;
      v91 = 2 * v35 + 2;
      LODWORD(v35) = 0;
      v92 = 0;
      if ( a3 )
      {
        v34 = a3;
        v35 = -1LL;
        do
          ++v35;
        while ( a3[v35] );
      }
      v93 = v34;
      v94 = 2 * v35 + 2;
      v95 = 0;
      TlgWrite(v32, &unk_180043BA1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v85);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}
