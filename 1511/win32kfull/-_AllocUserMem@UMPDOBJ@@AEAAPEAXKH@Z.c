/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC
 * Callers:
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0145C20 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0146210 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0286420 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C02869F4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029CF10 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C029D740 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C029DE40 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C029EB90 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C029ED50 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C029F0F0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C029F4A0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C029F6D0 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A1958 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9654 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB050 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02ADF20 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AE060 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AE5D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AEBF0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0146878 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C01468A4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C0146DD8 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0146EA0 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  size_t v5; // rbx
  char *v6; // rdi
  __int64 v7; // rdx
  UMPDOBJ *v8; // rcx
  __int64 v9; // rcx
  char *KernelPtr; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 ThreadWin32Thread; // rdi
  __int64 v16; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax

  if ( a2 + 7 < a2 )
    return 0LL;
  v5 = (a2 + 7) & 0xFFFFFFF8;
  v6 = 0LL;
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    v12 = *((_QWORD *)this + 49);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 + 48);
      v14 = v13 + v5;
      if ( (int)v13 + (int)v5 >= (unsigned int)v13 && (unsigned __int64)v14 <= *(_QWORD *)(v12 + 24) )
      {
        v6 = (char *)(v13 + *(_QWORD *)(v12 + 16) + *(_QWORD *)(v12 + 40));
        *(_DWORD *)(v12 + 48) = v14;
      }
    }
  }
  else
  {
    if ( *((_DWORD *)this + 109) && !*((_QWORD *)this + 7) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v16 = *(_QWORD *)(ThreadWin32Thread + 56);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 24) = 0;
        *((_QWORD *)this + 7) = v16;
      }
      else
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
        *((_QWORD *)this + 7) = UMPDHeap;
        *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
      }
    }
    v7 = *((_QWORD *)this + 7);
    if ( !v7 )
      return 0LL;
    if ( !*(_QWORD *)v7 )
      return 0LL;
    v8 = (UMPDOBJ *)(*(_QWORD *)(v7 + 16) - *(unsigned int *)(v7 + 24));
    if ( (unsigned int)v5 > (unsigned __int64)v8 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v8, (struct _UMPDHEAP *)v7, v5) )
      return 0LL;
    v9 = *((_QWORD *)this + 7);
    v6 = (char *)(*(_QWORD *)v9 + *(unsigned int *)(v9 + 24));
    *(_DWORD *)(v9 + 24) += v5;
  }
  if ( v6 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(this, v6);
      memset(KernelPtr, 0, v5);
    }
  }
  return v6;
}
