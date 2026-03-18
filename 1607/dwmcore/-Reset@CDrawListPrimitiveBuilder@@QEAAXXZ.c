/*
 * XREFs of ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x180096168
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::Reset(CDrawListPrimitiveBuilder *this)
{
  __int64 i; // rdi
  CMILRefCountBase *v3; // rcx
  void (*v4)(void); // rax
  __int64 v5; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
  {
    v3 = *(CMILRefCountBase **)(*((_QWORD *)this + 10) + 8 * i);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v4 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v3);
      else
        v4();
      *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 36) = 0;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    (*(void (__fastcall **)(char *))(v5 + 32))((char *)this + 32);
    *((_QWORD *)this + 4) = 0LL;
  }
}
