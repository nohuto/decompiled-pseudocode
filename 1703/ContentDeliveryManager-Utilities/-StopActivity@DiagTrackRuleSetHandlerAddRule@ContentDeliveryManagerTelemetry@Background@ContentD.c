/*
 * XREFs of ?StopActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180050BE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerAddRule *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rcx
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rcx
  const unsigned __int16 *v12; // rdx
  const WCHAR *v13; // rcx
  const WCHAR *v14; // r9
  const WCHAR *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const unsigned __int16 *v23; // rdx
  const WCHAR *v24; // rcx
  const unsigned __int16 *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  DWORD CurrentThreadId; // eax
  _QWORD **v28; // rbx
  void *v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  DWORD v33; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+9Ch] [rbp-64h]
  int *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  int *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  const WCHAR *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]
  int *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  int *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v74; // [rsp+150h] [rbp+50h]
  int v75; // [rsp+158h] [rbp+58h]
  int v76; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v81; // [rsp+180h] [rbp+80h]
  int v82; // [rsp+188h] [rbp+88h]
  int v83; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  DWORD *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v35 = v4[1];
      v7 = &word_180091EF8;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v41 = &v35;
      v9 = &word_180091EF8;
      v42 = 4LL;
      LODWORD(v10) = 0;
      if ( v8 )
      {
        v9 = v8;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v8 + v10) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v44 = v10 + 1;
      v46 = v4 + 14;
      LODWORD(v10) = 0;
      v43 = v9;
      v12 = &word_180091EF8;
      v45 = 0;
      v47 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v11 + v10) );
      }
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v14 = &word_180091F08;
      v48 = v12;
      v49 = v10 + 1;
      v15 = &word_180091F08;
      v36 = *v4;
      v51 = &v36;
      LODWORD(v10) = 0;
      v50 = 0;
      v52 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v10 = -1LL;
        do
          ++v10;
        while ( v13[v10] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v54 = 2 * v10 + 2;
      v37 = v4[6];
      v56 = &v37;
      LODWORD(v10) = 0;
      v53 = v15;
      v17 = &word_180091EF8;
      v55 = 0;
      v57 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v16 + v10) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v59 = v10 + 1;
      v38 = v4[18];
      v61 = &v38;
      LODWORD(v10) = 0;
      v58 = v17;
      v19 = &word_180091EF8;
      v60 = 0;
      v62 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v18 + v10) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v64 = v10 + 1;
      LODWORD(v10) = 0;
      v63 = v19;
      v21 = &word_180091F08;
      v65 = 0;
      if ( v20 )
      {
        v21 = v20;
        v10 = -1LL;
        do
          ++v10;
        while ( v20[v10] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v67 = 2 * v10 + 2;
      v39 = v4[24];
      v69 = &v39;
      LODWORD(v10) = 0;
      v66 = v21;
      v23 = &word_180091EF8;
      v68 = 0;
      v70 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v22 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v72 = v10 + 1;
      LODWORD(v10) = 0;
      v71 = v23;
      v73 = 0;
      if ( v24 )
      {
        v14 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v75 = 2 * v10 + 2;
      v33 = v4[2];
      v77 = &v33;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v74 = v14;
      v76 = 0;
      v78 = 4LL;
      v80 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v25 + v10) );
      }
      v81 = v7;
      v82 = v10 + 1;
      v83 = 0;
      TlgWrite(v6, &unk_1800DFDD1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v26 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v85 = &SRWLock;
      v86 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v88 = 4LL;
      v33 = CurrentThreadId;
      v87 = &v33;
      TlgWrite(v26, &unk_1800DFF67, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v84);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v28 = (_QWORD **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v29, v30, (const char *)0x8007029CLL);
    v31 = *v28;
    *((_DWORD *)this + 8) = 0;
    if ( *v31 )
    {
      while ( (_QWORD **)**v28 != v28 )
      {
        v32 = (_QWORD *)(**v28 + 16LL);
        *v28 = v32;
        if ( !*v32 )
          goto LABEL_49;
      }
      **v28 = *((_QWORD *)this + 3);
    }
LABEL_49:
    *v28 = 0LL;
  }
}
