/*
 * XREFs of ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006E3E8
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C006E538 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r10
  struct _LUID v2; // r8
  unsigned int v3; // r11d
  struct _LUID *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned int v7; // r11d
  unsigned __int8 *v9; // rax
  struct _LUID v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v1 = gpGdiSharedMemory;
  v2 = a1;
  v3 = *((_DWORD *)gpGdiSharedMemory + 393257);
  if ( v3 >= (unsigned int)gcMaximumAdapterCount )
    return 3221225612LL;
  v4 = gpAdapterLuids;
  v5 = 0LL;
  if ( v3 )
  {
    while ( !(unsigned __int8)operator==(&v10, &v4[v5]) )
    {
      v5 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v5 >= v7 )
        goto LABEL_6;
    }
    ++gpDevicesPerLuid[v6];
  }
  else
  {
LABEL_6:
    v9 = gpDevicesPerLuid;
    v4[v5] = v2;
    ++v9[v5];
    ++v1[393257];
    ++v1[393256];
  }
  return 0LL;
}
