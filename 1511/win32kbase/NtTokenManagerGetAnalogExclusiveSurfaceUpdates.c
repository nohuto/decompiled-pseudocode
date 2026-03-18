/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00E1AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        int *a5)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // esi
  int AnalogSurfaceUpdatesInternal; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  CTokenManager *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  size_t v15; // r8
  char *v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-4A8h] BYREF
  int v19; // [rsp+34h] [rbp-4A4h]
  unsigned int v20; // [rsp+38h] [rbp-4A0h]
  unsigned int v21; // [rsp+3Ch] [rbp-49Ch]
  unsigned int v22; // [rsp+40h] [rbp-498h]
  __int64 v23; // [rsp+48h] [rbp-490h]
  unsigned int *v24; // [rsp+50h] [rbp-488h]
  int *v25; // [rsp+58h] [rbp-480h]
  __int64 v26; // [rsp+60h] [rbp-478h]
  _BYTE Src[1056]; // [rsp+70h] [rbp-468h] BYREF

  v6 = a3;
  v23 = a2;
  v20 = a1;
  v22 = a1;
  v26 = a2;
  v24 = a4;
  v25 = a5;
  v7 = 0;
  v8 = 0;
  v21 = 0;
  AnalogSurfaceUpdatesInternal = 0;
  v19 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v11, v10) )
  {
    AnalogSurfaceUpdatesInternal = 1;
    v19 = 1;
    v18 = 0;
    while ( v6 > v8 && AnalogSurfaceUpdatesInternal )
    {
      v13 = v6 - v8;
      if ( v6 - v8 > 4 )
        v13 = 4;
      v14 = 0;
      v18 = 0;
      if ( g_pTokenManager )
      {
        AnalogSurfaceUpdatesInternal = CTokenManager::GetAnalogSurfaceUpdatesInternal(
                                         v12,
                                         v20,
                                         v13,
                                         (struct CSM_SURFACE_UPDATE *)Src,
                                         &v18);
        v14 = v18;
      }
      else
      {
        AnalogSurfaceUpdatesInternal = 0;
      }
      v19 = AnalogSurfaceUpdatesInternal;
      if ( v14 )
      {
        v15 = 264LL * v14;
        v16 = (char *)(v23 + 264LL * v8);
        if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, Src, v15);
      }
      v8 += v14;
      v21 = v8;
      v6 = a3;
    }
  }
  else
  {
    v7 = -1073741790;
  }
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v8;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = AnalogSurfaceUpdatesInternal;
  return v7;
}
