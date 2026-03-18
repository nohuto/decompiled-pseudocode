/*
 * XREFs of ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18008A5FC
 * Callers:
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AC534 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 *     ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B12FC (-CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18008A370 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CMILBrush *); // rsi

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 3;
  *((_DWORD *)this + 14) = 1;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 2) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 5) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 9) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 12) = 0LL;
  v2 = *((_QWORD *)this + 5);
  *((_OWORD *)this + 5) = 0LL;
  v3 = *(void (__fastcall **)(CMILBrush *))(v2 + 48);
  if ( v3 == CMILBrush::SetDefaultRealizationPixelFormat )
    CMILBrush::SetDefaultRealizationPixelFormat((CLegacyMilBrushRealizer *)((char *)this + 40));
  else
    v3((CLegacyMilBrushRealizer *)((char *)this + 40));
  return this;
}
