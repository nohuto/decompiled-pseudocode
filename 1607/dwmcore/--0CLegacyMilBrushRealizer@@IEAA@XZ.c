/*
 * XREFs of ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18002EAF0
 * Callers:
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AF994 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 *     ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B4068 (-CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x180083630 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  CMILBrush *v2; // rcx
  __int64 v3; // rax
  void (*v4)(void); // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 13) = 3;
  *((_DWORD *)this + 14) = 1;
  *((_QWORD *)this + 2) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 5) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 9) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 12) = 0LL;
  v2 = (CLegacyMilBrushRealizer *)((char *)this + 40);
  v3 = *(_QWORD *)v2;
  *((_OWORD *)this + 5) = 0LL;
  v4 = *(void (**)(void))(v3 + 48);
  if ( (char *)v4 == (char *)CMILBrush::SetDefaultRealizationPixelFormat )
    CMILBrush::SetDefaultRealizationPixelFormat(v2);
  else
    v4();
  return this;
}
