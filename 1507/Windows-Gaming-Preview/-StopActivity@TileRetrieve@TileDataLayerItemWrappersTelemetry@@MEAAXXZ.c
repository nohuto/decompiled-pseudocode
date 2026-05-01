/*
 * XREFs of ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020E00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024018 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024D9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

void __fastcall TileDataLayerItemWrappersTelemetry::TileRetrieve::StopActivity(
        TileDataLayerItemWrappersTelemetry::TileRetrieve *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // r10
  const struct _TlgProvider_t *v7; // r11
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
  const unsigned __int16 *v24; // rdx
  const WCHAR *v25; // rcx
  const unsigned __int16 *v26; // rcx
  __int64 v27; // rax
  const struct _TlgProvider_t *v28; // rbx
  __int64 **v29; // rbx
  void *v30; // rdx
  unsigned int v31; // r8d
  __int64 *v32; // rax
  __int64 v33; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+44h] [rbp-C4h] BYREF
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  int v40; // [rsp+50h] [rbp-B8h] BYREF
  int v41; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v45; // [rsp+88h] [rbp-80h]
  int v46; // [rsp+90h] [rbp-78h]
  int v47; // [rsp+94h] [rbp-74h]
  int *v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v50; // [rsp+A8h] [rbp-60h]
  int v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B4h] [rbp-54h]
  int *v53; // [rsp+B8h] [rbp-50h]
  __int64 v54; // [rsp+C0h] [rbp-48h]
  const WCHAR *v55; // [rsp+C8h] [rbp-40h]
  int v56; // [rsp+D0h] [rbp-38h]
  int v57; // [rsp+D4h] [rbp-34h]
  int *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v60; // [rsp+E8h] [rbp-20h]
  int v61; // [rsp+F0h] [rbp-18h]
  int v62; // [rsp+F4h] [rbp-14h]
  int *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v65; // [rsp+108h] [rbp+0h]
  int v66; // [rsp+110h] [rbp+8h]
  int v67; // [rsp+114h] [rbp+Ch]
  const WCHAR *v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  int *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v73; // [rsp+138h] [rbp+30h]
  int v74; // [rsp+140h] [rbp+38h]
  int v75; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v76; // [rsp+148h] [rbp+40h]
  int v77; // [rsp+150h] [rbp+48h]
  int v78; // [rsp+154h] [rbp+4Ch]
  DWORD *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+168h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+68h]
  const unsigned __int16 *v83; // [rsp+178h] [rbp+70h]
  int v84; // [rsp+180h] [rbp+78h]
  int v85; // [rsp+184h] [rbp+7Ch]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+188h] [rbp+80h] BYREF
  PSRWLOCK *v87; // [rsp+1A8h] [rbp+A0h]
  __int64 v88; // [rsp+1B0h] [rbp+A8h]
  DWORD *p_CurrentThreadId; // [rsp+1B8h] [rbp+B0h]
  __int64 v90; // [rsp+1C0h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[21];
  if ( v3 < 0 && v3 == v1[23] )
    v4 = v1 + 22;
  else
    v4 = 0LL;
  wil::ActivityBase<0,0,5>::LockExclusive(this, &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = *((_QWORD *)this + 6);
    v7 = *(const struct _TlgProvider_t **)(v6 + 40);
    if ( *(_DWORD *)v7 > 5u )
    {
      v8 = &word_18002DD5E;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v40 = v4[1];
      v43 = &v40;
      LODWORD(v10) = 0;
      v44 = 4LL;
      v11 = &word_18002DD5E;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v46 = v10 + 1;
      v48 = v4 + 14;
      LODWORD(v10) = 0;
      v45 = v11;
      v13 = &word_18002DD5E;
      v47 = 0;
      v49 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &word_18002E89C;
      v50 = v13;
      v51 = v10 + 1;
      v16 = &word_18002E89C;
      v38 = *v4;
      v53 = &v38;
      LODWORD(v10) = 0;
      v52 = 0;
      v54 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v56 = 2 * v10 + 2;
      v39 = v4[6];
      v58 = &v39;
      LODWORD(v10) = 0;
      v55 = v16;
      v18 = &word_18002DD5E;
      v57 = 0;
      v59 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v61 = v10 + 1;
      v41 = v4[18];
      v63 = &v41;
      LODWORD(v10) = 0;
      v60 = v18;
      v20 = &word_18002DD5E;
      v62 = 0;
      v64 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v66 = v10 + 1;
      LODWORD(v10) = 0;
      v65 = v20;
      v22 = &word_18002E89C;
      v67 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v69 = 2 * v10 + 2;
      v37 = v4[24];
      v71 = &v37;
      LODWORD(v10) = 0;
      v68 = v22;
      v24 = &word_18002DD5E;
      v70 = 0;
      v72 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v74 = v10 + 1;
      LODWORD(v10) = 0;
      v73 = v24;
      v75 = 0;
      if ( v25 )
      {
        v15 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( v25[v10] );
      }
      v26 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v77 = 2 * v10 + 2;
      CurrentThreadId = v4[2];
      v79 = &CurrentThreadId;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v76 = v15;
      v78 = 0;
      v80 = 4LL;
      v82 = 4LL;
      if ( v26 )
      {
        v8 = v26;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v26 + v10) );
      }
      v83 = v8;
      v84 = v10 + 1;
      v85 = 0;
      TlgWrite(v7, &unk_180030C0E, (LPCGUID)(v6 + 8), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v27 = *((_QWORD *)this + 6);
    v28 = *(const struct _TlgProvider_t **)(v27 + 40);
    if ( *(_DWORD *)v28 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(v27 + 84);
      v87 = &SRWLock;
      v88 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v90 = 4LL;
      TlgWrite(v28, &unk_180030BD1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v86);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v30, v31, (const char *)0x8007029CLL, cData);
    v32 = *v29;
    *((_DWORD *)this + 8) = 0;
    while ( *v32 )
    {
      v33 = **v29;
      if ( (__int64 **)v33 == v29 )
      {
        **v29 = *((_QWORD *)this + 3);
        break;
      }
      v32 = (__int64 *)(v33 + 16);
      *v29 = v32;
    }
    *v29 = 0LL;
  }
}
