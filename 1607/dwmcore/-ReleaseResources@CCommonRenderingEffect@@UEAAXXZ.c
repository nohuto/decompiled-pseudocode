/*
 * XREFs of ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x180056540
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18007BF10 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::ReleaseResources(CCommonRenderingEffect *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 8);
  v2 = 2LL;
  do
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
