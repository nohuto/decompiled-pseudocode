/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180036710
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001DF8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // r10
  const unsigned __int16 *v6; // r11
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rax
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // r8
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdi
  const WCHAR *v14; // r8
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const WCHAR *v19; // rdx
  const WCHAR *v20; // r8
  const unsigned __int16 *v21; // rdx
  const WCHAR *v22; // rdx
  const struct _TlgProvider_t *v23; // rax
  const struct _TlgProvider_t *v24; // r10
  const unsigned __int16 *v25; // r11
  const unsigned __int16 *v26; // rdx
  __int64 v27; // rax
  const unsigned __int16 *v28; // r8
  const unsigned __int16 *v29; // rdx
  const unsigned __int16 *v30; // r8
  const WCHAR *v31; // rdx
  const WCHAR *v32; // rdi
  const WCHAR *v33; // r8
  const unsigned __int16 *v34; // rdx
  const unsigned __int16 *v35; // r8
  const unsigned __int16 *v36; // rdx
  const unsigned __int16 *v37; // r8
  const WCHAR *v38; // rdx
  const WCHAR *v39; // r8
  const unsigned __int16 *v40; // rdx
  const unsigned __int16 *v41; // r8
  const WCHAR *v42; // rdx
  const unsigned __int16 *v43; // rdx
  _DWORD *v44; // rcx
  int v45; // eax
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  int v50; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  int *v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  int *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  const WCHAR *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  int *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v80; // [rsp+110h] [rbp+10h]
  int v81; // [rsp+118h] [rbp+18h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  int *v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+148h] [rbp+48h]
  int v90; // [rsp+14Ch] [rbp+4Ch]
  int *v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v95; // [rsp+170h] [rbp+70h]
  int v96; // [rsp+178h] [rbp+78h]
  int v97; // [rsp+17Ch] [rbp+7Ch]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v23 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v24 = v23;
    if ( *(_DWORD *)v23 > 5u
      && (*((_QWORD *)v23 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v23 + 3) & 0x200000000000LL) == *((_QWORD *)v23 + 3) )
    {
      v25 = &word_1800717D0;
      v26 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v51 = a2[1];
      v55 = &v51;
      LODWORD(v27) = 0;
      v56 = 4LL;
      v28 = &word_1800717D0;
      if ( v26 )
      {
        v28 = v26;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v26 + v27) );
      }
      v29 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v58 = v27 + 1;
      v60 = a2 + 14;
      LODWORD(v27) = 0;
      v57 = v28;
      v30 = &word_1800717D0;
      v59 = 0;
      v61 = 4LL;
      if ( v29 )
      {
        v30 = v29;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v29 + v27) );
      }
      v31 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v32 = &sourceString;
      v62 = v30;
      v63 = v27 + 1;
      v33 = &sourceString;
      v50 = *a2;
      v65 = &v50;
      LODWORD(v27) = 0;
      v64 = 0;
      v66 = 4LL;
      if ( v31 )
      {
        v33 = v31;
        v27 = -1LL;
        do
          ++v27;
        while ( v31[v27] );
      }
      v34 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v68 = 2 * v27 + 2;
      v49 = a2[6];
      v70 = &v49;
      LODWORD(v27) = 0;
      v67 = v33;
      v35 = &word_1800717D0;
      v69 = 0;
      v71 = 4LL;
      if ( v34 )
      {
        v35 = v34;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v34 + v27) );
      }
      v36 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v73 = v27 + 1;
      v48 = a2[18];
      v75 = &v48;
      LODWORD(v27) = 0;
      v72 = v35;
      v37 = &word_1800717D0;
      v74 = 0;
      v76 = 4LL;
      if ( v36 )
      {
        v37 = v36;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v36 + v27) );
      }
      v38 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v78 = v27 + 1;
      LODWORD(v27) = 0;
      v77 = v37;
      v39 = &sourceString;
      v79 = 0;
      if ( v38 )
      {
        v39 = v38;
        v27 = -1LL;
        do
          ++v27;
        while ( v38[v27] );
      }
      v40 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v81 = 2 * v27 + 2;
      v47 = a2[24];
      v83 = &v47;
      LODWORD(v27) = 0;
      v80 = v39;
      v41 = &word_1800717D0;
      v82 = 0;
      v84 = 4LL;
      if ( v40 )
      {
        v41 = v40;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v40 + v27) );
      }
      v42 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v86 = v27 + 1;
      LODWORD(v27) = 0;
      v85 = v41;
      v87 = 0;
      if ( v42 )
      {
        v32 = v42;
        v27 = -1LL;
        do
          ++v27;
        while ( v42[v27] );
      }
      v43 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
      v89 = 2 * v27 + 2;
      v52 = a2[2];
      v91 = &v52;
      LODWORD(SRWLock) = a2[15];
      p_SRWLock = &SRWLock;
      LODWORD(v27) = 0;
      v88 = v32;
      v90 = 0;
      v92 = 4LL;
      v94 = 4LL;
      if ( v43 )
      {
        v25 = v43;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_BYTE *)v43 + v27) );
      }
      v95 = v25;
      v96 = v27 + 1;
      v97 = 0;
      TlgWrite(v24, &unk_18007C812, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v5 = v4;
    if ( *(_DWORD *)v4 > 5u
      && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
    {
      v6 = &word_1800717D0;
      v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v47 = a2[1];
      v55 = &v47;
      LODWORD(v8) = 0;
      v56 = 4LL;
      v9 = &word_1800717D0;
      if ( v7 )
      {
        v9 = v7;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v7 + v8) );
      }
      v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v58 = v8 + 1;
      v60 = a2 + 14;
      LODWORD(v8) = 0;
      v57 = v9;
      v11 = &word_1800717D0;
      v59 = 0;
      v61 = 4LL;
      if ( v10 )
      {
        v11 = v10;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v10 + v8) );
      }
      v12 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v13 = &sourceString;
      v62 = v11;
      v63 = v8 + 1;
      v14 = &sourceString;
      v48 = *a2;
      v65 = &v48;
      LODWORD(v8) = 0;
      v64 = 0;
      v66 = 4LL;
      if ( v12 )
      {
        v14 = v12;
        v8 = -1LL;
        do
          ++v8;
        while ( v12[v8] );
      }
      v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v68 = 2 * v8 + 2;
      v49 = a2[6];
      v70 = &v49;
      LODWORD(v8) = 0;
      v67 = v14;
      v16 = &word_1800717D0;
      v69 = 0;
      v71 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v15 + v8) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v73 = v8 + 1;
      v50 = a2[18];
      v75 = &v50;
      LODWORD(v8) = 0;
      v72 = v16;
      v18 = &word_1800717D0;
      v74 = 0;
      v76 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v17 + v8) );
      }
      v19 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v78 = v8 + 1;
      LODWORD(v8) = 0;
      v77 = v18;
      v20 = &sourceString;
      v79 = 0;
      if ( v19 )
      {
        v20 = v19;
        v8 = -1LL;
        do
          ++v8;
        while ( v19[v8] );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v81 = 2 * v8 + 2;
      v51 = a2[24];
      v83 = &v51;
      LODWORD(v8) = 0;
      v80 = v20;
      v82 = 0;
      v84 = 4LL;
      if ( v21 )
      {
        v6 = v21;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v21 + v8) );
      }
      v22 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v86 = v8 + 1;
      LODWORD(v8) = 0;
      v85 = v6;
      v87 = 0;
      if ( v22 )
      {
        v13 = v22;
        v8 = -1LL;
        do
          ++v8;
        while ( v22[v8] );
      }
      v88 = v13;
      v89 = 2 * v8 + 2;
      v90 = 0;
      TlgWrite(v5, &unk_18007C48A, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v44 = (_DWORD *)a1[6];
  v45 = a2[1];
  if ( v45 != v44[21] && (v45 != v44[19] || (int)v44[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v44 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
