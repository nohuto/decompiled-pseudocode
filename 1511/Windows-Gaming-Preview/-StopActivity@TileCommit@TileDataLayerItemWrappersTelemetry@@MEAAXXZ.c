/*
 * XREFs of ?StopActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180020530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ @ 0x180023894 (-IgnoreCurrentThread@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180023F18 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

void __fastcall TileDataLayerItemWrappersTelemetry::TileCommit::StopActivity(
        TileDataLayerItemWrappersTelemetry::TileCommit *this)
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
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v39; // [rsp+88h] [rbp-80h]
  int v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+94h] [rbp-74h]
  int *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v44; // [rsp+A8h] [rbp-60h]
  int v45; // [rsp+B0h] [rbp-58h]
  int v46; // [rsp+B4h] [rbp-54h]
  int *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  const WCHAR *v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D4h] [rbp-34h]
  int *v52; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F0h] [rbp-18h]
  int v56; // [rsp+F4h] [rbp-14h]
  int *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v59; // [rsp+108h] [rbp+0h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  const WCHAR *v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+124h] [rbp+1Ch]
  int *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v67; // [rsp+138h] [rbp+30h]
  int v68; // [rsp+140h] [rbp+38h]
  int v69; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+150h] [rbp+48h]
  int v72; // [rsp+154h] [rbp+4Ch]
  DWORD *v73; // [rsp+158h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+168h] [rbp+60h]
  __int64 v76; // [rsp+170h] [rbp+68h]
  const unsigned __int16 *v77; // [rsp+178h] [rbp+70h]
  int v78; // [rsp+180h] [rbp+78h]
  int v79; // [rsp+184h] [rbp+7Ch]
  EVENT_DATA_DESCRIPTOR v80; // [rsp+188h] [rbp+80h] BYREF
  PSRWLOCK *v81; // [rsp+1A8h] [rbp+A0h]
  __int64 v82; // [rsp+1B0h] [rbp+A8h]
  DWORD *p_CurrentThreadId; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]

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
      v8 = &word_18002DD0E;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v34 = v4[1];
      v37 = &v34;
      LODWORD(v10) = 0;
      v38 = 4LL;
      v11 = &word_18002DD0E;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v40 = v10 + 1;
      v42 = v4 + 14;
      LODWORD(v10) = 0;
      v39 = v11;
      v13 = &word_18002DD0E;
      v41 = 0;
      v43 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &word_18002E84C;
      v44 = v13;
      v45 = v10 + 1;
      v16 = &word_18002E84C;
      v32 = *v4;
      v47 = &v32;
      LODWORD(v10) = 0;
      v46 = 0;
      v48 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v50 = 2 * v10 + 2;
      v33 = v4[6];
      v52 = &v33;
      LODWORD(v10) = 0;
      v49 = v16;
      v18 = &word_18002DD0E;
      v51 = 0;
      v53 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v55 = v10 + 1;
      v35 = v4[18];
      v57 = &v35;
      LODWORD(v10) = 0;
      v54 = v18;
      v20 = &word_18002DD0E;
      v56 = 0;
      v58 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v60 = v10 + 1;
      LODWORD(v10) = 0;
      v59 = v20;
      v22 = &word_18002E84C;
      v61 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v63 = 2 * v10 + 2;
      v31 = v4[24];
      v65 = &v31;
      LODWORD(v10) = 0;
      v62 = v22;
      v24 = &word_18002DD0E;
      v64 = 0;
      v66 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v68 = v10 + 1;
      LODWORD(v10) = 0;
      v67 = v24;
      v69 = 0;
      if ( v25 )
      {
        v15 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( v25[v10] );
      }
      v26 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v71 = 2 * v10 + 2;
      CurrentThreadId = v4[2];
      v73 = &CurrentThreadId;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v70 = v15;
      v72 = 0;
      v74 = 4LL;
      v76 = 4LL;
      if ( v26 )
      {
        v8 = v26;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v26 + v10) );
      }
      v77 = v8;
      v78 = v10 + 1;
      v79 = 0;
      TlgWrite(v7, &unk_180030F12, (LPCGUID)(v6 + 8), 0LL, 0x13u, &pData);
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
      v81 = &SRWLock;
      v82 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v84 = 4LL;
      TlgWrite(v28, &unk_180030ED7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v80);
    }
  }
  wil::ActivityBase<0,0,5>::IgnoreCurrentThread(this);
}
