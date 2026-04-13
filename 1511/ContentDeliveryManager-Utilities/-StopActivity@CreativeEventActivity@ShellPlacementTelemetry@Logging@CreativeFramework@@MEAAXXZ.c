/*
 * XREFs of ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18000B9A0
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000BDB8 (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ?Stop@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180012B68 (-Stop@-$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180008354 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StopActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // r11
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // rdx
  void *v14; // rcx
  void *v15; // r9
  void *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  void *v21; // rcx
  void *v22; // rdx
  const unsigned __int16 *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  const struct _TlgProvider_t *v26; // rbx
  __int64 **v27; // rbx
  void *v28; // rdx
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  int *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v45; // [rsp+A8h] [rbp-60h]
  int v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B4h] [rbp-54h]
  int *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  void *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  int *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+F4h] [rbp-14h]
  __int64 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v60; // [rsp+108h] [rbp+0h]
  int v61; // [rsp+110h] [rbp+8h]
  int v62; // [rsp+114h] [rbp+Ch]
  void *v63; // [rsp+118h] [rbp+10h]
  int v64; // [rsp+120h] [rbp+18h]
  int v65; // [rsp+124h] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v68; // [rsp+138h] [rbp+30h]
  int v69; // [rsp+140h] [rbp+38h]
  int v70; // [rsp+144h] [rbp+3Ch]
  void *v71; // [rsp+148h] [rbp+40h]
  int v72; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+154h] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+158h] [rbp+50h] BYREF
  PSRWLOCK *v75; // [rsp+178h] [rbp+70h]
  __int64 v76; // [rsp+180h] [rbp+78h]
  __int64 *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[21];
  if ( v3 < 0 && v3 == v1[23] )
    v4 = v1 + 22;
  else
    v4 = 0LL;
  wil::ActivityBase<1,35184372088832,5>::LockExclusive(this, &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = *((_QWORD *)this + 6);
    v7 = *(const struct _TlgProvider_t **)(v6 + 40);
    if ( *(_DWORD *)v7 > 5u
      && (*((_QWORD *)v7 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x800000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = &word_18002D63C;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v34 = v4[1];
      v38 = &v34;
      LODWORD(v10) = 0;
      v39 = 4LL;
      v11 = &word_18002D63C;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v41 = v10 + 1;
      v43 = v4 + 14;
      LODWORD(v10) = 0;
      v40 = v11;
      v13 = &word_18002D63C;
      v42 = 0;
      v44 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (void *)*((_QWORD *)v4 + 2);
      v15 = &unk_18002D640;
      v45 = v13;
      v46 = v10 + 1;
      v16 = &unk_18002D640;
      v36 = *v4;
      v48 = &v36;
      LODWORD(v10) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v14 + v10) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v51 = 2 * v10 + 2;
      v35 = v4[6];
      v53 = &v35;
      LODWORD(v10) = 0;
      v50 = v16;
      v18 = &word_18002D63C;
      v52 = 0;
      v54 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v56 = v10 + 1;
      LODWORD(v32) = v4[18];
      v58 = &v32;
      LODWORD(v10) = 0;
      v55 = v18;
      v20 = &word_18002D63C;
      v57 = 0;
      v59 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (void *)*((_QWORD *)v4 + 11);
      v61 = v10 + 1;
      LODWORD(v10) = 0;
      v60 = v20;
      v22 = &unk_18002D640;
      v62 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v21 + v10) );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v64 = 2 * v10 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v63 = v22;
      v65 = 0;
      v67 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (void *)*((_QWORD *)v4 + 14);
      v69 = v10 + 1;
      LODWORD(v10) = 0;
      v68 = v8;
      v70 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v24 + v10) );
      }
      v71 = v15;
      v72 = 2 * v10 + 2;
      v73 = 0;
      TlgWrite(v7, &unk_180035964, (LPCGUID)(v6 + 8), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v25 = *((_QWORD *)this + 6);
    v26 = *(const struct _TlgProvider_t **)(v25 + 40);
    if ( *(_DWORD *)v26 > 5u
      && (*((_QWORD *)v26 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x800000000000LL) == *((_QWORD *)v26 + 3) )
    {
      LODWORD(SRWLock) = *(_DWORD *)(v25 + 84);
      v75 = &SRWLock;
      v76 = 4LL;
      LODWORD(v32) = GetCurrentThreadId();
      v77 = &v32;
      v78 = 4LL;
      TlgWrite(v26, &unk_180035A71, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v74);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v27 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v28, v29, (const char *)0x8007029CLL);
    v30 = *v27;
    *((_DWORD *)this + 8) = 0;
    while ( *v30 )
    {
      v31 = **v27;
      if ( (__int64 **)v31 == v27 )
      {
        **v27 = *((_QWORD *)this + 3);
        break;
      }
      v30 = (__int64 *)(v31 + 16);
      *v27 = v30;
    }
    *v27 = 0LL;
  }
}
