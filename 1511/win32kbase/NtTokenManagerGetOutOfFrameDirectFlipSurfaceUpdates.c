/*
 * XREFs of NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00E1D60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     NtDCompositionPendingBatches @ 0x1C00D6048 (NtDCompositionPendingBatches.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 */

__int64 __fastcall NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  int UpdatesInternal; // esi
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  CTokenManager *v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r13d
  size_t v16; // r8
  char *v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v20; // [rsp+40h] [rbp-4B8h] BYREF
  int v21; // [rsp+44h] [rbp-4B4h] BYREF
  int v22; // [rsp+48h] [rbp-4B0h]
  unsigned int *v23; // [rsp+50h] [rbp-4A8h]
  unsigned int v24; // [rsp+58h] [rbp-4A0h]
  unsigned int v25; // [rsp+5Ch] [rbp-49Ch]
  unsigned int v26; // [rsp+60h] [rbp-498h]
  unsigned __int64 v27; // [rsp+68h] [rbp-490h]
  __int64 v28; // [rsp+70h] [rbp-488h]
  unsigned int *v29; // [rsp+78h] [rbp-480h]
  int *v30; // [rsp+80h] [rbp-478h]
  __int64 v31; // [rsp+88h] [rbp-470h]
  _BYTE Src[1056]; // [rsp+90h] [rbp-468h] BYREF

  v6 = a4;
  v23 = a4;
  v28 = a2;
  v24 = a1;
  v26 = a1;
  v31 = a2;
  v29 = a4;
  v27 = a5;
  v30 = a6;
  v7 = 0;
  v8 = 0;
  v25 = 0;
  UpdatesInternal = 0;
  v22 = 0;
  v10 = 0;
  v21 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v12, v11) )
  {
    if ( a6 )
    {
      v10 = NtDCompositionPendingBatches();
      v21 = v10;
    }
    if ( !v10 )
    {
      UpdatesInternal = 1;
      v22 = 1;
      v20 = 0;
      while ( a3 > v8 && UpdatesInternal && !v10 )
      {
        v14 = a3 - v8;
        if ( a3 - v8 > 4 )
          v14 = 4;
        v15 = 0;
        v20 = 0;
        if ( g_pTokenManager )
        {
          UpdatesInternal = CTokenManager::ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal(
                              v13,
                              v24,
                              v14,
                              a6 != 0LL,
                              (struct CSM_SURFACE_UPDATE *)Src,
                              &v20,
                              &v21);
          v10 = v21;
          v15 = v20;
        }
        else
        {
          UpdatesInternal = 0;
        }
        v22 = UpdatesInternal;
        if ( v15 )
        {
          v16 = 264LL * v15;
          v17 = (char *)(v28 + 264LL * v8);
          if ( (unsigned __int64)&v17[v16] > MmUserProbeAddress || &v17[v16] <= v17 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v17, Src, v16);
        }
        v8 += v15;
        v25 = v8;
      }
      v6 = v23;
    }
  }
  else
  {
    v7 = -1073741790;
  }
  KeLeaveCriticalRegion();
  if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v6 = v8;
  v18 = (_DWORD *)v27;
  if ( v27 + 4 < v27 || v27 + 4 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v18 = UpdatesInternal;
  if ( a6 )
  {
    if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a6 = v10;
  }
  return v7;
}
