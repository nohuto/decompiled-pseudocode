/*
 * XREFs of ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC
 * Callers:
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 *     NtGdiSaveDC @ 0x140076BF0 (NtGdiSaveDC.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DxgkEngAcquireStableVisRgn @ 0x14007E270 (DxgkEngAcquireStableVisRgn.c)
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     NtGdiSetIcmMode @ 0x1400AEDA0 (NtGdiSetIcmMode.c)
 *     NtGdiExtSelectClipRgn @ 0x1400AEFA0 (NtGdiExtSelectClipRgn.c)
 *     GreGetDCObject @ 0x1400AF38C (GreGetDCObject.c)
 *     NtGdiSelectFont @ 0x1400AF6E0 (NtGdiSelectFont.c)
 *     NtGdiGetDCObject @ 0x1400AFAE0 (NtGdiGetDCObject.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiSetPixel @ 0x1400B0250 (NtGdiSetPixel.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     NtGdiGetPixel @ 0x1400BB9B0 (NtGdiGetPixel.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140155A74 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     NtGdiSelectBitmap @ 0x140156020 (NtGdiSelectBitmap.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     NtGdiRestoreDC @ 0x1401AECF0 (NtGdiRestoreDC.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140310EB4 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJ::vUnlock(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _DC_ATTR *UserAttr; // rax

  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v3 = *(_QWORD *)this;
      v4 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), v3);
      }
      else
      {
        v5 = v3 + 2152;
        *(_OWORD *)(v3 + 2152) = 0LL;
        *(_QWORD *)(v3 + 2168) = 0LL;
        *(_DWORD *)(v3 + 2160) = -2147483630;
        *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
          DC::RestoreAttributes(*(DC **)this, UserAttr);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
}
