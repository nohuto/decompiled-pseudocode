/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXII@Z @ 0x18003446C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180035C78 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v3; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r9
  const WCHAR *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // rcx
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rcx
  const WCHAR *v24; // rdx
  const unsigned __int16 *v25; // rcx
  const WCHAR *v26; // rcx
  const struct _TlgProvider_t *v27; // rax
  const struct _TlgProvider_t *v28; // rbx
  int v29; // ecx
  DWORD CurrentThreadId; // eax
  _QWORD **v31; // rbx
  void *v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  DWORD v36; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+8Ch] [rbp-74h]
  int *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  int *v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  const WCHAR *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  int *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  DWORD *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v64; // [rsp+100h] [rbp+0h]
  int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+138h] [rbp+38h]
  int v74; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v75; // [rsp+140h] [rbp+40h]
  int v76; // [rsp+148h] [rbp+48h]
  int v77; // [rsp+14Ch] [rbp+4Ch]
  int *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  int *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v82; // [rsp+170h] [rbp+70h] BYREF
  PSRWLOCK *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  DWORD *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  int *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  int *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  int v92; // [rsp+218h] [rbp+118h] BYREF
  int v93; // [rsp+220h] [rbp+120h] BYREF

  v93 = a3;
  v92 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
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
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = &word_1800717D0;
      v11 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v38 = v6[1];
      v42 = &v38;
      LODWORD(v12) = 0;
      v43 = 4LL;
      v13 = &word_1800717D0;
      if ( v11 )
      {
        v13 = v11;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v11 + v12) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v45 = v12 + 1;
      v47 = v6 + 14;
      LODWORD(v12) = 0;
      v44 = v13;
      v15 = &word_1800717D0;
      v46 = 0;
      v48 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v14 + v12) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v17 = &sourceString;
      v49 = v15;
      v50 = v12 + 1;
      v18 = &sourceString;
      v39 = *v6;
      v52 = &v39;
      LODWORD(v12) = 0;
      v51 = 0;
      v53 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v12 = -1LL;
        do
          ++v12;
        while ( v16[v12] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v55 = 2 * v12 + 2;
      v40 = v6[6];
      v57 = &v40;
      LODWORD(v12) = 0;
      v54 = v18;
      v20 = &word_1800717D0;
      v56 = 0;
      v58 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v19 + v12) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v60 = v12 + 1;
      v36 = v6[18];
      v62 = &v36;
      LODWORD(v12) = 0;
      v59 = v20;
      v22 = &word_1800717D0;
      v61 = 0;
      v63 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v21 + v12) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v65 = v12 + 1;
      LODWORD(v12) = 0;
      v64 = v22;
      v24 = &sourceString;
      v66 = 0;
      if ( v23 )
      {
        v24 = v23;
        v12 = -1LL;
        do
          ++v12;
        while ( v23[v12] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v68 = 2 * v12 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v67 = v24;
      v69 = 0;
      v71 = 4LL;
      if ( v25 )
      {
        v10 = v25;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v25 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v73 = v12 + 1;
      LODWORD(v12) = 0;
      v72 = v10;
      v74 = 0;
      if ( v26 )
      {
        v17 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v75 = v17;
      v76 = 2 * v12 + 2;
      v77 = 0;
      v78 = &v92;
      v79 = 4LL;
      v80 = &v93;
      v81 = 4LL;
      TlgWrite(v9, &unk_18007CA91, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v27 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v28 = v27;
    if ( *(_DWORD *)v27 > 5u
      && (*((_QWORD *)v27 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v27 + 3) & 0x200000000000LL) == *((_QWORD *)v27 + 3) )
    {
      v29 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v83 = &SRWLock;
      LODWORD(SRWLock) = v29;
      v84 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v86 = 4LL;
      v36 = CurrentThreadId;
      v88 = 4LL;
      v85 = &v36;
      v87 = &v92;
      v89 = &v93;
      v90 = 4LL;
      TlgWrite(v28, &unk_18007CBF1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v82);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v31 = (_QWORD **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v32, v33, (const char *)0x8007029CLL);
    v34 = *v31;
    *((_DWORD *)this + 8) = 0;
    if ( *v34 )
    {
      while ( (_QWORD **)**v31 != v31 )
      {
        v35 = (_QWORD *)(**v31 + 16LL);
        *v31 = v35;
        if ( !*v35 )
          goto LABEL_50;
      }
      **v31 = *((_QWORD *)this + 3);
    }
LABEL_50:
    *v31 = 0LL;
  }
}
