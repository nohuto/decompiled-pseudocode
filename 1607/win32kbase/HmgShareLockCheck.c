/*
 * XREFs of HmgShareLockCheck @ 0x1C0029900
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     GreDCSelectBrush @ 0x1C0059210 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00BF694 (-vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  signed int v3; // ebp
  __int16 v4; // ebx^2
  __int64 v5; // r14
  _DWORD *v6; // rdi
  _QWORD *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  signed int v11; // edx
  __int64 v12; // r8
  PVOID DeferredContext; // rsi
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r8d
  signed int v17; // edx
  __int64 v18; // r9
  _DWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // r10
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned __int16 *v28; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v4 = HIWORD(a1);
  v28 = 0LL;
  v29 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v28, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0);
  if ( v29 )
  {
    v6 = v28;
    if ( !v28 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
      return v5;
    }
    if ( *((_BYTE *)v28 + 14) != a2 || v28[6] != v4 )
    {
LABEL_16:
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
      v14 = *v6 & 0xFFFFFF;
      if ( v14 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      (unsigned __int16)v14,
                                      1)
               + 13) == HIWORD(v14) )
            v14 = (unsigned __int16)v14;
        }
        else
        {
          v14 = (unsigned __int16)v14;
        }
      }
      v15 = *((_QWORD *)DeferredContext + 2);
      v16 = *(_DWORD *)(v15 + 2056);
      if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) - 1) << 16) )
        goto LABEL_40;
      if ( v14 >= v16 )
      {
        v17 = ((v14 - v16) >> 16) + 1;
        if ( (v14 - v16) >> 16 == -2 )
          goto LABEL_40;
      }
      else
      {
        v17 = 0;
      }
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      if ( v17 )
        v14 = v14 - ((v17 - 1) << 16) - v16;
      if ( v14 < *(_DWORD *)(v18 + 20) )
      {
        v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                         + 16LL * (unsigned __int8)v14
                         + 8);
LABEL_26:
        v20 = (unsigned __int16)*v19;
        v21 = v20 | (*v19 >> 8) & 0xFF0000u;
        if ( (unsigned int)v21 >= 0x10000 )
        {
          if ( *(_DWORD *)DeferredContext > 0x10000u )
          {
            v27 = (unsigned __int16)v20;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                        (unsigned __int16)v20,
                                        1)
                 + 13) == WORD1(v21) )
              v21 = v27;
          }
          else
          {
            v21 = (unsigned __int16)v20;
          }
          if ( (unsigned int)v21 >= 0x10000 && *(_DWORD *)DeferredContext > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(
              *((GdiHandleEntryDirectory **)DeferredContext + 2),
              (unsigned __int16)v21,
              1);
        }
        v22 = *((_QWORD *)DeferredContext + 2);
        v23 = *(_DWORD *)(v22 + 2056);
        if ( (unsigned int)v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) - 1) << 16) )
        {
          if ( (unsigned int)v21 < v23
            || (v3 = (((unsigned int)v21 - v23) >> 16) + 1, ((unsigned int)v21 - v23) >> 16 != -2) )
          {
            v24 = *(_QWORD *)(v22 + 8LL * v3 + 8);
            if ( v3 )
              v21 = (_DWORD)v21 - ((v3 - 1) << 16) - v23;
            *(_DWORD *)(*(_QWORD *)v24 + 24 * v21 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)(unsigned int)v21 >> 8))
            + 16LL * (unsigned __int8)v21,
              0LL);
            KeLeaveCriticalRegion();
          }
        }
        KeLeaveCriticalRegion();
        return v5;
      }
LABEL_40:
      v19 = 0LL;
      goto LABEL_26;
    }
    v7 = WPP_MAIN_CB.Dpc.DeferredContext;
    v8 = *(_DWORD *)v28 & 0xFFFFFF;
    if ( v8 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v26 = *v28;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    v26,
                                    1)
             + 13) == HIWORD(v8) )
          v8 = v26;
      }
      else
      {
        v8 = *v28;
      }
    }
    v9 = v7[2];
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) - 1) << 16) )
      goto LABEL_42;
    if ( v8 >= v10 )
    {
      v11 = ((v8 - v10) >> 16) + 1;
      if ( (v8 - v10) >> 16 == -2 )
        goto LABEL_42;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
    if ( v11 )
      v8 = v8 - ((v11 - 1) << 16) - v10;
    if ( v8 < *(_DWORD *)(v12 + 20) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                     + 16LL * (unsigned __int8)v8
                     + 8);
LABEL_15:
      ++*(_DWORD *)(v5 + 8);
      goto LABEL_16;
    }
LABEL_42:
    v5 = 0LL;
    goto LABEL_15;
  }
  return 0LL;
}
