/*
 * XREFs of ??0CBrushRealizer@@IEAA@XZ @ 0x1800814C4
 * Callers:
 *     ?CreateResourceRealizer@CBrushRealizer@@SAJPEAVCBrush@@PEAPEAV1@@Z @ 0x18005F9A0 (-CreateResourceRealizer@CBrushRealizer@@SAJPEAVCBrush@@PEAPEAV1@@Z.c)
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800842A0 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x1800815F0 (-SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrushRealizer *__fastcall CBrushRealizer::CBrushRealizer(CBrushRealizer *this)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CMILBrush *__hidden); // rsi

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CBrushRealizer::`vftable';
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
  v3 = *(void (__fastcall **)(CMILBrush *__hidden))(v2 + 48);
  if ( v3 == CMILBrush::SetDefaultRealizationPixelFormat )
    CMILBrush::SetDefaultRealizationPixelFormat((CBrushRealizer *)((char *)this + 40));
  else
    v3((CBrushRealizer *)((char *)this + 40));
  return this;
}
