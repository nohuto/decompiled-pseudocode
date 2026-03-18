/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C002E800
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C002D1E0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032B30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BD180 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00C5460 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00C6F48 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C064C (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  signed int v4; // esi
  _DWORD *v5; // rbx
  PVOID DeferredContext; // rbp
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // r8d
  signed int v10; // edx
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // ebx
  unsigned int v20; // edi
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = 0;
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v22 )
    return;
  v5 = (_DWORD *)v21;
  if ( !v21 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
    return;
  }
  if ( *(_BYTE *)(v21 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
  {
    v18 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTLOCKSTACKBACKTRACE((unsigned __int16)v18 | (v18 >> 8) & 0xFF0000, a1);
  }
  ++*((_DWORD *)a1 + 2);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = *v5 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v19 = *(unsigned __int16 *)v5;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = v19;
    }
    else
    {
      v7 = *(unsigned __int16 *)v5;
    }
  }
  v8 = *((_QWORD *)DeferredContext + 2);
  v9 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) - 1) << 16) )
    goto LABEL_34;
  if ( v7 >= v9 )
  {
    v10 = ((v7 - v9) >> 16) + 1;
    if ( (v7 - v9) >> 16 == -2 )
    {
LABEL_34:
      v12 = 0LL;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
  if ( v10 )
    v7 = v7 - ((v10 - 1) << 16) - v9;
  if ( v7 >= *(_DWORD *)(v11 + 20) )
    goto LABEL_34;
  v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                   + 16LL * (unsigned __int8)v7
                   + 8);
LABEL_12:
  v13 = (unsigned __int16)*v12;
  v14 = v13 | (*v12 >> 8) & 0xFF0000u;
  if ( (unsigned int)v14 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      v20 = (unsigned __int16)v13;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v13,
                                  1)
           + 13) == WORD1(v14) )
        v14 = v20;
    }
    else
    {
      v14 = (unsigned __int16)v13;
    }
    if ( (unsigned int)v14 >= 0x10000 && *(_DWORD *)DeferredContext > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)DeferredContext + 2), (unsigned __int16)v14, 1);
  }
  v15 = *((_QWORD *)DeferredContext + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( (unsigned int)v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) - 1) << 16) )
  {
    if ( (unsigned int)v14 < v16 || (v4 = (((unsigned int)v14 - v16) >> 16) + 1, ((unsigned int)v14 - v16) >> 16 != -2) )
    {
      v17 = *(_QWORD *)(v15 + 8LL * v4 + 8);
      if ( v4 )
        v14 = (_DWORD)v14 - ((v4 - 1) << 16) - v16;
      *(_DWORD *)(*(_QWORD *)v17 + 24 * v14 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)(unsigned int)v14 >> 8))
      + 16LL * (unsigned __int8)v14,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
}
