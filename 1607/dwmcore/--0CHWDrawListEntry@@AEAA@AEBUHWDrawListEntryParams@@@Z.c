/*
 * XREFs of ??0CHWDrawListEntry@@AEAA@AEBUHWDrawListEntryParams@@@Z @ 0x18007C588
 * Callers:
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLOR.c)
 * Callees:
 *     ?PostCopy@CCommonRenderingEffect@@UEAAXXZ @ 0x180056140 (-PostCopy@CCommonRenderingEffect@@UEAAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::CHWDrawListEntry(
        CHWDrawListEntry *this,
        const struct HWDrawListEntryParams *a2)
{
  __int64 v4; // rcx
  char *v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rcx
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  void (__fastcall *v9)(CCommonRenderingEffect *); // rax
  CCommonRenderingEffect *v10; // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 2) = 0;
  v4 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 3) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  ++CHWDrawListEngineMetrics::s_cDrawListEntries;
  v5 = (char *)this + 48;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 40) = 0;
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 41) = 1065353216;
  *((_OWORD *)this + 11) = _xmm;
  (**v6)(v6);
  v7 = (_OWORD *)*((_QWORD *)a2 + 5);
  if ( v7 )
    *((_OWORD *)this + 11) = *v7;
  memset_0((char *)this + 40, 0, 0x38uLL);
  v8 = (_OWORD *)*((_QWORD *)a2 + 3);
  *(_OWORD *)v5 = *v8;
  *((_OWORD *)this + 4) = v8[1];
  *((_OWORD *)this + 5) = v8[2];
  v9 = *(void (__fastcall **)(CCommonRenderingEffect *))(*(_QWORD *)v5 + 24LL);
  v10 = (CHWDrawListEntry *)((char *)this + 48);
  if ( v9 == CCommonRenderingEffect::PostCopy )
    CCommonRenderingEffect::PostCopy(v10);
  else
    v9(v10);
  return this;
}
