/*
 * XREFs of ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001D470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18001CB74 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StopActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // r9
  const WCHAR *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // rdx
  const unsigned __int16 *v23; // rcx
  const WCHAR *v24; // rcx
  const struct _TlgProvider_t *v25; // rax
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  _QWORD **v29; // rbx
  void *v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  DWORD v34; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  const WCHAR *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  DWORD *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+150h] [rbp+50h] BYREF
  PSRWLOCK *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  DWORD *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = &word_1800717D0;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v36 = v4[1];
      v40 = &v36;
      LODWORD(v10) = 0;
      v41 = 4LL;
      v11 = &word_1800717D0;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v43 = v10 + 1;
      v45 = v4 + 14;
      LODWORD(v10) = 0;
      v42 = v11;
      v13 = &word_1800717D0;
      v44 = 0;
      v46 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &sourceString;
      v47 = v13;
      v48 = v10 + 1;
      v16 = &sourceString;
      v37 = *v4;
      v50 = &v37;
      LODWORD(v10) = 0;
      v49 = 0;
      v51 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v53 = 2 * v10 + 2;
      v38 = v4[6];
      v55 = &v38;
      LODWORD(v10) = 0;
      v52 = v16;
      v18 = &word_1800717D0;
      v54 = 0;
      v56 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v58 = v10 + 1;
      v34 = v4[18];
      v60 = &v34;
      LODWORD(v10) = 0;
      v57 = v18;
      v20 = &word_1800717D0;
      v59 = 0;
      v61 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v63 = v10 + 1;
      LODWORD(v10) = 0;
      v62 = v20;
      v22 = &sourceString;
      v64 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v66 = 2 * v10 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v65 = v22;
      v67 = 0;
      v69 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v71 = v10 + 1;
      LODWORD(v10) = 0;
      v70 = v8;
      v72 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v73 = v15;
      v74 = 2 * v10 + 2;
      v75 = 0;
      TlgWrite(v7, &unk_18007BFFC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v25 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v26 = v25;
    if ( *(_DWORD *)v25 > 5u
      && (*((_QWORD *)v25 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v25 + 3) & 0x200000000000LL) == *((_QWORD *)v25 + 3) )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v77 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v78 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v80 = 4LL;
      v34 = CurrentThreadId;
      v79 = &v34;
      TlgWrite(v26, &unk_18007C756, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v76);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (_QWORD **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v30, v31, (const char *)0x8007029CLL);
    v32 = *v29;
    *((_DWORD *)this + 8) = 0;
    if ( *v32 )
    {
      while ( (_QWORD **)**v29 != v29 )
      {
        v33 = (_QWORD *)(**v29 + 16LL);
        *v29 = v33;
        if ( !*v33 )
          goto LABEL_50;
      }
      **v29 = *((_QWORD *)this + 3);
    }
LABEL_50:
    *v29 = 0LL;
  }
}
