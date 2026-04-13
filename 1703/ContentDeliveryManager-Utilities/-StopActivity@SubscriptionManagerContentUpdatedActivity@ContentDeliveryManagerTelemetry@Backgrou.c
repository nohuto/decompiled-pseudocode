/*
 * XREFs of ?StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x1800382B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003C3F8 (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this)
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
  DWORD v29; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  int *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  const WCHAR *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  DWORD *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+118h] [rbp+18h]
  int v62; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v65; // [rsp+130h] [rbp+30h]
  int v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+160h] [rbp+60h] BYREF
  PSRWLOCK *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  DWORD *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]

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
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = &word_180091EF8;
      v9 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v31 = v4[1];
      v35 = &v31;
      LODWORD(v10) = 0;
      v36 = 4LL;
      v11 = &word_180091EF8;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v38 = v10 + 1;
      v40 = v4 + 14;
      LODWORD(v10) = 0;
      v37 = v11;
      v13 = &word_180091EF8;
      v39 = 0;
      v41 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v15 = &word_180091F08;
      v42 = v13;
      v43 = v10 + 1;
      v16 = &word_180091F08;
      v32 = *v4;
      v45 = &v32;
      LODWORD(v10) = 0;
      v44 = 0;
      v46 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v48 = 2 * v10 + 2;
      v33 = v4[6];
      v50 = &v33;
      LODWORD(v10) = 0;
      v47 = v16;
      v18 = &word_180091EF8;
      v49 = 0;
      v51 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v53 = v10 + 1;
      v29 = v4[18];
      v55 = &v29;
      LODWORD(v10) = 0;
      v52 = v18;
      v20 = &word_180091EF8;
      v54 = 0;
      v56 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v58 = v10 + 1;
      LODWORD(v10) = 0;
      v57 = v20;
      v22 = &word_180091F08;
      v59 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v61 = 2 * v10 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v60 = v22;
      v62 = 0;
      v64 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v66 = v10 + 1;
      LODWORD(v10) = 0;
      v65 = v8;
      v67 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v68 = v15;
      v69 = 2 * v10 + 2;
      v70 = 0;
      TlgWrite(v7, &unk_1800DF590, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v25 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v26 = v25;
    if ( *(_DWORD *)v25 > 5u
      && (*((_QWORD *)v25 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v25 + 3) & 0x200000000000LL) == *((_QWORD *)v25 + 3) )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v72 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v73 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v75 = 4LL;
      v29 = CurrentThreadId;
      v74 = &v29;
      TlgWrite(v26, &unk_1800DF431, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v71);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
