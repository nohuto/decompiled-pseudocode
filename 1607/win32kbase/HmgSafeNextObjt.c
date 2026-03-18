/*
 * XREFs of HmgSafeNextObjt @ 0x1C006B3F0
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C006B2F0 (bDynamicRemoveAllDriverRealizations.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00877DC (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  GdiHandleEntryDirectory **DeferredContext; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdi
  GdiHandleEntryDirectory *v6; // rdx
  unsigned int v7; // r9d
  signed int v8; // r8d
  __int64 v9; // r10
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // eax
  GdiHandleEntryDirectory *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  signed int v16; // ecx
  __int64 v17; // r8

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v5 = 0LL;
  while ( ++v4 < *(_DWORD *)DeferredContext )
  {
    v6 = DeferredContext[2];
    v7 = *((_DWORD *)v6 + 514);
    if ( v4 < v7 + ((*((unsigned __int16 *)v6 + 1) - 1) << 16) )
    {
      if ( v4 < v7 )
      {
        v8 = 0;
        goto LABEL_6;
      }
      v8 = ((v4 - v7) >> 16) + 1;
      if ( (v4 - v7) >> 16 != -2 )
      {
LABEL_6:
        v9 = *((_QWORD *)v6 + v8 + 1);
        v10 = v4;
        if ( v8 )
          v10 = v4 - ((v8 - 1) << 16) - v7;
        v11 = 0LL;
        if ( v10 < *(_DWORD *)(v9 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                       + 16LL * (unsigned __int8)v10
                       + 8) )
        {
          v11 = *(_QWORD *)v9 + 24LL * v10;
        }
        if ( v11 )
        {
          if ( !v4 )
            return 0LL;
          if ( *(_BYTE *)(v11 + 14) == a2 )
          {
            v12 = GdiHandleManager::DecodeIndex(DeferredContext, v4);
            v13 = DeferredContext[2];
            v14 = v12;
            v15 = *((_DWORD *)v13 + 514);
            if ( v12 < v15 + ((*((unsigned __int16 *)v13 + 1) - 1) << 16) )
            {
              if ( v12 < v15 )
              {
                v16 = 0;
                goto LABEL_17;
              }
              v16 = ((v12 - v15) >> 16) + 1;
              if ( (v12 - v15) >> 16 != -2 )
              {
LABEL_17:
                v17 = *((_QWORD *)v13 + v16 + 1);
                if ( v16 )
                  v14 = v12 - ((v16 - 1) << 16) - v15;
                if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
                  return *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8))
                                   + 16LL * (unsigned __int8)v14
                                   + 8);
              }
            }
            return v5;
          }
        }
      }
    }
  }
  return 0LL;
}
