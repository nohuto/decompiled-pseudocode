/*
 * XREFs of ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800926E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180091A44 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180092AF0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StopActivity(
        HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rcx
  const unsigned __int16 *v12; // rdx
  void *v13; // rcx
  void *v14; // r9
  void *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  void *v20; // rcx
  void *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const unsigned __int16 *v23; // rdx
  void *v24; // rcx
  const unsigned __int16 *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  _QWORD **v29; // rbx
  void *v30; // rdx
  unsigned int v31; // r8d
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  DWORD v35; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  int *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  int *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  void *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v60; // [rsp+F0h] [rbp-10h]
  int v61; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+FCh] [rbp-4h]
  int *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  void *v68; // [rsp+120h] [rbp+20h]
  int v69; // [rsp+128h] [rbp+28h]
  int v70; // [rsp+12Ch] [rbp+2Ch]
  int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  void *v76; // [rsp+150h] [rbp+50h]
  int v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v83; // [rsp+180h] [rbp+80h]
  int v84; // [rsp+188h] [rbp+88h]
  int v85; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  DWORD *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = &word_1800ACD3A;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v37 = v4[1];
      v43 = &v37;
      LODWORD(v9) = 0;
      v44 = 4LL;
      v10 = &word_1800ACD3A;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v46 = v9 + 1;
      v48 = v4 + 14;
      LODWORD(v9) = 0;
      v45 = v10;
      v12 = &word_1800ACD3A;
      v47 = 0;
      v49 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (void *)*((_QWORD *)v4 + 2);
      v14 = &unk_1800AE6CC;
      v50 = v12;
      v51 = v9 + 1;
      v15 = &unk_1800AE6CC;
      v38 = *v4;
      v53 = &v38;
      LODWORD(v9) = 0;
      v52 = 0;
      v54 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)v13 + v9) );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v56 = 2 * v9 + 2;
      v39 = v4[6];
      v58 = &v39;
      LODWORD(v9) = 0;
      v55 = v15;
      v17 = &word_1800ACD3A;
      v57 = 0;
      v59 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v61 = v9 + 1;
      v40 = v4[18];
      v63 = &v40;
      LODWORD(v9) = 0;
      v60 = v17;
      v19 = &word_1800ACD3A;
      v62 = 0;
      v64 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (void *)*((_QWORD *)v4 + 11);
      v66 = v9 + 1;
      LODWORD(v9) = 0;
      v65 = v19;
      v21 = &unk_1800AE6CC;
      v67 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)v20 + v9) );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v69 = 2 * v9 + 2;
      v41 = v4[24];
      v71 = &v41;
      LODWORD(v9) = 0;
      v68 = v21;
      v23 = &word_1800ACD3A;
      v70 = 0;
      v72 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v24 = (void *)*((_QWORD *)v4 + 14);
      v74 = v9 + 1;
      LODWORD(v9) = 0;
      v73 = v23;
      v75 = 0;
      if ( v24 )
      {
        v14 = v24;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)v24 + v9) );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v77 = 2 * v9 + 2;
      v35 = v4[2];
      v79 = &v35;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v76 = v14;
      v78 = 0;
      v80 = 4LL;
      v82 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v25 + v9) );
      }
      v83 = v7;
      v84 = v9 + 1;
      v85 = 0;
      TlgWrite(v6, &unk_1800BAC88, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
    if ( *(_DWORD *)v26 > 5u )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v87 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v88 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v90 = 4LL;
      v35 = CurrentThreadId;
      v89 = &v35;
      TlgWrite(v26, &unk_1800BADC3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v86);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (_QWORD **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v30, v31, (const char *)0x8007029CLL, cData);
    v32 = *v29;
    *((_DWORD *)this + 8) = 0;
    if ( *v32 )
    {
      while ( (_QWORD **)**v29 != v29 )
      {
        v33 = (_QWORD *)(**v29 + 16LL);
        *v29 = v33;
        if ( !*v33 )
          goto LABEL_49;
      }
      **v29 = *((_QWORD *)this + 3);
    }
LABEL_49:
    *v29 = 0LL;
  }
}
