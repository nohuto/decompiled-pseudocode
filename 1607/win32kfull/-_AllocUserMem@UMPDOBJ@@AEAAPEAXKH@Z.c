/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0
 * Callers:
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0284268 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0285344 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029D2C0 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C029D7E0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C029E170 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029E620 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C029ED40 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C029FAF0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C029FCC0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A0050 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02A0400 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C02A0630 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A296C (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AB414 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02ACFD0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B0380 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B04C0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02B0610 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02B0BB0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B1200 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C02843B4 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C0284714 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C0285020 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  size_t v5; // rbx
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 ThreadWin32Thread; // rdi
  __int64 v14; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v16; // rdx
  UMPDOBJ *v17; // rcx
  __int64 v18; // rcx
  char *KernelPtr; // rax

  if ( a2 + 7 < a2 )
    return 0LL;
  v5 = (a2 + 7) & 0xFFFFFFF8;
  v6 = 0LL;
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    v10 = *((_QWORD *)this + 49);
    if ( v10 )
    {
      v11 = *(unsigned int *)(v10 + 48);
      v12 = v11 + v5;
      if ( (int)v11 + (int)v5 >= (unsigned int)v11 && (unsigned __int64)v12 <= *(_QWORD *)(v10 + 24) )
      {
        v6 = (char *)(v11 + *(_QWORD *)(v10 + 16) - *(_QWORD *)(v10 + 40));
        *(_DWORD *)(v10 + 48) = v12;
      }
    }
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 109) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v14 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 24) = 0;
      *((_QWORD *)this + 7) = v14;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v16 = *((_QWORD *)this + 7);
  if ( !v16 )
    return 0LL;
  if ( !*(_QWORD *)v16 )
    return 0LL;
  v17 = (UMPDOBJ *)(*(_QWORD *)(v16 + 16) - *(unsigned int *)(v16 + 24));
  if ( (unsigned int)v5 > (unsigned __int64)v17
    && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v17, (struct _UMPDHEAP *)v16, v5) )
  {
    return 0LL;
  }
  v18 = *((_QWORD *)this + 7);
  v6 = (char *)(*(_QWORD *)v18 + *(unsigned int *)(v18 + 24));
  *(_DWORD *)(v18 + 24) += v5;
LABEL_17:
  if ( v6 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v6);
      memset(KernelPtr, 0, v5);
    }
  }
  return v6;
}
