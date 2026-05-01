/*
 * XREFs of ?NotifyFailure@?$ActivityBase@$0A@$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180023A30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180008464 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180023F18 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<0,0,5>::NotifyFailure(__int64 a1, int *a2)
{
  __int64 v2; // r10
  const struct _TlgProvider_t *v5; // r11
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  __int64 v8; // rax
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // rcx
  const unsigned __int16 *v11; // rdx
  const WCHAR *v12; // rcx
  const WCHAR *v13; // r9
  const WCHAR *v14; // rdx
  const unsigned __int16 *v15; // rcx
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rdx
  const WCHAR *v19; // rcx
  const WCHAR *v20; // rdx
  const unsigned __int16 *v21; // rcx
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rcx
  const unsigned __int16 *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const WCHAR *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  int *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  int *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+148h] [rbp+48h]
  int v68; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v69; // [rsp+150h] [rbp+50h]
  int v70; // [rsp+158h] [rbp+58h]
  int v71; // [rsp+15Ch] [rbp+5Ch]
  int *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v76; // [rsp+180h] [rbp+80h]
  int v77; // [rsp+188h] [rbp+88h]
  int v78; // [rsp+18Ch] [rbp+8Ch]

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(const struct _TlgProvider_t **)(v2 + 40);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = &word_18002DD0E;
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v32 = a2[1];
    v36 = &v32;
    LODWORD(v8) = 0;
    v37 = 4LL;
    v9 = &word_18002DD0E;
    if ( v7 )
    {
      v9 = v7;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v7 + v8) );
    }
    v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v39 = v8 + 1;
    v41 = a2 + 14;
    LODWORD(v8) = 0;
    v38 = v9;
    v11 = &word_18002DD0E;
    v40 = 0;
    v42 = 4LL;
    if ( v10 )
    {
      v11 = v10;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v10 + v8) );
    }
    v12 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v13 = &word_18002E84C;
    v43 = v11;
    v44 = v8 + 1;
    v14 = &word_18002E84C;
    v30 = *a2;
    v46 = &v30;
    LODWORD(v8) = 0;
    v45 = 0;
    v47 = 4LL;
    if ( v12 )
    {
      v14 = v12;
      v8 = -1LL;
      do
        ++v8;
      while ( v12[v8] );
    }
    v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v49 = 2 * v8 + 2;
    v34 = a2[6];
    v51 = &v34;
    LODWORD(v8) = 0;
    v48 = v14;
    v16 = &word_18002DD0E;
    v50 = 0;
    v52 = 4LL;
    if ( v15 )
    {
      v16 = v15;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v15 + v8) );
    }
    v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v54 = v8 + 1;
    v28 = a2[18];
    v56 = &v28;
    LODWORD(v8) = 0;
    v53 = v16;
    v18 = &word_18002DD0E;
    v55 = 0;
    v57 = 4LL;
    if ( v17 )
    {
      v18 = v17;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v17 + v8) );
    }
    v19 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v59 = v8 + 1;
    LODWORD(v8) = 0;
    v58 = v18;
    v20 = &word_18002E84C;
    v60 = 0;
    if ( v19 )
    {
      v20 = v19;
      v8 = -1LL;
      do
        ++v8;
      while ( v19[v8] );
    }
    v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v62 = 2 * v8 + 2;
    v29 = a2[24];
    v64 = &v29;
    LODWORD(v8) = 0;
    v61 = v20;
    v22 = &word_18002DD0E;
    v63 = 0;
    v65 = 4LL;
    if ( v21 )
    {
      v22 = v21;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v21 + v8) );
    }
    v23 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v67 = v8 + 1;
    LODWORD(v8) = 0;
    v66 = v22;
    v68 = 0;
    if ( v23 )
    {
      v13 = v23;
      v8 = -1LL;
      do
        ++v8;
      while ( v23[v8] );
    }
    v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v70 = 2 * v8 + 2;
    v31 = a2[2];
    v72 = &v31;
    LODWORD(SRWLock) = a2[15];
    p_SRWLock = &SRWLock;
    LODWORD(v8) = 0;
    v69 = v13;
    v71 = 0;
    v73 = 4LL;
    v75 = 4LL;
    if ( v24 )
    {
      v6 = v24;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v24 + v8) );
    }
    v76 = v6;
    v77 = v8 + 1;
    v78 = 0;
    TlgWrite(v5, &unk_1800309CD, (LPCGUID)(v2 + 8), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<0,0,5>::LockExclusive(a1, &SRWLock);
  v25 = *(_DWORD **)(a1 + 48);
  v26 = a2[1];
  if ( v26 != v25[23] && (v26 != v25[21] || (int)v25[21] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v25 + 22), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
