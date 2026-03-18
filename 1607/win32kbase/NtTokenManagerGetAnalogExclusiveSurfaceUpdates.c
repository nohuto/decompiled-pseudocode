/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00F4150
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00F4704 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
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
  __int64 v10; // rcx
  CTokenManager *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r15d
  size_t v14; // r8
  char *v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-3A8h] BYREF
  int v18; // [rsp+34h] [rbp-3A4h]
  unsigned int v19; // [rsp+38h] [rbp-3A0h]
  unsigned int v20; // [rsp+3Ch] [rbp-39Ch]
  unsigned int v21; // [rsp+40h] [rbp-398h]
  __int64 v22; // [rsp+48h] [rbp-390h]
  __int64 v23; // [rsp+50h] [rbp-388h]
  unsigned int *v24; // [rsp+58h] [rbp-380h]
  int *v25; // [rsp+60h] [rbp-378h]
  _BYTE Src[800]; // [rsp+70h] [rbp-368h] BYREF

  v6 = a3;
  v22 = a2;
  v19 = a1;
  v21 = a1;
  v23 = a2;
  v24 = a4;
  v25 = a5;
  v7 = 0;
  v8 = 0;
  v20 = 0;
  AnalogSurfaceUpdatesInternal = 0;
  v18 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v10) )
  {
    AnalogSurfaceUpdatesInternal = 1;
    v18 = 1;
    v17 = 0;
    while ( v6 > v8 && AnalogSurfaceUpdatesInternal )
    {
      v12 = v6 - v8;
      if ( v6 - v8 > 4 )
        v12 = 4;
      v13 = 0;
      v17 = 0;
      if ( g_pTokenManager )
      {
        AnalogSurfaceUpdatesInternal = CTokenManager::GetAnalogSurfaceUpdatesInternal(
                                         v11,
                                         v19,
                                         v12,
                                         (struct CSM_SURFACE_UPDATE *)Src,
                                         &v17);
        v13 = v17;
      }
      else
      {
        AnalogSurfaceUpdatesInternal = 0;
      }
      v18 = AnalogSurfaceUpdatesInternal;
      if ( v13 )
      {
        v14 = 200LL * v13;
        v15 = (char *)(v22 + 200LL * v8);
        if ( (unsigned __int64)&v15[v14] > MmUserProbeAddress || &v15[v14] <= v15 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, Src, v14);
      }
      v8 += v13;
      v20 = v8;
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
