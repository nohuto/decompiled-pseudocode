/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006E46C
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006E2F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00C8484 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C006E538 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // rbp
  int v2; // r15d
  __int64 v3; // rsi
  struct _LUID *v4; // r9
  unsigned int v5; // r8d
  int v7; // eax
  int v8; // eax
  unsigned int v10; // edi
  struct _LUID v11; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+58h] [rbp+10h]

  v11 = a1;
  v1 = gpGdiSharedMemory;
  v2 = 0;
  v12 = 0LL;
  v3 = 0LL;
  v4 = gpAdapterLuids;
  if ( *((_DWORD *)gpGdiSharedMemory + 393257) )
  {
    while ( !(unsigned __int8)operator==(&v11, &v4[v3]) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v5 )
        goto LABEL_6;
    }
    if ( gpDevicesPerLuid[v3]-- == 1 )
    {
      v2 = 1;
      if ( v1[393257] - (_DWORD)v3 != 1 )
      {
        v10 = v1[393257] - v3 - 1;
        memmove(&v4[v3], &v4[(unsigned int)(v3 + 1)], 8LL * v10);
        memmove(&gpDevicesPerLuid[v3], &gpDevicesPerLuid[(unsigned int)(v3 + 1)], v10);
        v4 = gpAdapterLuids;
      }
    }
  }
LABEL_6:
  v7 = v1[393257];
  if ( (_DWORD)v3 == v7 )
    return 3221225524LL;
  if ( v2 )
  {
    v8 = v7 - 1;
    ++v1[393256];
    v1[393257] = v8;
    v4[v8] = v12;
    gpDevicesPerLuid[v1[393257]] = 0;
  }
  return 0LL;
}
