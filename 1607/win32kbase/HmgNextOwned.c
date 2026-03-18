/*
 * XREFs of HmgNextOwned @ 0x1C002A4F0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0059EC0 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0059F48 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005A02C (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C005A0C8 (-vCleanupBrushes@@YAXK@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextOwned(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  signed int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, a2, (int)a3);
  while ( ++v5 < *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v6 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    if ( v5 < v7 + ((*(unsigned __int16 *)(v6 + 2) - 1) << 16) )
    {
      if ( v5 >= v7 )
      {
        v8 = ((v5 - v7) >> 16) + 1;
        if ( (v5 - v7) >> 16 != -2 )
          goto LABEL_6;
      }
      else
      {
        v8 = 0;
LABEL_6:
        v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
        v6 = v5;
        if ( v8 )
          v6 = v5 - ((v8 - 1) << 16) - v7;
        v10 = 0LL;
        if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
        {
          v11 = (unsigned int)v6;
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)(unsigned int)v6 >> 8))
                         + 16LL * (unsigned __int8)v6
                         + 8);
          if ( v6 )
          {
            v6 = 3 * v11;
            v10 = *(_QWORD *)v9 + 24 * v11;
          }
        }
        if ( v10 )
        {
          if ( !v5 )
            break;
          if ( *(_BYTE *)(v10 + 14) )
          {
            v6 = a2 & 0xFFFFFFFD ^ *(_DWORD *)(v10 + 8);
            if ( (v6 & 0xFFFFFFFE) == 0 )
            {
              v6 = (unsigned __int16)v5;
              *a3 = (unsigned __int16)v5 | (unsigned __int64)(*(unsigned __int16 *)(v10 + 12) << 16);
              goto LABEL_17;
            }
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_17:
  GreReleaseHmgrSemaphore(v6);
  return v5;
}
