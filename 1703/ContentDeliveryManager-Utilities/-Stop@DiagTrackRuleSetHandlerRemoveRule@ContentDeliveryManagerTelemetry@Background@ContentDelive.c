/*
 * XREFs of ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180051D24
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const char *a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r11
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r9
  const unsigned __int16 *v11; // r8
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r10
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rdx
  const unsigned __int16 *v25; // r8
  const WCHAR *v26; // rdx
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  const struct _TlgProvider_t *v29; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v31; // r9
  __int64 v32; // rcx
  _QWORD **v33; // rbx
  void *v34; // rdx
  __int64 v35; // r8
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+48h] [rbp-C0h] BYREF
  int v41; // [rsp+4Ch] [rbp-BCh] BYREF
  int v42; // [rsp+50h] [rbp-B8h] BYREF
  int v43; // [rsp+54h] [rbp-B4h] BYREF
  int v44; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v48; // [rsp+98h] [rbp-70h]
  int v49; // [rsp+A0h] [rbp-68h]
  int v50; // [rsp+A4h] [rbp-64h]
  int *v51; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v53; // [rsp+B8h] [rbp-50h]
  int v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C4h] [rbp-44h]
  int *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  const WCHAR *v58; // [rsp+D8h] [rbp-30h]
  int v59; // [rsp+E0h] [rbp-28h]
  int v60; // [rsp+E4h] [rbp-24h]
  int *v61; // [rsp+E8h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v63; // [rsp+F8h] [rbp-10h]
  int v64; // [rsp+100h] [rbp-8h]
  int v65; // [rsp+104h] [rbp-4h]
  int *v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v71; // [rsp+128h] [rbp+20h]
  int v72; // [rsp+130h] [rbp+28h]
  int v73; // [rsp+134h] [rbp+2Ch]
  int *v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v76; // [rsp+148h] [rbp+40h]
  int v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v79; // [rsp+158h] [rbp+50h]
  int v80; // [rsp+160h] [rbp+58h]
  int v81; // [rsp+164h] [rbp+5Ch]
  __int64 *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v86; // [rsp+188h] [rbp+80h]
  int v87; // [rsp+190h] [rbp+88h]
  int v88; // [rsp+194h] [rbp+8Ch]
  const unsigned __int16 *v89; // [rsp+198h] [rbp+90h]
  int v90; // [rsp+1A0h] [rbp+98h]
  int v91; // [rsp+1A4h] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR v92; // [rsp+1B8h] [rbp+B0h] BYREF
  PSRWLOCK *v93; // [rsp+1D8h] [rbp+D0h]
  __int64 v94; // [rsp+1E0h] [rbp+D8h]
  __int64 *v95; // [rsp+1E8h] [rbp+E0h]
  __int64 v96; // [rsp+1F0h] [rbp+E8h]
  const unsigned __int16 *v97; // [rsp+1F8h] [rbp+F0h]
  int v98; // [rsp+200h] [rbp+F8h]
  int v99; // [rsp+204h] [rbp+FCh]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v10 = &word_180091EF8;
      v40 = v6[1];
      v11 = &word_180091EF8;
      v46 = &v40;
      v47 = 4LL;
      LODWORD(v12) = 0;
      if ( v9 )
      {
        v11 = v9;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v9 + v12) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v49 = v12 + 1;
      v51 = v6 + 14;
      LODWORD(v12) = 0;
      v48 = v11;
      v14 = &word_180091EF8;
      v50 = 0;
      v52 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v13 + v12) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v16 = &word_180091F08;
      v53 = v14;
      v54 = v12 + 1;
      v17 = &word_180091F08;
      v41 = *v6;
      v56 = &v41;
      LODWORD(v12) = 0;
      v55 = 0;
      v57 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v59 = 2 * v12 + 2;
      v42 = v6[6];
      v61 = &v42;
      LODWORD(v12) = 0;
      v58 = v17;
      v19 = &word_180091EF8;
      v60 = 0;
      v62 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v18 + v12) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v64 = v12 + 1;
      v43 = v6[18];
      v66 = &v43;
      LODWORD(v12) = 0;
      v63 = v19;
      v21 = &word_180091EF8;
      v65 = 0;
      v67 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v20 + v12) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v69 = v12 + 1;
      LODWORD(v12) = 0;
      v68 = v21;
      v23 = &word_180091F08;
      v70 = 0;
      if ( v22 )
      {
        v23 = v22;
        v12 = -1LL;
        do
          ++v12;
        while ( v22[v12] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v72 = 2 * v12 + 2;
      v44 = v6[24];
      v74 = &v44;
      LODWORD(v12) = 0;
      v71 = v23;
      v25 = &word_180091EF8;
      v73 = 0;
      v75 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v24 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v77 = v12 + 1;
      LODWORD(v12) = 0;
      v76 = v25;
      v78 = 0;
      if ( v26 )
      {
        v16 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v6 + 5);
      v80 = 2 * v12 + 2;
      v28 = &word_180091EF8;
      LODWORD(v38) = v6[2];
      v82 = &v38;
      LODWORD(SRWLock) = v6[15];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v79 = v16;
      v81 = 0;
      v83 = 4LL;
      v85 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v27 + v12) );
      }
      v86 = v28;
      v87 = v12 + 1;
      LODWORD(v12) = 0;
      v88 = 0;
      if ( a2 )
      {
        v10 = (const unsigned __int16 *)a2;
        v12 = -1LL;
        do
          ++v12;
        while ( a2[v12] );
      }
      v89 = v10;
      v90 = v12 + 1;
      v91 = 0;
      TlgWrite(v8, &unk_1800DFFB6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v29 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v29 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v93 = &SRWLock;
      v94 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v96 = 4LL;
      v31 = &word_180091EF8;
      LODWORD(v38) = CurrentThreadId;
      v95 = &v38;
      LODWORD(v32) = 0;
      if ( a2 )
      {
        v31 = (const unsigned __int16 *)a2;
        v32 = -1LL;
        do
          ++v32;
        while ( a2[v32] );
      }
      v97 = v31;
      v98 = v32 + 1;
      v99 = 0;
      TlgWrite(v29, &unk_1800DFF0A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v92);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v33 = (_QWORD **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v34, v35, (const char *)0x8007029CLL);
    v36 = *v33;
    *((_DWORD *)this + 8) = 0;
    if ( *v36 )
    {
      while ( (_QWORD **)**v33 != v33 )
      {
        v37 = (_QWORD *)(**v33 + 16LL);
        *v33 = v37;
        if ( !*v37 )
          goto LABEL_55;
      }
      **v33 = *((_QWORD *)this + 3);
    }
LABEL_55:
    *v33 = 0LL;
  }
}
