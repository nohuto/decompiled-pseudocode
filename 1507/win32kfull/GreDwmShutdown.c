/*
 * XREFs of GreDwmShutdown @ 0x1C012C414
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 * Callees:
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C000C644 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C000DAF0 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000DCA4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmShutdown(__int64 a1)
{
  struct _SURFOBJ *v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v4);
  if ( g_pDwmState )
  {
    ZwSetEvent(*((HANDLE *)g_pDwmState + 42), 0LL);
    ZwClose(*((HANDLE *)g_pDwmState + 42));
    GreSfmDwmShutdown();
    SpRenderHint((struct PDEVOBJ *)&v5, 0x10001u, 0LL, 0LL);
    v2 = *(struct _SURFOBJ **)(a1 + 2576);
    if ( v2 )
      v2 = (struct _SURFOBJ *)((char *)v2 + 24);
    vAccNotify(v2, 6u, 0LL);
    GreDeleteObject(*((_QWORD *)g_pDwmState + 23));
    g_pDwmState = 0LL;
    Win32FreePool(g_pDwmState);
    ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  }
  return LEAVE_GRE_DWM_CRIT(a1, v4);
}
