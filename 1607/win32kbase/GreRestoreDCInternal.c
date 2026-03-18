/*
 * XREFs of GreRestoreDCInternal @ 0x1C00CD060
 * Callers:
 *     GreRestoreDC @ 0x1C0025490 (GreRestoreDC.c)
 * Callees:
 *     IsvRestorePathSupported_0 @ 0x1C0001908 (IsvRestorePathSupported_0.c)
 *     vRestorePathWrap_0 @ 0x1C0001910 (vRestorePathWrap_0.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00254D8 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0026A8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C720 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CD80 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C002D2FC (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     GreDCSelectBrush @ 0x1C0059210 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgLockAllOwners @ 0x1C00741F0 (HmgLockAllOwners.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vRestoreRegion @ 0x1C0074CF0 (vRestoreRegion.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00BD7D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  int v8; // r8d
  DC *v9; // rdi
  unsigned int v10; // esi
  int v11; // r15d
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rbx
  int v15; // r12d
  int v16; // edi
  unsigned int *v17; // rcx
  int v18; // eax
  DC *v19; // rcx
  DC *v20; // rdx
  __int64 v21; // rax
  DC *v22; // rcx
  DC *v23; // rdi
  DC *v24; // rcx
  int v25; // edx
  __int64 v26; // r8
  int v27; // eax
  ULONG v28; // ecx
  unsigned int *v30; // [rsp+28h] [rbp-39h] BYREF
  HSEMAPHORE v31; // [rsp+30h] [rbp-31h] BYREF
  DC *v32[6]; // [rsp+38h] [rbp-29h] BYREF
  DC *v33[6]; // [rsp+68h] [rbp+7h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  v9 = v32[0];
  v10 = 0;
  v11 = 1;
  if ( !v32[0]
    || !a3
    && (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      v32[0])
        + 2) & 0xFFFFFFFE) == 0 )
  {
    v28 = 6;
    goto LABEL_58;
  }
  if ( !a4 || *((_WORD *)v9 + 6) <= 1u )
  {
    v12 = *((_QWORD *)v9 + 10);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (v13 & 0x1000) != 0 )
    {
      GreDCSelectBrush((__int64)v9, *(_QWORD *)(v12 + 16));
      v9 = v32[0];
    }
    if ( (v13 & 0x2000) != 0 )
    {
      GreDCSelectPen((struct BRUSH **)v9, *(_QWORD *)(*((_QWORD *)v9 + 10) + 24LL));
      v9 = v32[0];
    }
    if ( a2 < 0 )
      a2 += *((_DWORD *)v9 + 29);
    if ( a2 >= 1 && a2 < *((_DWORD *)v9 + 29) )
    {
      v14 = *((_QWORD *)v9 + 6);
      if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
      {
        GreLockVisRgn(*((_QWORD *)v9 + 6), v12, v8);
        v9 = v32[0];
      }
      v15 = *((_DWORD *)v9 + 9) & 0x800;
      if ( v15 )
      {
        DC::bMakeInfoDC(v9, 0);
        v9 = v32[0];
      }
      v16 = *(_DWORD *)(*((_QWORD *)v9 + 10) + 308LL);
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v33);
        v33[0] = HmgLockAllOwners(*((_QWORD *)v32[0] + 16), 1);
        if ( !v33[0] )
          break;
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 18));
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v32[0] + 19));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v32[0] + 20));
        DEC_SHARE_REF_CNT(*((unsigned int **)v32[0] + 13));
        vRestoreRegion((__int64)v32);
        if ( (int)IsvRestorePathSupported_0() >= 0 )
          vRestorePathWrap_0();
        v17 = (unsigned int *)*((_QWORD *)v32[0] + 64);
        if ( v17 )
        {
          if ( *((_DWORD *)v32[0] + 8) == 1 )
          {
            hbmSelectBitmap(a1, (HBITMAP)gahStockObjects[21], 1, 0);
          }
          else
          {
            v18 = v17[28];
            if ( (v18 & 0x800) != 0 )
            {
              DEC_SHARE_REF_CNT(v17);
            }
            else if ( v18 >= 0 )
            {
              SURFACE::vDec_cRef((SURFACE *)v17);
            }
          }
        }
        v31 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v19 = v33[0];
        v20 = v32[0];
        if ( *((_QWORD *)v32[0] + 11) != *((_QWORD *)v33[0] + 11) )
        {
          SelectPaletteWorker((struct XDCOBJ *)v32, *((HPALETTE *)v33[0] + 11), 1);
          v20 = v32[0];
          v19 = v33[0];
        }
        if ( *((_QWORD *)v20 + 12) != *((_QWORD *)v19 + 12) )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v30, *((HPALETTE *)v20 + 11));
          *((_QWORD *)v33[0] + 12) = v30;
          EPALOBJ::~EPALOBJ(&v30);
          v19 = v33[0];
        }
        v21 = *((_QWORD *)v19 + 12);
        if ( v21 != *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 56));
          v19 = v33[0];
        }
        DC::vCopyTo(v19, (struct XDCOBJ *)v32);
        XDCOBJ::bDeleteDC((__int64 **)v33);
        SEMOBJ::vUnlock((PERESOURCE *)&v31);
        DCOBJ::~DCOBJ((DCOBJ *)v33);
        v22 = v32[0];
        if ( a2 >= *((_DWORD *)v32[0] + 29) )
          goto LABEL_38;
      }
      EngSetLastError(6u);
      v11 = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v33);
      v22 = v32[0];
LABEL_38:
      if ( v16 != *(_DWORD *)(*((_QWORD *)v22 + 10) + 308LL) )
      {
        *((_DWORD *)v22 + 66) |= 1u;
        v22 = v32[0];
      }
      if ( v15 )
      {
        DC::bMakeInfoDC(v22, 1);
        v22 = v32[0];
      }
      DC::vReleaseRao(v22);
      v23 = v32[0];
      CPushLock::AcquireLockShared((DC *)((char *)v32[0] + 1504));
      DC::vUpdate_VisRect(v32[0], *((struct REGION **)v32[0] + 192));
      CPushLock::ReleaseLock((DC *)((char *)v23 + 1504));
      *(_DWORD *)(*((_QWORD *)v32[0] + 10) + 8LL) |= 0x12001Fu;
      v24 = v32[0];
      if ( *((_DWORD *)v32[0] + 8) == 1 )
      {
        DC::bSetDefaultRegion(v32[0]);
        v24 = v32[0];
      }
      v25 = *((_DWORD *)v24 + 9);
      v26 = *((_QWORD *)v24 + 64);
      if ( (v25 & 1) != 0
        || *((_DWORD *)v24 + 8) == 1
        && v26
        && ((v27 = *(_DWORD *)(v26 + 112), (v27 & 0x4000) != 0)
         || (v27 & 0x800000) != 0 && (*(_DWORD *)(v14 + 56) & 1) != 0) )
      {
        *((_DWORD *)v24 + 9) = v25 | 0x200;
        if ( (*(_DWORD *)(v26 + 112) & 0x200) != 0 )
          *((_DWORD *)v32[0] + 9) |= 0x8000u;
        else
          *((_DWORD *)v32[0] + 9) &= ~0x8000u;
      }
      else
      {
        *((_DWORD *)v24 + 9) = v25 & 0xFFFFFDFF;
      }
      DC::vCalcFillOrigin(v32[0]);
      if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
        GreUnlockVisRgn(v14);
      goto LABEL_59;
    }
    v28 = 87;
LABEL_58:
    EngSetLastError(v28);
    v11 = 0;
LABEL_59:
    v10 = v11;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v32);
  return v10;
}
