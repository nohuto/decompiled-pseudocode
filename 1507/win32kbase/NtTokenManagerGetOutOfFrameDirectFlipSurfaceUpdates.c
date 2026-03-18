/*
 * XREFs of NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00DFE10
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     NtDCompositionPendingBatches @ 0x1C00D4038 (NtDCompositionPendingBatches.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E06D8 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
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
  CTokenManager *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r13d
  size_t v14; // r8
  char *v15; // rcx
  _DWORD *v16; // rdx
  unsigned int v18; // [rsp+40h] [rbp-4B8h] BYREF
  int v19; // [rsp+44h] [rbp-4B4h] BYREF
  int v20; // [rsp+48h] [rbp-4B0h]
  unsigned int *v21; // [rsp+50h] [rbp-4A8h]
  unsigned int v22; // [rsp+58h] [rbp-4A0h]
  unsigned int v23; // [rsp+5Ch] [rbp-49Ch]
  unsigned int v24; // [rsp+60h] [rbp-498h]
  unsigned __int64 v25; // [rsp+68h] [rbp-490h]
  __int64 v26; // [rsp+70h] [rbp-488h]
  unsigned int *v27; // [rsp+78h] [rbp-480h]
  int *v28; // [rsp+80h] [rbp-478h]
  __int64 v29; // [rsp+88h] [rbp-470h]
  _BYTE Src[1056]; // [rsp+90h] [rbp-468h] BYREF

  v6 = a4;
  v21 = a4;
  v26 = a2;
  v22 = a1;
  v24 = a1;
  v29 = a2;
  v27 = a4;
  v25 = a5;
  v28 = a6;
  v7 = 0;
  v8 = 0;
  v23 = 0;
  UpdatesInternal = 0;
  v20 = 0;
  v10 = 0;
  v19 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm() )
  {
    if ( a6 )
    {
      v10 = NtDCompositionPendingBatches();
      v19 = v10;
    }
    if ( !v10 )
    {
      UpdatesInternal = 1;
      v20 = 1;
      v18 = 0;
      while ( a3 > v8 && UpdatesInternal && !v10 )
      {
        v12 = a3 - v8;
        if ( a3 - v8 > 4 )
          v12 = 4;
        v13 = 0;
        v18 = 0;
        if ( g_pTokenManager )
        {
          UpdatesInternal = CTokenManager::ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal(
                              v11,
                              v22,
                              v12,
                              a6 != 0LL,
                              (struct CSM_SURFACE_UPDATE *)Src,
                              &v18,
                              &v19);
          v10 = v19;
          v13 = v18;
        }
        else
        {
          UpdatesInternal = 0;
        }
        v20 = UpdatesInternal;
        if ( v13 )
        {
          v14 = 264LL * v13;
          v15 = (char *)(v26 + 264LL * v8);
          if ( (unsigned __int64)&v15[v14] > MmUserProbeAddress || &v15[v14] <= v15 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v15, Src, v14);
        }
        v8 += v13;
        v23 = v8;
      }
      v6 = v21;
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
  v16 = (_DWORD *)v25;
  if ( v25 + 4 < v25 || v25 + 4 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v16 = UpdatesInternal;
  if ( a6 )
  {
    if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a6 = v10;
  }
  return v7;
}
