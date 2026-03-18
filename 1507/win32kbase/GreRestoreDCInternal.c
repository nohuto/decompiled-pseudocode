/*
 * XREFs of GreRestoreDCInternal @ 0x1C00BF7E0
 * Callers:
 *     GreRestoreDC @ 0x1C0039850 (GreRestoreDC.c)
 * Callees:
 *     IsvRestorePathSupported_0 @ 0x1C00018F8 (IsvRestorePathSupported_0.c)
 *     vRestorePathWrap_0 @ 0x1C0001900 (vRestorePathWrap_0.c)
 *     HmgLockAllOwners @ 0x1C000B9E0 (HmgLockAllOwners.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     vRestoreRegion @ 0x1C000D2F0 (vRestoreRegion.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     hbmSelectBitmap @ 0x1C0039900 (hbmSelectBitmap.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003A8E0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C003C4C0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C003E060 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreDCSelectBrush @ 0x1C005B010 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C005B290 (GreDCSelectPen.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00AF760 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  __int64 v8; // r8
  DC *v9; // r10
  unsigned int v10; // esi
  int v11; // r14d
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rbx
  int v15; // r15d
  int v16; // r12d
  SURFACE *v17; // rcx
  int v18; // eax
  DC *v19; // rdx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  DC *v24; // rcx
  DC *v25; // rdi
  DC *v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG v32; // ecx
  _DWORD *v34; // [rsp+28h] [rbp-39h] BYREF
  HSEMAPHORE v35; // [rsp+30h] [rbp-31h] BYREF
  DC *v36[6]; // [rsp+38h] [rbp-29h] BYREF
  DC *v37[6]; // [rsp+68h] [rbp+7h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v9 = v36[0];
  v10 = 0;
  v11 = 1;
  if ( !v36[0]
    || !a3
    && (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v36[0] + 8) & 0xFFFFFFFE) == 0 )
  {
    v32 = 6;
    goto LABEL_59;
  }
  if ( !a4 || *((_WORD *)v36[0] + 6) <= 1u )
  {
    v12 = *((_QWORD *)v36[0] + 10);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (v13 & 0x1000) != 0 )
    {
      GreDCSelectBrush((__int64)v36[0], *(_QWORD *)(v12 + 16));
      v9 = v36[0];
    }
    if ( (v13 & 0x2000) != 0 )
    {
      GreDCSelectPen((struct BRUSH **)v9, *(_QWORD *)(*((_QWORD *)v9 + 10) + 24LL));
      v9 = v36[0];
    }
    if ( a2 < 0 )
      a2 += *((_DWORD *)v9 + 29);
    if ( a2 >= 1 && a2 < *((_DWORD *)v9 + 29) )
    {
      v14 = *((_QWORD *)v9 + 6);
      if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
      {
        GreLockVisRgn(*((_QWORD *)v9 + 6), v12, v8);
        v9 = v36[0];
      }
      v15 = *((_DWORD *)v9 + 9) & 0x800;
      if ( v15 )
      {
        DC::bMakeInfoDC(v9, 0);
        v9 = v36[0];
      }
      v16 = *(_DWORD *)(*((_QWORD *)v9 + 10) + 308LL);
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v37);
        v37[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v36[0] + 16), 1);
        if ( !v37[0] )
          break;
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v36[0] + 18));
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v36[0] + 19));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v36[0] + 20));
        DEC_SHARE_REF_CNT(*((_DWORD **)v36[0] + 13));
        vRestoreRegion((__int64)v36);
        if ( (int)IsvRestorePathSupported_0() >= 0 )
          vRestorePathWrap_0();
        v17 = (SURFACE *)*((_QWORD *)v36[0] + 64);
        if ( v17 )
        {
          if ( *((_DWORD *)v36[0] + 8) == 1 )
          {
            hbmSelectBitmap(a1, qword_1C0101078, 1, 0);
          }
          else
          {
            v18 = *((_DWORD *)v17 + 28);
            if ( (v18 & 0x800) != 0 )
            {
              DEC_SHARE_REF_CNT(v17);
            }
            else if ( v18 >= 0 )
            {
              SURFACE::vDec_cRef(v17);
            }
          }
        }
        v35 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v19 = v36[0];
        if ( *((_QWORD *)v36[0] + 11) != *((_QWORD *)v37[0] + 11) )
        {
          SelectPaletteWorker((struct XDCOBJ *)v36, *((HPALETTE *)v37[0] + 11), 1);
          v19 = v36[0];
        }
        if ( *((_QWORD *)v19 + 12) != *((_QWORD *)v37[0] + 12) )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v34, *((HPALETTE *)v19 + 11));
          v20 = v34;
          *((_QWORD *)v37[0] + 12) = v34;
          if ( v20 )
            DEC_SHARE_REF_CNT(v20);
        }
        v21 = *((_QWORD *)v37[0] + 12);
        if ( (struct PALETTE *)v21 != ppalDefault )
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 56));
        DC::vCopyTo(v37[0], (struct XDCOBJ *)v36);
        XDCOBJ::bDeleteDC(v37);
        SEMOBJ::vUnlock((SEMOBJ *)&v35, v22, v23);
        DCOBJ::~DCOBJ((DCOBJ *)v37);
        v24 = v36[0];
        if ( a2 >= *((_DWORD *)v36[0] + 29) )
          goto LABEL_39;
      }
      EngSetLastError(6u);
      v11 = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v37);
      v24 = v36[0];
LABEL_39:
      if ( v16 != *(_DWORD *)(*((_QWORD *)v24 + 10) + 308LL) )
      {
        *((_DWORD *)v24 + 66) |= 1u;
        v24 = v36[0];
      }
      if ( v15 )
      {
        DC::bMakeInfoDC(v24, 1);
        v24 = v36[0];
      }
      *((_DWORD *)v24 + 9) |= 0x10u;
      *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v24 + 15) |= 4u;
      v25 = v36[0];
      CPushLock::AcquireLockShared((DC *)((char *)v36[0] + 1504));
      DC::vUpdate_VisRect(v36[0], *((struct REGION **)v36[0] + 192));
      CPushLock::ReleaseLock((DC *)((char *)v25 + 1504));
      *(_DWORD *)(*((_QWORD *)v36[0] + 10) + 8LL) |= 0x12001Fu;
      v26 = v36[0];
      if ( *((_DWORD *)v36[0] + 8) == 1 )
      {
        DC::bSetDefaultRegion(v36[0]);
        v26 = v36[0];
      }
      v27 = *((_DWORD *)v26 + 9);
      v28 = *((_QWORD *)v26 + 64);
      if ( (v27 & 1) != 0
        || *((_DWORD *)v26 + 8) == 1
        && v28
        && ((v29 = *(_DWORD *)(v28 + 112), (v29 & 0x4000) != 0)
         || (v29 & 0x800000) != 0 && (*(_DWORD *)(v14 + 56) & 1) != 0) )
      {
        *((_DWORD *)v26 + 9) = v27 | 0x200;
        if ( (*(_DWORD *)(v28 + 112) & 0x200) != 0 )
          *((_DWORD *)v36[0] + 9) |= 0x8000u;
        else
          *((_DWORD *)v36[0] + 9) &= ~0x8000u;
      }
      else
      {
        *((_DWORD *)v26 + 9) = v27 & 0xFFFFFDFF;
      }
      DC::vCalcFillOrigin(v36[0]);
      if ( (*(_DWORD *)(v14 + 56) & 1) != 0 )
        GreUnlockVisRgn(v14, v30, v31);
      goto LABEL_60;
    }
    v32 = 87;
LABEL_59:
    EngSetLastError(v32);
    v11 = 0;
LABEL_60:
    v10 = v11;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  return v10;
}
