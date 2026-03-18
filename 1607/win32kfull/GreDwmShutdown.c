/*
 * XREFs of GreDwmShutdown @ 0x1C00EE780
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0064F58 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00667FC (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00EEF3C (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmShutdown(__int64 a1)
{
  struct _SURFOBJ *v2; // rcx
  __int64 **v3; // rdx
  __int64 v4; // r8
  __int64 **v5; // rcx
  __int64 **v6; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v10);
  if ( g_pDwmState )
  {
    ZwSetEvent(*((HANDLE *)g_pDwmState + 42), 0LL);
    ZwClose(*((HANDLE *)g_pDwmState + 42));
    GreSfmDwmShutdown();
    SpRenderHint(&v11, 65537LL, 0LL, 0LL);
    v2 = *(struct _SURFOBJ **)(a1 + 2576);
    if ( v2 )
      v2 = (struct _SURFOBJ *)((char *)v2 + 24);
    vAccNotify(v2, 6u, 0LL);
    GreDeleteObject(*((_QWORD *)g_pDwmState + 23));
    v5 = (__int64 **)((char *)g_pDwmState + 120);
    while ( *v5 != (__int64 *)v5 )
    {
      v8 = *v5;
      v4 = **v5;
      v3 = (__int64 **)(*v5)[1];
      if ( *(__int64 **)(v4 + 8) != *v5 || *v3 != v8 )
        __fastfail(3u);
      *v3 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v3;
      v8[1] = (__int64)v8;
      *v8 = (__int64)v8;
    }
    v6 = (__int64 **)((char *)g_pDwmState + 104);
    while ( *v6 != (__int64 *)v6 )
    {
      v9 = *v6;
      v4 = **v6;
      v3 = (__int64 **)(*v6)[1];
      if ( *(__int64 **)(v4 + 8) != *v6 || *v3 != v9 )
        __fastfail(3u);
      *v3 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v3;
      v9[1] = (__int64)v9;
      *v9 = (__int64)v9;
    }
    g_pDwmState = 0LL;
    Win32FreePool(g_pDwmState, v3, v4);
    ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  }
  return LEAVE_GRE_DWM_CRIT(a1, v10);
}
